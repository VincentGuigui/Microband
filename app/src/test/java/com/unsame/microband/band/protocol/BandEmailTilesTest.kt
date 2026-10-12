package com.unsame.microband.band.protocol

import java.time.Instant
import java.util.UUID
import org.junit.Assert.assertArrayEquals
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotEquals
import org.junit.Assert.assertTrue
import org.junit.Test

class BandEmailTilesTest {
    private fun decode(blob: ByteArray): ByteArray {
        val width = (blob[0].toInt() and 0xFF shl 8) or (blob[1].toInt() and 0xFF)
        val height = (blob[2].toInt() and 0xFF shl 8) or (blob[3].toInt() and 0xFF)
        val end = (blob[4].toInt() and 0xFF shl 8) or (blob[5].toInt() and 0xFF)
        val pixels = ByteArray(width * height)
        var position = 0
        for (i in 6 until end) {
            val run = (blob[i].toInt() and 0xFF) shr 4
            val value = blob[i].toInt() and 0xF
            repeat(run) { pixels[position++] = value.toByte() }
        }
        assertEquals(width * height, position)
        return pixels
    }

    @Test
    fun rleRoundTripsEveryIcon() {
        for (kind in EmailTileKind.values()) {
            for (icon in BandEmailTiles.icons(kind)) {
                val blob = BandTileIconCodec.encode(icon.width, icon.height, icon.alpha)
                assertEquals(BandTileIconCodec.BLOB_SIZE, blob.size)
                assertArrayEquals("$kind ${icon.width}", icon.alpha, decode(blob))
                assertTrue("$kind ${icon.width} is blank", icon.alpha.any { it.toInt() != 0 })
            }
        }
    }

    @Test
    fun rleKeepsRunsWithinOneRow() {
        val blob = BandTileIconCodec.encode(20, 1, ByteArray(20) { 5 })
        assertEquals(0x00, blob[2].toInt())
        assertEquals(0x01, blob[3].toInt())
        assertEquals(0xF5, blob[6].toInt() and 0xFF)
        assertEquals(0x55, blob[7].toInt() and 0xFF)
        assertEquals(8, blob[5].toInt())
    }

    @Test
    fun iconsDifferPerKind() {
        val icons = EmailTileKind.values().map { BandEmailTiles.icons(it).first().alpha.toList() }
        assertEquals(3, icons.toSet().size)
    }

    @Test
    fun specsAreStablePerPackage() {
        val a = BandEmailTiles.specFor("com.google.android.gm", "Gmail")
        assertEquals(a.tileId, BandEmailTiles.specFor("com.google.android.gm", "Gmail").tileId)
        assertNotEquals(a.tileId, BandEmailTiles.specFor("com.microsoft.office.outlook", "Outlook").tileId)
        assertEquals(EmailTileKind.GMAIL, a.kind)
        assertEquals(EmailTileKind.OUTLOOK, BandEmailTiles.specFor("com.microsoft.office.outlook", "Outlook").kind)
        assertEquals(EmailTileKind.GENERIC, BandEmailTiles.specFor("ch.protonmail.android", "Proton Mail").kind)
        assertEquals(21, BandEmailTiles.specFor("x.y", "A very long mail application name").name.length)
    }

    @Test
    fun customTileRecordLayout() {
        val id = UUID.fromString("00112233-4455-6677-8899-aabbccddeeff")
        val tile = BandTileCodec.customTile(id, "Gmail", BandEmailTiles.OWNER_ID, order = 7)
        val raw = tile.wireData
        assertEquals(BandTileCodec.RECORD_SIZE, raw.size)
        assertArrayEquals(BandPacketCodec.guidLittleEndian(id), raw.copyOfRange(0, 16))
        assertEquals(7, BandPacketCodec.readInt(raw, 16))
        assertEquals(5, BandPacketCodec.readShort(raw, 24))
        assertEquals(0x0B, BandPacketCodec.readShort(raw, 26))
        assertEquals("Gmail", raw.copyOfRange(28, 38).toString(Charsets.UTF_16LE))
        assertArrayEquals(BandPacketCodec.guidLittleEndian(BandEmailTiles.OWNER_ID), raw.copyOfRange(72, 88))
        val decoded = BandTileCodec.decode(BandTileCodec.encode(listOf(tile))).single()
        assertEquals("Gmail", decoded.name)
        assertEquals(tile.id, decoded.id)
    }

    @Test
    fun tileMessageUsesTheMessagingSchemaForACustomTile() {
        val id = UUID.fromString("00112233-4455-6677-8899-aabbccddeeff")
        val payload = BandNotificationCodec.tileMessage(id, "Ann", "Hello", Instant.EPOCH)
        val hex = payload.joinToString("") { "%02X".format(it) }
        assertTrue(hex, hex.startsWith("0A0A0D"))
        assertTrue(hex, hex.contains("12120A103322110055447766" + "8899AABBCCDDEEFF"))
        assertTrue(hex, hex.endsWith("2A03416E6E320548656C6C6F"))
    }
}

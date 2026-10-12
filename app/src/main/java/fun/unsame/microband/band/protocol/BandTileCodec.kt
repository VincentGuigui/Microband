package com.unsame.microband.band.protocol

import com.unsame.microband.band.model.BandTileInfo
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.util.UUID

object BandTileCodec {
    const val RECORD_SIZE = 88
    private const val NAME_BLOCK_SIZE = 60
    private const val OWNED_NAME_MAX_CHARS = 21
    // notification (1) | badging (2) | auto update (8)
    private const val CUSTOM_TILE_SETTINGS = 0x0B

    fun decode(payload: ByteArray): List<BandTileInfo> {
        require(payload.size >= 4)
        val count = BandPacketCodec.readInt(payload).coerceIn(0, (payload.size - 4) / RECORD_SIZE)
        return (0 until count).map { index ->
            val raw = payload.copyOfRange(4 + index * RECORD_SIZE, 4 + (index + 1) * RECORD_SIZE)
            val nameLength = BandPacketCodec.readShort(raw, 24).coerceIn(0, 29)
            BandTileInfo(
                id = raw.copyOfRange(0, 16).joinToString("") { "%02X".format(it) },
                name = raw.copyOfRange(28, 28 + nameLength * 2).toString(Charsets.UTF_16LE).ifBlank { "Unnamed tile" },
                order = BandPacketCodec.readInt(raw, 16),
                settingsMask = BandPacketCodec.readShort(raw, 26),
                wireData = raw,
            )
        }.sortedBy { it.order }
    }

    /** A tile owned by this app: the owner id lives in the last 16 bytes of the 60-byte name block. */
    fun customTile(id: UUID, name: String, ownerId: UUID, order: Int): BandTileInfo {
        require(name.length <= OWNED_NAME_MAX_CHARS) { "Owned tile names are limited to $OWNED_NAME_MAX_CHARS characters" }
        val raw = ByteBuffer.allocate(RECORD_SIZE).order(ByteOrder.LITTLE_ENDIAN)
        raw.put(BandPacketCodec.guidLittleEndian(id))
        raw.putInt(order)
        raw.putInt(0)
        raw.putShort(name.length.toShort())
        raw.putShort(CUSTOM_TILE_SETTINGS.toShort())
        val nameBlock = ByteArray(NAME_BLOCK_SIZE)
        name.toByteArray(Charsets.UTF_16LE).copyInto(nameBlock)
        BandPacketCodec.guidLittleEndian(ownerId).copyInto(nameBlock, NAME_BLOCK_SIZE - 16)
        raw.put(nameBlock)
        val wire = raw.array()
        return BandTileInfo(
            id = wire.copyOfRange(0, 16).joinToString("") { "%02X".format(it) },
            name = name,
            order = order,
            settingsMask = CUSTOM_TILE_SETTINGS,
            wireData = wire,
        )
    }

    fun encode(tiles: List<BandTileInfo>): ByteArray {
        val output = ByteBuffer.allocate(4 + tiles.size * RECORD_SIZE).order(ByteOrder.LITTLE_ENDIAN)
        output.putInt(tiles.size)
        tiles.forEachIndexed { index, tile ->
            val raw = tile.wireData.copyOf()
            ByteBuffer.wrap(raw).order(ByteOrder.LITTLE_ENDIAN).putInt(16, index)
            output.put(raw)
        }
        return output.array()
    }
}

package com.unsame.microband.band.protocol

import java.util.UUID
import kotlin.math.hypot
import kotlin.math.max
import kotlin.math.min

enum class EmailTileKind { GMAIL, OUTLOOK, GENERIC }

data class EmailTileSpec(val packageName: String, val tileId: UUID, val name: String, val kind: EmailTileKind)

class TileIcon(val width: Int, val height: Int, val alpha: ByteArray)

/** One custom Band tile per email app, with a Gmail-, Outlook- or generic-style icon. */
object BandEmailTiles {
    const val TILE_ICON_SIZE = 48
    const val BADGE_ICON_SIZE = 24
    private const val MAX_NAME_CHARS = 21

    /** Owner stamped into every tile this app creates. */
    val OWNER_ID: UUID = UUID.nameUUIDFromBytes("com.unsame.microband".toByteArray())

    fun specFor(packageName: String, label: String): EmailTileSpec = EmailTileSpec(
        packageName = packageName,
        tileId = UUID.nameUUIDFromBytes("com.unsame.microband.email-tile:$packageName".toByteArray()),
        name = truncateName(label.trim().ifBlank { packageName }),
        kind = kindFor(packageName),
    )

    fun kindFor(packageName: String): EmailTileKind {
        val pkg = packageName.lowercase()
        return when {
            pkg.startsWith("com.google.android.gm") -> EmailTileKind.GMAIL
            pkg.startsWith("com.microsoft.office.outlook") || pkg.startsWith("com.microsoft.outlook") -> EmailTileKind.OUTLOOK
            else -> EmailTileKind.GENERIC
        }
    }

    /** Tile icon first, then the badge icon, in the order the Band expects them to be registered. */
    fun icons(kind: EmailTileKind): List<TileIcon> =
        listOf(TILE_ICON_SIZE, BADGE_ICON_SIZE).map { TileIcon(it, it, draw(kind, it)) }

    private fun truncateName(name: String): String {
        if (name.length <= MAX_NAME_CHARS) return name
        val cut = if (name[MAX_NAME_CHARS - 1].isHighSurrogate()) MAX_NAME_CHARS - 1 else MAX_NAME_CHARS
        return name.substring(0, cut)
    }

    private fun draw(kind: EmailTileKind, size: Int): ByteArray {
        val raster = Raster(size)
        when (kind) {
            EmailTileKind.GENERIC -> {
                raster.rectOutline(0.08, 0.22, 0.92, 0.78, 0.06)
                raster.line(0.08, 0.22, 0.50, 0.56, 0.06)
                raster.line(0.50, 0.56, 0.92, 0.22, 0.06)
            }
            EmailTileKind.GMAIL -> {
                raster.line(0.13, 0.20, 0.13, 0.80, 0.10)
                raster.line(0.87, 0.20, 0.87, 0.80, 0.10)
                raster.line(0.13, 0.24, 0.50, 0.58, 0.10)
                raster.line(0.50, 0.58, 0.87, 0.24, 0.10)
            }
            EmailTileKind.OUTLOOK -> {
                raster.fillRect(0.05, 0.24, 0.50, 0.76)
                raster.erase(0.275, 0.50, 0.075, 0.145)
                raster.rectOutline(0.50, 0.30, 0.95, 0.70, 0.06)
                raster.line(0.50, 0.30, 0.725, 0.50, 0.06)
                raster.line(0.725, 0.50, 0.95, 0.30, 0.06)
            }
        }
        return raster.pixels
    }

    /** Tiny anti-aliased 4-bit alpha rasterizer working in unit-square coordinates. */
    private class Raster(private val size: Int) {
        val pixels = ByteArray(size * size)

        private fun each(action: (index: Int, px: Double, py: Double) -> Unit) {
            for (y in 0 until size) for (x in 0 until size) action(y * size + x, x + 0.5, y + 0.5)
        }

        private fun plot(index: Int, coverage: Double) {
            val value = (coverage.coerceIn(0.0, 1.0) * 15).toInt()
            if (value > (pixels[index].toInt() and 0xF)) pixels[index] = value.toByte()
        }

        fun line(x0: Double, y0: Double, x1: Double, y1: Double, thickness: Double) {
            val ax = x0 * size; val ay = y0 * size; val bx = x1 * size; val by = y1 * size
            val half = thickness * size / 2
            val dx = bx - ax; val dy = by - ay
            val lengthSquared = dx * dx + dy * dy
            each { i, px, py ->
                val t = if (lengthSquared == 0.0) 0.0 else (((px - ax) * dx + (py - ay) * dy) / lengthSquared).coerceIn(0.0, 1.0)
                plot(i, half + 0.5 - hypot(px - (ax + t * dx), py - (ay + t * dy)))
            }
        }

        fun rectOutline(x0: Double, y0: Double, x1: Double, y1: Double, thickness: Double) {
            line(x0, y0, x1, y0, thickness); line(x1, y0, x1, y1, thickness)
            line(x1, y1, x0, y1, thickness); line(x0, y1, x0, y0, thickness)
        }

        fun fillRect(x0: Double, y0: Double, x1: Double, y1: Double) = each { i, px, py ->
            val inside = min(min(px - x0 * size, x1 * size - px), min(py - y0 * size, y1 * size - py))
            plot(i, inside + 0.5)
        }

        /** Clears the ring between [innerR] and [outerR] (unit-square radii) around ([cx], [cy]). */
        fun erase(cx: Double, cy: Double, innerR: Double, outerR: Double) = each { i, px, py ->
            val d = hypot(px - cx * size, py - cy * size)
            val coverage = min(d - innerR * size + 0.5, outerR * size - d + 0.5).coerceIn(0.0, 1.0)
            val kept = ((pixels[i].toInt() and 0xF) * (1 - coverage)).toInt()
            pixels[i] = max(kept, 0).toByte()
        }
    }
}

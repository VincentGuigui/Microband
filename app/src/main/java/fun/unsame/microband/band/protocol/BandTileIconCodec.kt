package com.unsame.microband.band.protocol

/** Run-length encoding of 4-bit alpha tile icons, as registered with the Band's dynamic app (tile) manager. */
object BandTileIconCodec {
    const val BLOB_SIZE = 1024
    const val MAX_PIXELS = 15270
    private const val HEADER_SIZE = 6
    private const val MAX_RUN = 15

    /** [alpha] holds one 0..15 value per pixel, row-major. Returns a zero-padded [BLOB_SIZE] blob. */
    fun encode(width: Int, height: Int, alpha: ByteArray): ByteArray {
        require(width > 0 && height > 0 && alpha.size == width * height) { "Icon pixel data does not match its size" }
        require(width * height <= MAX_PIXELS) { "Icon has too many pixels" }
        val out = ByteArray(BLOB_SIZE)
        var index = HEADER_SIZE
        fun put(run: Int, value: Int) {
            check(index < BLOB_SIZE) { "Icon is too complex to run-length encode" }
            out[index++] = ((run shl 4) or value).toByte()
        }
        for (y in 0 until height) {
            var value = alpha[y * width].toInt() and 0xF
            var run = 1
            for (x in 1 until width) {
                val next = alpha[y * width + x].toInt() and 0xF
                if (next != value) {
                    put(run, value)
                    value = next
                    run = 0
                }
                run++
                if (run == MAX_RUN) {
                    put(run, value)
                    run = 0
                }
            }
            if (run > 0) put(run, value)
        }
        out[0] = (width shr 8).toByte()
        out[1] = width.toByte()
        out[2] = (height shr 8).toByte()
        out[3] = height.toByte()
        out[4] = (index shr 8).toByte()
        out[5] = index.toByte()
        return out
    }
}

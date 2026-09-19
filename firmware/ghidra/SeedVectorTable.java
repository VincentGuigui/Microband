// Seeds Ghidra with the Cortex-M vector table entries before auto-analysis.
// Args: <vectorTableAddr> <entryPointAddr> <numVectors>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.MemoryBlock;

public class SeedVectorTable extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        long vtAddr = Long.decode(args[0]);
        long entry = Long.decode(args[1]);
        int count = Integer.parseInt(args[2]);

        MemoryBlock block = currentProgram.getMemory().getBlocks()[0];
        long lo = block.getStart().getOffset();
        long hi = block.getEnd().getOffset();
        println("SeedVectorTable: image 0x" + Long.toHexString(lo) + " - 0x" + Long.toHexString(hi));

        int seeded = 0;
        java.util.HashSet<Long> seen = new java.util.HashSet<>();

        // Entry point first.
        long ep = entry & ~1L;
        if (ep >= lo && ep <= hi) {
            Address a = toAddr(ep);
            disassemble(a);
            createFunction(a, "entry_point");
            addEntryPoint(a);
            seen.add(ep);
            seeded++;
        }

        // Then each vector table slot.
        for (int i = 0; i < count; i++) {
            long slot = vtAddr + (i * 4L);
            if (slot < lo || slot + 3 > hi) {
                continue;
            }
            long target = Integer.toUnsignedLong(getInt(toAddr(slot)));
            if ((target & 1L) == 0) {
                continue; // not a Thumb pointer
            }
            long fn = target & ~1L;
            if (fn < lo || fn > hi || !seen.add(fn)) {
                continue;
            }
            Address a = toAddr(fn);
            disassemble(a);
            String name = (i < 16) ? ("vector_core_" + i) : ("irq_handler_" + (i - 16));
            if (getFunctionAt(a) == null) {
                createFunction(a, name);
            }
            seeded++;
        }
        println("SeedVectorTable: seeded " + seeded + " entry points");
    }
}

// Decompiles every function to C and writes one .c file plus an index.
// Args: <outputDir>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.PrintWriter;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class ExportDecompiled extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File outDir = new File(args[0]);
        outDir.mkdirs();
        String tag = currentProgram.getName().replaceAll("[^A-Za-z0-9_.-]", "_");

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) {
            println("ExportDecompiled: FAILED to open program: " + decomp.getLastMessage());
            return;
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> funcs = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            funcs.add(f);
        }
        println("ExportDecompiled: " + funcs.size() + " functions to decompile");

        PrintWriter c = new PrintWriter(new File(outDir, tag + ".decompiled.c"), "UTF-8");
        PrintWriter idx = new PrintWriter(new File(outDir, tag + ".functions.csv"), "UTF-8");
        idx.println("address,name,size_bytes,decompiled_ok");

        c.println("/*");
        c.println(" * Ghidra decompiler output for " + currentProgram.getName());
        c.println(" * Image base: " + currentProgram.getImageBase());
        c.println(" * Functions: " + funcs.size());
        c.println(" *");
        c.println(" * THIS IS DECOMPILER PSEUDOCODE, NOT ORIGINAL SOURCE. It does not compile");
        c.println(" * as-is and is not a reconstruction of the vendor's source code.");
        c.println(" */");
        c.println();

        int ok = 0, fail = 0, i = 0;
        for (Function f : funcs) {
            if (monitor.isCancelled()) break;
            i++;
            if (i % 250 == 0) {
                println("  ... " + i + "/" + funcs.size());
            }
            DecompileResults res = decomp.decompileFunction(f, 60, monitor);
            boolean good = res != null && res.decompileCompleted() && res.getDecompiledFunction() != null;
            idx.println(f.getEntryPoint() + "," + f.getName() + "," + f.getBody().getNumAddresses() + "," + good);
            if (good) {
                ok++;
                c.println("/* ---- " + f.getName() + " @ " + f.getEntryPoint() + " ---- */");
                c.println(res.getDecompiledFunction().getC());
                c.println();
            } else {
                fail++;
            }
        }
        c.close();
        idx.close();
        decomp.dispose();
        println("ExportDecompiled: decompiled " + ok + " ok, " + fail + " failed -> " + outDir);
    }
}

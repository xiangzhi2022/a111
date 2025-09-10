using UnrealBuildTool;
using System.IO;
using System;

public class vits_custom : ModuleRules
{
    public vits_custom(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;

        // Paths
        string ModuleDirFull = Path.GetFullPath(ModuleDirectory);
        // ModuleDirectory = <Plugin>/Source/vits_custom, so plugin root is two levels up
        string PluginDir = Path.GetFullPath(Path.Combine(ModuleDirFull, "..", ".."));

        // Third-party includes
        string OrtInclude = Path.Combine(PluginDir, "packages/Microsoft.ML.OnnxRuntime.1.14.1/build/native/include");
        string EspeakInclude = Path.Combine(PluginDir, "packages/espeak-ng-1.51/src/include");

        if (Directory.Exists(OrtInclude))
        {
            // Make ONNX headers visible to this module
            PrivateIncludePaths.Add(OrtInclude);
            PublicIncludePaths.Add(OrtInclude);
            PublicSystemIncludePaths.Add(OrtInclude);
        }
        if (Directory.Exists(EspeakInclude))
        {
            PrivateIncludePaths.Add(EspeakInclude);
        }

        // Link libraries
        string OrtLib = Path.Combine(PluginDir, "packages/Microsoft.ML.OnnxRuntime.1.14.1/runtimes/win-x64/native/onnxruntime.lib");
        string EspeakLib = Path.Combine(PluginDir, "packages/espeak-ng-1.51/src/windows/x64/Debug/libespeak-ng.lib");
        if (File.Exists(OrtLib))
        {
            PublicAdditionalLibraries.Add(OrtLib);
        }
        if (File.Exists(EspeakLib))
        {
            PublicAdditionalLibraries.Add(EspeakLib);
        }

        // Copy runtime DLLs and data into this plugin's Binaries for packaging/runtime
        void CopyIfExists(string src, string dst)
        {
            string dstDir = Path.GetDirectoryName(dst);
            if (!Directory.Exists(dstDir)) Directory.CreateDirectory(dstDir);
            if (File.Exists(src))
            {
                if (!File.Exists(dst) || new FileInfo(src).Length != new FileInfo(dst).Length)
                {
                    File.Copy(src, dst, true);
                }
                RuntimeDependencies.Add(dst);
            }
        }

        string BinWin64 = Path.Combine(PluginDir, "Binaries/Win64");
        // Prefer GPU runtime if available
        string PackagesDir = Path.Combine(PluginDir, "packages");
        string OrtRuntimeDir = Path.Combine(PluginDir, "packages/Microsoft.ML.OnnxRuntime.1.14.1/runtimes/win-x64/native");
        try
        {
            if (Directory.Exists(PackagesDir))
            {
                var gpuPkgs = Directory.GetDirectories(PackagesDir, "Microsoft.ML.OnnxRuntime.Gpu.*");
                if (gpuPkgs.Length > 0)
                {
                    // pick the first (or highest) version
                    Array.Sort(gpuPkgs, StringComparer.InvariantCulture);
                    string gpuPkg = gpuPkgs[gpuPkgs.Length - 1];
                    string gpuRuntime = Path.Combine(gpuPkg, "runtimes/win-x64/native");
                    if (Directory.Exists(gpuRuntime))
                    {
                        OrtRuntimeDir = gpuRuntime;
                    }
                }
            }
        }
        catch {}
        string EspeakBinDir = Path.Combine(PluginDir, "packages/espeak-ng-1.51/src/windows/x64/Debug");
        string PluginsRootDir = Path.GetDirectoryName(PluginDir);
        if (string.IsNullOrEmpty(PluginsRootDir))
        {
            PluginsRootDir = Path.GetFullPath(Path.Combine(PluginDir, ".."));
        }
        string VitsNativeBinaries = Path.Combine(PluginsRootDir, "vits_native", "Binaries", "Win64");

        var files = new System.Collections.Generic.List<string>();
        files.Add(Path.Combine(OrtRuntimeDir, "onnxruntime.dll"));
        files.Add(Path.Combine(OrtRuntimeDir, "onnxruntime_providers_shared.dll"));
        // If CUDA provider exists, include it
        string OrtCuda = Path.Combine(OrtRuntimeDir, "onnxruntime_providers_cuda.dll");
        if (File.Exists(OrtCuda)) files.Add(OrtCuda);
        // If DirectML provider exists, include it
        string OrtDml = Path.Combine(OrtRuntimeDir, "onnxruntime_providers_dml.dll");
        if (File.Exists(OrtDml)) files.Add(OrtDml);
        // eSpeak and dictionaries
        files.Add(Path.Combine(EspeakBinDir, "libespeak-ng.dll"));
        files.Add(Path.Combine(VitsNativeBinaries, "dictionary.txt"));
        files.Add(Path.Combine(VitsNativeBinaries, "dictionary2.txt"));
        string[] filesToCopy = files.ToArray();
        foreach (var src in filesToCopy)
        {
            string dst = Path.Combine(BinWin64, Path.GetFileName(src));
            CopyIfExists(src, dst);
        }

        PublicIncludePaths.AddRange(new string[] { });
        PrivateIncludePaths.AddRange(new string[] { });

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "Json"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "Projects",
        });

        DynamicallyLoadedModuleNames.AddRange(new string[] { });

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // Ensure packaging keeps the ORT runtime as a dependency (in addition to per-file RuntimeDependencies above)
            var ortDll = Path.Combine(BinWin64, "onnxruntime.dll");
            if (File.Exists(ortDll))
            {
                RuntimeDependencies.Add(ortDll);
            }
        }
    }
}

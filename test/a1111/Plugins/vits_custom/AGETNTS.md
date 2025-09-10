# VITS Custom (vits_custom) – Unreal Engine 5.5 插件说明
在 UE 5.5 中实现文本/音素驱动的口型（Viseme/曲线）与可选的 VITS-ONNX 推理（文本→语音），用于数字人/口型同步。
本插件提供在 UE 5.5 中使用 ONNX Runtime 运行 VITS 模型的能力，支持 CPU、CUDA、DirectML 后端，内置中文管线（enc_p / dp / flow / dec）与简易的“文本→ID”映射，提供蓝图节点便于快速集成与调试。

## 功能概览
- ONNX Runtime 集成：CPU / CUDA / DirectML 可选，自动降级。
- 模型会话管理：支持单模型与“命名会话”多模型（enc_p / dp / flow / dec）。
- 通用推理：浮点张量与混合类型输入（float/int64/int32）的运行接口。
- 中文合成管线：enc_p→dp→flow→dec 串联，支持 LengthScale / Noise 参数。
- 文本→ID：从字典加载映射，最长匹配分词。
- 音频封装：将 float PCM 生成 USoundWave（Procedural），可直接播放。
- 工具节点：打印模型 I/O 元信息、打印/查询字典等。

## 目录与重要文件
- `Plugins/vits_custom/vits_custom.uplugin`：插件配置（UE 5.5）。
- `Plugins/vits_custom/Source/vits_custom/`：源码（模块、蓝图库、运行时封装）。
- `Plugins/vits_custom/Binaries/Win64/`：运行时依赖（onnxruntime*.dll、libespeak-ng.dll、dictionary*.txt）。
- `Plugins/vits_native/Chinese_model/`：示例中文模型（enc_p.onnx、dp.onnx、flow.onnx、dec.onnx）。

## 运行时后端（Execution Provider）
- 初始化：
  - `InitializeOrtCuda(DeviceId)`：优先启用 CUDA（需要 GPU 版 ORT + CUDA/cuDNN DLL）。
  - `InitializeOrtDml(DeviceId)`：启用 DirectML（Windows，适配 AMD/Intel）。
  - `InitializeOrtAuto(CudaDeviceId)`：依次尝试 CUDA→DML→CPU。
- 查询：`GetCurrentProvider()` 返回 `CPU / CUDA / DML`。

## 模型加载（命名会话）
- `LoadOnnxModelNamed(Alias, Path)` / `UnloadModelNamed(Alias)` / `IsModelLoadedNamed(Alias)`。
- `GetModelIONamed(Alias, InNames, OutNames)` / `GetModelIOMetaNamed(Alias, InMeta, OutMeta)`。
- 中文管线便捷：`LoadChinesePipeline()` 会从 `vits_native/Chinese_model` 加载 `cn_enc_p / cn_dp / cn_flow / cn_dec` 四个会话。

## 推理接口
- 通用：
  - `RunModelFloats(InputsFloat, OutputNames, Outputs)`
  - `RunModelMixed(InputsFloat, InputsInt64, InputsInt32, OutputNames, OutputsFloat)`
  - 命名会话版本：`RunModelFloatsNamed` / `RunModelMixedNamed`
- 音频封装：`CreateSoundWaveFromFloat(PCM, SampleRate, NumChannels)`（返回 `USoundWaveProcedural`）。

## 中文合成
- 从 ID：
  - `SynthesizeChineseFromIds(TokenIds, LengthScale, NoiseScale, NoiseScaleW, SampleRate)`
  - `SynthesizeChineseFromIdsAndPlay(WorldContext, TokenIds, ..., Volume, Pitch)`
- 从文本（内置字典）：
  - `LoadChineseDictionary()` / `LoadChineseDictionaryFromPath(AbsolutePath)` / `UnloadChineseDictionary()`
  - `GetChineseDictionaryStats(EntryCount, MaxTokenLen, bLoaded, PathLoaded)`
  - `DumpChineseDictionaryToLog(MaxCount)` / `LookupChineseToken(Token, OutId)`
  - `TextToTokenIds(Text, OutIds, OOVId)`
  - `SynthesizeChineseFromText(Text, ...)` / `SynthesizeChineseFromTextAndPlay(WorldContext, Text, ...)`

字典搜索路径（优先级）：
1) `vits_custom/Binaries/Win64/dictionary.txt|dictionary2.txt`
2) `vits_native/Binaries/Win64/dictionary.txt|dictionary2.txt`
3) `vits_native/Source/vits_native/dictionary/dictionary.txt|dictionary2.txt`

支持格式：
- `token id`（空白分隔）
- `token,id` 或 `token:id` 或 `token=id`
- 每行仅 `token`（无 id 时按行号 0..N 自动分配）
- `#` 开头为注释；自动进行“最长匹配分词”。

## 快速开始（关卡蓝图）
1) `Event BeginPlay` → `Sequence`
2) 分支 A：`Load Chinese Dictionary` → Branch(True) → `Dump Chinese Dictionary to Log(20)`
3) 分支 B：`Initialize Ort Cuda(0)` → 失败则 `Initialize Ort Auto(0)` → `Load Chinese Pipeline`
4) 成功后：`Synthesize Chinese From Text And Play(Self, "你好世界", LengthScale=1.2)`

## 模型与依赖
- ONNX Runtime：`Plugins/vits_custom/packages/...` 头文件与库；`Binaries/Win64` 自动复制 `onnxruntime*.dll`。
- CUDA：需要 `onnxruntime_providers_cuda.dll` 与对应的 CUDA/cuDNN 运行库（放入 `Binaries/Win64` 或在系统 PATH）。
- DirectML：`onnxruntime_providers_dml.dll` 存在时可用。

## 常见问题
- 无声 / 立即失败：查看 Output Log 是否有 `[vits_custom]` 提示；检查字典条目数、模型是否加载、EP 是否可用。
- `TextToTokenIds failed or empty`：字典未加载或条目为 0，使用 `LoadChineseDictionaryFromPath` 指定正确文件，并用 `DumpChineseDictionaryToLog` 核对。
- CUDA 初始化失败：通常为缺少 CUDA/cuDNN DLL；可先用 `InitializeOrtAuto` 自动降级。

---

# 许可与注意
- 模型与字典文件的版权/分发需遵循各自许可；eSpeak NG 等第三方库请按各自 License 使用。


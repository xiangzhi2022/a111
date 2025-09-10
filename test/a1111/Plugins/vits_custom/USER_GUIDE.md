## vits_custom 插件使用说明（UE 5.5）

本文档介绍 vits_custom 的安装、初始化、字典与模型放置、蓝图节点用法与排障。

### 1. 前置条件
- UE 5.5（Windows 64 位）
- VITS ONNX 模型（中文示例：enc_p.onnx、dp.onnx、flow.onnx、dec.onnx）
- 可选 CUDA 环境（若使用 GPU）

### 2. 目录结构
- `Plugins/vits_custom`（本插件）
  - `vits_custom.uplugin`
  - `Source/vits_custom`（模块、蓝图库）
  - `Binaries/Win64`（onnxruntime*.dll、libespeak-ng.dll、dictionary*.txt）
  - `packages/`（ONNX Runtime 头与库；可含 GPU 包）
- `Plugins/vits_native/Chinese_model`（中文示例 onnx 模型）

### 3. 安装与启用
1) 将 `Plugins/vits_custom` 放入项目 `Plugins/` 目录。
2) 启用“Vits Custom”插件，编译工程。

### 4. 运行时依赖
- 构建后会复制到 `Binaries/Win64`：
  - `onnxruntime.dll`、`onnxruntime_providers_shared.dll`
  - 可选：`onnxruntime_providers_cuda.dll` / `onnxruntime_providers_dml.dll`
  - `libespeak-ng.dll`、`dictionary*.txt`
- CUDA：需额外 CUDA/cuDNN DLL 可见（同目录或系统 PATH）。

### 5. 字典与模型
- 字典搜索顺序：
  1) `vits_custom/Binaries/Win64/dictionary.txt|dictionary2.txt`
  2) `vits_native/Binaries/Win64/...`
  3) `vits_native/Source/vits_native/dictionary/...`
- 支持格式：`token id`（空白/逗号/冒号/等号），或每行仅 `token`（自动编号）。`#` 为注释。
- 中文模型：`Plugins/vits_native/Chinese_model/enc_p|dp|flow|dec.onnx`

### 6. 快速开始（关卡蓝图）
1) 打开“关卡蓝图”。
2) Event BeginPlay → Sequence。
3) Then0（字典）：Load Chinese Dictionary → Branch(True) → Dump Chinese Dictionary to Log(20)。
4) Then1（初始化/模型/合成）：
   - Initialize Ort Cuda(0)；失败则 Initialize Ort Auto(0)。
   - Load Chinese Pipeline（加载 `cn_enc_p / cn_dp / cn_flow / cn_dec`）。
   - Synthesize Chinese From Text And Play(Self, "你好世界", LengthScale=1.2)。

### 7. 主要蓝图节点
- 初始化：InitializeOrtCuda / InitializeOrtDml / InitializeOrtAuto / GetCurrentProvider。
- 管线：LoadChinesePipeline / GetChinesePipelineIOMeta / DumpChinesePipelineIOMetaToLog。
- 合成：SynthesizeChineseFromText / …AndPlay；SynthesizeChineseFromIds / …AndPlay。
- 字典：LoadChineseDictionary / LoadChineseDictionaryFromPath / UnloadChineseDictionary / GetChineseDictionaryStats / DumpChineseDictionaryToLog / LookupChineseToken / TextToTokenIds。
- 通用推理：RunModelFloats / RunModelMixed（及命名会话版本）；CreateSoundWaveFromFloat。

### 8. 参数建议
- Length Scale：1.0（默认）→ 1.2~1.5 更慢更长。
- Noise Scale：0.6~0.8 随机性增强。
- Sample Rate：通常 22050（依模型而定）。

### 9. 打包
- 打包会随工程携带 `Binaries/Win64` 的 RuntimeDependencies（onnxruntime*.dll、字典等）。
- 若用 CUDA，目标机需具备对应 CUDA 运行库。

### 10. 排障
- 无声或失败：查看 Output Log 的 `[vits_custom]` 日志；确认字典条数>0、模型加载成功、EP 可用。
- `TextToTokenIds failed or empty`：用 LoadChineseDictionaryFromPath 指定实际字典，Dump 查看条目。
- CUDA 失败：先用 InitializeOrtAuto；检查 `onnxruntime_providers_cuda.dll` 及 CUDA/cuDNN。

### 11. 自定义与高级
- 自定义模型：用 `RunModelMixedNamed` + `GetModelIOMetaNamed` 适配张量名/shape。
- 音频：`CreateSoundWaveFromFloat` 返回 `USoundWaveProcedural`，可 SpawnSound2D 或交给 AudioComponent 播放。


# 开发进度（vits_custom）

更新时间：<请更新日期>

## 已完成
- 插件骨架、蓝图库与运行时封装。
- 集成 ONNX Runtime（1.14.1），自动复制 DLL。
- CPU/CUDA/DirectML 初始化与自动降级；查询当前 Provider。
- 模型会话管理（命名会话）与 I/O 元信息查询。
- 通用推理接口：RunModelFloats / RunModelMixed 及其命名会话版本。
- 音频：USoundWaveProcedural + QueueAudio。
- 中文管线：enc_p→dp→flow→dec；SynthesizeChineseFromIds / AndPlay。
- 文本→ID：字典加载（多路径/多格式/最长匹配）、工具节点、SynthesizeChineseFromText / AndPlay。

## 进行中
- 合成质量调优（durations/mask/seed/temperature）。
- 自适应不同模型张量名/shape 的配置化支持。
- 文本预处理加强（标点/停顿/G2P 可选）。
- “项目设置”中提供路径与后端的可视化配置。

## 待办
- 英文管线示例。
- 更详细的 ORT 错误文本与诊断。
- 打包校验与一键检查脚本。
- 适配测试与用例。

## 已知问题
- 模型/字典与训练不一致时音质下降或仅噪声。
- CUDA 依赖缺失会导致初始化失败（建议 Auto 兜底）。
- 最长匹配分词较朴素，复杂文本需更强前处理。

## 版本
- v0.1.0：核心链路可用，中文端到端合成可运行。


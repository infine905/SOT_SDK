// Enum PuzzleManagerComposite.EWaterPuzzleAlterationEndingState
enum class EWaterPuzzleAlterationEndingState : uint8_t {
	Invalid,
	Normal,
	MaxToMax,
	EWaterPuzzleAlterationEndingState_MAX,
};

// ScriptStruct PuzzleManagerComposite.SwitchesActivatedInCorrectOrderPresetParams
// Size: 0x10 (Inherited: 0x00)
struct FSwitchesActivatedInCorrectOrderPresetParams {
	struct TArray<int32_t> SwitchOrder; // 0x00(0x10)
};


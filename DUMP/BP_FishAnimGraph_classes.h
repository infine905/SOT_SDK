// AnimBlueprintGeneratedClass BP_FishAnimGraph.BP_FishAnimGraph_C
// Size: 0x6f4 (Inherited: 0x4f0)
struct UBP_FishAnimGraph_C : UFishAnimationInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_42E20FB444C28E55BBDF768CB2CD9A4B; // 0x4f8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35FAB3914B8A72312554D5AC6F346187; // 0x540(0x60)
	struct FAnimNode_Slot AnimGraphNode_Slot_8327E6DA464BA45A5E62A59D22295734; // 0x5a0(0x60)
	struct FAnimNode_Root AnimGraphNode_StateResult_94A1E82044FDC64C3864E0B5AF27253A; // 0x600(0x48)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_6BCED6BE45BD5788FB70C8AA5F0BCBBE; // 0x648(0xa8)
	int32_t RandomJump; // 0x6f0(0x04)

	void AnimNotify_StartJump(); // Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump // BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void AnimNotify_EndJump(); // Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump // BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_FishAnimGraph(int32_t EntryPoint); // Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph //  // @ game+0x18f4c40
};


// BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C
// Size: 0x8d8 (Inherited: 0x870)
struct ABP_Tutorial_Tavern_Stranger_NPC_C : ATutorialTavernStrangerNPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x870(0x08)
	struct UCapsuleComponent* SolidHits; // 0x878(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x880(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x888(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x890(0x08)
	struct FText MysteriousStranger; // 0x898(0x38)
	struct ACutSceneActor* CutSceneActor; // 0x8d0(0x08)

	void UnhidePlayerPrompts(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts // Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	bool CanInteract(struct AActor** InInteractor); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void StartOnboardingCutscene(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void UserConstructionScript(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void QueueCutsceneActorDestruction(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction // BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void CleanTutorialCutScene(); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CleanTutorialCutScene // Event|Protected|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int32_t EntryPoint); // Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC //  // @ game+0x18f4c40
};


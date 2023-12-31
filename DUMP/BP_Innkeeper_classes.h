// BlueprintGeneratedClass BP_Innkeeper.BP_Innkeeper_C
// Size: 0x740 (Inherited: 0x6d0)
struct ABP_Innkeeper_C : ANPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UCameraComponent* NPCDialogCamera; // 0x6d8(0x08)
	struct UNamedNPCComponent* NamedNPC; // 0x6e0(0x08)
	struct UCargoRunParticipantComponent* CargoRunParticipant; // 0x6e8(0x08)
	struct UCapsuleComponent* SolidHits; // 0x6f0(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x6f8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x700(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x708(0x08)
	struct UWwiseEvent* SFX_IdleLoopPlay; // 0x710(0x08)
	struct UWwiseEvent* SFX_IdleLoopStop; // 0x718(0x08)
	struct FWwiseEmitter InnkeeperEmitter; // 0x720(0x20)

	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_Innkeeper.BP_Innkeeper_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x190d0a0
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius); // Function BP_Innkeeper.BP_Innkeeper_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_Innkeeper.BP_Innkeeper_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void ReceiveBeginPlay(); // Function BP_Innkeeper.BP_Innkeeper_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void ReceiveEndPlay(char* EndPlayReason); // Function BP_Innkeeper.BP_Innkeeper_C.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void ExecuteUbergraph_BP_Innkeeper(int32_t EntryPoint); // Function BP_Innkeeper.BP_Innkeeper_C.ExecuteUbergraph_BP_Innkeeper // HasDefaults // @ game+0x190d0a0
};


// BlueprintGeneratedClass BP_Shopkeeper.BP_Shopkeeper_C
// Size: 0x708 (Inherited: 0x6d0)
struct ABP_Shopkeeper_C : AShopkeeper {
	struct UCameraComponent* NPCDialogCamera; // 0x6d0(0x08)
	struct UNamedNPCComponent* NamedNPC; // 0x6d8(0x08)
	struct UCargoRunParticipantComponent* CargoRunParticipant; // 0x6e0(0x08)
	struct UCapsuleComponent* SolidHits; // 0x6e8(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x6f0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x6f8(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x700(0x08)

	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_Shopkeeper.BP_Shopkeeper_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18f4c40
	void UserConstructionScript(); // Function BP_Shopkeeper.BP_Shopkeeper_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
};


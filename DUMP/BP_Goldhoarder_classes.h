// BlueprintGeneratedClass BP_Goldhoarder.BP_Goldhoarder_C
// Size: 0x720 (Inherited: 0x6e8)
struct ABP_Goldhoarder_C : ACompanyShopkeeper {
	struct UCameraComponent* NPCDialogCamera; // 0x6e8(0x08)
	struct UCameraComponent* CompanyShopCamera; // 0x6f0(0x08)
	struct UEmissaryMaxRankQuestProvider* EmissaryMaxRankQuestProvider; // 0x6f8(0x08)
	struct UCapsuleComponent* SolidHits; // 0x700(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x708(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x710(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x718(0x08)

	struct UCameraComponent* GetCompanyShopkeeperCinematicCameraComponent(); // Function BP_Goldhoarder.BP_Goldhoarder_C.GetCompanyShopkeeperCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x190d0a0
	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_Goldhoarder.BP_Goldhoarder_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
};


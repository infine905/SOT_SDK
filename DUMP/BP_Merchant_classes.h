// BlueprintGeneratedClass BP_Merchant.BP_Merchant_C
// Size: 0x750 (Inherited: 0x6e8)
struct ABP_Merchant_C : ACompanyShopkeeper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6e8(0x08)
	struct UCameraComponent* CompanyShopCamera; // 0x6f0(0x08)
	struct UCameraComponent* NPCDialogCamera; // 0x6f8(0x08)
	struct UCommodityRedemptionComponent* CommodityRedemption; // 0x700(0x08)
	struct UEmissaryMaxRankQuestProvider* EmissaryMaxRankQuestProvider; // 0x708(0x08)
	struct UCargoRunParticipantComponent* CargoRunParticipant; // 0x710(0x08)
	struct UCapsuleComponent* SolidHits; // 0x718(0x08)
	struct UNPCDialogComponent* NPCDialogSellCrate; // 0x720(0x08)
	struct UNPCDialogComponent* NPCDialog; // 0x728(0x08)
	struct UMerchantCrateProviderComponent* MerchantCrateProvider; // 0x730(0x08)
	struct USkeletalMeshComponent* cmp_pocket_watch_mrh_01_e; // 0x738(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x740(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter; // 0x748(0x08)

	struct UCameraComponent* GetCompanyShopkeeperCinematicCameraComponent(); // Function BP_Merchant.BP_Merchant_C.GetCompanyShopkeeperCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18f4c40
	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_Merchant.BP_Merchant_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18f4c40
	void UserConstructionScript(); // Function BP_Merchant.BP_Merchant_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void PlayItemAnimation(); // Function BP_Merchant.BP_Merchant_C.PlayItemAnimation // Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_Merchant(int32_t EntryPoint); // Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant //  // @ game+0x18f4c40
};


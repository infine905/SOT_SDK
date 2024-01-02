// BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C
// Size: 0xad0 (Inherited: 0xa70)
struct ABP_large_mast_main_C : ABP_Mast_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UChildActorComponent* GuildPlaque; // 0xa78(0x08)
	struct UChildActorComponent* BP_MastEmissaryFlag; // 0xa80(0x08)
	struct UStaticMeshComponent* shp_flag_pennant_alliance_01_a; // 0xa88(0x08)
	struct UChildActorComponent* BP_ShipFlagCustomizationChest; // 0xa90(0x08)
	struct UChildActorComponent* BP_Bell; // 0xa98(0x08)
	struct UStaticMeshComponent* shp_flag_jolly_roger_01_a; // 0xaa0(0x08)
	struct UChildActorComponent* Ladder; // 0xaa8(0x08)
	struct UStaticMeshComponent* WeldedCrowsNestPhysics; // 0xab0(0x08)
	struct UStaticMeshComponent* WeldedMastPhysics; // 0xab8(0x08)
	struct UStaticMeshComponent* shp_mast_ladder_step_01_a; // 0xac0(0x08)
	struct UStaticMeshComponent* CrowsNest; // 0xac8(0x08)

	void UserConstructionScript(); // Function BP_large_mast_main.BP_large_mast_main_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnMastDescLoaded(struct UMastDescAsset* MastDesc); // Function BP_large_mast_main.BP_large_mast_main_C.OnMastDescLoaded // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void ExecuteUbergraph_BP_large_mast_main(int32_t EntryPoint); // Function BP_large_mast_main.BP_large_mast_main_C.ExecuteUbergraph_BP_large_mast_main //  // @ game+0x190d0a0
};


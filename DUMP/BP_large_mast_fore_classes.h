// BlueprintGeneratedClass BP_large_mast_fore.BP_large_mast_fore_C
// Size: 0xa80 (Inherited: 0xa68)
struct ABP_large_mast_fore_C : ABP_Mast_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa68(0x08)
	struct UStaticMeshComponent* shp_flag_pennant_pole_01_a; // 0xa70(0x08)
	struct UStaticMeshComponent* shp_flag_pennant_01_a; // 0xa78(0x08)

	void UserConstructionScript(); // Function BP_large_mast_fore.BP_large_mast_fore_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void OnMastDescLoaded(struct UMastDescAsset* MastDesc); // Function BP_large_mast_fore.BP_large_mast_fore_C.OnMastDescLoaded // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_large_mast_fore(int32_t EntryPoint); // Function BP_large_mast_fore.BP_large_mast_fore_C.ExecuteUbergraph_BP_large_mast_fore //  // @ game+0x18f4c40
};


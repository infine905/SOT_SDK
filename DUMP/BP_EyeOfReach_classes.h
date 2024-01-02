// BlueprintGeneratedClass BP_EyeOfReach.BP_EyeOfReach_C
// Size: 0xbd0 (Inherited: 0xb70)
struct ABP_EyeOfReach_C : AProjectileWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb70(0x08)
	struct UStaticMeshComponent* Glint; // 0xb78(0x08)
	struct UPostProcessComponent* PostProcess; // 0xb80(0x08)
	char sfx relationship; // 0xb88(0x01)
	char UnknownData_B89[0x7]; // 0xb89(0x07)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0xb90(0x08)
	bool TurningOn; // 0xb98(0x01)
	char UnknownData_B99[0x3]; // 0xb99(0x03)
	float BlurTime; // 0xb9c(0x04)
	float BlurInDuration; // 0xba0(0x04)
	float BlurOutDuration; // 0xba4(0x04)
	struct UCurveFloat* BlurCurve; // 0xba8(0x08)
	struct UTexture2D* LensNormal; // 0xbb0(0x08)
	struct UTexture2D* LensMask; // 0xbb8(0x08)
	struct FLinearColor LensTint; // 0xbc0(0x10)

	void determine sfx relationship(char Relationship); // Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void DoFireEffect(); // Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnWeaponFired(); // Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ScopeOn(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ScopeOff(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ScopeTick(float* DeltaSeconds); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ScopeOffImmediate(); // Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void GlintOn(); // Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void GlintOff(); // Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ExecuteUbergraph_BP_EyeOfReach(int32_t EntryPoint); // Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach // HasDefaults // @ game+0x190d0a0
};


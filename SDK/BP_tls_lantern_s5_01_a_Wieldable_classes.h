// BlueprintGeneratedClass BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C
// Size: 0xa74 (Inherited: 0xa38)
struct ABP_tls_lantern_s5_01_a_Wieldable_C : ABP_Lantern_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa38(0x08)
	float AgitationVelocityThreshold; // 0xa40(0x04)
	float AgitationAmount; // 0xa44(0x04)
	struct FVector PreviousPosition; // 0xa48(0x0c)
	float PreviousVelocity; // 0xa54(0x04)
	float CurrentVelocity; // 0xa58(0x04)
	float PanAmount; // 0xa5c(0x04)
	float SpinAmount; // 0xa60(0x04)
	float GradientPos; // 0xa64(0x04)
	struct FVector CurrentPosition; // 0xa68(0x0c)

	void UserConstructionScript(); // Function BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ReceiveBeginPlay(); // Function BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void ReceiveTick(float* DeltaSeconds); // Function BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void ReceiveWieldFirstPerson(); // Function BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C.ReceiveWieldFirstPerson // Event|Protected|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_tls_lantern_s5_01_a_Wieldable(int32_t EntryPoint); // Function BP_tls_lantern_s5_01_a_Wieldable.BP_tls_lantern_s5_01_a_Wieldable_C.ExecuteUbergraph_BP_tls_lantern_s5_01_a_Wieldable //  // @ game+0x18f4c40
};


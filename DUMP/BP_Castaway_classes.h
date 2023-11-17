// BlueprintGeneratedClass BP_Castaway.BP_Castaway_C
// Size: 0x730 (Inherited: 0x700)
struct ABP_Castaway_C : ABP_Orderofsouls_TallTales_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UCameraComponent* NPCDialogCamera; // 0x708(0x08)
	struct UActorPhasingComponent* ActorPhasing; // 0x710(0x08)
	struct UAnimNotifyWwiseEmitterComponent* AnimNotifyWwiseEmitter_1; // 0x718(0x08)
	struct TArray<struct UWwiseEvent*> AudioEvents; // 0x720(0x10)

	struct UCameraComponent* GetNPCDialogCinematicCameraComponent(); // Function BP_Castaway.BP_Castaway_C.GetNPCDialogCinematicCameraComponent // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x18f4c40
	void UserConstructionScript(); // Function BP_Castaway.BP_Castaway_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void TriggerAudioEvent(struct UWwiseEvent* AudioEvent); // Function BP_Castaway.BP_Castaway_C.TriggerAudioEvent // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void StopCurrentAudioEvent(); // Function BP_Castaway.BP_Castaway_C.StopCurrentAudioEvent // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void Multicast_TriggerAudioEvent(int32_t EventIdx); // Function BP_Castaway.BP_Castaway_C.Multicast_TriggerAudioEvent // Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ResetVisibility(); // Function BP_Castaway.BP_Castaway_C.ResetVisibility // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_Castaway(int32_t EntryPoint); // Function BP_Castaway.BP_Castaway_C.ExecuteUbergraph_BP_Castaway //  // @ game+0x18f4c40
};


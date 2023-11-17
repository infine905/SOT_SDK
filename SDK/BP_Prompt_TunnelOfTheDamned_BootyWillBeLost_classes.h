// BlueprintGeneratedClass BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C
// Size: 0x220 (Inherited: 0x138)
struct UBP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C : UBP_PromptCoordinator_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FObjectMessagingHandle Handle_CrewEnteredTunnelOfTheDamnedPortalProximity; // 0x140(0x58)
	struct FPrioritisedPromptWithHandle Prompt_BootyWillBeLost; // 0x198(0x70)
	float PromptDisplayDuration; // 0x208(0x04)
	bool CrewInRadius; // 0x20c(0x01)
	bool PromptOnCooldown; // 0x20d(0x01)
	char UnknownData_20E[0x2]; // 0x20e(0x02)
	float PromptDisplayCooldown; // 0x210(0x04)
	char UnknownData_214[0x4]; // 0x214(0x04)
	struct UTunnelsOfTheDamnedLootFilterDataAsset* LootFilterDataAsset; // 0x218(0x08)

	void On Crew Entered Radius(struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.On Crew Entered Radius // Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void Evaluate(); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Evaluate // Public|BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void RegisterOtherEvents_Implementable(); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void UnregisterOtherEvents_Implementable(); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x18f4c40
	void Crew Entered Tunnel of The Damned Portal Proximity(struct FCrewEnteredTunnelOfTheDamnedPortalProximityEvent Event); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.Crew Entered Tunnel of The Damned Portal Proximity // BlueprintCallable|BlueprintEvent // @ game+0x18f4c40
	void ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost(int32_t EntryPoint); // Function BP_Prompt_TunnelOfTheDamned_BootyWillBeLost.BP_Prompt_TunnelOfTheDamned_BootyWillBeLost_C.ExecuteUbergraph_BP_Prompt_TunnelOfTheDamned_BootyWillBeLost // HasDefaults // @ game+0x18f4c40
};


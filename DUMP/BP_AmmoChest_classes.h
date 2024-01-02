// BlueprintGeneratedClass BP_AmmoChest.BP_AmmoChest_C
// Size: 0x4c8 (Inherited: 0x488)
struct ABP_AmmoChest_C : AAmmoChest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UBoxComponent* Hits; // 0x490(0x08)
	struct UInteractableComponent* Interactable; // 0x498(0x08)
	struct FWwiseEmitter Emitter; // 0x4a0(0x20)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x4c0(0x08)

	struct FText GetObjectDisplayName(); // Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x190d0a0
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius); // Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void ReceiveBeginPlay(); // Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void Blueprint_OnInteract_Client(struct AActor** InInteractor); // Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void Blueprint_OnInteract_Server(struct AActor** InInteractor); // Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server // Event|Protected|BlueprintEvent // @ game+0x190d0a0
	void ExecuteUbergraph_BP_AmmoChest(int32_t EntryPoint); // Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest // HasDefaults // @ game+0x190d0a0
};


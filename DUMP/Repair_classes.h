// Class Repair.RepairTypeId
// Size: 0x60 (Inherited: 0x28)
struct URepairTypeId : UObject {
	struct FText DisplayName; // 0x28(0x38)
};

// Class Repair.RepairableInterface
// Size: 0x28 (Inherited: 0x28)
struct URepairableInterface : UInterface {

	void HandleDestroy(); // Function Repair.RepairableInterface.HandleDestroy // Native|Public // @ game+0x3c5cfe0
	float GetUndoRepairTime(struct AActor* Interactor); // Function Repair.RepairableInterface.GetUndoRepairTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3c5cf40
	struct UClass* GetRepairType(); // Function Repair.RepairableInterface.GetRepairType // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3c5ce90
	float GetRepairTime(); // Function Repair.RepairableInterface.GetRepairTime // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3c5ce60
	char GetRepairableState(); // Function Repair.RepairableInterface.GetRepairableState // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3c5cf10
};

// Class Repair.RepairingInterface
// Size: 0x28 (Inherited: 0x28)
struct URepairingInterface : UInterface {

	struct UClass* GetRepairType(); // Function Repair.RepairingInterface.GetRepairType // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3c5ced0
};

// Class Repair.RepairObjectActionStateId
// Size: 0x28 (Inherited: 0x28)
struct URepairObjectActionStateId : UActionStateId {

	void PushCharacterIntoRepairObjectActionState(struct FNetSubObjectPtr Repairable, struct AActor* Character, struct UClass* InputID); // Function Repair.RepairObjectActionStateId.PushCharacterIntoRepairObjectActionState // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3c5d0b0
	void PopCharacterOutOfRepairObjectActionState(struct AActor* Character); // Function Repair.RepairObjectActionStateId.PopCharacterOutOfRepairObjectActionState // Final|Native|Static|Public|BlueprintCallable // @ game+0x3c5d040
};

// Class Repair.WoodRepairTypeId
// Size: 0x60 (Inherited: 0x60)
struct UWoodRepairTypeId : URepairTypeId {
};

// Class Repair.ShipRepairInterface
// Size: 0x28 (Inherited: 0x28)
struct UShipRepairInterface : UInterface {
};


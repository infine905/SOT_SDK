// Class FerretBlueprint.MemFerretBlueprintInterface
// Size: 0x28 (Inherited: 0x28)
struct UMemFerretBlueprintInterface : UBlueprintFunctionLibrary {

	void StopTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e730
	struct FString StopAndSave(struct FString FileName); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e640
	void StopAllocTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e620
	void StartTracking(); // Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e600
	struct FString Snapshot(struct FString FileName, bool ShouldClearData); // Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e4d0
	void SetMemoryStatCollectionInterval(float CollectionInterval); // Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e460
	void Reset(); // Function FerretBlueprint.MemFerretBlueprintInterface.Reset // Final|Native|Static|Public|BlueprintCallable // @ game+0x151e440
};


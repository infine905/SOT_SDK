// Class MostMemoryIntensiveObjects.MostMemoryIntensiveObjectsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UMostMemoryIntensiveObjectsDataAsset : UDataAsset {
	struct TArray<struct FMemoryIntensiveItemsInfo> MostMemoryIntensiveObjects; // 0x28(0x10)
};

// Class MostMemoryIntensiveObjects.MostMemoryIntensiveObjectsSettings
// Size: 0x58 (Inherited: 0x38)
struct UMostMemoryIntensiveObjectsSettings : UDeveloperSettings {
	struct FString MostMemoryIntensiveObjectsDataAssetPath; // 0x38(0x10)
	struct FString MostMemoryIntensiveObjectsDataAssetName; // 0x48(0x10)
};


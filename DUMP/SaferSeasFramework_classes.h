// Class SaferSeasFramework.SaferSeasEntitlementBlacklistDataAsset
// Size: 0x38 (Inherited: 0x28)
struct USaferSeasEntitlementBlacklistDataAsset : UDataAsset {
	struct TArray<struct UClass*> BlacklistedEntitlements; // 0x28(0x10)
};

// Class SaferSeasFramework.SaferSeasSettings
// Size: 0x48 (Inherited: 0x38)
struct USaferSeasSettings : UDeveloperSettings {
	struct FStringAssetReference SaferSeasBlacklistAsset; // 0x38(0x10)
};


// Class CommunityEmissary.CommunityEmissaryFlagComponent
// Size: 0x650 (Inherited: 0x620)
struct UCommunityEmissaryFlagComponent : UStaticMeshComponent {
	struct UCommunityEmissaryFlagData* CommunityEmissaryDataAsset; // 0x620(0x08)
	char UnknownData_628[0x18]; // 0x628(0x18)
	int32_t ActiveFlagDataIndex; // 0x640(0x04)
	char UnknownData_644[0xc]; // 0x644(0x0c)

	void OnRep_ActiveFlagDataIndex(); // Function CommunityEmissary.CommunityEmissaryFlagComponent.OnRep_ActiveFlagDataIndex // Final|Native|Private // @ game+0x446a010
};

// Class CommunityEmissary.CommunityEmissaryFlagData
// Size: 0x38 (Inherited: 0x28)
struct UCommunityEmissaryFlagData : UDataAsset {
	struct TArray<struct FCommunityFlagGradeData> GradeData; // 0x28(0x10)
};


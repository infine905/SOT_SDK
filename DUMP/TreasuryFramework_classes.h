// Class TreasuryFramework.ShimmerActor
// Size: 0x470 (Inherited: 0x3c8)
struct AShimmerActor : AActor {
	char UnknownData_3C8[0xa8]; // 0x3c8(0xa8)

	void OnDeactivateShimmer(); // Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer // Native|Event|Public|BlueprintEvent // @ game+0x172e480
	void OnActivateShimmer(); // Function TreasuryFramework.ShimmerActor.OnActivateShimmer // Native|Event|Public|BlueprintEvent // @ game+0x172e460
};

// Class TreasuryFramework.SunkenKingdomShrineDeepSeaRegion
// Size: 0x4a8 (Inherited: 0x438)
struct ASunkenKingdomShrineDeepSeaRegion : ADeepSeaRegion {
	char UnknownData_438[0x8]; // 0x438(0x08)
	struct UGameEventOnDemandAvailabilityHandler* GameEventOnDemandAvailabilityHandler; // 0x440(0x08)
	struct FStringAssetReference AvailabilityParamsAssetFileLocation; // 0x448(0x10)
	struct UGameEventOnDemandAnnouncementComponent* GameEventOnDemandAnnouncementComponent; // 0x458(0x08)
	char UnknownData_460[0x48]; // 0x460(0x48)
};

// Class TreasuryFramework.SunkenKingdomTreasuryGameEventType
// Size: 0x28 (Inherited: 0x28)
struct USunkenKingdomTreasuryGameEventType : UGameEventType {
};

// Class TreasuryFramework.SunkenKingdomShrineGameEventType
// Size: 0x28 (Inherited: 0x28)
struct USunkenKingdomShrineGameEventType : UGameEventType {
};

// Class TreasuryFramework.SunkenKingdomTreasuryDeepSeaRegion
// Size: 0x440 (Inherited: 0x438)
struct ASunkenKingdomTreasuryDeepSeaRegion : ADeepSeaRegion {
	char UnknownData_438[0x8]; // 0x438(0x08)
};

// Class TreasuryFramework.TreasuryWaveDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UTreasuryWaveDataAsset : UDataAsset {
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves1Player; // 0x28(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves2Player; // 0x38(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves3Player; // 0x48(0x10)
	struct TArray<struct UAIProgressiveWavesSpawner*> Waves4Player; // 0x58(0x10)
};

// Class TreasuryFramework.TreasuryRoom
// Size: 0x568 (Inherited: 0x3c8)
struct ATreasuryRoom : AActor {
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	struct UBoxComponent* RoomAreaComponent; // 0x3d8(0x08)
	float TreasuryInactiveDurationMinSeconds; // 0x3e0(0x04)
	float TreasuryInactiveDurationMaxSeconds; // 0x3e4(0x04)
	float RoomFailureDurationSeconds; // 0x3e8(0x04)
	float WaveDelaySeconds; // 0x3ec(0x04)
	float EncounterDelaySeconds; // 0x3f0(0x04)
	float VaultDoorAnimDurationSeconds; // 0x3f4(0x04)
	float VaultDoorOpenDurationSeconds; // 0x3f8(0x04)
	int32_t MinWavesInEncounter; // 0x3fc(0x04)
	int32_t MaxWavesInEncounter; // 0x400(0x04)
	int32_t MaxEncounters; // 0x404(0x04)
	struct TArray<struct FTreasuryWaveEncounter> WaveEncounters; // 0x408(0x10)
	struct FText OnTreasuryRoomCompleteEmergentBannerText; // 0x418(0x38)
	struct FStringAssetReference SunkenTreasuryAvailabilityParamsAssetFileLocation; // 0x450(0x10)
	struct AActor* FloodMechanismActor; // 0x460(0x08)
	struct AActor* FloodTriggerActor; // 0x468(0x08)
	struct AActor* DrainMechanismActor; // 0x470(0x08)
	struct AActor* DrainTriggerActor; // 0x478(0x08)
	struct AActor* VaultMechanismActor; // 0x480(0x08)
	struct AActor* VaultTriggerActor; // 0x488(0x08)
	struct UClass* VaultLootSpawner; // 0x490(0x08)
	struct AActor* VaultLootSpawnLocationActor; // 0x498(0x08)
	struct AActor* EntranceSirenWindowActor; // 0x4a0(0x08)
	struct AActor* Shimmer; // 0x4a8(0x20)
	struct UGameEventOnDemandAvailabilityHandler* GameEventOnDemandAvailabilityHandler; // 0x4c8(0x08)
	struct TArray<struct AActor*> OverlappingActors; // 0x4d0(0x10)
	struct TArray<struct AController*> CachedParticipantControllers; // 0x4e0(0x10)
	struct AActor* VaultLootSpawnerActor; // 0x4f0(0x08)
	struct FPlayerStat VaultOpenStat; // 0x4f8(0x04)
	char UnknownData_4FC[0x4]; // 0x4fc(0x04)
	struct UMechanismActionComponent* FloodMechanismComponent; // 0x500(0x08)
	struct UMechanismActionComponent* DrainMechanismComponent; // 0x508(0x08)
	struct UMechanismActionComponent* VaultMechanismComponent; // 0x510(0x08)
	TScriptInterface<struct UMechanismTriggerInterface> FloodTriggerComponent; // 0x518(0x10)
	TScriptInterface<struct UMechanismTriggerInterface> DrainTriggerComponent; // 0x528(0x10)
	TScriptInterface<struct UMechanismTriggerInterface> VaultTriggerComponent; // 0x538(0x10)
	struct UGameEventOnDemandAnnouncementComponent* GameEventOnDemandAnnouncementComponent; // 0x548(0x08)
	char UnknownData_550[0x18]; // 0x550(0x18)

	void OnWaveStart(char EncounterType, char WaveType); // Function TreasuryFramework.TreasuryRoom.OnWaveStart // Native|Event|Public|BlueprintEvent // @ game+0x172ea80
	void OnWaveFinishedVaultMaster(TScriptInterface<struct UMechanismActionInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster // Final|Native|Protected // @ game+0x172e9e0
	void OnWaveFinished(TScriptInterface<struct UMechanismActionInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnWaveFinished // Final|Native|Protected // @ game+0x172e940
	void OnWaveComplete(char EncounterType); // Function TreasuryFramework.TreasuryRoom.OnWaveComplete // Native|Event|Public|BlueprintEvent // @ game+0x172e8c0
	void OnVaultOpen(); // Function TreasuryFramework.TreasuryRoom.OnVaultOpen // Native|Event|Public|BlueprintEvent // @ game+0x172e8a0
	void OnVaultClosed(); // Function TreasuryFramework.TreasuryRoom.OnVaultClosed // Native|Event|Public|BlueprintEvent // @ game+0x172e880
	void OnTreasuryStateChange(char PrevState, char NewState); // Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange // Native|Event|Public|BlueprintEvent // @ game+0x172e7c0
	void OnTreasuryDeactivate(); // Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate // Native|Event|Public|BlueprintEvent // @ game+0x172e7a0
	void OnTreasuryActivate(); // Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate // Native|Event|Public|BlueprintEvent // @ game+0x172e780
	void OnStartRaiseWater(); // Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater // Native|Event|Public|BlueprintEvent // @ game+0x172e760
	void OnStartDrainWater(); // Function TreasuryFramework.TreasuryRoom.OnStartDrainWater // Native|Event|Public|BlueprintEvent // @ game+0x172e740
	void OnRoomStarted(); // Function TreasuryFramework.TreasuryRoom.OnRoomStarted // Native|Event|Public|BlueprintEvent // @ game+0x172e720
	void OnRaisedWater(TScriptInterface<struct UMechanismResetInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnRaisedWater // Final|Native|Protected // @ game+0x172e680
	void OnLeaveRoom(struct AActor* OtherActor); // Function TreasuryFramework.TreasuryRoom.OnLeaveRoom // BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent // @ game+0x172e5f0
	void OnEnterRoom(struct AActor* OtherActor); // Function TreasuryFramework.TreasuryRoom.OnEnterRoom // BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent // @ game+0x172e560
	void OnEncounterParamsSetup(); // Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup // Native|Event|Public|BlueprintEvent // @ game+0x172e540
	void OnDrainedWater(TScriptInterface<struct UMechanismResetInterface> Action); // Function TreasuryFramework.TreasuryRoom.OnDrainedWater // Final|Native|Protected // @ game+0x172e4a0
	char GetState(); // Function TreasuryFramework.TreasuryRoom.GetState // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x172e430
};


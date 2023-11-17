// Class Fire.FlammableComponent
// Size: 0xe0 (Inherited: 0xc8)
struct UFlammableComponent : UActorComponent {
	char UnknownData_C8[0x10]; // 0xc8(0x10)
	bool OnFire; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)

	void OnRep_OnFire(); // Function Fire.FlammableComponent.OnRep_OnFire // Final|Native|Protected // @ game+0x39fb7d0
	void Multicast_NotifyExtinguished_RPC(struct FVector InExtinguishLocationWS); // Function Fire.FlammableComponent.Multicast_NotifyExtinguished_RPC // Net|Native|Event|NetMulticast|Protected|HasDefaults // @ game+0x39fb750
	bool IsOnFire(); // Function Fire.FlammableComponent.IsOnFire // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x39fb710
	void IncrementFireSource(); // Function Fire.FlammableComponent.IncrementFireSource // Native|Public|BlueprintCallable // @ game+0x39fb6e0
	void DecrementFireSource(); // Function Fire.FlammableComponent.DecrementFireSource // Native|Public|BlueprintCallable // @ game+0x39fb690
};

// Class Fire.ActorFlammableComponent
// Size: 0x1f0 (Inherited: 0xe0)
struct UActorFlammableComponent : UFlammableComponent {
	char UnknownData_E0[0x18]; // 0xe0(0x18)
	struct UParticleSystem* FireVFX; // 0xf8(0x08)
	struct UParticleSystem* SteamVFX; // 0x100(0x08)
	float FireVFXIntensity; // 0x108(0x04)
	float FireDurationMultiplier; // 0x10c(0x04)
	float FireDuration; // 0x110(0x04)
	float PropagationInterval; // 0x114(0x04)
	float OilSpillRadius; // 0x118(0x04)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct FStatus FireStatus; // 0x120(0x18)
	struct FStatus BurnStatus; // 0x138(0x18)
	bool ShouldPropagateToShip; // 0x150(0x01)
	char UnknownData_151[0x97]; // 0x151(0x97)
	struct UWorld* CachedWorld; // 0x1e8(0x08)
};

// Class Fire.BlownByWindStatus
// Size: 0x30 (Inherited: 0x30)
struct UBlownByWindStatus : UStatusBase {
};

// Class Fire.ExtinguishableInterface
// Size: 0x28 (Inherited: 0x28)
struct UExtinguishableInterface : UInterface {
};

// Class Fire.FireDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UFireDamagerType : UDamagerType {
};

// Class Fire.FireExplosionDamagerType
// Size: 0x28 (Inherited: 0x28)
struct UFireExplosionDamagerType : UDamagerType {
};

// Class Fire.FirePropagationIgniteInterface
// Size: 0x28 (Inherited: 0x28)
struct UFirePropagationIgniteInterface : UInterface {
};

// Class Fire.FireStatus
// Size: 0x30 (Inherited: 0x30)
struct UFireStatus : UStatusBase {
};

// Class Fire.FlammableInterface
// Size: 0x28 (Inherited: 0x28)
struct UFlammableInterface : UInterface {

	void IncrementFireSource(); // Function Fire.FlammableInterface.IncrementFireSource // Native|Public|BlueprintCallable // @ game+0x39fb6c0
	void DecrementFireSource(); // Function Fire.FlammableInterface.DecrementFireSource // Native|Public|BlueprintCallable // @ game+0x39fb670
};

// Class Fire.FlammableWieldableComponent
// Size: 0xf8 (Inherited: 0xe0)
struct UFlammableWieldableComponent : UFlammableComponent {
	struct FStatus IgnitedStatus; // 0xe0(0x18)
};

// Class Fire.TimedFlammableComponent
// Size: 0xe8 (Inherited: 0xe0)
struct UTimedFlammableComponent : UFlammableComponent {
	bool UseExtinguishTimer; // 0xe0(0x01)
	bool AllowFireToBeReplenishedBeforeExtinguishTimerExpired; // 0xe1(0x01)
	char UnknownData_E2[0x2]; // 0xe2(0x02)
	float TimeInSecondsUntilFireExtinguished; // 0xe4(0x04)
};

// Class Fire.IgniteStatus
// Size: 0x30 (Inherited: 0x30)
struct UIgniteStatus : UStatusBase {
};

// Class Fire.OilSpill
// Size: 0x740 (Inherited: 0x710)
struct AOilSpill : AItemProxy {
	char UnknownData_710[0x8]; // 0x710(0x08)
	struct UBoxComponent* BaseComponent; // 0x718(0x08)
	struct UActorFlammableComponent* FlammableComponent; // 0x720(0x08)
	struct UStatusEffectManagerComponent* StatusEffectManagerComponent; // 0x728(0x08)
	char UnknownData_730[0x10]; // 0x730(0x10)
};

// Class Fire.StatusResponseExtinguish
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseExtinguish : UStatusResponse {
};

// Class Fire.StatusResponseIgnite
// Size: 0x30 (Inherited: 0x30)
struct UStatusResponseIgnite : UStatusResponse {
};

// Class Fire.FireGridCellSelectionParamsDataAsset
// Size: 0x38 (Inherited: 0x28)
struct UFireGridCellSelectionParamsDataAsset : UDataAsset {
	struct TArray<struct FFireGridCellSelectionParams> FireGridCellSelectionParams; // 0x28(0x10)
};

// Class Fire.FirePropagationInterface
// Size: 0x28 (Inherited: 0x28)
struct UFirePropagationInterface : UInterface {

	void SetAllCellsState(char State); // Function Fire.FirePropagationInterface.SetAllCellsState // BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3fb6b30
};

// Class Fire.CookerIgnitionComponent
// Size: 0x140 (Inherited: 0xc8)
struct UCookerIgnitionComponent : UActorComponent {
	struct FCookerIgnitionParams CookerIgnitionParams; // 0xc8(0x78)
};

// Class Fire.FireCellStateTimingParamsDataAsset
// Size: 0xc0 (Inherited: 0x28)
struct UFireCellStateTimingParamsDataAsset : UDataAsset {
	struct FFireCellStateTimingParams TimingParams; // 0x28(0x94)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// Class Fire.FireGridAudioManager
// Size: 0xd0 (Inherited: 0x28)
struct UFireGridAudioManager : UObject {
	struct FFireCellAudioParams FireAudioParams; // 0x28(0x40)
	struct AActor* OwningActor; // 0x68(0x08)
	struct UFirePropagator* FirePropagator; // 0x70(0x08)
	char UnknownData_78[0x58]; // 0x78(0x58)
};

// Class Fire.FireGridLocationInterface
// Size: 0x28 (Inherited: 0x28)
struct UFireGridLocationInterface : UInterface {
};

// Class Fire.FireGridProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct UFireGridProxyInterface : UFireGridLocationInterface {
};

// Class Fire.FireGridVFXParamsDataAsset
// Size: 0x68 (Inherited: 0x28)
struct UFireGridVFXParamsDataAsset : UDataAsset {
	struct FFireGridVFXParams Params; // 0x28(0x40)
};

// Class Fire.FireGridVFXManager
// Size: 0x210 (Inherited: 0x28)
struct UFireGridVFXManager : UObject {
	struct UFireGridVFXParamsDataAsset* VFXParams; // 0x28(0x08)
	struct TMap<struct FName, struct UParticleSystemComponent*> SpawnedParticleSystemsForTemplates; // 0x30(0x50)
	struct TArray<struct FFireParticleSystem> SpawnedCustomParticleSystemsForCells; // 0x80(0x10)
	struct TMap<int32_t, struct FFireMesh> SpawnedMeshesForCells; // 0x90(0x50)
	struct TMap<int32_t, struct UParticleSystemComponent*> SpawnedParticleSystemsForSmokeDescs; // 0xe0(0x50)
	struct UParticleSystemComponent* SpawnedExteriorSmokeParticleSystem; // 0x130(0x08)
	struct UParticleSystemComponent* SpawnedLowDetailParticleSystem; // 0x138(0x08)
	struct TArray<struct FFireMesh> DespawningMeshes; // 0x140(0x10)
	struct TArray<struct FFireGridRelativeSpawnDesc> InteriorSmokeSpawnDescs; // 0x150(0x10)
	struct TArray<struct FFireGridLowDetailRelativeSpawnDesc> LowDetailVFXSpawnDescs; // 0x160(0x10)
	struct TArray<struct FFireParticleSpawnData> ParticleSpawnLODSettings; // 0x170(0x10)
	struct TArray<struct FFireGridLowDetailRelativeSpawnDesc> ExteriorSmokeVFXSpawnDescs; // 0x180(0x10)
	struct TArray<struct FFireDefaultVFXSpawnData> VFXToSpawn; // 0x190(0x10)
	char UnknownData_1A0[0x8]; // 0x1a0(0x08)
	struct TArray<struct FFireParticleSpawnList> InterleavedSpawnLists; // 0x1a8(0x10)
	struct UFirePropagator* Propagator; // 0x1b8(0x08)
	char UnknownData_1C0[0x50]; // 0x1c0(0x50)
};

// Class Fire.FirePropagator
// Size: 0x120 (Inherited: 0x28)
struct UFirePropagator : UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct UFireCellStateTimingParamsDataAsset* CellStateTimingParams; // 0xb8(0x08)
	char UnknownData_C0[0x4]; // 0xc0(0x04)
	float WaterHeightOffsetToFloodCells; // 0xc4(0x04)
	char UnknownData_C8[0x58]; // 0xc8(0x58)
};

// Class Fire.MastFlammableComponent
// Size: 0x218 (Inherited: 0x1f0)
struct UMastFlammableComponent : UActorFlammableComponent {
	char UnknownData_1F0[0x8]; // 0x1f0(0x08)
	struct FVector FireGridLocation; // 0x1f8(0x0c)
	char UnknownData_204[0x14]; // 0x204(0x14)
};

// Class Fire.ShipFireDamageParamsDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UShipFireDamageParamsDataAsset : UDataAsset {
	struct FShipFireDamageParams FireDamageParams; // 0x28(0x18)
};

// Class Fire.ShipFireLightParamsDataAsset
// Size: 0x40 (Inherited: 0x28)
struct UShipFireLightParamsDataAsset : UDataAsset {
	struct FShipFireLightParams Params; // 0x28(0x14)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Fire.ShipFirePropagationComponent
// Size: 0x4a8 (Inherited: 0xc8)
struct UShipFirePropagationComponent : UActorComponent {
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct FName FeatureToggleName; // 0xe0(0x08)
	struct UClass* ShipSize; // 0xe8(0x08)
	float CellSize; // 0xf0(0x04)
	struct FIntVector GridDimensions; // 0xf4(0x0c)
	struct FVector GridOffset; // 0x100(0x0c)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
	struct UFirePropagator* Propagator; // 0x110(0x08)
	struct UShipFireDamageParamsDataAsset* FireDamageDataAsset; // 0x118(0x08)
	struct TArray<struct FFireCellDesc> FireCellDescs; // 0x120(0x10)
	char UnknownData_130[0x10]; // 0x130(0x10)
	struct FStatus BurnStatus; // 0x140(0x18)
	struct UFireGridVFXManager* VFXManager; // 0x158(0x08)
	struct FFireGridVfxSpawnSettings VfxSpawnSettings; // 0x160(0x58)
	struct FShipFireLightManager FireLightManager; // 0x1b8(0x150)
	struct FFireGridCharringManager FireCharringManager; // 0x308(0xd8)
	struct TArray<struct FReplicatedFireCellData> ReplicatedCellData; // 0x3e0(0x10)
	struct FReplicatedFireCellCharringData ReplicatedCellCharringData; // 0x3f0(0x18)
	struct UFireGridAudioManager* FireAudioManager; // 0x408(0x08)
	struct FFireCellAudioParams FireAudioParams; // 0x410(0x40)
	char UnknownData_450[0x58]; // 0x450(0x58)

	void OnRep_CellData(); // Function Fire.ShipFirePropagationComponent.OnRep_CellData // Final|Native|Private // @ game+0x3fb6b10
	void OnRep_CellCharringData(); // Function Fire.ShipFirePropagationComponent.OnRep_CellCharringData // Final|Native|Private // @ game+0x3fb6af0
};


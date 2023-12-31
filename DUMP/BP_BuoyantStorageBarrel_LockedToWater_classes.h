// BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C
// Size: 0x750 (Inherited: 0x730)
struct ABP_BuoyantStorageBarrel_LockedToWater_C : ABuoyantStorageContainer {
	struct USphereComponent* Sphere; // 0x730(0x08)
	struct UReplenishableComponent* Replenishable; // 0x738(0x08)
	struct UTelemetrySubjectComponent* TelemetrySubject; // 0x740(0x08)
	struct UStorageContainerComponent* StorageContainer; // 0x748(0x08)

	char GetPxActorCapacityForPhysXAggregate(); // Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.GetPxActorCapacityForPhysXAggregate // Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
};


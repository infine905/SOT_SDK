// Class AthenaCheat.AthenaCheatManager
// Size: 0x138 (Inherited: 0x78)
struct UAthenaCheatManager : UCheatManager {
	struct ACinematicCameraController* CinematicCameraController; // 0x78(0x08)
	struct UClass* CinematicCameraControllerClass; // 0x80(0x08)
	char UnknownData_88[0x28]; // 0x88(0x28)
	struct TArray<struct FWorldMarkerDesc> CreatedWorldMarkers; // 0xb0(0x10)
	struct UGameEventSchedulerSettingsAsset* DebugSchedulerSettings; // 0xc0(0x08)
	struct AServerPerformanceReplicator* ServerPerformanceReplicator; // 0xc8(0x08)
	float TeleportToDigsiteHeightOffset; // 0xd0(0x04)
	char UnknownData_D4[0x64]; // 0xd4(0x64)

	void WindTriggerChange(int32_t ChangeInstantly); // Function AthenaCheat.AthenaCheatManager.WindTriggerChange // Final|Exec|Native|Public // @ game+0x4aa8660
	void WindSetVector(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetVector // Final|Exec|Native|Public // @ game+0x4aa85a0
	void WindSetMagnitude(float Magnitude); // Function AthenaCheat.AthenaCheatManager.WindSetMagnitude // Final|Exec|Native|Public // @ game+0x4aa8520
	void WindSetDirection(float X, float Y); // Function AthenaCheat.AthenaCheatManager.WindSetDirection // Final|Exec|Native|Public // @ game+0x4aa8460
	void WindReloadParams(); // Function AthenaCheat.AthenaCheatManager.WindReloadParams // Final|Exec|Native|Public // @ game+0x4aa8440
	void WindPrintDirection(); // Function AthenaCheat.AthenaCheatManager.WindPrintDirection // Final|Exec|Native|Public // @ game+0x4aa8420
	void WindEnableDebug(); // Function AthenaCheat.AthenaCheatManager.WindEnableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa8400
	void WindDisableDebug(); // Function AthenaCheat.AthenaCheatManager.WindDisableDebug // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa83e0
	void WindAlignWithCamera(); // Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera // Final|Exec|Native|Public // @ game+0x4aa83c0
	void Walk(); // Function AthenaCheat.AthenaCheatManager.Walk // Exec|Native|Public // @ game+0x4aa83a0
	void VomitWithType(struct FName VomitType, float Duration); // Function AthenaCheat.AthenaCheatManager.VomitWithType // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa82d0
	void Vomit(); // Function AthenaCheat.AthenaCheatManager.Vomit // Final|Exec|Native|Public // @ game+0x4aa82b0
	void ValidateNPCCullingDistance(); // Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance // Final|Exec|Native|Public // @ game+0x4aa8290
	void UpdateInvasionAggressivePassiveTeleportOffsetDistance(struct FString InDistance); // Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance // Final|Exec|Native|Public // @ game+0x4aa81f0
	void UpdateDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.UpdateDisplayString // Final|Exec|Native|Public // @ game+0x4aa8090
	void UnlockTradeRouteSelectionForMyCrew(); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew // Final|Exec|Native|Public // @ game+0x4aa8070
	void UnlockTradeRouteSelectionForCrew(struct FGuid CrewId); // Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4aa7fd0
	void UnlockEntitlementCategory(struct FString EntitlementMapToUnlock); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory // Final|Exec|Native|Public // @ game+0x4aa7f30
	void UnlockEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockEntitlement // Final|Exec|Native|Public // @ game+0x4aa7e90
	void UnlockAndEquipSkeletonCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse // Final|Exec|Native|Public // @ game+0x4aa7e70
	void UnlockAndEquipItemFromEntitlement(struct FString EntitlementId); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement // Final|Exec|Native|Public // @ game+0x4aa7dd0
	void UnlockAndEquipGoldGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGoldGhostCurse // Final|Exec|Native|Public // @ game+0x4aa7db0
	void UnlockAndEquipGhostCurse(); // Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse // Final|Exec|Native|Public // @ game+0x4aa7d90
	void UnlockAllTallTales(); // Function AthenaCheat.AthenaCheatManager.UnlockAllTallTales // Final|Exec|Native|Public // @ game+0x4aa7d70
	void UnlockAllSkeletonClothes(); // Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes // Final|Exec|Native|Public // @ game+0x4aa7d50
	void UnlockAllEntitlements(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements // Final|Exec|Native|Public // @ game+0x4aa7cd0
	void UnlockAllEmblemsAndAchievements(); // Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements // Final|Exec|Native|Public // @ game+0x4aa7cb0
	void UnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.UnBreakLeg // Final|Exec|Native|Public // @ game+0x4aa7c90
	void TutorialAction(struct FString ActionTypeString); // Function AthenaCheat.AthenaCheatManager.TutorialAction // Final|Exec|Native|Public // @ game+0x4aa7bf0
	void TriggerRewardNotification(struct FName Identifier); // Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa7b60
	void TriggerLosingCrewTale(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerLosingCrewTale // Final|Exec|Native|Public // @ game+0x4aa7ac0
	void TriggerLandmarkReaction(int32_t ActionType); // Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction // Final|Exec|Native|Public // @ game+0x4aa7a40
	void TriggerFogManagerAtNearestIsland(); // Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland // Final|Exec|Native|Public // @ game+0x4aa7a20
	void TriggerFactionBattleLosingBanner(); // Function AthenaCheat.AthenaCheatManager.TriggerFactionBattleLosingBanner // Final|Exec|Native|Public // @ game+0x4aa7a00
	void TriggerEmblemUnlockedMessage(struct FString EmblemFriendlyName); // Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage // Final|Exec|Native|Public // @ game+0x4aa7960
	void TriggerDebugAggressivePassiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion // Final|Exec|Native|Public // @ game+0x4aa78c0
	void TriggerDebugAggressiveAggressiveInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion // Final|Exec|Native|Public // @ game+0x4aa7820
	void TriggerControllerConnectionChange(bool IsConnect, int32_t UserId, int32_t ControllerId); // Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange // Final|Exec|Native|Public // @ game+0x4aa7720
	void TriggerContestMatchmakingMigration(); // Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration // Final|Exec|Native|Public // @ game+0x4aa7700
	void TriggerAIShipTimerBattle(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle // Final|Exec|Native|Public // @ game+0x4aa76c0
	void TriggerAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive // Final|Exec|Native|Public // @ game+0x4aa76a0
	void TriggerAIShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter // Final|Exec|Native|Public // @ game+0x4aa7680
	void TriggerAIShipAggressive(); // Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive // Final|Exec|Native|Public // @ game+0x4aa7660
	void TriggerAdvertiseGameEventsOnDemandAvailability(); // Function AthenaCheat.AthenaCheatManager.TriggerAdvertiseGameEventsOnDemandAvailability // Final|Exec|Native|Public // @ game+0x4aa76e0
	void ToggleVideprinter(struct FString Id); // Function AthenaCheat.AthenaCheatManager.ToggleVideprinter // Final|Exec|Native|Public // @ game+0x4aa75c0
	void ToggleThirdPerson(); // Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson // Final|Exec|Native|Public // @ game+0x4aa75a0
	void ToggleStoryRefresh(); // Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh // Final|Exec|Native|Public // @ game+0x4aa7580
	void ToggleStoryDisplayFilter(bool IsIncludeFilter, struct FString Filter); // Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4aa7490
	void ToggleSeaClueLocationQueryDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay // Final|Exec|Native|Public // @ game+0x4aa7470
	void ToggleRetailDrawDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug // Final|Exec|Native|Public // @ game+0x4aa7450
	void ToggleNoClip(); // Function AthenaCheat.AthenaCheatManager.ToggleNoClip // Final|Exec|Native|Public // @ game+0x4aa7430
	void ToggleNearestSuperheatedWater(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater // Final|Exec|Native|Public // @ game+0x4aa7410
	void ToggleNearestLava(); // Function AthenaCheat.AthenaCheatManager.ToggleNearestLava // Final|Exec|Native|Public // @ game+0x4aa73f0
	void ToggleMigrationPointOfInterestChecks(bool Enabled); // Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks // Final|Exec|Native|Public // @ game+0x4aa7360
	void ToggleIslandSelectionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay // Final|Exec|Native|Public // @ game+0x4aa7340
	void ToggleGlint(); // Function AthenaCheat.AthenaCheatManager.ToggleGlint // Final|Exec|Native|Public // @ game+0x4aa7320
	void ToggleFastShipControls(); // Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls // Final|Exec|Native|Public // @ game+0x4aa7300
	void ToggleFactionDebugDisplay(); // Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay // Final|Exec|Native|Public // @ game+0x4aa72e0
	void ToggleDrowning(); // Function AthenaCheat.AthenaCheatManager.ToggleDrowning // Final|Exec|Native|Public // @ game+0x4aa72c0
	void ToggleDrawShipSpeed(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed // Final|Exec|Native|Public // @ game+0x4aa72a0
	void ToggleDrawAboveIslandBounds(); // Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds // Final|Exec|Native|Public // @ game+0x4aa7280
	void ToggleDisplayStories(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories // Final|Exec|Native|Public // @ game+0x4aa7260
	void ToggleDisplayEmergentBattleBanners(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners // Final|Exec|Native|Public // @ game+0x4aa7240
	void ToggleDisplayCannonAISpawnerZones(); // Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones // Final|Exec|Native|Public // @ game+0x4aa7220
	void ToggleDebugFlying(); // Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa7200
	void ToggleDeathCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera // Final|Exec|Native|Public // @ game+0x4aa71e0
	void ToggleDamageAllowedToPlayerShip(); // Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4aa71c0
	void ToggleCrewIdToBeBlockedFromBeingInvaded(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded // Final|Exec|Native|Public // @ game+0x4aa7120
	void ToggleContestScoreDebug(); // Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug // Final|Exec|Native|Public // @ game+0x4aa7100
	void ToggleCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera // Final|Exec|Native|Public // @ game+0x4aa70e0
	void ToggleAudioReportingForVeryCloseAudio(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReportingForVeryCloseAudio // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa70c0
	void ToggleAudioReporting(); // Function AthenaCheat.AthenaCheatManager.ToggleAudioReporting // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa70a0
	void ToggleAttributeOverride(); // Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride // Final|Exec|Native|Public // @ game+0x4aa7080
	void ToggleAggressivePassiveTeleportUseEQS(); // Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS // Final|Exec|Native|Public // @ game+0x4aa7060
	void TestForceArchiveAsyncPoolCanaryCrash(); // Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash // Final|Exec|Native|Public // @ game+0x4aa7040
	void TestCrashDumpCreationOnRunnableThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread // Final|Exec|Native|Public // @ game+0x4aa7020
	void TestCrashDumpCreationOnMainThread(); // Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread // Final|Exec|Native|Public // @ game+0x4aa7000
	void TeleportToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportToShip // Final|Exec|Native|Public // @ game+0x4aa6fe0
	void TeleportToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart // Final|Exec|Native|Public // @ game+0x4aa6fc0
	void TeleportToNearestTreasureLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation // Final|Exec|Native|Public // @ game+0x4aa6fa0
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ); // Function AthenaCheat.AthenaCheatManager.TeleportToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6e90
	void TeleportToHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportToHideout // Final|Exec|Native|Public // @ game+0x4aa6e70
	void TeleportToDebugDestinationLocation(struct FString ActorIdString, struct FString DestinationId); // Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation // Final|Exec|Native|Public // @ game+0x4aa6d70
	void TeleportToAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4aa6d50
	void TeleportShip(float X, float Y, float Z); // Function AthenaCheat.AthenaCheatManager.TeleportShip // Final|Exec|Native|Public // @ game+0x4aa6c40
	void TeleportPlayerToSpireLocation(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation // Final|Exec|Native|Public // @ game+0x4aa6ba0
	void TeleportPlayerToSafety(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety // Final|Exec|Native|Public // @ game+0x4aa6b80
	void TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6a30
	void TeleportPlayerToNearestActiveRiddleLandmark(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToNearestActiveRiddleLandmark // Final|Exec|Native|Public // @ game+0x4aa6a10
	void TeleportPlayerToMerchantCrateSpawnLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToMerchantCrateSpawnLocation // Final|Exec|Native|Public // @ game+0x4aa69f0
	void TeleportPlayerToKraken(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken // Final|Exec|Native|Public // @ game+0x4aa69d0
	void TeleportPlayersCrewShipToPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6c20
	void TeleportOutOfHideout(); // Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout // Final|Exec|Native|Public // @ game+0x4aa69b0
	void TeleportCrewToShip(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip // Final|Exec|Native|Public // @ game+0x4aa6910
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor // Final|Exec|Native|Public // @ game+0x4aa6810
	void TeleportCrewToSafeSpawnLocation(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation // Final|Exec|Native|Public // @ game+0x4aa6770
	void TeleportCrewMemberToShip(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip // Final|Exec|Native|Public // @ game+0x4aa66d0
	void TeleportAllPlayersToShip(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip // Final|Exec|Native|Public // @ game+0x4aa66b0
	void TeleportAllPlayersToPlayerStart(); // Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart // Final|Exec|Native|Public // @ game+0x4aa6690
	void TeleportAllCrewsToShips(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips // Final|Exec|Native|Public // @ game+0x4aa6670
	void TeleportAllCrewsToCrewSpawnLocations(); // Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations // Final|Exec|Native|Public // @ game+0x4aa6650
	void TeleportActorToTrackedActorType(struct FString ActorIdString, int32_t DestinationActorType); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6570
	void TeleportActorToTeleportLocationActor(struct FString ControllerActorIdString, struct FString TeleportLocationActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6470
	void TeleportActorToPlayerBuriedDigSite(struct FString ActorIdString); // Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa63d0
	void TeleportActorToLocation(struct FString ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6210
	void TeleportActorToIsland(struct FString ActorIdString, struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6110
	void TeleportActorToDigSite(struct FString ActorIdString, bool WasBuriedByPlayer); // Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa6020
	void TeleportActorToActorWithOffset(struct FString ActorIdString, struct FString DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ); // Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa5e60
	void SwitchActiveStory(struct FString StoryNameToRemove, struct FString StoryNameToAdd, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.SwitchActiveStory // Final|Exec|Native|Public // @ game+0x4aa5d20
	void SuperShovel(); // Function AthenaCheat.AthenaCheatManager.SuperShovel // Final|Exec|Native|Public // @ game+0x4aa5d00
	void SuperSailor(); // Function AthenaCheat.AthenaCheatManager.SuperSailor // Final|Exec|Native|Public // @ game+0x4aa5ce0
	void StraightenAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4aa5cc0
	void StraightenAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4aa5ca0
	void StoreWieldedItemInBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4aa5c80
	void StoreWieldedItemInBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage // Final|Exec|Native|Public // @ game+0x4aa5be0
	void StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw); // Function AthenaCheat.AthenaCheatManager.StoreShipLocation // Final|Exec|Native|Public // @ game+0x4aa5a90
	void StopShip(); // Function AthenaCheat.AthenaCheatManager.StopShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa5a70
	void StopPetHangout(); // Function AthenaCheat.AthenaCheatManager.StopPetHangout // Final|Exec|Native|Public // @ game+0x4aa5a50
	void StopOverridingUGCState(); // Function AthenaCheat.AthenaCheatManager.StopOverridingUGCState // Final|Exec|Native|Public // @ game+0x4aa5a30
	void StopLocalSequences(); // Function AthenaCheat.AthenaCheatManager.StopLocalSequences // Final|Exec|Native|Public // @ game+0x4aa5a10
	void StopAllShips(); // Function AthenaCheat.AthenaCheatManager.StopAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa59f0
	void StopAllPetsHangout(); // Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout // Final|Exec|Native|Public // @ game+0x4aa59d0
	void StockShip(struct FString EntitlementAndAmountString); // Function AthenaCheat.AthenaCheatManager.StockShip // Final|Exec|Native|Public // @ game+0x4aa5930
	void StartVoyage(struct FString SourceAssetName, bool Development); // Function AthenaCheat.AthenaCheatManager.StartVoyage // Final|Exec|Native|Public // @ game+0x4aa5840
	void StartTimedStatsCapture(float CaptureLengthInSeconds); // Function AthenaCheat.AthenaCheatManager.StartTimedStatsCapture // Final|Exec|Native|Public // @ game+0x4aa57c0
	void StartSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4aa57a0
	void StartSelectedRomeVoyage(struct FString RomeVoyageString); // Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage // Final|Exec|Native|Public // @ game+0x4aa5700
	void StartNearestVolcano(); // Function AthenaCheat.AthenaCheatManager.StartNearestVolcano // Final|Exec|Native|Public // @ game+0x4aa56e0
	void StartNearestGeysers(); // Function AthenaCheat.AthenaCheatManager.StartNearestGeysers // Final|Exec|Native|Public // @ game+0x4aa56c0
	void StartNearestEarthquake(); // Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake // Final|Exec|Native|Public // @ game+0x4aa56a0
	void StartInvasionMatchmaking(); // Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking // Final|Exec|Native|Public // @ game+0x4aa5680
	void StartGuildSessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4aa5660
	void StartGuildSessionAsCrew(); // Function AthenaCheat.AthenaCheatManager.StartGuildSessionAsCrew // Final|Exec|Native|Public // @ game+0x4aa5640
	void StartDemoSession(); // Function AthenaCheat.AthenaCheatManager.StartDemoSession // Final|Exec|Native|Public // @ game+0x4aa5620
	void StartCargoRunFromNearestNPC(int32_t NumOfCrates); // Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC // Final|Exec|Native|Public // @ game+0x4aa55a0
	void StartCaptaincySessionAsNewCrew(); // Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew // Final|Exec|Native|Public // @ game+0x4aa5580
	void StartAshenLordGeysers(); // Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers // Final|Exec|Native|Public // @ game+0x4aa5560
	void StartAllVolcanos(); // Function AthenaCheat.AthenaCheatManager.StartAllVolcanos // Final|Exec|Native|Public // @ game+0x4aa5540
	void StartAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4aa5520
	void StarFieldMaskStartSkySpin(); // Function AthenaCheat.AthenaCheatManager.StarFieldMaskStartSkySpin // Final|Exec|Native|Public // @ game+0x4aa5500
	void SpireStreamOut(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamOut // Final|Exec|Native|Public // @ game+0x4aa5480
	void SpireStreamIn(int32_t SpireIndex); // Function AthenaCheat.AthenaCheatManager.SpireStreamIn // Final|Exec|Native|Public // @ game+0x4aa5400
	void SpinShip(float YawSpdInDegreesPerSecond); // Function AthenaCheat.AthenaCheatManager.SpinShip // Final|Exec|Native|Public // @ game+0x4aa5380
	void SpawnWatercraftUnlimited(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraftUnlimited // Final|Exec|Native|Public // @ game+0x4aa52e0
	void SpawnWatercraft(struct FString WatercraftClassString); // Function AthenaCheat.AthenaCheatManager.SpawnWatercraft // Final|Exec|Native|Public // @ game+0x4aa5240
	void SpawnTreasureChestOfType(struct FString ChestTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa5190
	void SpawnTreasureArtifact(struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact // Final|Exec|Native|Public // @ game+0x4aa50f0
	void SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation // Final|Exec|Native|Public // @ game+0x4aa4fa0
	void SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex); // Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4aa4ee0
	void SpawnStrongholdKeyFromGameEventType(struct FString FortEventName); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa4e30
	void SpawnStrongholdKey(); // Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey // Final|Exec|Native|Public // @ game+0x4aa4e10
	void SpawnSmallShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4d70
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnSmallShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4c20
	void SpawnSkeletonAtNearestAISpawnPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4aa4c00
	void SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipOfType // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4a40
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, struct FString TypeString); // Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable // Final|Exec|Native|Public // @ game+0x4aa48c0
	void SpawnShipFromDesc(struct FString InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4700
	void SpawnShipAtIsland(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4660
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw); // Function AthenaCheat.AthenaCheatManager.SpawnShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa4510
	void SpawnSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnSeagull // Final|Exec|Native|Public // @ game+0x4aa44f0
	void SpawnRandomSeagull(); // Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull // Final|Exec|Native|Public // @ game+0x4aa44d0
	void SpawnOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4aa44b0
	void SpawnNumberOfAI(struct FString AIDescString, int32_t NumToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4aa43d0
	void SpawnNightmareAggressiveGhostShipEncountersRandom(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom // Final|Exec|Native|Public // @ game+0x4aa43b0
	void SpawnNightmareAggressiveGhostShipEncountersNearToPlayer(); // Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer // Final|Exec|Native|Public // @ game+0x4aa4390
	void SpawnMultipleTreasureChestsOfType(struct FString ChestTypeString, int32_t Num); // Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa4290
	void SpawnMessageInABottle(struct FString MessageInABottleTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle // Final|Exec|Native|Public // @ game+0x4aa41f0
	void SpawnMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnMermaid // Final|Exec|Native|Public // @ game+0x4aa41d0
	void SpawnMerchantFauna(struct FString FaunaTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna // Final|Exec|Native|Public // @ game+0x4aa4130
	void SpawnMerchantCrate(struct FString MerchantCrateTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate // Final|Exec|Native|Public // @ game+0x4aa4090
	void SpawnMerchantCargo(struct FString MerchantCargoTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo // Final|Exec|Native|Public // @ game+0x4aa3ff0
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles // Final|Exec|Native|Public // @ game+0x4aa3f70
	void SpawnKrakenAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4aa3f50
	void SpawnItemOnFloor(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor // Final|Exec|Native|Public // @ game+0x4aa3eb0
	void SpawnItemInHand(struct FString ItemString); // Function AthenaCheat.AthenaCheatManager.SpawnItemInHand // Final|Exec|Native|Public // @ game+0x4aa3e10
	void SpawnGoldMound(struct FString GoldMoundTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnGoldMound // Final|Exec|Native|Public // @ game+0x4aa3d70
	void SpawnGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.SpawnGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4aa3d50
	void SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy // Final|Exec|Native|Public // @ game+0x4aa3cd0
	void SpawnGeyserAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4aa3cb0
	void SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy); // Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation // Final|Exec|Native|Public // @ game+0x4aa3b60
	void SpawnFogAtPlayerPosition(); // Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition // Final|Exec|Native|Public // @ game+0x4aa3b40
	void SpawnFishAtPlayerLocation(struct FString InBaitType); // Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4aa3aa0
	void SpawnFirework(struct FString FireworkItemString); // Function AthenaCheat.AthenaCheatManager.SpawnFirework // Final|Exec|Native|Public // @ game+0x4aa3a00
	void SpawnCursedCannonball(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball // Final|Exec|Native|Public // @ game+0x4aa3960
	void SpawnContextualPrompt(struct FString PromptAccessKey); // Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt // Final|Exec|Native|Public // @ game+0x4aa38c0
	void SpawnCollectorsChestOfType(struct FString ChestTypeString, struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType // Final|Exec|Native|Public|HasOutParms // @ game+0x4aa3790
	void SpawnCargoRunCrate(struct FString SpawnCargoRunCrateString); // Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate // Final|Exec|Native|Public // @ game+0x4aa36f0
	void SpawnCabinDoorInFrontOfPlayer(float Distance); // Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer // Final|Exec|Native|Public // @ game+0x4aa3670
	void SpawnBountyReward(struct FString BountyTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnBountyReward // Final|Exec|Native|Public // @ game+0x4aa35d0
	void SpawnBootyPickupPoint(); // Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint // Final|Exec|Native|Public // @ game+0x4aa35b0
	void SpawnBarrelGroup(bool ForcedCloseSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup // Final|Exec|Native|Public // @ game+0x4aa3520
	void SpawnAThousandTreasureChests(); // Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests // Final|Exec|Native|Public // @ game+0x4aa3340
	void SpawnAndEquipDebugWieldable(struct FString DebugWieldableTypeString); // Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable // Final|Exec|Native|Public // @ game+0x4aa3480
	void SpawnAllBooty(int32_t InNumOfEachToSpawn); // Function AthenaCheat.AthenaCheatManager.SpawnAllBooty // Final|Exec|Native|Public // @ game+0x4aa3400
	void SpawnAINoTrigger(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger // Final|Exec|Native|Public // @ game+0x4aa32a0
	void SpawnAIEncounter(struct FString AIEncounterString); // Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter // Final|Exec|Native|Public // @ game+0x4aa3200
	void SpawnAIAtNearestAISpawnPoint(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint // Final|Exec|Native|Public // @ game+0x4aa3160
	void SpawnAIAtLocationDelayed(struct FString AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed // Final|Exec|Native|Public // @ game+0x4aa2f70
	void SpawnAIAtCurrentLocationDelayed(struct FString AIDescString, float Delay); // Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed // Final|Exec|Native|Public // @ game+0x4aa2e80
	void SpawnAI(struct FString AIDescString); // Function AthenaCheat.AthenaCheatManager.SpawnAI // Final|Exec|Native|Public // @ game+0x4aa2de0
	void SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid // Final|Exec|Native|Public // @ game+0x4aa33e0
	void SpawnAggressiveGhostShipEncounterSpireFriendlyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation // Final|Exec|Native|Public // @ game+0x4aa33c0
	void SpawnAggressiveGhostShipEncounterSpireEnemyFormation(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation // Final|Exec|Native|Public // @ game+0x4aa33a0
	void SpawnAggressiveGhostShipEncounterSpire(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire // Final|Exec|Native|Public // @ game+0x4aa3380
	void SpawnAggressiveGhostShipEncounter(); // Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter // Final|Exec|Native|Public // @ game+0x4aa3360
	void SmoulderClosestShipFire(); // Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa2dc0
	void SmoulderAllShipFires(); // Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4aa2da0
	void SlowMotionOverride(bool InValue); // Function AthenaCheat.AthenaCheatManager.SlowMotionOverride // Final|Exec|Native|Public // @ game+0x4aa2d10
	void SkipToEndOfOnboarding(); // Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding // Final|Exec|Native|Public // @ game+0x4aa2cf0
	void SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4aa2c70
	void SinkShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.SinkShipByActorId // Final|Exec|Native|Public // @ game+0x4aa2bd0
	void SinkShip(); // Function AthenaCheat.AthenaCheatManager.SinkShip // Final|Exec|Native|Public // @ game+0x4aa2bb0
	void SinkClosestItemProxy(); // Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy // Final|Exec|Native|Public // @ game+0x4aa2b90
	void SinkAllBarrels(); // Function AthenaCheat.AthenaCheatManager.SinkAllBarrels // Final|Exec|Native|Public // @ game+0x4aa2b70
	void SinkAllAIShips(); // Function AthenaCheat.AthenaCheatManager.SinkAllAIShips // Final|Exec|Native|Public // @ game+0x4aa2b50
	void SingleStickSwap(); // Function AthenaCheat.AthenaCheatManager.SingleStickSwap // Final|Exec|Native|Public // @ game+0x4aa2b30
	void SingleStickRight(); // Function AthenaCheat.AthenaCheatManager.SingleStickRight // Final|Exec|Native|Public // @ game+0x4aa2b10
	void SingleStickOff(); // Function AthenaCheat.AthenaCheatManager.SingleStickOff // Final|Exec|Native|Public // @ game+0x4aa2af0
	void SingleStickLeft(); // Function AthenaCheat.AthenaCheatManager.SingleStickLeft // Final|Exec|Native|Public // @ game+0x4aa2ad0
	void SimulateTunnelFailure(); // Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure // Final|Exec|Native|Public // @ game+0x4aa2ab0
	void SimulatePetReactRequest(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest // Final|Exec|Native|Public // @ game+0x4aa2a10
	void SimulatePetReactCancellation(struct FString Id); // Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation // Final|Exec|Native|Public // @ game+0x4aa2970
	void SignalActiveGlobalVoyageDelaySteps(); // Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps // Final|Exec|Native|Public // @ game+0x4aa2950
	void ShowTaleDebug_WithVariables(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables // Final|Exec|Native|Public // @ game+0x4aa2930
	void ShowTaleDebug(); // Function AthenaCheat.AthenaCheatManager.ShowTaleDebug // Final|Exec|Native|Public // @ game+0x4aa2910
	void ShowShipMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel, struct FString ShipName); // Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast // Final|Exec|Native|Public // @ game+0x4aa2780
	void ShowRandomCrewMemberGamerCard(); // Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard // Final|Exec|Native|Public // @ game+0x4aa2760
	void ShowPlayerMilestoneToast(struct FString MilestoneGuid, struct FString MilestoneAlignment, uint64_t MilestoneLevel); // Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast // Final|Exec|Native|Public // @ game+0x4aa2620
	void ShowEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4aa2600
	void ShowAllWelds(); // Function AthenaCheat.AthenaCheatManager.ShowAllWelds // Final|Exec|Native|Public // @ game+0x4aa2540
	void ShowAllianceStatus(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus // Final|Exec|Native|Public // @ game+0x4aa2560
	void ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne // Final|Exec|Native|Public // @ game+0x4aa2430
	void ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, struct FString WreckAsset); // Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom // Final|Exec|Native|Public // @ game+0x4aa22b0
	void ShipwrecksRemoveCustom(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom // Final|Exec|Native|Public // @ game+0x4aa2290
	void ShipwrecksRegen(); // Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen // Final|Exec|Native|Public // @ game+0x4aa2270
	void ShipUpdateMassProperies(); // Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies // Final|Exec|Native|Public // @ game+0x4aa2250
	void ShipSurface(); // Function AthenaCheat.AthenaCheatManager.ShipSurface // Final|Exec|Native|Public // @ game+0x4aa2230
	void ShipDive(); // Function AthenaCheat.AthenaCheatManager.ShipDive // Final|Exec|Native|Public // @ game+0x4aa2210
	void SetWheelAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetWheelAngle // Final|Exec|Native|Public // @ game+0x4aa2190
	void SetWeaponsLockedOut(bool WeaponsLockedOut); // Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut // Final|Exec|Native|Public // @ game+0x4aa2100
	void SetWaveFlag(int32_t InFlag); // Function AthenaCheat.AthenaCheatManager.SetWaveFlag // Final|Exec|Native|Public // @ game+0x4aa2080
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed); // Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams // Final|Exec|Native|Public // @ game+0x4aa1f70
	void SetVoiceChatEndpointXAudio2(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2 // Final|Exec|Native|Public // @ game+0x4aa1f50
	void SetVoiceChatEndpointWwise(); // Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise // Final|Exec|Native|Public // @ game+0x4aa1f30
	void SetUnattenuatedChatMixingMethodToUseWwise(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise // Final|Exec|Native|Public // @ game+0x4aa1f10
	void SetUnattenuatedChatMixingMethodToUsePlatform(); // Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform // Final|Exec|Native|Public // @ game+0x4aa1ef0
	void SetTrinketsEnabled(bool InTrinketsEnabled); // Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled // Final|Exec|Native|Public // @ game+0x4aa1e60
	void SetTrinketNudgeChanceMaxOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips // Final|Exec|Native|Public // @ game+0x4aa1e40
	void SetTinySharkToOneHealth(); // Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth // Final|Exec|Native|Public // @ game+0x4aa1e20
	void SetTimeScalar(float TimeScalar); // Function AthenaCheat.AthenaCheatManager.SetTimeScalar // Final|Exec|Native|Public // @ game+0x4aa1da0
	void SetTimeHoursAndMinutes(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes // Final|Exec|Native|Public // @ game+0x4aa1ce0
	void SetTime(int32_t Hours); // Function AthenaCheat.AthenaCheatManager.SetTime // Final|Exec|Native|Public // @ game+0x4aa1c60
	void SetTaleSelectorSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4aa1be0
	void SetTalePhaseBranchForLocalPlayer(int32_t NewBranch); // Function AthenaCheat.AthenaCheatManager.SetTalePhaseBranchForLocalPlayer // Final|Exec|Native|Public // @ game+0x4aa1b60
	void SetShroudbreakerActive(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive // Final|Exec|Native|Public // @ game+0x4aa1ad0
	void SetShipYaw(float Yaw); // Function AthenaCheat.AthenaCheatManager.SetShipYaw // Final|Exec|Native|Public // @ game+0x4aa1a50
	void SetShipWheelFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired // Final|Exec|Native|Public // @ game+0x4aa1a30
	void SetShipWheelFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged // Final|Exec|Native|Public // @ game+0x4aa1a10
	void SetShipRoll(float Roll); // Function AthenaCheat.AthenaCheatManager.SetShipRoll // Final|Exec|Native|Public // @ game+0x4aa1990
	void SetShipName(struct FString InShipName); // Function AthenaCheat.AthenaCheatManager.SetShipName // Final|Exec|Native|Public // @ game+0x4aa18f0
	void SetShipFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged // Final|Exec|Native|Public // @ game+0x4aa18d0
	void SetShipCapstanFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired // Final|Exec|Native|Public // @ game+0x4aa18b0
	void SetShipCapstanFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged // Final|Exec|Native|Public // @ game+0x4aa1890
	void SetShipCanSailForAGuild(bool InCanSailForAGuild); // Function AthenaCheat.AthenaCheatManager.SetShipCanSailForAGuild // Final|Exec|Native|Public // @ game+0x4aa1800
	void SetShipBuoyancyBlend(float UnaryBlend); // Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend // Final|Exec|Native|Public // @ game+0x4aa1780
	void SetSeaFortAllEnemiesDeadOnAlignmentFlag(int32_t InFort, bool IsDead); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAllEnemiesDeadOnAlignmentFlag // Final|Exec|Native|Public // @ game+0x4aa16c0
	void SetSeaFortAlignment(int32_t InFort, int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetSeaFortAlignment // Final|Exec|Native|Public // @ game+0x4aa1600
	void SetSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions // Final|Exec|Native|Public // @ game+0x4aa1580
	void SetSailAngles(float Angle); // Function AthenaCheat.AthenaCheatManager.SetSailAngles // Final|Exec|Native|Public // @ game+0x4aa1500
	void SetRitualTableRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4aa1480
	void SetPreventLeakingOnAllShips(); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips // Final|Exec|Native|Public // @ game+0x4aa1460
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking); // Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones // Final|Exec|Native|Public // @ game+0x4aa13d0
	void SetPlayerVisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI // Final|Exec|Native|Public // @ game+0x4aa13b0
	void SetPlayerMaxTicks(int32_t InMaxTicksPerFrame); // Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks // Final|Exec|Native|Public // @ game+0x4aa1330
	void SetPlayerInvisibleToAI(); // Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI // Final|Exec|Native|Public // @ game+0x4aa1310
	void SetPlayerInert(bool IsInert); // Function AthenaCheat.AthenaCheatManager.SetPlayerInert // Final|Exec|Native|Public // @ game+0x4aa1280
	void SetPlayerGuildSlotsAreFull(bool InSlotsAreFull); // Function AthenaCheat.AthenaCheatManager.SetPlayerGuildSlotsAreFull // Final|Exec|Native|Public // @ game+0x4aa11f0
	void SetPlayerCanInviteToGuild(bool InCanInvite); // Function AthenaCheat.AthenaCheatManager.SetPlayerCanInviteToGuild // Final|Exec|Native|Public // @ game+0x4aa1160
	void SetPhotoMode(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetPhotoMode // Final|Exec|Native|Public // @ game+0x4aa10d0
	void SetPetMovementTimeWindow(float TimeWindow); // Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow // Final|Exec|Native|Public // @ game+0x4aa1050
	void SetOverridenUGCState(bool InOverridenUGCState); // Function AthenaCheat.AthenaCheatManager.SetOverridenUGCState // Final|Exec|Native|Public // @ game+0x4aa0fc0
	void SetNonCrewChatSpatialisation(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation // Final|Exec|Native|Public // @ game+0x4aa0f30
	void SetMaxNumOfSpawnedAI(int32_t MaxNumOfSpawnedActors); // Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4aa0eb0
	void SetMaxMovingPetsOnShips(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips // Final|Exec|Native|Public // @ game+0x4aa0e30
	void SetMaxMovingPetsOnServer(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer // Final|Exec|Native|Public // @ game+0x4aa0db0
	void SetMaxMovingPetsOnLand(int32_t MaxMovingPets); // Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand // Final|Exec|Native|Public // @ game+0x4aa0d30
	void SetMastsFullyRepaired(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired // Final|Exec|Native|Public // @ game+0x4aa0d10
	void SetMastsFullyDamaged(); // Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged // Final|Exec|Native|Public // @ game+0x4aa0cf0
	void SetKnockbackDisabled(bool Disabled); // Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled // Exec|Native|Public // @ game+0x4aa0c60
	void SetIsTinSession(bool InIsCaptainedSession); // Function AthenaCheat.AthenaCheatManager.SetIsTinSession // Final|Exec|Native|Public // @ game+0x4aa0bd0
	void SetIsShipCustomizationTinOnly(bool InIsShipCustomizationCaptainOnly); // Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly // Final|Exec|Native|Public // @ game+0x4aa0b40
	void SetIsCaptain(bool InIsCaptain); // Function AthenaCheat.AthenaCheatManager.SetIsCaptain // Final|Exec|Native|Public // @ game+0x4aa0ab0
	void SetIdleDisconnectEnabled(bool Enabled); // Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled // Final|Exec|Native|Public // @ game+0x4aa0a20
	void SetHealthInfoReplicateOverride(bool bActive); // Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride // Final|Exec|Native|Public // @ game+0x4aa0990
	void SetGuildName(struct FString InStringGuildName); // Function AthenaCheat.AthenaCheatManager.SetGuildName // Final|Exec|Native|Public // @ game+0x4aa08f0
	void SetGuildMotto(struct FString InStringGuildMotto); // Function AthenaCheat.AthenaCheatManager.SetGuildMotto // Final|Exec|Native|Public // @ game+0x4aa0850
	void SetGuildLevelToRequiredLevelToUnlockGuildEmissary(); // Function AthenaCheat.AthenaCheatManager.SetGuildLevelToRequiredLevelToUnlockGuildEmissary // Final|Exec|Native|Public // @ game+0x4aa0830
	void SetGuildIsFull(struct FString InStringGuildId, bool InGuildIsFull); // Function AthenaCheat.AthenaCheatManager.SetGuildIsFull // Final|Exec|Native|Public // @ game+0x4aa0740
	void SetGuildIcon(struct FString InStringGuildIcon); // Function AthenaCheat.AthenaCheatManager.SetGuildIcon // Final|Exec|Native|Public // @ game+0x4aa06a0
	void SetGrogSecondary(bool InValue); // Function AthenaCheat.AthenaCheatManager.SetGrogSecondary // Final|Exec|Native|Public // @ game+0x4aa0610
	void SetGodMode(bool GodModeOn); // Function AthenaCheat.AthenaCheatManager.SetGodMode // Final|Exec|Native|Public // @ game+0x4aa0580
	void SetGlitterbeardRequiredPlayersOverride(int32_t RequiredPlayerCount); // Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4aa0500
	void SetFOV(float InNewFOV); // Function AthenaCheat.AthenaCheatManager.SetFOV // Final|Exec|Native|Public // @ game+0x4aa0300
	void SetForceLocalPlayerMoveForwardFlipDistance(float FlipDistance); // Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance // Final|Exec|Native|Public // @ game+0x4aa0480
	void SetFlameOfFateColour(int32_t InFlameOfFateType); // Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour // Final|Exec|Native|Public // @ game+0x4aa0400
	void SetFactionStreak(int32_t InStreak); // Function AthenaCheat.AthenaCheatManager.SetFactionStreak // Final|Exec|Native|Public // @ game+0x4aa0380
	void SetDebugItemSource(struct FString Source); // Function AthenaCheat.AthenaCheatManager.SetDebugItemSource // Final|Exec|Native|Public // @ game+0x4aa0260
	void SetDebugHealthStage(int32_t InStage); // Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage // Final|Exec|Native|Public // @ game+0x4aa01e0
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel); // Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel // Final|Exec|Native|Public // @ game+0x4aa0150
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer // Final|Exec|Native|Public // @ game+0x4aa00d0
	void SetDeathPenaltyCrewBasedRespawnTimes(float CrewOfOne, float CrewOfTwo, float CrewOfThree, float CrewOfFour); // Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes // Final|Exec|Native|Public // @ game+0x4a9ff80
	void SetDamageAllowedToPlayerShip(bool InAllowDamage); // Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip // Final|Exec|Native|Public // @ game+0x4a9fef0
	void SetCVarOnTheServer(struct FString CVarName, int32_t Value); // Function AthenaCheat.AthenaCheatManager.SetCVarOnTheServer // Final|Exec|Native|Public // @ game+0x4a9fa30
	void SetCutsceneResponseCoordinatorDebug(bool Value); // Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug // Final|Exec|Native|Public // @ game+0x4a9fe60
	void SetCurrentCulture(struct FString Culture); // Function AthenaCheat.AthenaCheatManager.SetCurrentCulture // Final|Exec|Native|Public // @ game+0x4a9fdc0
	void SetCrewSkill(struct FString TargetCrew, int32_t Skill); // Function AthenaCheat.AthenaCheatManager.SetCrewSkill // Final|Exec|Native|Public // @ game+0x4a9fce0
	void SetCrestTextVisibility(bool InShouldShowText); // Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility // Final|Exec|Native|Public // @ game+0x4a9fc50
	void SetCoordinatedKrakenPhaseAsset(int32_t AssetIndex); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset // Final|Exec|Native|Public // @ game+0x4a9fbd0
	void SetCoordinatedKrakenCurrentPhaseAssetInactive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive // Final|Exec|Native|Public // @ game+0x4a9fbb0
	void SetCoordinatedKrakenCurrentPhaseAssetActive(); // Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive // Final|Exec|Native|Public // @ game+0x4a9fb90
	void SetCapstanPosition(float Position); // Function AthenaCheat.AthenaCheatManager.SetCapstanPosition // Final|Exec|Native|Public // @ game+0x4a9fb10
	void SetAxisBinding(struct FString InBindingName, struct FString InKeyName); // Function AthenaCheat.AthenaCheatManager.SetAxisBinding // Final|Exec|Native|Public // @ game+0x4a9f930
	void SetAllShipsSailsAngle(float Angle); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailsAngle // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9f8b0
	void SetAllShipsSailLoweredProportions(float Proportion); // Function AthenaCheat.AthenaCheatManager.SetAllShipsSailLoweredProportions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9f830
	void SetAllSeaFortsAlignment(int32_t InAlignment); // Function AthenaCheat.AthenaCheatManager.SetAllSeaFortsAlignment // Final|Exec|Native|Public // @ game+0x4a9f7b0
	void SetAllCapstanPositions(float Position); // Function AthenaCheat.AthenaCheatManager.SetAllCapstanPositions // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9f730
	void SetAllAIOverrideCannonShotHitChance(float HitChance); // Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a9f6b0
	void SetAITeamAttitude(struct FString TeamAString, struct FString TeamBString, struct FString AttitudeString); // Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude // Final|Exec|Native|Public // @ game+0x4a9f4b0
	void SetAIExclusiveAbility(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility // Final|Exec|Native|Public // @ game+0x4a9f410
	void SetAIAbilityTimeMultiplier(struct FString AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier); // Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier // Final|Exec|Native|Public // @ game+0x4a9f2e0
	void SetAbilityAlwaysOn(struct FString AIAbilityString); // Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a9f610
	void SendUpdateVoyageProgressEvent(); // Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent // Final|Exec|Native|Public // @ game+0x4a9f2c0
	void SendStatEvent(uint32_t StatId, uint64_t StatValue); // Function AthenaCheat.AthenaCheatManager.SendStatEvent // Final|Exec|Native|Public // @ game+0x4a9f200
	void SendRewardRequestEvent(struct FString CompanyNameAndRewardIdSeparatedByColon); // Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent // Final|Exec|Native|Public // @ game+0x4a9f160
	void SendResetReaperLevelEvent(); // Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent // Final|Exec|Native|Public // @ game+0x4a9f140
	void SendPlayerToFerrySinBin(); // Function AthenaCheat.AthenaCheatManager.SendPlayerToFerrySinBin // Final|Exec|Native|Public // @ game+0x4a9f120
	void ScuttleShip(bool InShouldSendCrewToLosingTunnel); // Function AthenaCheat.AthenaCheatManager.ScuttleShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9f090
	void ScreenFadeStart(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeStart // Final|Exec|Native|Public // @ game+0x4a9f070
	void ScreenFadeEnd(); // Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd // Final|Exec|Native|Public // @ game+0x4a9f050
	void SchedulerToggleUseRemoteService(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseRemoteService // Final|Exec|Native|Public // @ game+0x4a9f030
	void SchedulerToggleUseGlobalConfigs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleUseGlobalConfigs // Final|Exec|Native|Public // @ game+0x4a9f010
	void SchedulerToggleDebugDraw_Legacy(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Legacy // Final|Exec|Native|Public // @ game+0x4a9eff0
	void SchedulerToggleDebugDraw_Events(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Events // Final|Exec|Native|Public // @ game+0x4a9efd0
	void SchedulerToggleDebugDraw_Configs(); // Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw_Configs // Final|Exec|Native|Public // @ game+0x4a9efb0
	void SchedulerSkipToNext(); // Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext // Final|Exec|Native|Public // @ game+0x4a9ef90
	void SchedulerInitTinyShark(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark // Final|Exec|Native|Public // @ game+0x4a9ef70
	void SchedulerInitSkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort // Final|Exec|Native|Public // @ game+0x4a9ef50
	void SchedulerInitOceanCrawlersOnShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitOceanCrawlersOnShip // Final|Exec|Native|Public // @ game+0x4a9ef30
	void SchedulerInitLegendarySkellyFort(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitLegendarySkellyFort // Final|Exec|Native|Public // @ game+0x4a9ef10
	void SchedulerInitKraken(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken // Final|Exec|Native|Public // @ game+0x4a9eef0
	void SchedulerInitDefault(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault // Final|Exec|Native|Public // @ game+0x4a9eed0
	void SchedulerInitCompetitiveVoyage(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitCompetitiveVoyage // Final|Exec|Native|Public // @ game+0x4a9eeb0
	void SchedulerInitAshenLord(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord // Final|Exec|Native|Public // @ game+0x4a9ee90
	void SchedulerInitAIShipPassive(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive // Final|Exec|Native|Public // @ game+0x4a9ee50
	void SchedulerInitAIShipBattle(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle // Final|Exec|Native|Public // @ game+0x4a9ee30
	void SchedulerInitAIShipAggro(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro // Final|Exec|Native|Public // @ game+0x4a9ee10
	void SchedulerInitAggroGhostShip(); // Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip // Final|Exec|Native|Public // @ game+0x4a9ee70
	void SchedulerAdvance(float Time); // Function AthenaCheat.AthenaCheatManager.SchedulerAdvance // Final|Exec|Native|Public // @ game+0x4a9ed90
	void SaveMyShip(); // Function AthenaCheat.AthenaCheatManager.SaveMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9ed70
	void SailShip(); // Function AthenaCheat.AthenaCheatManager.SailShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9ed50
	void SailAllShips(); // Function AthenaCheat.AthenaCheatManager.SailAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9ed30
	void RewindPhysicsSceneBy(float SecondsToRewindBy); // Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy // Final|Exec|Native|Public // @ game+0x4a9ecb0
	void RewardPlayer(struct FString RewardId); // Function AthenaCheat.AthenaCheatManager.RewardPlayer // Final|Exec|Native|Public // @ game+0x4a9ec10
	void ReviveLocalPlayerInstantly(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly // Final|Exec|Native|Public // @ game+0x4a9ebf0
	void ReviveLocalPlayerAccordingToReviveTime(); // Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime // Final|Exec|Native|Public // @ game+0x4a9ebd0
	void RetrieveItemsFromBootyStorageInCurrentIsland(); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland // Final|Exec|Native|Public // @ game+0x4a9ebb0
	void RetrieveItemsFromBootyStorage(struct FString IslandName); // Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage // Final|Exec|Native|Public // @ game+0x4a9eb10
	void ResurfaceShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId // Final|Exec|Native|Public // @ game+0x4a9ea70
	void RestoreAndRestockShipAndPlayer(); // Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer // Final|Exec|Native|Public // @ game+0x4a9ea50
	void RestockIslandBarrels(); // Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels // Final|Exec|Native|Public // @ game+0x4a9ea30
	void RestockAllReplenishables(); // Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables // Final|Exec|Native|Public // @ game+0x4a9ea10
	void RespawnAllIslandItemSpawners(); // Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners // Final|Exec|Native|Public // @ game+0x4a9e9f0
	void RespawnAllContextualTutorials(); // Function AthenaCheat.AthenaCheatManager.RespawnAllContextualTutorials // Final|Exec|Native|Public // @ game+0x4a9e9d0
	void ResetTaleSelectorSeed(); // Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed // Final|Exec|Native|Public // @ game+0x4a9e9b0
	void ResetTalePhaseBranchOverrideForLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.ResetTalePhaseBranchOverrideForLocalPlayer // Final|Exec|Native|Public // @ game+0x4a9e990
	void ResetStats(); // Function AthenaCheat.AthenaCheatManager.ResetStats // Final|Exec|Native|Public // @ game+0x4a9e970
	void ResetRitualTable(); // Function AthenaCheat.AthenaCheatManager.ResetRitualTable // Final|Exec|Native|Public // @ game+0x4a9e950
	void ResetRepairedShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage // Final|Exec|Native|Public // @ game+0x4a9e930
	void ResetNearestVault(); // Function AthenaCheat.AthenaCheatManager.ResetNearestVault // Final|Exec|Native|Public // @ game+0x4a9e910
	void ResetNearestSeaFort(); // Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort // Final|Exec|Native|Public // @ game+0x4a9e8f0
	void ResetNearestEventRoom(); // Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom // Final|Exec|Native|Public // @ game+0x4a9e8d0
	void ResetMouseDelta(); // Function AthenaCheat.AthenaCheatManager.ResetMouseDelta // Final|Exec|Native|Public // @ game+0x4a9e8b0
	void ResetMaxNumOfSpawnedAI(); // Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI // Final|Exec|Native|Public // @ game+0x4a9e890
	void ResetMaxMovingPetsOnServerToDefault(); // Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault // Final|Exec|Native|Public // @ game+0x4a9e870
	void ResetLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a9e850
	void ResetInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a9e830
	void ResetInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a9e810
	void ResetGlitterbeardTree(); // Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree // Final|Exec|Native|Public // @ game+0x4a9e7f0
	void ResetDemoSession(bool StartNewSession); // Function AthenaCheat.AthenaCheatManager.ResetDemoSession // Final|Exec|Native|Public // @ game+0x4a9e760
	void ResetCrewsJoinedGameEventOnDemand(struct FString InGameEventType); // Function AthenaCheat.AthenaCheatManager.ResetCrewsJoinedGameEventOnDemand // Final|Exec|Native|Public // @ game+0x4a9e6c0
	void ResetAllShipDamage(); // Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage // Final|Exec|Native|Public // @ game+0x4a9e6a0
	void ResetAllOverrideCannonShotHitChance(); // Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance // Final|Exec|Native|Public // @ game+0x4a9e680
	void ResetAllMechanisms(); // Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms // Final|Exec|Native|Public // @ game+0x4a9e660
	void ResetAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a9e600
	void ResetAIExclusiveAbilities(); // Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities // Final|Exec|Native|Public // @ game+0x4a9e5e0
	void ResetActiveStories(); // Function AthenaCheat.AthenaCheatManager.ResetActiveStories // Final|Exec|Native|Public // @ game+0x4a9e640
	void ResetAbilityAlwaysOn(); // Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn // Final|Exec|Native|Public // @ game+0x4a9e620
	void RequestSmallPassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip // Final|Exec|Native|Public // @ game+0x4a9e5c0
	void RequestSmallAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a9e5a0
	void RequestReapersTributeShip(); // Function AthenaCheat.AthenaCheatManager.RequestReapersTributeShip // Final|Exec|Native|Public // @ game+0x4a9e580
	void RequestMysteriousNotesForPlayer(); // Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer // Final|Exec|Native|Public // @ game+0x4a9e560
	void RequestLargePassiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip // Final|Exec|Native|Public // @ game+0x4a9e540
	void RequestLargeAggressiveAIShip(); // Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip // Final|Exec|Native|Public // @ game+0x4a9e520
	void RequestDiveToAdventure(); // Function AthenaCheat.AthenaCheatManager.RequestDiveToAdventure // Final|Exec|Native|Public // @ game+0x4a9e500
	void RequestCaptainedSessionCrewData(); // Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData // Final|Exec|Native|Public // @ game+0x4a9e4e0
	void ReplenishShipWithDebugSpawner(); // Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner // Final|Exec|Native|Public // @ game+0x4a9e4c0
	void ReplenishShip(); // Function AthenaCheat.AthenaCheatManager.ReplenishShip // Final|Exec|Native|Public // @ game+0x4a9e4a0
	void ReplaceShipWithSmallShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip // Final|Exec|Native|Public // @ game+0x4a9e400
	void RepairShipAndClearInternalWater(); // Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater // Final|Exec|Native|Public // @ game+0x4a9e3e0
	void RepairAndClearInternalWaterOnAllShips(); // Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips // Final|Exec|Native|Public // @ game+0x4a9e3c0
	void RenameTreasure(struct FString InVendorName); // Function AthenaCheat.AthenaCheatManager.RenameTreasure // Final|Exec|Native|Public // @ game+0x4a9e320
	void RemoveVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9e280
	void RemoveSkeletonCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a9e260
	void RemovePetsFromAllPlayers(); // Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers // Final|Exec|Native|Public // @ game+0x4a9e240
	void RemovePetFromPlayer(); // Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer // Final|Exec|Native|Public // @ game+0x4a9e220
	void RemoveLostShipmentsDebugging(); // Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging // Final|Exec|Native|Public // @ game+0x4a9e200
	void RemoveLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9e1e0
	void RemoveItemInSlot(int32_t SlotIndex); // Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot // Final|Exec|Native|Public // @ game+0x4a9e160
	void RemoveGhostCurseEntitlement(); // Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement // Final|Exec|Native|Public // @ game+0x4a9e140
	void RemoveDebugPetSpawners(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners // Final|Exec|Native|Public // @ game+0x4a9e120
	void RemoveDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a9e100
	void RemoveAllSkeletonClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllSkeletonClothing // Final|Exec|Native|Public // @ game+0x4a9e0e0
	void RemoveAllFog(); // Function AthenaCheat.AthenaCheatManager.RemoveAllFog // Final|Exec|Native|Public // @ game+0x4a9e0c0
	void RemoveAllClothing(); // Function AthenaCheat.AthenaCheatManager.RemoveAllClothing // Final|Exec|Native|Public // @ game+0x4a9e0a0
	void RemoveAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext // Final|Exec|Native|Public // @ game+0x4a9df60
	void RemoveActiveStory(struct FString StoryName); // Function AthenaCheat.AthenaCheatManager.RemoveActiveStory // Final|Exec|Native|Public // @ game+0x4a9e000
	void RefreshActiveStories(); // Function AthenaCheat.AthenaCheatManager.RefreshActiveStories // Final|Exec|Native|Public // @ game+0x4a9df40
	void RebuildPirateFromSeed(int32_t Seed); // Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed // Final|Exec|Native|Public // @ game+0x4a9dec0
	void ReallyScrambleMyGamertag(); // Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag // Final|Exec|Native|Public // @ game+0x4a9dea0
	void QueryShipStocks(); // Function AthenaCheat.AthenaCheatManager.QueryShipStocks // Final|Exec|Native|Public // @ game+0x4a9de80
	void PuzzleManager_ResetAllPuzzlesOnClosestManager(); // Function AthenaCheat.AthenaCheatManager.PuzzleManager_ResetAllPuzzlesOnClosestManager // Final|Exec|Native|Public // @ game+0x4a9daa0
	void Puzzle_UnlockLockByIndex(struct FString TargetActor, int32_t LockIndex); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex // Final|Exec|Native|Public // @ game+0x4a9dda0
	void Puzzle_UnlockLock(struct FString TargetActor, struct FGuid Guid); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a9dca0
	void Puzzle_UnlockAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks // Final|Exec|Native|Public // @ game+0x4a9dc00
	void Puzzle_ResetUnlock(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock // Final|Exec|Native|Public // @ game+0x4a9db60
	void Puzzle_ActivateAllLocks(struct FString TargetActor); // Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks // Final|Exec|Native|Public // @ game+0x4a9dac0
	void PushShip(float FwdSpdInMetersPerSecond); // Function AthenaCheat.AthenaCheatManager.PushShip // Final|Exec|Native|Public // @ game+0x4a9da20
	void PullLatestEmblemProgress(); // Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress // Final|Exec|Native|Public // @ game+0x4a9da00
	void ProposeVoyageFromShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9d960
	void ProposeLastAddedVoyageFromShip(); // Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9d940
	void ProceedToNextContestState(); // Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState // Final|Exec|Native|Public // @ game+0x4a9d920
	void PrintTime(); // Function AthenaCheat.AthenaCheatManager.PrintTime // Final|Exec|Native|Public // @ game+0x4a9d900
	void PrintNPCs(); // Function AthenaCheat.AthenaCheatManager.PrintNPCs // Final|Exec|Native|Public // @ game+0x4a9d8e0
	void PrintAllNetworkActors(); // Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors // Final|Exec|Native|Public // @ game+0x4a9d8c0
	void PrintAISpawners(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawners // Final|Exec|Native|Public // @ game+0x4a9d8a0
	void PrintAISpawnContexts(); // Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts // Final|Exec|Native|Public // @ game+0x4a9d880
	void PrimeRitualTable(); // Function AthenaCheat.AthenaCheatManager.PrimeRitualTable // Final|Exec|Native|Public // @ game+0x4a9d860
	void PreventTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.PreventTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a9d840
	void PreventShipMotion(); // Function AthenaCheat.AthenaCheatManager.PreventShipMotion // Final|Exec|Native|Public // @ game+0x4a9d820
	void PlayWorldSequence(struct FString InReference); // Function AthenaCheat.AthenaCheatManager.PlayWorldSequence // Final|Exec|Native|Public // @ game+0x4a9d6f0
	void PlayLocalSequences(); // Function AthenaCheat.AthenaCheatManager.PlayLocalSequences // Final|Exec|Native|Public // @ game+0x4a9d6d0
	void PlayerAnimationOverride(struct FName Name); // Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9d790
	void OverrideShipPartFromCatalogue(struct FString InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex); // Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9d5b0
	void OpenSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a9d590
	void NudgeAllTrinketsOnOwnShip(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip // Final|Exec|Native|Public // @ game+0x4a9d570
	void NudgeAllTrinketsOnAllShips(); // Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips // Final|Exec|Native|Public // @ game+0x4a9d550
	void MoveStormToPlayer(); // Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer // Final|Exec|Native|Public // @ game+0x4a9d530
	void MoveStormToLocation(float LocationX, float LocationY); // Function AthenaCheat.AthenaCheatManager.MoveStormToLocation // Final|Exec|Native|Public // @ game+0x4a9d470
	void MoveStormToIsland(struct FString IslandNameString); // Function AthenaCheat.AthenaCheatManager.MoveStormToIsland // Final|Exec|Native|Public // @ game+0x4a9d3d0
	void MessageBoxOnGraphicsThreadTest(); // Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest // Final|Exec|Native|Public // @ game+0x4a9d3b0
	void MakeSharksBrainDead(); // Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead // Final|Exec|Native|Public // @ game+0x4a9d390
	void MakeDebugPetSpawner(); // Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner // Final|Exec|Native|Public // @ game+0x4a9d370
	void LogShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogShipHierarchy // Final|Exec|Native|Public // @ game+0x4a9d350
	void LogServerShipHierarchy(); // Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy // Final|Exec|Native|Public // @ game+0x4a9d330
	void LogAITeamAttitudes(); // Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes // Final|Exec|Native|Public // @ game+0x4a9d310
	void LockTradeRouteSelectionToSpecificRouteForMyCrew(struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew // Final|Exec|Native|Public // @ game+0x4a9d270
	void LockTradeRouteSelectionToSpecificRouteForCrew(struct FGuid CrewId, struct FString RouteReferencePath); // Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew // Final|Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x4a9d170
	void LocallyUnBreakLeg(); // Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg // Final|Exec|Native|Public // @ game+0x4a9d150
	void LocallyDisableTutorial(); // Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial // Final|Exec|Native|Public // @ game+0x4a9d130
	void LoadMyShip(); // Function AthenaCheat.AthenaCheatManager.LoadMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9d110
	void LightLocalBraziers(); // Function AthenaCheat.AthenaCheatManager.LightLocalBraziers // Final|Exec|Native|Public // @ game+0x4a9d0f0
	void LightBraziersInRadius(float Radius); // Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius // Final|Exec|Native|Public // @ game+0x4a9d070
	void LeaveFaction(); // Function AthenaCheat.AthenaCheatManager.LeaveFaction // Final|Exec|Native|Public // @ game+0x4a9d050
	void LeaveAlliance(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.LeaveAlliance // Final|Exec|Native|Public // @ game+0x4a9cfb0
	void LayerSpawn(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerSpawn // Final|Exec|Native|Public // @ game+0x4a9cf10
	void LayerClearAll(); // Function AthenaCheat.AthenaCheatManager.LayerClearAll // Final|Exec|Native|Public // @ game+0x4a9cef0
	void LayerClear(struct FString LayerAsset); // Function AthenaCheat.AthenaCheatManager.LayerClear // Final|Exec|Native|Public // @ game+0x4a9ce50
	void LaunchPlayer(float Velocity, float Angle); // Function AthenaCheat.AthenaCheatManager.LaunchPlayer // Final|Exec|Native|Public // @ game+0x4a9cd90
	void KrakenSetTentaclesToOneHealth(); // Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth // Final|Exec|Native|Public // @ game+0x4a9cd70
	void KrakenAnimatedTentacleThrowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer // Final|Exec|Native|Public // @ game+0x4a9cd50
	void KrakenAnimatedTentacleTakeDamage(float Damage); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage // Final|Exec|Native|Public // @ game+0x4a9ccd0
	void KrakenAnimatedTentacleSwallowPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer // Final|Exec|Native|Public // @ game+0x4a9ccb0
	void KrakenAnimatedTentacleSuckPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer // Final|Exec|Native|Public // @ game+0x4a9cc90
	void KrakenAnimatedTentaclePowerSlamPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer // Final|Exec|Native|Public // @ game+0x4a9cc70
	void KrakenAnimatedTentacleKill(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill // Final|Exec|Native|Public // @ game+0x4a9cc50
	void KrakenAnimatedTentacleIngestPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer // Final|Exec|Native|Public // @ game+0x4a9cc30
	void KrakenAnimatedTentacleDropPlayer(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer // Final|Exec|Native|Public // @ game+0x4a9cc10
	void KrakenAnimatedTentacleDespawn(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn // Final|Exec|Native|Public // @ game+0x4a9cbf0
	void KrakenAnimatedTentacleDefeat(); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat // Final|Exec|Native|Public // @ game+0x4a9cbd0
	void KrakenAnimatedTentacleChangePlayerHoldState(struct FString HoldState); // Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState // Final|Exec|Native|Public // @ game+0x4a9cb30
	void KindleClosestShip(); // Function AthenaCheat.AthenaCheatManager.KindleClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9cb10
	void KindleAllShipFires(); // Function AthenaCheat.AthenaCheatManager.KindleAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9caf0
	void KillPlayer(); // Function AthenaCheat.AthenaCheatManager.KillPlayer // Final|Exec|Native|Public // @ game+0x4a9cad0
	void KillCrew(struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.KillCrew // Final|Exec|Native|Public // @ game+0x4a9ca30
	void KillAllSkeletons(); // Function AthenaCheat.AthenaCheatManager.KillAllSkeletons // Final|Exec|Native|Public // @ game+0x4a9ca10
	void KillAllPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllPlayers // Final|Exec|Native|Public // @ game+0x4a9c9f0
	void KillAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a9c9d0
	void KillAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a9c9b0
	void KillAllDebugAISpawners(); // Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners // Final|Exec|Native|Public // @ game+0x4a9c990
	void KillAllCrews(); // Function AthenaCheat.AthenaCheatManager.KillAllCrews // Final|Exec|Native|Public // @ game+0x4a9c970
	void KillAllAI(); // Function AthenaCheat.AthenaCheatManager.KillAllAI // Final|Exec|Native|Public // @ game+0x4a9c910
	void KillAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a9c950
	void KillAllAggressiveGhostShipEncounters(); // Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters // Final|Exec|Native|Public // @ game+0x4a9c930
	void JoinFaction(struct FString FactionName); // Function AthenaCheat.AthenaCheatManager.JoinFaction // Final|Exec|Native|Public // @ game+0x4a9c870
	void JoinAlliance(struct FString OfferingCrew, struct FString AcceptingCrew); // Function AthenaCheat.AthenaCheatManager.JoinAlliance // Final|Exec|Native|Public // @ game+0x4a9c770
	void IPGOverride(struct FName BodyShape, float Distance); // Function AthenaCheat.AthenaCheatManager.IPGOverride // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9c3d0
	void IPGLoadWithoutClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing // Final|Exec|Native|Public // @ game+0x4a9c2d0
	void IPGLoadWithClothing(struct FString ActorIdString, struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing // Final|Exec|Native|Public // @ game+0x4a9c1d0
	void IPGLoad(struct FString path); // Function AthenaCheat.AthenaCheatManager.IPGLoad // Final|Exec|Native|Public // @ game+0x4a9c130
	void InvincibleEverything(); // Function AthenaCheat.AthenaCheatManager.InvincibleEverything // Final|Exec|Native|Public // @ game+0x4a9c750
	void InterruptSicknessOnPlayer(); // Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer // Final|Exec|Native|Public // @ game+0x4a9c730
	void InfiniteGunAmmo(bool Enabled); // Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo // Final|Exec|Native|Public // @ game+0x4a9c6a0
	void IncrementTime(int32_t Hours, int32_t Minutes); // Function AthenaCheat.AthenaCheatManager.IncrementTime // Final|Exec|Native|Public // @ game+0x4a9c5e0
	void IncrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a9c5c0
	void IncrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a9c5a0
	void IncreaseEmissaryCount(int32_t Amount); // Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount // Final|Exec|Native|Public // @ game+0x4a9c520
	void IgniteShipAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9c500
	void IgniteLocalPlayer(); // Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9c4e0
	void IgniteClosestShip(); // Function AthenaCheat.AthenaCheatManager.IgniteClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9c4c0
	void IgniteAllShipFires(); // Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a9c4a0
	void HuntersCryForceRescueSuccess(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess // Final|Exec|Native|Public // @ game+0x4a9c110
	void HuntersCryForceRescueFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail // Final|Exec|Native|Public // @ game+0x4a9c0f0
	void HuntersCryDisableTimedFail(); // Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail // Final|Exec|Native|Public // @ game+0x4a9c0d0
	void HitRegSnapshotsToggleOnScreenStatus(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus // Final|Exec|Native|Public // @ game+0x4a9c0b0
	void HitRegSnapshotsSetShowPreCorrectedCapsules(bool ShowPreCorrectedCapsules, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules // Final|Exec|Native|Public // @ game+0x4a9bf90
	void HitRegSnapshotsSetShowFullRewindData(bool ShowFullRewindData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData // Final|Exec|Native|Public // @ game+0x4a9be70
	void HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots // Final|Exec|Native|Public // @ game+0x4a9bd50
	void HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData // Final|Exec|Native|Public // @ game+0x4a9bc30
	void HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations // Final|Exec|Native|Public // @ game+0x4a9bb10
	void HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData // Final|Exec|Native|Public // @ game+0x4a9b9f0
	void HitRegSnapshotsSetDisagreementModeToComponents(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents // Final|Exec|Native|Public // @ game+0x4a9b9d0
	void HitRegSnapshotsSetDisagreementModeToAllShots(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots // Final|Exec|Native|Public // @ game+0x4a9b9b0
	void HitRegSnapshotsSetDisagreementModeToActors(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors // Final|Exec|Native|Public // @ game+0x4a9b990
	void HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault // Final|Exec|Native|Public // @ game+0x4a9b8c0
	void HitRegSnapshotsEnableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem // Final|Exec|Native|Public // @ game+0x4a9b8a0
	void HitRegSnapshotsDisableSystem(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem // Final|Exec|Native|Public // @ game+0x4a9b880
	void HitRegSnapshotsDestroyAll(); // Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll // Final|Exec|Native|Public // @ game+0x4a9b860
	void HitRegSetPlayerProjectilesHitScan(bool Enabled); // Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan // Final|Exec|Native|Public // @ game+0x4a9b7d0
	void HideTaleDebug(); // Function AthenaCheat.AthenaCheatManager.HideTaleDebug // Final|Exec|Native|Public // @ game+0x4a9b7b0
	void HideEmissaryVoteIndicators(); // Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators // Final|Exec|Native|Public // @ game+0x4a9b790
	void HealthSet(float Value); // Function AthenaCheat.AthenaCheatManager.HealthSet // Final|Exec|Native|Public // @ game+0x4a9b710
	void HealthReset(); // Function AthenaCheat.AthenaCheatManager.HealthReset // Final|Exec|Native|Public // @ game+0x4a9b6f0
	void HealthRegenResetToEmpty(); // Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty // Final|Exec|Native|Public // @ game+0x4a9b6d0
	void HealthRegenAdd(float Value); // Function AthenaCheat.AthenaCheatManager.HealthRegenAdd // Final|Exec|Native|Public // @ game+0x4a9b650
	void HealthContinuousStopWithTestReason(); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason // Final|Exec|Native|Public // @ game+0x4a9b630
	void HealthContinuousStopWithReason(struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason // Final|Exec|Native|Public // @ game+0x4a9b590
	void HealthContinuousStartWithTestReason(float Value); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason // Final|Exec|Native|Public // @ game+0x4a9b510
	void HealthContinuousStartWithReason(float Value, struct FString Reason); // Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason // Final|Exec|Native|Public // @ game+0x4a9b420
	void HealthAdjust(float Amount); // Function AthenaCheat.AthenaCheatManager.HealthAdjust // Final|Exec|Native|Public // @ game+0x4a9b3a0
	void HandInMegalodonSoulToRitualTable(int32_t SoulType); // Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable // Final|Exec|Native|Public // @ game+0x4a9b320
	void God(); // Function AthenaCheat.AthenaCheatManager.God // Exec|Native|Public // @ game+0x4a9b300
	void GetSourceStringHash(struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.GetSourceStringHash // Final|Exec|Native|Public // @ game+0x4a9b260
	void GameEventOnDemandAvailabilityServiceMinimalDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceMinimalDebugDraw // Final|Exec|Native|Public // @ game+0x4a9b240
	void GameEventOnDemandAvailabilityServiceFullDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceFullDebugDraw // Final|Exec|Native|Public // @ game+0x4a9b220
	void GameEventOnDemandAvailabilityServiceDisableDebugDraw(); // Function AthenaCheat.AthenaCheatManager.GameEventOnDemandAvailabilityServiceDisableDebugDraw // Final|Exec|Native|Public // @ game+0x4a9b200
	void ForceStopAllPetsDanger(); // Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a9b1e0
	void ForceStartAllPetsDangerWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a9b0f0
	void ForceStartAllPetsDanger(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger // Final|Exec|Native|Public // @ game+0x4a9b050
	void ForceSkipTallTaleSteps_WaitAndCutscenes(); // Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes // Final|Exec|Native|Public // @ game+0x4a9b030
	void ForceRequestCampaignsFromServices(); // Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices // Final|Exec|Native|Public // @ game+0x4a9b010
	void ForcePetHangout(struct FName HangoutName, int32_t PositionIndex); // Function AthenaCheat.AthenaCheatManager.ForcePetHangout // Final|Exec|Native|Public // @ game+0x4a9af50
	void ForceOpenShop(); // Function AthenaCheat.AthenaCheatManager.ForceOpenShop // Final|Exec|Native|Public // @ game+0x4a9af30
	void ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove // Final|Exec|Native|Public // @ game+0x4a9ae60
	void ForceNPCOnSurfaceLocation(int32_t LoctationIndex, int32_t LoctationPointIndex); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation // Final|Exec|Native|Public // @ game+0x4a9ada0
	void ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger); // Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger // Final|Exec|Native|Public // @ game+0x4a9ad10
	void ForceLocalPlayerMoveForward(float ScaleValue); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward // Final|Exec|Native|Public // @ game+0x4a9ac90
	void ForceLocalPlayerMeleeCombo(float Interval); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeCombo // Final|Exec|Native|Public // @ game+0x4a9ac10
	void ForceLocalPlayerMeleeAttack(float Frequency); // Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMeleeAttack // Final|Exec|Native|Public // @ game+0x4a9ab90
	void ForceGarbageCollect(); // Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect // Final|Exec|Native|Public // @ game+0x4a9ab70
	void ForceEmoteWithEmoteProp(struct FName EmoteIdentifier, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9aa70
	void ForceEmoteWithDescriptionAndEmoteProp(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription, struct FString EmotePropAssetLocation); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9a8d0
	void ForceEmoteWithDescription(struct FName EmoteIdentifier, struct FString DisplayName, struct FString AudioDescription); // Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9a770
	void ForceEmote(struct FName EmoteIdentifier); // Function AthenaCheat.AthenaCheatManager.ForceEmote // Final|Exec|Native|Public|HasOutParms // @ game+0x4a9a6e0
	void ForceCloseShop(); // Function AthenaCheat.AthenaCheatManager.ForceCloseShop // Final|Exec|Native|Public // @ game+0x4a9a6c0
	void ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(struct FString ResponseType, float UpdateThreatLocationTime); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation // Final|Exec|Native|Public // @ game+0x4a9a5d0
	void ForceAllPetsDangerWithNoiseEvent(struct FString ResponseType); // Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent // Final|Exec|Native|Public // @ game+0x4a9a530
	void ForceAggressiveGhostShipStartSinkingAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation // Final|Exec|Native|Public // @ game+0x4a9a510
	void ForceAggressiveGhostShipStartDisappearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation // Final|Exec|Native|Public // @ game+0x4a9a4f0
	void ForceAggressiveGhostShipStartAppearAnimation(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation // Final|Exec|Native|Public // @ game+0x4a9a4d0
	void ForceAggressiveGhostShipPortalJump(); // Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump // Final|Exec|Native|Public // @ game+0x4a9a4b0
	void Fly(); // Function AthenaCheat.AthenaCheatManager.Fly // Exec|Native|Public // @ game+0x4a9a490
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex); // Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex // Final|Exec|Native|Public // @ game+0x4a9a3c0
	void FloodShip(float NormalisedWaterAmount); // Function AthenaCheat.AthenaCheatManager.FloodShip // Final|Exec|Native|Public // @ game+0x4a9a340
	void FireStartedCaptainedSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent // Final|Exec|Native|Public // @ game+0x4a9a320
	void FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards); // Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage // Final|Exec|Native|Public // @ game+0x4a9a220
	void FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage // Final|Exec|Native|Public // @ game+0x4a9a050
	void FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, struct FString InGoalCategory); // Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage // Final|Exec|Native|Public // @ game+0x4a99f30
	void FireOnlineSessionMemberLostEventForMyself(); // Function AthenaCheat.AthenaCheatManager.FireOnlineSessionMemberLostEventForMyself // Final|Exec|Native|Public // @ game+0x4a99f10
	void FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted); // Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage // Final|Exec|Native|Public // @ game+0x4a99d10
	void FireEndedGuildSessionEvent(); // Function AthenaCheat.AthenaCheatManager.FireEndedGuildSessionEvent // Final|Exec|Native|Public // @ game+0x4a99cf0
	void FireCreatorCrewSignedUpStat(); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat // Final|Exec|Native|Public // @ game+0x4a99cd0
	void FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat // Final|Exec|Native|Public // @ game+0x4a99c50
	void FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat // Final|Exec|Native|Public // @ game+0x4a99bd0
	void FireCreatorCrewCurrentViewersStat(int32_t InNumViewers); // Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat // Final|Exec|Native|Public // @ game+0x4a99b50
	void FireCompanyProgressUpdateNotification(struct FName CompanyName, int32_t OldLevel, int32_t NewLevel, int32_t NewDistinctionLevel); // Function AthenaCheat.AthenaCheatManager.FireCompanyProgressUpdateNotification // Final|Exec|Native|Public|HasOutParms // @ game+0x4a99a00
	void FindOrAddDisplayString(struct FString Namespace, struct FString Key, struct FString SourceString); // Function AthenaCheat.AthenaCheatManager.FindOrAddDisplayString // Final|Exec|Native|Public // @ game+0x4a998a0
	void FindDisplayString(struct FString Namespace, struct FString Key); // Function AthenaCheat.AthenaCheatManager.FindDisplayString // Final|Exec|Native|Public // @ game+0x4a997a0
	void FillNearestShipWithTrinkets(); // Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets // Final|Exec|Native|Public // @ game+0x4a99780
	void FakeMigrateBountyQuests(); // Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests // Final|Exec|Native|Public // @ game+0x4a99760
	void ExitedStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent // Final|Exec|Native|Public // @ game+0x4a99740
	void EquipPirateTitle(struct FString PirateTitleType); // Function AthenaCheat.AthenaCheatManager.EquipPirateTitle // Final|Exec|Native|Public // @ game+0x4a996a0
	void EquipCompassInLoadout(); // Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout // Final|Exec|Native|Public // @ game+0x4a99680
	void EnteredStormShipEvent(); // Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent // Final|Exec|Native|Public // @ game+0x4a99660
	void EndDemoSession(); // Function AthenaCheat.AthenaCheatManager.EndDemoSession // Final|Exec|Native|Public // @ game+0x4a99640
	void EndCurrentCaptainedSession(); // Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession // Final|Exec|Native|Public // @ game+0x4a99620
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals // Final|Exec|Native|Public // @ game+0x4a99590
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals // Final|Exec|Native|Public // @ game+0x4a99500
	void EnableStoryServiceCheat(); // Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat // Final|Exec|Native|Public // @ game+0x4a994e0
	void EnableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.EnableStormEffects // Final|Exec|Native|Public // @ game+0x4a99460
	void EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse); // Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay // Final|Exec|Native|Public // @ game+0x4a993e0
	void EnableNTP(bool Enable); // Function AthenaCheat.AthenaCheatManager.EnableNTP // Final|Exec|Native|Public // @ game+0x4a99350
	void EnableMermaidSpawning(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning // Final|Exec|Native|Public // @ game+0x4a992d0
	void EnableMermaidDeletion(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion // Final|Exec|Native|Public // @ game+0x4a99250
	void EnableHeadphoneMixing(bool Enabled); // Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing // Final|Exec|Native|Public // @ game+0x4a991c0
	void EnableFactionDebug(); // Function AthenaCheat.AthenaCheatManager.EnableFactionDebug // Final|Exec|Native|Public // @ game+0x4a991a0
	void EnableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a99180
	void EnableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a99160
	void EnableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a99140
	void EnableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a99120
	void EnableBeaconOnAllMermaids(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids // Final|Exec|Native|Public // @ game+0x4a990a0
	void EnableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a99080
	void EnableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a99060
	void EmptyNearestShipOfTrinkets(); // Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets // Final|Exec|Native|Public // @ game+0x4a99040
	void DrawVideprinter(struct FString Id, bool Active); // Function AthenaCheat.AthenaCheatManager.DrawVideprinter // Final|Exec|Native|Public // @ game+0x4a98f50
	void DrawTreasureDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug // Final|Exec|Native|Public // @ game+0x4a98ed0
	void DrawTemporaryLandmarkDebug(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug // Final|Exec|Native|Public // @ game+0x4a98e40
	void DrawNearbyAISpawnPointsRanged(float Range); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged // Final|Exec|Native|Public // @ game+0x4a98dc0
	void DrawNearbyAISpawnPoints(); // Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints // Final|Exec|Native|Public // @ game+0x4a98da0
	void DownPlayer(); // Function AthenaCheat.AthenaCheatManager.DownPlayer // Final|Exec|Native|Public // @ game+0x4a98d80
	void DownAllPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllPlayers // Final|Exec|Native|Public // @ game+0x4a98d60
	void DownAllOtherPlayers(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers // Final|Exec|Native|Public // @ game+0x4a98d40
	void DownAllOtherPlayerCharacters(); // Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters // Final|Exec|Native|Public // @ game+0x4a98d20
	void DouseClosestShip(); // Function AthenaCheat.AthenaCheatManager.DouseClosestShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98d00
	void DouseAllShipFires(); // Function AthenaCheat.AthenaCheatManager.DouseAllShipFires // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98ce0
	void DiveShipByActorId(struct FString ShipActorIdString); // Function AthenaCheat.AthenaCheatManager.DiveShipByActorId // Final|Exec|Native|Public // @ game+0x4a98c40
	void DisplaySpireLocationsDebug(int32_t Enabled); // Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug // Final|Exec|Native|Public // @ game+0x4a98bc0
	void DisplaySingleEmblemProgress(struct FString StatName); // Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress // Final|Exec|Native|Public // @ game+0x4a98b20
	void DisplayServersideHitsAtPlayerPosWithDefaults(); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults // Final|Exec|Native|Public // @ game+0x4a98b00
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight); // Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a98a00
	void DisplayServerFPS(); // Function AthenaCheat.AthenaCheatManager.DisplayServerFPS // Final|Exec|Native|Public // @ game+0x4a989e0
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled); // Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland // Final|Exec|Native|Public // @ game+0x4a98950
	void DisplayLoadingScreenTeleport(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport // Final|Exec|Native|Public // @ game+0x4a98930
	void DisplayLoadingScreenBoot(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot // Final|Exec|Native|Public // @ game+0x4a98910
	void DisplayLoadingScreenAdventure(); // Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure // Final|Exec|Native|Public // @ game+0x4a988f0
	void DisplayLandmarkValidTreasureLocationsForPlayer(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer // Final|Exec|Native|Public // @ game+0x4a988d0
	void DisplayLandmarkRegions(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions // Final|Exec|Native|Public // @ game+0x4a988b0
	void DisplayLandmarkNames(); // Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames // Final|Exec|Native|Public // @ game+0x4a98890
	void DisplayFallDamageDebug(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug // Final|Exec|Native|Public // @ game+0x4a98810
	void DisplayDrunkenness(bool Flag); // Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness // Final|Exec|Native|Public // @ game+0x4a98780
	void DismissAllPickupPoints(); // Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints // Final|Exec|Native|Public // @ game+0x4a98760
	void DisableStormEffects(char LockReason); // Function AthenaCheat.AthenaCheatManager.DisableStormEffects // Final|Exec|Native|Public // @ game+0x4a986e0
	void DisableEmergentSirenSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning // Final|Exec|Native|Public // @ game+0x4a986c0
	void DisableEmergentSharkSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning // Final|Exec|Native|Public // @ game+0x4a986a0
	void DisableContextualTutorialAccessCounterLimits(bool Value); // Function AthenaCheat.AthenaCheatManager.DisableContextualTutorialAccessCounterLimits // Final|Exec|Native|Public // @ game+0x4a98610
	void DisableConsoleLogging(); // Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging // Final|Exec|Native|Public // @ game+0x4a985f0
	void DisableCinematicCamera(); // Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera // Final|Exec|Native|Protected // @ game+0x4a985d0
	void DisableAllEmergentWaterSpawning(); // Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning // Final|Exec|Native|Public // @ game+0x4a985b0
	void DisableAIBehaviour(); // Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour // Final|Exec|Native|Public // @ game+0x4a98590
	void DisableAIAbilities(); // Function AthenaCheat.AthenaCheatManager.DisableAIAbilities // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98570
	void DioramaStartNearest(struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStartNearest // Final|Exec|Native|Public // @ game+0x4a98470
	void DioramaStart(struct FString ActorName, struct FString Spawner, struct FString DioramaDesc); // Function AthenaCheat.AthenaCheatManager.DioramaStart // Final|Exec|Native|Public // @ game+0x4a98310
	void DioramaKillAllDebug(); // Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug // Final|Exec|Native|Public // @ game+0x4a982f0
	void DestroyShip(struct FString ShipActorIdConsoleString); // Function AthenaCheat.AthenaCheatManager.DestroyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98250
	void DestroyNearestDebugReapersChestMarker(); // Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker // Final|Exec|Native|Public // @ game+0x4a98230
	void DestroyMyShip(); // Function AthenaCheat.AthenaCheatManager.DestroyMyShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98210
	void DestroyKraken(); // Function AthenaCheat.AthenaCheatManager.DestroyKraken // Final|Exec|Native|Public // @ game+0x4a981f0
	void DestroyGlobalDigSpotService(); // Function AthenaCheat.AthenaCheatManager.DestroyGlobalDigSpotService // Final|Exec|Native|Public // @ game+0x4a981d0
	void DestroyAllTreasureChests(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests // Final|Exec|Native|Public // @ game+0x4a981b0
	void DestroyAllTinySharks(); // Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks // Final|Exec|Native|Public // @ game+0x4a98190
	void DestroyAllSirenStatues(); // Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues // Final|Exec|Native|Public // @ game+0x4a98170
	void DestroyAllShips(); // Function AthenaCheat.AthenaCheatManager.DestroyAllShips // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a98150
	void DespawnNumberOfAI(struct FString AITypeString, int32_t NumToDespawn); // Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI // Final|Exec|Native|Public // @ game+0x4a98070
	void DespawnFirstAI(); // Function AthenaCheat.AthenaCheatManager.DespawnFirstAI // Final|Exec|Native|Public // @ game+0x4a98050
	void DespawnAllAggressiveGhostShips(); // Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips // Final|Exec|Native|Public // @ game+0x4a98030
	void DespawnAI(struct FString AITypeString); // Function AthenaCheat.AthenaCheatManager.DespawnAI // Final|Exec|Native|Public // @ game+0x4a97f90
	void DeleteVoyageHistory(); // Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory // Final|Exec|Native|Public // @ game+0x4a97f70
	void DeleteAllMermaids(); // Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids // Final|Exec|Native|Public // @ game+0x4a97f50
	void DecrementFactionStreak(); // Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak // Final|Exec|Native|Public // @ game+0x4a97f30
	void DecrementDebugHealthStage(); // Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage // Final|Exec|Native|Public // @ game+0x4a97f10
	void DebugLoadRowboat(struct FString WatercraftEntitlement, struct FString LiveryEntitlement); // Function AthenaCheat.AthenaCheatManager.DebugLoadRowboat // Final|Exec|Native|Public // @ game+0x4a97e10
	void DebugIslandDelta(); // Function AthenaCheat.AthenaCheatManager.DebugIslandDelta // Final|Exec|Native|Public // @ game+0x4a97df0
	void DeactivateSkellyFort(struct FString FortName); // Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a97d40
	void DeactivateEmissaryFlagCompany(); // Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a97d20
	void DeactivateDeathEffect(); // Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect // Final|Exec|Native|Public // @ game+0x4a97d00
	void DamageShipFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a97a80
	void DamageShip(float Strength); // Function AthenaCheat.AthenaCheatManager.DamageShip // Final|Exec|Native|Public // @ game+0x4a97a00
	void DamagePlayerFromRemoteActor(struct FString ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ); // Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor // Final|Exec|Native|Public // @ game+0x4a97780
	void DamagePlayer(float Strength); // Function AthenaCheat.AthenaCheatManager.DamagePlayer // Final|Exec|Native|Public // @ game+0x4a97700
	void CustomiseNearestRowboat(struct FString LiveryDescStringRef); // Function AthenaCheat.AthenaCheatManager.CustomiseNearestRowboat // Final|Exec|Native|Public // @ game+0x4a97660
	void CureAllAilings(); // Function AthenaCheat.AthenaCheatManager.CureAllAilings // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a97640
	void CreateDebugReapersChestMarkerAtPlayerLocation(); // Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation // Final|Exec|Native|Public // @ game+0x4a97620
	void CreateDebugAISpawnerAt(struct FString SpawnerAssetName, struct FString LocationActorName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt // Final|Exec|Native|Public // @ game+0x4a97520
	void CreateDebugAISpawner(struct FString SpawnerAssetName); // Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner // Final|Exec|Native|Public // @ game+0x4a97480
	void CreateCaptainsLogForCrew(); // Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew // Final|Exec|Native|Public // @ game+0x4a97460
	void CopyAllUserBasedIdsToClipboard(); // Function AthenaCheat.AthenaCheatManager.CopyAllUserBasedIdsToClipboard // Final|Exec|Native|Public // @ game+0x4a97440
	void CoordinatedKrakenToggleAI(); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI // Final|Exec|Native|Public // @ game+0x4a97420
	void CoordinatedKrakenRequestAction(struct FString ActionName); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction // Final|Exec|Native|Public // @ game+0x4a97380
	void CoordinatedKrakenEnableDebugging(int32_t Enable); // Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging // Final|Exec|Native|Public // @ game+0x4a97300
	void ContextualPromptCountersToggleDebugDraw(); // Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw // Final|Exec|Native|Public // @ game+0x4a972e0
	void CompleteVoyage(); // Function AthenaCheat.AthenaCheatManager.CompleteVoyage // Final|Exec|Native|Public // @ game+0x4a972c0
	void CompleteCurrentChecklistMap(); // Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap // Final|Exec|Native|Public // @ game+0x4a972a0
	void CompleteAllActivePuzzleVaults(); // Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults // Final|Exec|Native|Public // @ game+0x4a97280
	void CompleteActiveQuests(); // Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests // Final|Exec|Native|Public // @ game+0x4a97260
	void CloseSkeletonFortDoor(); // Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor // Final|Exec|Native|Public // @ game+0x4a97240
	void CloseLoadingScreen(); // Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen // Final|Exec|Native|Public // @ game+0x4a97220
	void ClearWorldSequences(); // Function AthenaCheat.AthenaCheatManager.ClearWorldSequences // Final|Exec|Native|Public // @ game+0x4a97200
	void ClearVoiceChatMeters(); // Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters // Final|Exec|Native|Public // @ game+0x4a971e0
	void ClearStoryDisplayFilter(); // Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter // Final|Exec|Native|Public // @ game+0x4a971c0
	void ClearSlowMotionOverride(); // Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride // Final|Exec|Native|Public // @ game+0x4a971a0
	void ClearShipVoyages(); // Function AthenaCheat.AthenaCheatManager.ClearShipVoyages // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a97180
	void ClearRitualTableRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a97160
	void ClearGrogSecondary(); // Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary // Final|Exec|Native|Public // @ game+0x4a97140
	void ClearGlitterbeardRequiredPlayersOverride(); // Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride // Final|Exec|Native|Public // @ game+0x4a97120
	void ClearDebugStormLocation(); // Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation // Final|Exec|Native|Public // @ game+0x4a97100
	void ClearCampaignOverrides(); // Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides // Final|Exec|Native|Public // @ game+0x4a970e0
	void ClearAxisBinding(struct FString InBindingName); // Function AthenaCheat.AthenaCheatManager.ClearAxisBinding // Final|Exec|Native|Public // @ game+0x4a97040
	void ClearAIAbilityTimeMultipliers(); // Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers // Final|Exec|Native|Public // @ game+0x4a97000
	void ClearAdventureOnDemandCrewDiveCooldown(); // Function AthenaCheat.AthenaCheatManager.ClearAdventureOnDemandCrewDiveCooldown // Final|Exec|Native|Public // @ game+0x4a97020
	void CheckLandmarkValidTreasureLocationsAtPlayerPos(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos // Final|Exec|Native|Public // @ game+0x4a96fe0
	void CheckLandmarkRelativeToIslandCalculation(); // Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation // Final|Exec|Native|Public // @ game+0x4a96fc0
	void CapsizeShip(); // Function AthenaCheat.AthenaCheatManager.CapsizeShip // Final|Exec|Native|Public // @ game+0x4a96fa0
	void CancelVoyage(); // Function AthenaCheat.AthenaCheatManager.CancelVoyage // Final|Exec|Native|Public // @ game+0x4a96f80
	void CancelTale(); // Function AthenaCheat.AthenaCheatManager.CancelTale // Final|Exec|Native|Public // @ game+0x4a96f60
	void CancelLeaveFactionCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelLeaveFactionCooldown // Final|Exec|Native|Public // @ game+0x4a96f40
	void CancelInvasionMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a96f20
	void CancelInitialMatchmakingCooldown(); // Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown // Final|Exec|Native|Public // @ game+0x4a96f00
	void CancelEmergentVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages // Final|Exec|Native|Public // @ game+0x4a96ee0
	void CancelDebugInvasion(struct FString InCrewId); // Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion // Final|Exec|Native|Public // @ game+0x4a96e40
	void CancelCurrentMatchmakingCooldownForAllCrews(); // Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews // Final|Exec|Native|Public // @ game+0x4a96e20
	void CancelAllDebugInvasions(); // Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions // Final|Exec|Native|Public // @ game+0x4a96e00
	void CancelAllCrewVoyages(); // Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages // Final|Exec|Native|Public // @ game+0x4a96de0
	void CancelActiveAIShipEncounters(); // Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters // Final|Exec|Native|Public // @ game+0x4a96dc0
	void BuryNearestBuriable(); // Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable // Final|Exec|Native|Public // @ game+0x4a96da0
	void BuryItem(struct FString NameOfItemToBury); // Function AthenaCheat.AthenaCheatManager.BuryItem // Final|Exec|Native|Public // @ game+0x4a96d00
	void BreakLeg(); // Function AthenaCheat.AthenaCheatManager.BreakLeg // Final|Exec|Native|Public // @ game+0x4a96ce0
	void BlockMigrationForPlayer(bool Enabled); // Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer // Final|Exec|Native|Public // @ game+0x4a96c50
	void ApplyStatusToPlayer(struct FString StatusIdentifier, float Duration); // Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a96b60
	void ApplyDamageToAllDamageZones(float Damage); // Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones // Final|Exec|Native|Public // @ game+0x4a96ae0
	void ApplyCursedCannonballStatusToShip(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip // Final|Exec|Native|Public // @ game+0x4a96a40
	void ApplyCursedCannonballStatusToPlayer(struct FString CannonballTypeString); // Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer // Final|Exec|Native|Public // @ game+0x4a969a0
	void AllowTunnelMatchmakingForCrew(); // Function AthenaCheat.AthenaCheatManager.AllowTunnelMatchmakingForCrew // Final|Exec|Native|Public // @ game+0x4a96980
	void AllowTeleportWithItems(bool CanTeleport); // Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a968f0
	void AllowShipMotion(); // Function AthenaCheat.AthenaCheatManager.AllowShipMotion // Final|Exec|Native|Public // @ game+0x4a968d0
	void AllocatePortalToTunnelOfTheDamned(struct FString TunnelDescAssetPath); // Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned // Final|Exec|Native|Public // @ game+0x4a96830
	void AllJoinAlliance(); // Function AthenaCheat.AthenaCheatManager.AllJoinAlliance // Final|Exec|Native|Public // @ game+0x4a96810
	void AIPlayerShip(); // Function AthenaCheat.AthenaCheatManager.AIPlayerShip // Final|Exec|Native|Public // @ game+0x4a95940
	void AggressiveGhostShipRebuildSpline(); // Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline // Final|Exec|Native|Public // @ game+0x4a967f0
	void AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration); // Function AthenaCheat.AthenaCheatManager.AdjustGhostShader // Final|Exec|Native|Public // @ game+0x4a965e0
	void AddVoyageToShip(struct FString SourceAssetName); // Function AthenaCheat.AthenaCheatManager.AddVoyageToShip // Final|Exec|Native|Public|BlueprintCallable // @ game+0x4a96540
	void AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a96520
	void AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a96500
	void AddTradeRouteClueMarkToMapAtCurrentLocation(); // Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation // Final|Exec|Native|Public // @ game+0x4a964e0
	void AddTornMapPiece(); // Function AthenaCheat.AthenaCheatManager.AddTornMapPiece // Final|Exec|Native|Public // @ game+0x4a964c0
	void AddShipToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddShipToCrew // Final|Exec|Native|Public // @ game+0x4a963c0
	void AddRandomPetForAllPlayers(); // Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a963a0
	void AddPlayerToCrew(struct FString ActorIdString, struct FString CrewId); // Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew // Final|Exec|Native|Public // @ game+0x4a962a0
	void AddPetForPlayer(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForPlayer // Final|Exec|Native|Public // @ game+0x4a961e0
	void AddPetForAllPlayers(int32_t PetTypeIndex, int32_t PetPartIndex); // Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers // Final|Exec|Native|Public // @ game+0x4a96120
	void AddNoParameterEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a96100
	void AddMysteriousNote(struct FString NoteType, struct FString NoteTitle, struct FString NoteBody, struct FString CompletionStrings); // Function AthenaCheat.AthenaCheatManager.AddMysteriousNote // Final|Exec|Native|Public // @ game+0x4a95f50
	void AddLongEventLogEntryToCaptainsLog(); // Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog // Final|Exec|Native|Public // @ game+0x4a95f30
	void AddInvasionBattleBounds(); // Function AthenaCheat.AthenaCheatManager.AddInvasionBattleBounds // Final|Exec|Native|Public // @ game+0x4a95f10
	void AddInactiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a95e70
	void AddDrunkenness(int32_t DrunkennessType, float DrunkennessChange); // Function AthenaCheat.AthenaCheatManager.AddDrunkenness // Final|Exec|Native|Public // @ game+0x4a95da0
	void AddAllKnownStories(); // Function AthenaCheat.AthenaCheatManager.AddAllKnownStories // Final|Exec|Native|Public // @ game+0x4a95d80
	void AddAISpawnContext(struct FString ContextName); // Function AthenaCheat.AthenaCheatManager.AddAISpawnContext // Final|Exec|Native|Public // @ game+0x4a95b50
	void AddActiveStory(struct FString StoryName, bool AddIfNonExistentStory); // Function AthenaCheat.AthenaCheatManager.AddActiveStory // Final|Exec|Native|Public // @ game+0x4a95c90
	void AddActiveCampaignOverride(struct FString CampaignName); // Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride // Final|Exec|Native|Public // @ game+0x4a95bf0
	void ActivateSkellyFort(struct FString FortEventName, struct FString FortName); // Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort // Final|Exec|Native|Public|HasOutParms // @ game+0x4a95a20
	void ActivateEmissaryFlagCompany(struct FString CompanyId); // Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany // Final|Exec|Native|Public // @ game+0x4a95980
	void ActivateDebugTeleportationDestinationService(); // Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService // Final|Exec|Native|Public // @ game+0x4a95960
};


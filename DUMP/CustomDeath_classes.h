// Class CustomDeath.CustomDeathInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomDeathInterface : UInterface {

	void SetShouldUseRevivalFlow(struct FSetShouldUseRevivalFlowGameServerRequestModel SetShouldUseRevivalFlowGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow // Native|Public|HasOutParms // @ game+0x4804130
	void SetShouldSkipFerryOfTheDamned(struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel SetShouldSkipFerryOfTheDamnedGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned // Native|Public|HasOutParms // @ game+0x48040a0
	void SetGameModeDeathPenaltyRespawnTimer(struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel GameModeDeathPenaltyRespawnTimerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer // Native|Public|HasOutParms // @ game+0x4804010
	bool SetCustomPlayerStart(struct FSetCustomPlayerStartGameServerRequestModel SetCustomPlayerStartGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart // Native|Public|HasOutParms // @ game+0x4803f70
	void SetCustomConfigForPlayer(int32_t PlayerId, struct FCustomDeathConfiguration CustomDeathConfiguration); // Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer // Native|Public|HasOutParms // @ game+0x4803e70
	void SetCrewBasedDeathPenaltyRespawnTimes(struct FCrewBasedRespawnTimes CrewBasedRespawnTimes); // Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes // Native|Public|HasOutParms // @ game+0x4803dd0
	void ResetCustomConfigForPlayer(struct FResetCustomConfigForPlayerGameServerRequestModel ResetCustomConfigForPlayerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer // Native|Public|HasOutParms // @ game+0x4803d40
	void KillPlayer(struct FKillPlayerGameServerRequestModel KillPlayerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.KillPlayer // Native|Public|HasOutParms // @ game+0x4803cb0
	void KillCrew(struct FKillCrewGameServerRequestModel KillCrewGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.KillCrew // Native|Public|HasOutParms // @ game+0x4803c10
	bool GetShouldUseRevivalFlow(int32_t PlayerId, bool bDefaultValue); // Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow // Native|Public // @ game+0x4803b40
	bool GetShouldSkipFerryOfTheDamned(int32_t PlayerId); // Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned // Native|Public // @ game+0x4803aa0
	struct APlayerStart* GetCustomPlayerStart(int32_t PlayerId); // Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart // Native|Public // @ game+0x4803a00
	void ForcePlayerRespawn(struct FForcePlayerRespawnGameServerRequestModel ForcePlayerRespawnGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn // Native|Public|HasOutParms // @ game+0x4803970
	int32_t DestroyCustomPlayerStart(struct FDestroyCustomPlayerStartGameServerRequestModel DestroyCustomPlayerStartGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart // Native|Public|HasOutParms // @ game+0x48038b0
	int32_t CreateNewCustomPlayerStart(struct FCustomPlayerStartConfigGameServerRequestModel CustomPlayerStartConfigGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart // Native|Public|HasOutParms // @ game+0x48037f0
};

// Class CustomDeath.CustomDeathService
// Size: 0x460 (Inherited: 0x3c8)
struct ACustomDeathService : AActor {
	char UnknownData_3C8[0x38]; // 0x3c8(0x38)
	struct TArray<struct APlayerStart*> CustomPlayerStarts; // 0x400(0x10)
	char UnknownData_410[0x50]; // 0x410(0x50)
};


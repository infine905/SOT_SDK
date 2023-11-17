// Class CustomDeath.CustomDeathInterface
// Size: 0x28 (Inherited: 0x28)
struct UCustomDeathInterface : UInterface {

	void SetShouldUseRevivalFlow(struct FSetShouldUseRevivalFlowGameServerRequestModel SetShouldUseRevivalFlowGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow // Native|Public|HasOutParms // @ game+0x47c77a0
	void SetShouldSkipFerryOfTheDamned(struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel SetShouldSkipFerryOfTheDamnedGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned // Native|Public|HasOutParms // @ game+0x47c7710
	void SetGameModeDeathPenaltyRespawnTimer(struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel GameModeDeathPenaltyRespawnTimerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer // Native|Public|HasOutParms // @ game+0x47c7680
	bool SetCustomPlayerStart(struct FSetCustomPlayerStartGameServerRequestModel SetCustomPlayerStartGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart // Native|Public|HasOutParms // @ game+0x47c75e0
	void SetCustomConfigForPlayer(int32_t PlayerId, struct FCustomDeathConfiguration CustomDeathConfiguration); // Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer // Native|Public|HasOutParms // @ game+0x47c74e0
	void SetCrewBasedDeathPenaltyRespawnTimes(struct FCrewBasedRespawnTimes CrewBasedRespawnTimes); // Function CustomDeath.CustomDeathInterface.SetCrewBasedDeathPenaltyRespawnTimes // Native|Public|HasOutParms // @ game+0x47c7440
	void ResetCustomConfigForPlayer(struct FResetCustomConfigForPlayerGameServerRequestModel ResetCustomConfigForPlayerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer // Native|Public|HasOutParms // @ game+0x47c73b0
	void KillPlayer(struct FKillPlayerGameServerRequestModel KillPlayerGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.KillPlayer // Native|Public|HasOutParms // @ game+0x47c7320
	void KillCrew(struct FKillCrewGameServerRequestModel KillCrewGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.KillCrew // Native|Public|HasOutParms // @ game+0x47c7280
	bool GetShouldUseRevivalFlow(int32_t PlayerId, bool bDefaultValue); // Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow // Native|Public // @ game+0x47c71b0
	bool GetShouldSkipFerryOfTheDamned(int32_t PlayerId); // Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned // Native|Public // @ game+0x47c7110
	struct APlayerStart* GetCustomPlayerStart(int32_t PlayerId); // Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart // Native|Public // @ game+0x47c7070
	void ForcePlayerRespawn(struct FForcePlayerRespawnGameServerRequestModel ForcePlayerRespawnGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn // Native|Public|HasOutParms // @ game+0x47c6fe0
	int32_t DestroyCustomPlayerStart(struct FDestroyCustomPlayerStartGameServerRequestModel DestroyCustomPlayerStartGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart // Native|Public|HasOutParms // @ game+0x47c6f20
	int32_t CreateNewCustomPlayerStart(struct FCustomPlayerStartConfigGameServerRequestModel CustomPlayerStartConfigGameServerRequestModel); // Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart // Native|Public|HasOutParms // @ game+0x47c6e60
};

// Class CustomDeath.CustomDeathService
// Size: 0x460 (Inherited: 0x3c8)
struct ACustomDeathService : AActor {
	char UnknownData_3C8[0x38]; // 0x3c8(0x38)
	struct TArray<struct APlayerStart*> CustomPlayerStarts; // 0x400(0x10)
	char UnknownData_410[0x50]; // 0x410(0x50)
};

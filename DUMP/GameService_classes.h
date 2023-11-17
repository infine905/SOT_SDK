// Class GameService.ServiceProviderGameState
// Size: 0x540 (Inherited: 0x420)
struct AServiceProviderGameState : AGameState {
	char UnknownData_420[0x120]; // 0x420(0x120)
};

// Class GameService.GameServiceLifecycleInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameServiceLifecycleInterface : UInterface {
};

// Class GameService.GameServiceMapFunctions
// Size: 0x28 (Inherited: 0x28)
struct UGameServiceMapFunctions : UBlueprintFunctionLibrary {

	void UnregisterService(struct FGameServiceMap ServiceMap, struct UObject* Service); // Function GameService.GameServiceMapFunctions.UnregisterService // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32f2f80
	void RegisterService(struct FGameServiceMap ServiceMap, struct UObject* Service, struct UClass* Class); // Function GameService.GameServiceMapFunctions.RegisterService // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32f2d30
	struct UObject* GetService(struct FGameServiceMap ServiceMap, struct UClass* Class); // Function GameService.GameServiceMapFunctions.GetService // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32f2af0
	int32_t GetNumServices(struct FGameServiceMap ServiceMap); // Function GameService.GameServiceMapFunctions.GetNumServices // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32f2910
};

// Class GameService.GameServiceProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameServiceProviderInterface : UInterface {

	void UnregisterService(struct UObject* Service); // Function GameService.GameServiceProviderInterface.UnregisterService // Native|Public|BlueprintCallable // @ game+0x32f2ef0
	void RegisterService(struct UObject* Service, struct UClass* Class); // Function GameService.GameServiceProviderInterface.RegisterService // Native|Public|BlueprintCallable // @ game+0x32f2c70
	struct UObject* GetService(struct UClass* Class); // Function GameService.GameServiceProviderInterface.GetService // Native|Public|BlueprintCallable // @ game+0x32f2a50
};

// Class GameService.GameServiceTickInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameServiceTickInterface : UInterface {
};


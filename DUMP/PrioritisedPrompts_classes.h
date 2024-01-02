// Class PrioritisedPrompts.BasePromptCoordinator
// Size: 0x118 (Inherited: 0x28)
struct UBasePromptCoordinator : UObject {
	struct AAthenaPlayerController* PlayerController; // 0x28(0x08)
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct UPrioritisedPromptsManager* PrioritisedPromptsManager; // 0x40(0x08)
	struct ACharacter* CharacterWithRegisteredEvents; // 0x48(0x08)
	char UnknownData_50[0xc8]; // 0x50(0xc8)

	void UpdateVisiblePrompt(); // Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt // Final|Native|Public|BlueprintCallable // @ game+0x3e173a0
	void UnregisterOtherEvents_Implementable(); // Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x190d0a0
	void Uninitialize_Implementable(); // Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void Uninitialize(); // Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize // Final|Native|Public|BlueprintCallable // @ game+0x3e17380
	void Start(); // Function PrioritisedPrompts.BasePromptCoordinator.Start // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3e17360
	void SetPromptAs(struct FPrioritisedPromptWithHandle Prompt); // Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3e17290
	void RegisterOtherEvents_Implementable(); // Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle CharacterDispatcher); // Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable // Event|Public|HasOutParms|BlueprintEvent // @ game+0x190d0a0
	void OnControllerEndPlay(char EndPlayReason); // Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay // Final|Native|Private // @ game+0x3e17210
	void MarkAsComplete_Implementable(); // Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable // Event|Public|BlueprintEvent // @ game+0x190d0a0
	struct FPromptEvaluation MakeShowPrompt(struct FPrioritisedPromptWithHandle Prompt); // Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x3e17100
	struct FPromptEvaluation MakeHideCurrentPrompts(); // Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3e17090
	struct FPromptEvaluation MakeCompleteCoordinator(); // Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x3e17020
	void Initialize(struct AAthenaPlayerController* PlayerController, struct UPrioritisedPromptsManager* PrioritisedPromptsManager); // Function PrioritisedPrompts.BasePromptCoordinator.Initialize // Final|Native|Public|BlueprintCallable // @ game+0x3e16f60
	bool GetCompleted(); // Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3e16d90
	struct FPromptEvaluation EvaluatePromptDisplayState(); // Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void DismissAllPrompts(); // Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts // Final|Native|Public|BlueprintCallable // @ game+0x3e16d70
};

// Class PrioritisedPrompts.GetPromptsLocalService
// Size: 0x40 (Inherited: 0x28)
struct UGetPromptsLocalService : UBlueprintAsyncActionBase {
	struct FMulticastDelegate Loaded; // 0x28(0x10)
	struct UObject* WorldContextObject; // 0x38(0x08)

	struct UGetPromptsLocalService* GetPromptsLocalService(struct UObject* WorldContextObject); // Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService // Final|Native|Static|Public|BlueprintCallable // @ game+0x3e16e50
};

// Class PrioritisedPrompts.PrioritisedPromptsManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct UPrioritisedPromptsManagerInterface : UInterface {
};

// Class PrioritisedPrompts.PrioritisedPromptsManager
// Size: 0x78 (Inherited: 0x28)
struct UPrioritisedPromptsManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FPrioritisedPromptWithHandle> AllPrompts; // 0x30(0x10)
	struct APlayerController* PlayerController; // 0x40(0x08)
	char UnknownData_48[0x30]; // 0x48(0x30)
};

// Class PrioritisedPrompts.PromptCounterAccessKey
// Size: 0x38 (Inherited: 0x28)
struct UPromptCounterAccessKey : UObject {
	struct FString Key; // 0x28(0x10)
};

// Class PrioritisedPrompts.GenericVoyagePrioritisedPrompt_PromptAccessKey
// Size: 0x38 (Inherited: 0x38)
struct UGenericVoyagePrioritisedPrompt_PromptAccessKey : UPromptCounterAccessKey {
};

// Class PrioritisedPrompts.PromptsLocalServiceInterface
// Size: 0x28 (Inherited: 0x28)
struct UPromptsLocalServiceInterface : UInterface {

	void IncrementCountForKey(struct UClass* AccessKey); // Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey // Native|Public|BlueprintCallable // @ game+0x3e16ed0
	int32_t GetCountForKey(struct UClass* AccessKey); // Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3e16db0
};

// Class PrioritisedPrompts.PromptsLocalService
// Size: 0x98 (Inherited: 0x28)
struct UPromptsLocalService : UObject {
	char UnknownData_28[0x70]; // 0x28(0x70)
};


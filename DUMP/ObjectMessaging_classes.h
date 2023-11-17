// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingDispatcherInterface : UInterface {
};

// Class ObjectMessaging.ObjectMessagingDispatcherComponent
// Size: 0x170 (Inherited: 0xc8)
struct UObjectMessagingDispatcherComponent : UActorComponent {
	char UnknownData_C8[0xa8]; // 0xc8(0xa8)
};

// Class ObjectMessaging.ObjectMessagingInterface
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingInterface : UInterface {
};

// Class ObjectMessaging.ObjectMessagingFunctions
// Size: 0x28 (Inherited: 0x28)
struct UObjectMessagingFunctions : UBlueprintFunctionLibrary {

	void UnregisterEventsForObject(struct FObjectMessagingObjectScoper ObjectScoper, struct UObject* EventSource); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventsForObject // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c59e0
	void UnregisterEvents(struct FObjectMessagingObjectScoper ObjectScoper); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvents // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c58f0
	void UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle Dispatcher, struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEventFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c57e0
	void UnregisterEvent(struct FObjectMessagingDispatcher Dispatcher, struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.UnregisterEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c56f0
	void RegisterEventWithObjectScoper(struct UObject* EventSource, struct FObjectMessagingObjectScoper ObjectScoper, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventWithObjectScoper // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c54e0
	void RegisterEventFromHandle(struct FObjectMessagingDispatcherHandle MessageDispatcher, struct FObjectMessagingHandle Handle, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEventFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c52f0
	void RegisterEvent(struct FObjectMessagingDispatcher MessageDispatcher, struct FObjectMessagingHandle Handle, struct UObject* FunctionOwner, struct FString FunctionName, struct UStruct* EventType); // Function ObjectMessaging.ObjectMessagingFunctions.RegisterEvent // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c5120
	bool IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.IsObjectMessagingDispatcherValid // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c5090
	bool IsHandleRegistered(struct FObjectMessagingHandle Handle); // Function ObjectMessaging.ObjectMessagingFunctions.IsHandleRegistered // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c4fe0
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcherFromActor(struct UObject* Object); // Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcherFromActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x32c4f50
	struct FObjectMessagingDispatcherHandle GetObjectMessagingDispatcher(TScriptInterface<struct UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher); // Function ObjectMessaging.ObjectMessagingFunctions.GetObjectMessagingDispatcher // Final|Native|Static|Public|BlueprintCallable // @ game+0x32c4eb0
	void FireEventWithDataFromHandle(struct FObjectMessagingDispatcherHandle MessageDispatcher, struct UStruct* EventDataStruct, struct FString Scope, struct FString ScopeId, struct FGenericStruct Value); // Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithDataFromHandle // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c4ce0
	void FireEventWithData(struct FObjectMessagingDispatcher MessageDispatcher, struct UStruct* EventDataStruct, struct FString Scope, struct FString ScopeId, struct FGenericStruct Value); // Function ObjectMessaging.ObjectMessagingFunctions.FireEventWithData // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x32c4b30
};


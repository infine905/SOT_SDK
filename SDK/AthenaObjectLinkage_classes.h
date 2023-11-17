// Class AthenaObjectLinkage.EndPlayHandler
// Size: 0x40 (Inherited: 0x28)
struct UEndPlayHandler : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)

	void OnEndPlay(char EndPlayReason); // Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay // Final|Native|Public // @ game+0x4402a10
};

// Class AthenaObjectLinkage.LinkEndpointIdUtilities
// Size: 0x28 (Inherited: 0x28)
struct ULinkEndpointIdUtilities : UBlueprintFunctionLibrary {

	bool IsValid(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4402790
	bool IsPathed(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x44026f0
	struct FLinkEndpointId CreateEndpointId(struct FString String); // Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId // Final|Native|Static|Public|BlueprintCallable // @ game+0x4402570
	struct FString Conv_LinkEndpointIdToString(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4402480
	struct FLinkEndpointId CombineEndpointIds(struct FLinkEndpointId Root, struct FLinkEndpointId path); // Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4402380
};

// Class AthenaObjectLinkage.LinkEndpointInterface
// Size: 0x28 (Inherited: 0x28)
struct ULinkEndpointInterface : UInterface {

	void ReceiveLink(struct FLinkEndpointId Id, struct AActor* Instance); // Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402e60
	void LoseLink(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402980
};

// Class AthenaObjectLinkage.LinkerComponent
// Size: 0x1a0 (Inherited: 0xc8)
struct ULinkerComponent : UActorComponent {
	char UnknownData_C8[0xc8]; // 0xc8(0xc8)
	struct TArray<struct UEndPlayHandler*> EndPlayHandlers; // 0x190(0x10)

	void UnregisterLink(struct FLinkEndpointId SourceId, struct FLinkEndpointId TargetID); // Function AthenaObjectLinkage.LinkerComponent.UnregisterLink // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4403430
	void UnregisterEndpoint(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4403390
	void SetParent(struct AActor* Parent); // Function AthenaObjectLinkage.LinkerComponent.SetParent // Final|Native|Public|BlueprintCallable // @ game+0x4403310
	char RegisterLink(struct FLinkEndpointId SourceId, struct FLinkEndpointId TargetID); // Function AthenaObjectLinkage.LinkerComponent.RegisterLink // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4403020
	char RegisterEndpoint(struct FLinkEndpointId Id, struct AActor* Source); // Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4402f30
	void OnEndpointRemovedFromChild(struct AActor* Child, struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4402d80
	void OnEndpointAddedToChild(struct AActor* Child, struct FLinkEndpointId Id, struct AActor* Instance); // Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x4402ba0
	struct AActor* LookupEndpoint(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x44028d0
	int32_t GetNumSetLinks(); // Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x44026c0
	int32_t GetNumRegisteredLinks(); // Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4402690
	int32_t GetNumRegisteredEndpoints(); // Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4402660
	int32_t GetNumPendingLinks(); // Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x4402630
};

// Class AthenaObjectLinkage.LinkerInterface
// Size: 0x28 (Inherited: 0x28)
struct ULinkerInterface : UInterface {

	void SetParent(struct AActor* Parent); // Function AthenaObjectLinkage.LinkerInterface.SetParent // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4403290
	void RemoveLink(struct FLinkEndpointId SourceId, struct FLinkEndpointId TargetID); // Function AthenaObjectLinkage.LinkerInterface.RemoveLink // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x44031b0
	void RemoveEndpoint(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4403120
	void OnEndpointRemovedFromChild(struct AActor* Child, struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402cb0
	void OnEndpointAddedToChild(struct AActor* Child, struct FLinkEndpointId Id, struct AActor* Instance); // Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402a90
	struct AActor* LookupEndpoint(struct FLinkEndpointId Id); // Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402830
	bool AddLink(struct FLinkEndpointId SourceId, struct FLinkEndpointId TargetID); // Function AthenaObjectLinkage.LinkerInterface.AddLink // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x4402290
	bool AddEndpoint(struct FLinkEndpointId Id, struct AActor* Instance); // Function AthenaObjectLinkage.LinkerInterface.AddEndpoint // Native|Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x44021b0
};


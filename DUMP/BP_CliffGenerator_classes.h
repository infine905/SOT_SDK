// BlueprintGeneratedClass BP_CliffGenerator.BP_CliffGenerator_C
// Size: 0x5a3 (Inherited: 0x3c8)
struct ABP_CliffGenerator_C : AActor {
	struct USplineComponent* Base_Spline; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	bool Use Specific Start Actor; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct UStaticMesh* Source Start Actor; // 0x3e0(0x08)
	bool Use Specific End Actor; // 0x3e8(0x01)
	char UnknownData_3E9[0x7]; // 0x3e9(0x07)
	struct UStaticMesh* Source End Actor; // 0x3f0(0x08)
	struct TArray<struct UStaticMesh*> Source Actors; // 0x3f8(0x10)
	float MaxTopSplineHeight; // 0x408(0x04)
	bool SpecifyNumberOfElements; // 0x40c(0x01)
	char UnknownData_40D[0x3]; // 0x40d(0x03)
	int32_t NumberOfElements; // 0x410(0x04)
	float ObjectSpacer; // 0x414(0x04)
	float TangetWeights; // 0x418(0x04)
	int32_t Random_Seed; // 0x41c(0x04)
	struct TArray<struct FBP_CliffGenerator_Struct> DataArray; // 0x420(0x10)
	bool Use_Deformable(SplineMesh); // 0x430(0x01)
	bool Instance_Meshes; // 0x431(0x01)
	bool Flip_Meshes; // 0x432(0x01)
	char UnknownData_433[0x1]; // 0x433(0x01)
	struct FRandomStream ArrayStore; // 0x434(0x08)
	float SplineRemaninderScale; // 0x43c(0x04)
	int32_t NumElementsNeeded; // 0x440(0x04)
	struct FBP_CliffGenerator_Struct Default_Mesh; // 0x444(0x10)
	struct FVector BlueprintPosition; // 0x454(0x0c)
	struct FRotator InverseBlueprintRotation; // 0x460(0x0c)
	bool UseSpecifiedMeshAtIndex; // 0x46c(0x01)
	bool LoopDataArraySize; // 0x46d(0x01)
	bool Collisions; // 0x46e(0x01)
	bool [DEBUG ] SplineNumbers; // 0x46f(0x01)
	bool [DEBUG ] Flip Text; // 0x470(0x01)
	bool IsStartIndex; // 0x471(0x01)
	bool IsEndIndex; // 0x472(0x01)
	char UnknownData_473[0x5]; // 0x473(0x05)
	struct USplineComponent* GeneratedTopSpline; // 0x478(0x08)
	float MinTopSplineHeight; // 0x480(0x04)
	bool AllowTerrainToDrop; // 0x484(0x01)
	bool AllowTerrainToRaise; // 0x485(0x01)
	bool IgnoreTerrainForTopSpline; // 0x486(0x01)
	char UnknownData_487[0x1]; // 0x487(0x01)
	float TerrainBlendWidth; // 0x488(0x04)
	float TerrainBlendFallOff; // 0x48c(0x04)
	float TopSplineRollAmount; // 0x490(0x04)
	float IntersectionAmount; // 0x494(0x04)
	bool [[-----REBUILD SPLINE ----]]; // 0x498(0x01)
	char UnknownData_499[0x7]; // 0x499(0x07)
	struct ALandscape* terrain_component; // 0x4a0(0x08)
	bool UseDetailedTopSpline; // 0x4a8(0x01)
	char UnknownData_4A9[0x3]; // 0x4a9(0x03)
	int32_t NumberOfDetailedSplinePoints; // 0x4ac(0x04)
	bool [DEBUG ] Display Intersection Names; // 0x4b0(0x01)
	char UnknownData_4B1[0x7]; // 0x4b1(0x07)
	struct FString TagToIgnore; // 0x4b8(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x4c8(0x10)
	bool [[------DEFORM TERRAIN ------]]; // 0x4d8(0x01)
	char UnknownData_4D9[0x3]; // 0x4d9(0x03)
	struct FHitResult HirResult; // 0x4dc(0x80)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct TArray<struct FVector> TopSplineIntersectionPoints; // 0x560(0x10)
	struct TArray<struct AActor*> Local_InternalActorsToIgnore; // 0x570(0x10)
	struct FLinearColor TopSplineColour; // 0x580(0x10)
	struct FLinearColor BottomSplineColour; // 0x590(0x10)
	bool Is Reflected; // 0x5a0(0x01)
	char DrawDebugLines; // 0x5a1(0x01)
	bool Affect Rain; // 0x5a2(0x01)

	void Draw_Debug_Numbers(int32_t CurrentIndex, int32_t NextIndex, struct FVector StartLocation, struct FVector EndLocation, struct FVector StartTangent); // Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void Deform_Terrain(); // Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void Build_Element(int32_t Index, struct UStaticMesh* ElementMesh); // Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript // Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
};


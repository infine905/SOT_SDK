// BlueprintGeneratedClass BP_GuildMastPlaque.BP_GuildMastPlaque_C
// Size: 0x738 (Inherited: 0x4f8)
struct ABP_GuildMastPlaque_C : AGuildPlaque {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct FSlateFontInfo Font; // 0x500(0x40)
	struct UMaterialInstanceDynamic* GuildPlaque_MID; // 0x540(0x08)
	struct UMaterial* Bevel_Material; // 0x548(0x08)
	int32_t TextCanvasWidth; // 0x550(0x04)
	int32_t TextCanvasHeight; // 0x554(0x04)
	struct UCanvasWorldMapComponent* Canvas; // 0x558(0x08)
	struct TArray<struct FString> guildRank; // 0x560(0x10)
	float bevelIntensity; // 0x570(0x04)
	struct FFeatureFlag FeatureToggle; // 0x574(0x0c)
	struct UTexture2D* BronzeMRMap; // 0x580(0x20)
	struct UTexture2D* SilverMRMap; // 0x5a0(0x20)
	struct UTexture2D* GoldMRMap; // 0x5c0(0x20)
	struct UTexture2D* BronzeNormalMap; // 0x5e0(0x20)
	struct UTexture2D* SilverNormalMap; // 0x600(0x20)
	struct UTexture2D* GoldNormalMap; // 0x620(0x20)
	struct UMaterialInstanceDynamic* TextBevel_MID; // 0x640(0x08)
	struct UMaterialInstanceDynamic* IconBevel_MID; // 0x648(0x08)
	struct UMaterialInstanceDynamic* RankBevel_MID; // 0x650(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* RankRenderTarget; // 0x658(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* TextRenderTarget; // 0x660(0x08)
	int32_t RankTextWidth; // 0x668(0x04)
	int32_t RankTextHeight; // 0x66c(0x04)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelTextRenderTarget; // 0x670(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* IconRenderTarget; // 0x678(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelRankRenderTarget; // 0x680(0x08)
	struct UMaybeCompressedCanvasRenderTarget2D* BevelIconRenderTarget; // 0x688(0x08)
	struct FLinearColor Gold Colour; // 0x690(0x10)
	struct FLinearColor Silver Colour; // 0x6a0(0x10)
	struct FLinearColor Bronze Colour; // 0x6b0(0x10)
	struct FLinearColor TextColour; // 0x6c0(0x10)
	bool IconColourFollowsMedallion; // 0x6d0(0x01)
	char UnknownData_6D1[0x7]; // 0x6d1(0x07)
	struct UTexture2D* DefaultDiffuseMap; // 0x6d8(0x20)
	struct UTexture2D* DefaultNormalMap; // 0x6f8(0x20)
	struct UTexture2D* DefaultMRMap; // 0x718(0x20)

	void ClearCanvas(struct UCanvas* Canvas, int32_t CanvasWidth, int32_t CavasHeight); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ClearCanvas // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void GetTextScale(struct FVector2D FontSizeInScreenSpace, float AdjustedFontScalar); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetTextScale // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x190d0a0
	void GetMedallionColour(float Gold Threshold, float Silver Threshold, int32_t Rank Index, struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GetMedallionColour // Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure // @ game+0x190d0a0
	void AssignMedallionColour(struct FLinearColor Medallion Colour); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.AssignMedallionColour // Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void Create_MIDs(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.Create_MIDs // Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void UserConstructionScript(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void ReceiveBeginPlay(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Text(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void RefreshGuildPlaqueRender(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.RefreshGuildPlaqueRender // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Rank(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Icon(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Text_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Text_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Rank_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Rank_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void OnCanvasUpdate_Icon_Bevel(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.OnCanvasUpdate_Icon_Bevel // BlueprintCallable|BlueprintEvent // @ game+0x190d0a0
	void GuildPlaqueMeshReady(); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.GuildPlaqueMeshReady // Event|Public|BlueprintEvent // @ game+0x190d0a0
	void ExecuteUbergraph_BP_GuildMastPlaque(int32_t EntryPoint); // Function BP_GuildMastPlaque.BP_GuildMastPlaque_C.ExecuteUbergraph_BP_GuildMastPlaque //  // @ game+0x190d0a0
};


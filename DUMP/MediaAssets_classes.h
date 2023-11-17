// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3257cd0
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3257ba0
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3257a70
};

// Class MediaAssets.MediaComponent
// Size: 0xd8 (Inherited: 0xc8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xc8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xd0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258300
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32582a0
};

// Class MediaAssets.MediaTimeStampInfo
// Size: 0x38 (Inherited: 0x28)
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.MediaPlayer
// Size: 0x170 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xa8(0x08)
	struct FTimespan CacheBehind; // 0xb0(0x08)
	struct FTimespan CacheBehindGame; // 0xb8(0x08)
	bool NativeAudioOut; // 0xc0(0x01)
	bool PlayOnOpen; // 0xc1(0x01)
	char UnknownData_C2[0x2]; // 0xc2(0x02)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	char UnknownData_C4_2 : 6; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	struct UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	struct FRotator ViewRotation; // 0xe8(0x0c)
	char UnknownData_F4[0x64]; // 0xf4(0x64)
	struct FGuid PlayerGuid; // 0x158(0x10)
	char UnknownData_168[0x8]; // 0x168(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x325abe0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x325abb0
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x325aae0
	bool SetViewRotation(struct FRotator Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x325aa00
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // Final|Native|Public|BlueprintCallable // @ game+0x325a8f0
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // Final|Native|Public|BlueprintCallable // @ game+0x325a7f0
	bool SetTrackFormat(char TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // Final|Native|Public|BlueprintCallable // @ game+0x325a6f0
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x325a670
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // Final|Native|Public|BlueprintCallable // @ game+0x325a5e0
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // Final|Native|Public|BlueprintCallable // @ game+0x325a550
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // Final|Native|Public|BlueprintCallable // @ game+0x325a450
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x325a120
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // Final|Native|Public|BlueprintCallable // @ game+0x325a000
	void SetBlockOnTime(struct FTimespan Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3259f70
	bool SelectTrack(char TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // Final|Native|Public|BlueprintCallable // @ game+0x3259eb0
	bool Seek(struct FTimespan Time); // Function MediaAssets.MediaPlayer.Seek // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x3259e10
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // Final|Native|Public|BlueprintCallable // @ game+0x3259de0
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // Final|Native|Public|BlueprintCallable // @ game+0x3259cf0
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // Final|Native|Public|BlueprintCallable // @ game+0x3259ba0
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // Final|Native|Public|BlueprintCallable // @ game+0x3259b80
	bool Play(); // Function MediaAssets.MediaPlayer.Play // Final|Native|Public|BlueprintCallable // @ game+0x3259b50
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // Final|Native|Public|BlueprintCallable // @ game+0x3259b20
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // Final|Native|Public|BlueprintCallable // @ game+0x3259a70
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3259970
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options, bool bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3259790
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // Final|Native|Public|BlueprintCallable // @ game+0x3259700
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // Final|Native|Public|BlueprintCallable // @ game+0x3259640
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // Final|Native|Public|BlueprintCallable // @ game+0x32595a0
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // Final|Native|Public|BlueprintCallable // @ game+0x32594f0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // Final|Native|Public|BlueprintCallable // @ game+0x32594a0
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259470
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259440
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259410
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32593e0
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32593b0
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259380
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259350
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259320
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259230
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x32591c0
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32590a0
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258fc0
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258f00
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3258e30
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258d70
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258d40
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258c60
	struct FString GetTrackLanguage(char TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258b40
	int32_t GetTrackFormat(char TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258a80
	struct FText GetTrackDisplayName(char TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258980
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258950
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x3258910
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x32588d0
	void GetSupportedRates(struct TArray<struct FFloatRange> OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x32587a0
	int32_t GetSelectedTrack(char TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258710
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32586e0
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258580
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258560
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258520
	int32_t GetNumTracks(char TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258490
	int32_t GetNumTrackFormats(char TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32583d0
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258240
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258210
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x32581a0
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258160
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258040
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3257f80
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3257ec0
	void Close(); // Function MediaAssets.MediaPlayer.Close // Final|Native|Public|BlueprintCallable // @ game+0x3257a50
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // Final|Native|Public|BlueprintCallable // @ game+0x32579a0
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // Final|Native|Public|BlueprintCallable // @ game+0x3257910
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32578e0
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // Final|Native|Public|BlueprintCallable // @ game+0x3259d20
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // Final|Native|Public|BlueprintCallable // @ game+0x3259c60
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // Final|Native|Public|BlueprintCallable // @ game+0x3259bd0
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // Final|Native|Public|BlueprintCallable // @ game+0x32594d0
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // Final|Native|Public|BlueprintCallable // @ game+0x3259260
	struct UMediaSource* GetRandom(int32_t OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3258640
	struct UMediaSource* GetPrevious(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x32585a0
	struct UMediaSource* GetNext(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x3258330
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // Final|Native|Public|BlueprintCallable // @ game+0x3257e00
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // Final|Native|Public|BlueprintCallable // @ game+0x3257830
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // Final|Native|Public|BlueprintCallable // @ game+0x3257780
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // Final|Native|Public|BlueprintCallable // @ game+0x32576f0
};

// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x325ac10
	void SetMediaOptionString(struct FName Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x325a350
	void SetMediaOptionFloat(struct FName Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x325a280
	void SetMediaOptionBool(struct FName Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x325a1b0
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3258ca0
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x01)
	char UnknownData_99[0x17]; // 0x99(0x17)

	void SetFilePath(struct FString path); // Function MediaAssets.FileMediaSource.SetFilePath // Final|Native|Public|BlueprintCallable // @ game+0x325a080
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x228 (Inherited: 0x138)
struct UMediaTexture : UTexture {
	char AddressX; // 0x138(0x01)
	char AddressY; // 0x139(0x01)
	bool AutoClear; // 0x13a(0x01)
	char UnknownData_13B[0x1]; // 0x13b(0x01)
	struct FLinearColor ClearColor; // 0x13c(0x10)
	bool EnableGenMips; // 0x14c(0x01)
	char NumMips; // 0x14d(0x01)
	bool NewStyleOutput; // 0x14e(0x01)
	char OutputFormat; // 0x14f(0x01)
	float CurrentAspectRatio; // 0x150(0x04)
	char CurrentOrientation; // 0x154(0x01)
	char UnknownData_155[0x3]; // 0x155(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x158(0x08)
	char UnknownData_160[0xc8]; // 0x160(0xc8)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // Final|Native|Public|BlueprintCallable // @ game+0x325a4d0
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3259200
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32588a0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32582d0
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x32581e0
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x3257e90
};

// Class MediaAssets.MovieAssetContainer
// Size: 0x48 (Inherited: 0x28)
struct UMovieAssetContainer : UDataAsset {
	struct TArray<struct UMediaTexture*> MediaTextures; // 0x28(0x10)
	struct TArray<struct UMediaPlayer*> MediaPlayers; // 0x38(0x10)
};


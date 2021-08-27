#pragma once

// Name: DBZKakarot, Version: 1.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediaPlayerStudioComponent.BP_MediaPlayerStudioComponent_C
// 0x0000
class UBP_MediaPlayerStudioComponent_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MediaPlayerStudioComponent.BP_MediaPlayerStudioComponent_C");
		return ptr;
	}



	void InternalSetRate();
	void GetDuration();
	void Seek();
	void Log();
	void PlaybackControlsChanged();
	void UpdatePlaybackControls();
	void GetTime();
	void IsOpening();
	void MediaOpenFailed();
	void SetRate();
	void IsPlaying();
	void SetMediaSource();
	void SetLooping();
	void IsLooping();
	void GetMediaSource();
	void MediaOpened();
	void GetSize();
	void GetMaterial();
	void EnsureMaterial();
	void OpenSource();
	void Cleanup();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void EndReached();
	void Resumed();
	void Opened();
	void OpenFailed();
	void ExecuteUbergraph_BP_MediaPlayerStudioComponent();
	void MediaSeekCompleted__DelegateSignature();
	void MediaSourceOpened__DelegateSignature();
	void MediaPlaybackResumed__DelegateSignature();
	void MediaEndReached__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

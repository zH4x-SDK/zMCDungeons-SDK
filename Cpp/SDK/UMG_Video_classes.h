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

// WidgetBlueprintGeneratedClass UMG_Video.UMG_Video_C
// 0x0000
class UUMG_Video_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Video.UMG_Video_C");
		return ptr;
	}



	void UpdateMediaTextureClear();
	void IsOutputVisible();
	void SetMediaSource();
	void SetOutputVisibility();
	void GetMediaTexture();
	void SetMediaTexture();
	void CloseAndCleanup();
	void OnMediaOpenFailed();
	void SetHasTexture();
	void SetFirst();
	void SetOpened();
	void RefreshOutputVisibility();
	void OnMediaSeekCompleted();
	void Seek();
	void PlayBackwards();
	void PlayForwards();
	void SeekToEnd();
	void GetDuration();
	void SeekToStart();
	void GetTime();
	void Log();
	void SetMaterialAndMediaTexture();
	void UpdatePlaybackControls();
	void SetRate();
	void SetMediaStudio();
	void OnMediaOpened();
	void OnMediaPlayackResumed();
	void OnMediaEndReached();
	void GetSourceSize();
	void SetSize();
	void OnMediaClosed();
	void ReleaseBookings();
	void UpdateMediaStudioAndOpenSource();
	void PreConstruct();
	void Construct();
	void Tick();
	void Destruct();
	void WasForcefullyStopped();
	void OpenedPreview();
	void ExecuteUbergraph_UMG_Video();
	void OnOutputVisibilityChanged__DelegateSignature();
	void OnMediaTextureSet__DelegateSignature();
	void Played__DelegateSignature();
	void EndReached__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_OutroVideo.UMG_OutroVideo_C
// 0x0000
class UUMG_OutroVideo_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_OutroVideo.UMG_OutroVideo_C");
		return ptr;
	}



	void IsInMainMenu();
	void GetOpenedText();
	void SkipVideo();
	void CanClose();
	void Cleanup();
	void VideoEnded();
	void OnLoadingScreenStarted();
	void FailedOpenVid();
	void PlayVid();
	void OnEndReached();
	void Destruct();
	void Construct();
	void MainMenuSkip();
	void BndEvt__UMG_SkipPlate_K2Node_ComponentBoundEvent_0_SkipClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_OutroVideo();
	void OnRequestMoveToLobby__DelegateSignature();
	void OnVideoEnd__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

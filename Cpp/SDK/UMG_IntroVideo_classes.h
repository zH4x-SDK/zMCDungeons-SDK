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

// WidgetBlueprintGeneratedClass UMG_IntroVideo.UMG_IntroVideo_C
// 0x0000
class UUMG_IntroVideo_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_IntroVideo.UMG_IntroVideo_C");
		return ptr;
	}



	void StartListeningForSkip();
	void GetOpenedText();
	void CanClose();
	void Construct();
	void PlayVid();
	void Video_Ended();
	void FadeOutFinished();
	void SucceedOpenVid();
	void FailedOpenVid();
	void BndEvt__UMG_SkipPlate_K2Node_ComponentBoundEvent_0_SkipClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_IntroVideo();
	void OnVideoEnd__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

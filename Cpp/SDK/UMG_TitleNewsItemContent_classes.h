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

// WidgetBlueprintGeneratedClass UMG_TitleNewsItemContent.UMG_TitleNewsItemContent_C
// 0x0000
class UUMG_TitleNewsItemContent_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TitleNewsItemContent.UMG_TitleNewsItemContent_C");
		return ptr;
	}



	void TriggerFadeIn();
	void UpdateGraphics();
	void SetTitleNews();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UMG_TitleNewsItemContent();
	void FadingIn__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

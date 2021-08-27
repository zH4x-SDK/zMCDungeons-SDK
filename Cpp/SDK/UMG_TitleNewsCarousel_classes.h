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

// WidgetBlueprintGeneratedClass UMG_TitleNewsCarousel.UMG_TitleNewsCarousel_C
// 0x0000
class UUMG_TitleNewsCarousel_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TitleNewsCarousel.UMG_TitleNewsCarousel_C");
		return ptr;
	}



	void GetFirstNewIndex();
	void RefreshSeenCurrent();
	void IsAnyNewsNew();
	void IsNewsConsideredNew();
	void RefreshNavigationMethod();
	void SetAnnounced();
	void ToggleDropDown();
	void SetDurationOnCurrent();
	void RefreshAutoNextBar();
	void SetAutoNextEnabled();
	void NavigateRelativeIndex();
	void UpdateAutoNext();
	void OnTitleNewsFetched();
	void SetTitleNewsFetcher();
	void UpdateGraphics();
	void SetItemIndex();
	void SetTitleNews();
	void Construct();
	void Tick();
	void BndEvt__UMG_CarouselNavigation_K2Node_ComponentBoundEvent_0_OnNavigateRelative__DelegateSignature();
	void BndEvt__UMG_ToggleNewsButton_K2Node_ComponentBoundEvent_2_OnDroppedDownChanged__DelegateSignature();
	void BndEvt__UMG_TitleNewsItem_K2Node_ComponentBoundEvent_3_OnAnnounceNews__DelegateSignature();
	void BndEvt__UMG_ToggleNewsButton_K2Node_ComponentBoundEvent_4_OnDroppedDownStateGraphics__DelegateSignature();
	void BndEvt__UMG_ToggleNewsButton_K2Node_ComponentBoundEvent_6_OnGamepadForcedChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_TitleNewsCarousel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

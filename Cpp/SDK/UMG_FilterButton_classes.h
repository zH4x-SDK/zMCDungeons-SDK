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

// WidgetBlueprintGeneratedClass UMG_FilterButton.UMG_FilterButton_C
// 0x0000
class UUMG_FilterButton_C : public UUMG_IconButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FilterButton.UMG_FilterButton_C");
		return ptr;
	}



	void IncrementNewItemCount();
	void DecrementNewItemCount();
	void SetNewItemCount();
	void GetHasAny();
	void RefreshOpacity();
	void SetHasAny();
	void SetMarkedNew();
	void SetAnimatedVisible();
	void SetAnimatedHover();
	void DelaySelectedTooltip();
	void SetAnyFilterHovered();
	void GetHovered();
	void RefreshTooltip();
	void SetSelected();
	void GetButtonReference();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature();
	void Tick();
	void Construct();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_2();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void PlayTTS();
	void ReadFilter();
	void Should_Not_Play_TTS();
	void ExecuteUbergraph_UMG_FilterButton();
	void OnHoveredChanged__DelegateSignature();
	void OnClickedFilter__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

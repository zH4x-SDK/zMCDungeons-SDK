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

// WidgetBlueprintGeneratedClass UMG_HotbarHexagon.UMG_HotbarHexagon_C
// 0x0000
class UUMG_HotbarHexagon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarHexagon.UMG_HotbarHexagon_C");
		return ptr;
	}



	void RefreshHexagonRetainerBox();
	void RefreshWarningGlowVisibility();
	void RefreshHintGlowVisibility();
	void TriggerWarning();
	void SetHintHighlight();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_Hint_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_Hint_K2Node_WidgetAnimationEvent_4();
	void ExecuteUbergraph_UMG_HotbarHexagon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

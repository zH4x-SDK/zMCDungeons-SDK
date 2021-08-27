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

// WidgetBlueprintGeneratedClass UMG_HotbarPopupText.UMG_HotbarPopupText_C
// 0x0000
class UUMG_HotbarPopupText_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarPopupText.UMG_HotbarPopupText_C");
		return ptr;
	}



	void TriggerWarning();
	void PreConstruct();
	void Construct();
	void WidgetAnimationEvt_WarningOpacity_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_WarningOpacity_K2Node_WidgetAnimationEvent_2();
	void ExecuteUbergraph_UMG_HotbarPopupText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

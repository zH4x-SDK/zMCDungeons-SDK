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

// WidgetBlueprintGeneratedClass UMG_InitialLanguageSettings.UMG_InitialLanguageSettings_C
// 0x0000
class UUMG_InitialLanguageSettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialLanguageSettings.UMG_InitialLanguageSettings_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void SetSelectedButton();
	void RefreshVisuals();
	void SetupCurrentLanguage();
	void SetButtonArray();
	void Construct();
	void BndEvt__English_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void BndEvt__French_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void BndEvt__German_K2Node_ComponentBoundEvent_2_OnButtonClick__DelegateSignature();
	void BndEvt__Italian_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature();
	void BndEvt__Japanese_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature();
	void BndEvt__Korean_K2Node_ComponentBoundEvent_5_OnButtonClick__DelegateSignature();
	void BndEvt__Polish_K2Node_ComponentBoundEvent_6_OnButtonClick__DelegateSignature();
	void BndEvt__PortugeseBrazil_K2Node_ComponentBoundEvent_7_OnButtonClick__DelegateSignature();
	void BndEvt__PortugesePortugal_K2Node_ComponentBoundEvent_8_OnButtonClick__DelegateSignature();
	void BndEvt__Russian_K2Node_ComponentBoundEvent_9_OnButtonClick__DelegateSignature();
	void BndEvt__SpanishMexico_K2Node_ComponentBoundEvent_10_OnButtonClick__DelegateSignature();
	void BndEvt__SpanishSpain_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature();
	void BndEvt__Swedish_K2Node_ComponentBoundEvent_12_OnButtonClick__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_13_OnWasClicked__DelegateSignature();
	void GamepadDone();
	void Back();
	void ScrubList();
	void BndEvt__ChineseSimplified_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void BndEvt__ChineseTraditional_K2Node_ComponentBoundEvent_15_OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_UMG_InitialLanguageSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

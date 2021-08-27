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

// WidgetBlueprintGeneratedClass UMG_InitialAccessibilitySettings.UMG_InitialAccessibilitySettings_C
// 0x0000
class UUMG_InitialAccessibilitySettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialAccessibilitySettings.UMG_InitialAccessibilitySettings_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void RefreshVisuals();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void SetupGamepadListeners();
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__enemyOutlineColour_K2Node_ComponentBoundEvent_9_onSettingChange__DelegateSignature();
	void UpdateLayout();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_19_OnWasClicked__DelegateSignature();
	void GamepadDone();
	void ItemHovered();
	void BndEvt__TextToSpeech_K2Node_ComponentBoundEvent_20_onSettingChange__DelegateSignature();
	void Back();
	void BndEvt__UMG_InitialSettingsBackground_C_1_K2Node_ComponentBoundEvent_3_CloseClicked__DelegateSignature();
	void BndEvt__ChatWheelStyle_K2Node_ComponentBoundEvent_0_onSettingChange__DelegateSignature();
	void BndEvt__ScreenShake_K2Node_ComponentBoundEvent_1_onSettingChange__DelegateSignature();
	void ExecuteUbergraph_UMG_InitialAccessibilitySettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

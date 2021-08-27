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

// WidgetBlueprintGeneratedClass UMG_AccessibilitySettings.UMG_AccessibilitySettings_C
// 0x0000
class UUMG_AccessibilitySettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AccessibilitySettings.UMG_AccessibilitySettings_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void GetK_MButtons();
	void DefaultSettings();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void DidSettingChange();
	void RefreshVisuals();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__enemyOutlineColour_K2Node_ComponentBoundEvent_9_onSettingChange__DelegateSignature();
	void UpdateLayout();
	void CloseSubMenu();
	void BndEvt__TextToSpeech_K2Node_ComponentBoundEvent_18_onSettingChange__DelegateSignature();
	void DialogueInput_Event();
	void TeardownPostPopup();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void GamepadApply();
	void GamepadDefaults();
	void ResetDialogueInput();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__UMG_Settings_Select_K2Node_ComponentBoundEvent_6_OnButtonClick__DelegateSignature();
	void BndEvt__ChatWheelType_K2Node_ComponentBoundEvent_7_onSettingChange__DelegateSignature();
	void BndEvt__ScreenShake_K2Node_ComponentBoundEvent_8_onSettingChange__DelegateSignature();
	void ExecuteUbergraph_UMG_AccessibilitySettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

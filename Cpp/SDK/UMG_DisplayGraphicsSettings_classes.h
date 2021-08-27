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

// WidgetBlueprintGeneratedClass UMG_DisplayGraphicsSettings.UMG_DisplayGraphicsSettings_C
// 0x0000
class UUMG_DisplayGraphicsSettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DisplayGraphicsSettings.UMG_DisplayGraphicsSettings_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void GetK_MButtons();
	void DEBUG_WindowModeSettingState();
	void DEBUG_ResolutionSettingState();
	void InitialiseVideoOptions();
	void SetResolution();
	void DefaultBrightnessSetting();
	void SetToDesktopResolution();
	void DefaultSettings();
	void ConfirmVideoSettings();
	void RevertVideoSettings();
	void ResetConfirmCountdownPopup();
	void ConfirmationDialogueCountdown();
	void RefreshResolutionWidget();
	void SetDisplayMode();
	void SetCustomGraphics();
	void IsGraphicsCustomised();
	void HideHUDScalingInLocalCoop();
	void RefreshDisplayModeOption();
	void DidSettingChange();
	void SetHUDScale();
	void SetGraphicsPreset();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void IsLocalMultiplayerGame();
	void ApplySettings();
	void InitialiseSettingsOptions();
	void RefreshResoultionOption();
	void PopulateSupportedResolutions();
	void RefreshVisuals();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__advancedGraphics_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void UpdateLayout();
	void GamepadApply();
	void BndEvt__resolution_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__displayMode_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__hudScale_K2Node_ComponentBoundEvent_6_onValueChanged__DelegateSignature();
	void BndEvt__graphics_K2Node_ComponentBoundEvent_11_onSettingChange__DelegateSignature();
	void WindowDidResize();
	void CallWindowDidResize();
	void GraphicsSettingChanged();
	void OnGraphicsSettingUserChange();
	void CloseSubMenu();
	void DialogueInput_Event();
	void TeardownPostPopup();
	void BndEvt__brightnessButton_K2Node_ComponentBoundEvent_6_OnButtonClick__DelegateSignature();
	void DisplayConfirmationDialogue();
	void OpenAdvGfxSubMenu();
	void DisplayConfirmVideoSettingsDialogue();
	void DialogueInputEvent();
	void ConfirmTimer();
	void ConfirmTimerExpired();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void GamepadDefaults();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ResetDialogueInput();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_DisplayGraphicsSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_GameSettings.UMG_GameSettings_C
// 0x0000
class UUMG_GameSettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GameSettings.UMG_GameSettings_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void GetK_MButtons();
	void CanConfigureOnlinePlay();
	void DisableTTS();
	void ShouldNotifyOfChangeToTTS();
	void ShowNotifyOfAutoDisableTTS();
	void GetDefaultSystemLanguageIndex();
	void GetLanguageIETF_TagMap();
	void InitialiseLanguageOptions();
	void SetMouseLockMode();
	void ShowRestartVoWarning();
	void DefaultBrightnessSetting();
	void HideHUDScalingInLocalCoop();
	void IsLocalMultiplayerGame();
	void SetHUDScale();
	void SetNavigationBarFromSelected();
	void DefaultSettings();
	void RefreshVisuals();
	void SetTutorialHints();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void DidSettingChange();
	void SetCulture();
	void Construct();
	void SetupGamepadListeners();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void BndEvt__tutorialHints_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__Pathfinder_K2Node_ComponentBoundEvent_7_onSettingChange__DelegateSignature();
	void BndEvt__autoPickUp_K2Node_ComponentBoundEvent_8_onSettingChange__DelegateSignature();
	void CloseSubMenu();
	void TeardownPostPopup();
	void DialogueInput_Event();
	void GamepadDefaults();
	void GamepadApply();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void ResetDialogueInput();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
	void BndEvt__cursorBinding_K2Node_ComponentBoundEvent_11_onSettingChange__DelegateSignature();
	void BndEvt__hudScale_K2Node_ComponentBoundEvent_7_onValueChanged__DelegateSignature();
	void OnOKPressed();
	void OnOKPressedApply();
	void BndEvt__chatWheelShortcuts_K2Node_ComponentBoundEvent_11_onSettingChange__DelegateSignature();
	void BndEvt__LanguageSelector_K2Node_ComponentBoundEvent_15_onSettingChange__DelegateSignature();
	void changePage();
	void ExecuteUbergraph_UMG_GameSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

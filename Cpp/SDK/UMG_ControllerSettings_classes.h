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

// WidgetBlueprintGeneratedClass UMG_ControllerSettings.UMG_ControllerSettings_C
// 0x0000
class UUMG_ControllerSettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ControllerSettings.UMG_ControllerSettings_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetClosedText();
	void GetOpenedText();
	void GetK_MButtons();
	void RefreshVisuals();
	void DefaultSettings();
	void DidSettingChange();
	void SetRightDeadzone();
	void SetLeftDeadzone();
	void SetVibration();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__vibration_K2Node_ComponentBoundEvent_1_onSettingChange__DelegateSignature();
	void BndEvt__deadzoneLeft_K2Node_ComponentBoundEvent_5_onValueChanged__DelegateSignature();
	void BndEvt__deadzoneRight_K2Node_ComponentBoundEvent_3_onValueChanged__DelegateSignature();
	void BndEvt__LightBarEffects_K2Node_ComponentBoundEvent_10_onSettingChange__DelegateSignature();
	void DialogueInput_Event();
	void TeardownPostPopup();
	void changePage();
	void GamepadDefaults();
	void GamepadApply();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void ResetDialogueInput();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ControllerSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

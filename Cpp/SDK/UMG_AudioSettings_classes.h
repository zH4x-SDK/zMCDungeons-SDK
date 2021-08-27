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

// WidgetBlueprintGeneratedClass UMG_AudioSettings.UMG_AudioSettings_C
// 0x0000
class UUMG_AudioSettings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AudioSettings.UMG_AudioSettings_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetK_MButtons();
	void RefreshVisuals();
	void DefaultSettings();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void DidSettingChange();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__master_K2Node_ComponentBoundEvent_1_onValueChanged__DelegateSignature();
	void BndEvt__music_K2Node_ComponentBoundEvent_2_onValueChanged__DelegateSignature();
	void BndEvt__menuMusic_K2Node_ComponentBoundEvent_3_onValueChanged__DelegateSignature();
	void BndEvt__sfx_K2Node_ComponentBoundEvent_4_onValueChanged__DelegateSignature();
	void BndEvt__dialogue_K2Node_ComponentBoundEvent_6_onValueChanged__DelegateSignature();
	void BndEvt__AutoMute_K2Node_ComponentBoundEvent_7_onSettingChange__DelegateSignature();
	void CloseSubMenu();
	void TeardownPostPopup();
	void DialogueInput_Event();
	void GamepadDefaults();
	void GamepadApply();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void ResetDialogueInput();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
	void BndEvt__VideoVolume_K2Node_ComponentBoundEvent_6_onValueChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_AudioSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

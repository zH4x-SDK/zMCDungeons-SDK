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

// WidgetBlueprintGeneratedClass UMG_AdvancedGraphics.UMG_AdvancedGraphics_C
// 0x0000
class UUMG_AdvancedGraphics_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AdvancedGraphics.UMG_AdvancedGraphics_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void GetK_MButtons();
	void DefaultSettings();
	void RefreshVisuals();
	void RevertModifiedSettings();
	void ResolveModifiedSettings();
	void SetDesiredSettingValue();
	void DidSettingChange();
	void EnableFPSCounter();
	void ApplySettings();
	void EnableVSync();
	void SetFPSLimit();
	void SetNavigationBarFromSelected();
	void CheckFocus();
	void Construct();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void SetupGamepadListeners();
	void BndEvt__ambientOcclusion_K2Node_ComponentBoundEvent_1_onSettingChange__DelegateSignature();
	void BndEvt__antiAliasingQuality_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void BndEvt__shadowQuality_K2Node_ComponentBoundEvent_3_onSettingChange__DelegateSignature();
	void BndEvt__particles_K2Node_ComponentBoundEvent_5_onSettingChange__DelegateSignature();
	void BndEvt__fpsLimit_K2Node_ComponentBoundEvent_6_onSettingChange__DelegateSignature();
	void BndEvt__fpsCounter_K2Node_ComponentBoundEvent_7_onSettingChange__DelegateSignature();
	void BndEvt__bloom_K2Node_ComponentBoundEvent_10_onSettingChange__DelegateSignature();
	void BndEvt__vSync_K2Node_ComponentBoundEvent_11_onSettingChange__DelegateSignature();
	void CloseSubMenu();
	void DialogueInput_Event();
	void TeardownPostPopup();
	void GamepadDefaults();
	void GamepadApply();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void ResetDialogueInput();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_AdvancedGraphics();
	void OnSettingChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

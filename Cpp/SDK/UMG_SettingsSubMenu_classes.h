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

// WidgetBlueprintGeneratedClass UMG_SettingsSubMenu.UMG_SettingsSubMenu_C
// 0x0000
class UUMG_SettingsSubMenu_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SettingsSubMenu.UMG_SettingsSubMenu_C");
		return ptr;
	}



	void ShouldShowLicensesButton();
	void GetClosedText();
	void GetOpenedText();
	void ControllerTypeChanged();
	void GetInitialUserName();
	void GetUserManager();
	void ShouldShowCreditsButton();
	void ShouldShowIntroButton();
	void ShouldShowOutroButton();
	void RefreshButtonsVisibility();
	void Construct();
	void changePage();
	void SetupGamepadListeners();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void OnOpenChanged();
	void BndEvt__LogOut_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void QuitPopupResult();
	void CustomEvent_1();
	void BndEvt__AccessibilityHelpButton_K2Node_ComponentBoundEvent_2_OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_UMG_SettingsSubMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

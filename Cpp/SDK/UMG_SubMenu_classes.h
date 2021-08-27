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

// WidgetBlueprintGeneratedClass UMG_SubMenu.UMG_SubMenu_C
// 0x0000
class UUMG_SubMenu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SubMenu.UMG_SubMenu_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void GetSubMenuStack();
	void IsOpen();
	void OnSubmenuClosedCallback();
	void GetWidgetSwitcherText();
	void Buttons();
	void Setup_Buttons_Static();
	void Setup_Buttons();
	void GetK_MButtons();
	void PlayButtonHoveredTextToSpeech();
	void TryCloseSubMenu();
	void TriedToClose();
	void GetFallbackWidgetFocus();
	void SetCurrentSubMenu();
	void PreventLossOfFocus();
	void SetCurrentlySelected();
	void ForceCloseSubMenu();
	void BackInitialSubMenu();
	void CanClose();
	void ItemHovered();
	void UpdateLayout();
	void IsInitialBoot();
	void SetInitialBoot();
	void SetGamepadFocus();
	void SetupGamepadListeners();
	void GetFirstEntry();
	void RefreshVisibility();
	void SetOpen();
	void OnOpenChanged();
	void CloseSubMenu();
	void RegisterSubmenu();
	void OnMenuTransition();
	void Construct();
	void setupHoverEvents();
	void ClearHoverEvents();
	void inputChanged();
	void ExecuteUbergraph_UMG_SubMenu();
	void OnInitialMenuBack__DelegateSignature();
	void OnInputTypeChanged__DelegateSignature();
	void OnSubMenuClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

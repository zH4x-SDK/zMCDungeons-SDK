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

// WidgetBlueprintGeneratedClass UMG_Menu.UMG_Menu_C
// 0x0000
class UUMG_Menu_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Menu.UMG_Menu_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void GetSubMenuStack();
	void ChangeButtonGameMode();
	void CheckforStartupMessages();
	void HandleRegister();
	void UpdateReconnectButton();
	void GetHasInvite();
	void HandleControllerConnectionChanged();
	void DisableOnlineGame();
	void StartGame();
	void CloseAllMenus();
	void OnAnyKeyPressed();
	void UpdateLocalButtons();
	void HasGlobalMessage();
	void HandlePlayerLeave();
	void HandleJoinLocalPlayers();
	void SetCurrentCamera();
	void AllCharactersSelected();
	void IsSubMenuVisible();
	void RefreshCamera();
	void RefreshButtons();
	void UpdateLocalPlayersUI();
	void SetMenuController();
	void HasAnySubMenu();
	void OnSubMenuChanged();
	void GetMenuController();
	void Get_LoadingImage_bIsEnabled_1();
	void Get_Version_Name();
	void ClearSubMenu();
	void SetSubMenu();
	void ShouldReconnectBeVisible();
	void OnButtonSettings();
	void OnButtonExit();
	void BndEvt__UMG_MenuReconnectButton_K2Node_ComponentBoundEvent_4_OnWasClicked__DelegateSignature();
	void Construct();
	void ListenMenuSelect();
	void BndEvt__UMG_PlayerCharacterPickers_K2Node_ComponentBoundEvent_5_OnAnyPickerNavigatingChanged__DelegateSignature();
	void BndEvt__UMG_FriendsSubMenu_K2Node_ComponentBoundEvent_6_OnGamesResultsChanged__DelegateSignature();
	void GamepadInitialise();
	void BndEvt__UMG_PlayerCharacterPickers_K2Node_ComponentBoundEvent_9_OnCustomizePlayerController__DelegateSignature();
	void BndEvt__UMG_PlayerCharacterPickers_K2Node_ComponentBoundEvent_10_OnDesiredCameraChanged__DelegateSignature();
	void BndEvt__UMG_CharacterCustomize_K2Node_ComponentBoundEvent_11_OnDesiredCameraChanged__DelegateSignature();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_7_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_PlayerCharacterPickers_K2Node_ComponentBoundEvent_14_OnLocalLeave__DelegateSignature();
	void OnButtonLB();
	void OnButtonRB();
	void ListenSwitchProfile();
	void GamepadAccessability();
	void RegisterSubmenu();
	void BndEvt__ButtonStartGame_K2Node_ComponentBoundEvent_3_OnStartGameModeStarted__DelegateSignature();
	void BndEvt__UMG_SettingsSubMenu_K2Node_ComponentBoundEvent_1_OnSubMenuClosed__DelegateSignature();
	void BndEvt__UMG_CharacterCustomizeSubMenu_K2Node_ComponentBoundEvent_15_OnSubMenuClosed__DelegateSignature();
	void BndEvt__UMG_FriendsSubMenu_K2Node_ComponentBoundEvent_16_OnSubMenuClosed__DelegateSignature();
	void BndEvt__ButtonAccessibility_K2Node_ComponentBoundEvent_18_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_19_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_20_ClickPassthrough__DelegateSignature();
	void QuitPopupResult();
	void Logout();
	void BndEvt__SwitchProfileButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void refreshMenuVisibility();
	void ControllerCountChange();
	void Close_Sub_Menu();
	void KeyDown();
	void KeyUp();
	void Reconnect();
	void CloseFriendsPanel();
	void MessageClose_Event_1();
	void OnOnlinePrivilgeGranted();
	void OnTaskFinished();
	void BndEvt__UMG_FriendsSubMenu_K2Node_ComponentBoundEvent_0_StartGameClick__DelegateSignature();
	void ProceedToOnlineGame();
	void DialogueInput_Event_1();
	void SignInRequired();
	void ResetDoOnceInSignIn();
	void Tick();
	void PreConstruct();
	void BndEvt__UMG_DualStartGameButton_K2Node_ComponentBoundEvent_8_OnGameModeStarted__DelegateSignature();
	void CustomEvent_1();
	void ShowMSAccountSignInDialog();
	void OnLoginComplete();
	void OnLinkFailed_Event_1();
	void EnableCrossplayDialogInput();
	void OnMenuTransition();
	void Close();
	void ExecuteUbergraph_UMG_Menu();
	void FocusChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

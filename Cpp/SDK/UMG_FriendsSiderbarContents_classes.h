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

// WidgetBlueprintGeneratedClass UMG_FriendsSiderbarContents.UMG_FriendsSiderbarContents_C
// 0x0000
class UUMG_FriendsSiderbarContents_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FriendsSiderbarContents.UMG_FriendsSiderbarContents_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void RefreshCrossplayVisuals();
	void GetAddFriendButtonVisibility();
	void SetupCrossplayInputBindings();
	void ToggleFriendsCrossplayFilter();
	void GetCrossplayFilterHeaderBoxVisibility();
	void GetCrossplayDisabledNoteVisibility();
	void GetCrossplayEnabledNoteVisibility();
	void ReturnFocusIfNone();
	void getGamepadFocusableWidget();
	void PopContent();
	void SetGamepadFocus();
	void SetContents();
	void RestoreContents();
	void NavigateAddFriend();
	void SetWouldLiketoRefreshGames();
	void GetTimeUntilAutoRefresh();
	void GetTimeUntilRefreshPossible();
	void UpdateRefreshGames();
	void CanRefreshGames();
	void RefreshRefreshButton();
	void NavigateRefresh();
	void onChildFocused();
	void RefreshLists();
	void UpdateFriendsCounter();
	void setPrivate();
	void SetNavigationFromHighlighted();
	void setupSidebar();
	void GetUserManager();
	void findFocusableButton();
	void GetGamesResults();
	void SetPlayerController();
	void OnOpenChanged();
	void OnAnyPlayerCharacterChanged();
	void SetPlayerCharacter();
	void rowFocused();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void togglePrivate();
	void Construct();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_12_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_GamesList_K2Node_ComponentBoundEvent_9_OnBusyChanged__DelegateSignature();
	void BndEvt__UMG_RefreshButton_K2Node_ComponentBoundEvent_13_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_PlayersList_K2Node_ComponentBoundEvent_5_onListRefreshed__DelegateSignature();
	void rowFriendFocused();
	void BndEvt__UMG_FriendsList_K2Node_ComponentBoundEvent_14_OnBusyChanged__DelegateSignature();
	void BndEvt__UMG_GamesList_K2Node_ComponentBoundEvent_4_onListRefreshed__DelegateSignature();
	void FriendsCompleted();
	void FriendsFailed();
	void OnGamepadClose();
	void Tick();
	void GamepadMenuCancel();
	void BndEvt__startGameButton_K2Node_ComponentBoundEvent_17_OnFocused__DelegateSignature();
	void BndEvt__manageFriendsButton_K2Node_ComponentBoundEvent_18_OnFocused__DelegateSignature();
	void BndEvt__goOnlineButton_K2Node_ComponentBoundEvent_20_OnFocused__DelegateSignature();
	void BndEvt__UMG_RefreshButton_K2Node_ComponentBoundEvent_21_OnWasFocused__DelegateSignature();
	void BndEvt__UMG_AddFriendButton_K2Node_ComponentBoundEvent_22_OnWasFocused__DelegateSignature();
	void BndEvt__AddFriendsContent_K2Node_ComponentBoundEvent_8_OnClose__DelegateSignature();
	void BndEvt__UMG_AddFriendButton_K2Node_ComponentBoundEvent_7_OnWasClicked__DelegateSignature();
	void BndEvt__AddFriendsContent_K2Node_ComponentBoundEvent_10_OnButtonsChanged__DelegateSignature();
	void GamepadShutdown();
	void BndEvt__UMG_PrivateGameInGame2_K2Node_ComponentBoundEvent_34_onTryToChangeValue__DelegateSignature();
	void BndEvt__UMG_PrivateGameInMenu2_K2Node_ComponentBoundEvent_35_onTryToChangeValue__DelegateSignature();
	void BndEvt__UMG_PrivateGameInGame_K2Node_ComponentBoundEvent_38_onValueChanged__DelegateSignature();
	void BndEvt__UMG_PrivateGameInMenu_K2Node_ComponentBoundEvent_39_onValueChanged__DelegateSignature();
	void BndEvt__goOnlineButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void OnCreateSessionCompleted();
	void GamepadInitialize();
	void OnCreateSessionFailed();
	void OnHasOnlinePrivileges();
	void BndEvt__UMG_PrivateGameInMenu_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature();
	void BndEvt__UMG_ModalCloseSurface_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void BndEvt__UMG_PrivateGameInGame_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature();
	void BndEvt__UMG_GamesList_K2Node_ComponentBoundEvent_23_OnGameJoined__DelegateSignature();
	void BndEvt__UMG_GamesList_K2Node_ComponentBoundEvent_25_OnGamesResultsChanged__DelegateSignature();
	void EnableListResultsMain();
	void BndEvt__UMG_FriendsList_K2Node_ComponentBoundEvent_2_OnAnyListRefreshed__DelegateSignature();
	void ExecuteUbergraph_UMG_FriendsSiderbarContents();
	void StartGameClick__DelegateSignature();
	void OnGamesResultsChanged__DelegateSignature();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

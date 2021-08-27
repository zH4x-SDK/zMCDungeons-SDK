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

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0000
class ABP_PlayerController_C : public ABasePlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}



	void AnyPlayerCharactersChangedCall();
	void UpdateLocalHotbarsCall();
	void HideAllHidableModalsCall();
	void OpenIngameCharacterCreatorCall();
	void IsPointUnderHotbar();
	void CharacterCreatorVisible();
	void InstanceUMG_InventoryHUD();
	void InstanceUMG_IntroWidget();
	void InstanceQuickActionsWheelWidget();
	void IsCurrentModalUserWidget();
	void InstanceUMGMapWidget();
	void InstanceInGameMenuWidget();
	void InstanceYouDiedHudWidget();
	void InstanceChestUnlockedWidget();
	void InstanceMissionNotificationWidget();
	void InstanceChestUnlockingWidget();
	void InstancePlayersFriendsBar();
	void CanOpenChatWheel();
	void CanOpenMap();
	void CanOpenQuickActionWheel();
	void CanOpenPause();
	void CanOpenInventory();
	void OnDebugGlobalDialog();
	void OnDebugDialog();
	void SetCurrentTAK();
	void IsAnyOpenModalOwnedByMe();
	void IsAnyOtherPlayerModelOpen();
	void OtherPlayerModalWasChanged();
	void RefreshTakLayout();
	void SkipOutro();
	void ShouldCloseTeleport();
	void SetChatShortcuts();
	void IsHUDCreated();
	void InitialBlueprintSetupComplete();
	void FindOrCreateUIWidget();
	void SetChatWheelType();
	void GetPlayersBar();
	void IsChatWheelVisible();
	void HandledControllerConnectionChanged();
	void ClearAllOwnedModals();
	void IsWidgetOwnedByUs();
	void CanPlayerOverrideCurrentModal();
	void InstanceMissionMapSelect();
	void ObjectiveRing();
	void UIToggleMissionSelect();
	void Enable_Pause();
	void IsModalOwnedBy();
	void GetIntroHUD();
	void SkipIntro();
	void SetupSharedUI();
	void PostBeginPlay();
	void TryLocalLeave();
	void UIToggleInventory();
	void UIToggleMapOverlay();
	void UIToggleMap();
	void GetEnderPearlOpen();
	void SetDefaultInputMode();
	void IsDodgeEnabled();
	void UIOpenMissionSelect();
	void UIOpenInventory();
	void GetActorReticuleRadius();
	void IsPlayerInputAllowed();
	void ToggleEnderPearl();
	void UseEnderPearlToPlayer();
	void SetHideAll();
	void GetOrCreateUIRoot();
	void RefreshHudVisibility();
	void EnsureHudDestroyed();
	void AddToUIRoot();
	void OnCloseModal();
	void OnOpenModal();
	void RefreshInputMode();
	void ReleaseUI();
	void GrabUI();
	void HideAllHidableModals();
	void IsCurrentModalWidget();
	void HideModal();
	void IsCurrentModal();
	void ModalWasChanged();
	void TryShowWidget();
	void HideWidget();
	void IsModalMaskOpen();
	void ShowModal();
	void ToggleWidget();
	void AnyPlayerCharactersChanged();
	void EnsureHudCreated();
	void GetTraceWithOffset();
	void __RollbackPosition();
	void __RecordPosition();
	void OnLoaded_48E027F049665D620F1E08801C1C1A39();
	void OnLoaded_CBF7065A41E48F1D34E41C95CE44F030();
	void OnLoaded_E35533D543D4B1F34AD29E9A0B8A7A41();
	void OnLoaded_61122AB7424371503D4ED3BE70927AAF();
	void InpActEvt_SetDestination_K2Node_InputActionEvent_32();
	void InpActEvt_SetDestination_K2Node_InputActionEvent_31();
	void InpActEvt_AlternativeAttack_K2Node_InputActionEvent_30();
	void InpActEvt_AlternativeAttack_K2Node_InputActionEvent_29();
	void InpActEvt_D_K2Node_InputKeyEvent_19();
	void InpActEvt_N_K2Node_InputKeyEvent_18();
	void InpActEvt_Z_K2Node_InputKeyEvent_17();
	void InpActEvt_Z_K2Node_InputKeyEvent_16();
	void InpActEvt_Enter_K2Node_InputKeyEvent_15();
	void InpActEvt_Escape_K2Node_InputKeyEvent_14();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_13();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_12();
	void InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_11();
	void InpActEvt_A_K2Node_InputKeyEvent_10();
	void InpActEvt_J_K2Node_InputKeyEvent_9();
	void InpActEvt_RootPlayer_K2Node_InputActionEvent_28();
	void InpActEvt_RootPlayer_K2Node_InputActionEvent_27();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_8();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_7();
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_6();
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_5();
	void InpActEvt_Inventory_K2Node_InputActionEvent_26();
	void InpActEvt_ToggleUI_K2Node_InputActionEvent_25();
	void InpActEvt_Friends_K2Node_InputActionEvent_24();
	void InpActEvt_Y_K2Node_InputKeyEvent_4();
	void InpActEvt_Zero_K2Node_InputKeyEvent_3();
	void InpActEvt_ToggleModifiers_K2Node_InputActionEvent_23();
	void InpActEvt_Dodge_K2Node_InputActionEvent_22();
	void InpActEvt_Dodge_K2Node_InputActionEvent_21();
	void InpActEvt_DodgeForward_K2Node_InputActionEvent_20();
	void InpActEvt_DodgeForward_K2Node_InputActionEvent_19();
	void InpActEvt_Skip_K2Node_InputActionEvent_18();
	void InpActEvt_Add_K2Node_InputKeyEvent_2();
	void InpActEvt_Pause_K2Node_InputActionEvent_17();
	void InpActEvt_Use_Ender_Pearl_1_K2Node_InputActionEvent_16();
	void InpActEvt_Use_Ender_Pearl_2_K2Node_InputActionEvent_15();
	void InpActEvt_Use_Ender_Pearl_3_K2Node_InputActionEvent_14();
	void InpActEvt_Ender_Pearl_K2Node_InputActionEvent_13();
	void InpActEvt_Ender_Pearl_K2Node_InputActionEvent_12();
	void InpActEvt_Cancel_Ender_Pearl_K2Node_InputActionEvent_11();
	void InpActEvt_Cancel_Ender_Pearl_K2Node_InputActionEvent_10();
	void InpActEvt_ToggleMapOverlay_K2Node_InputActionEvent_9();
	void InpActEvt_ToggleMap_K2Node_InputActionEvent_8();
	void InpActEvt_ToggleMap_K2Node_InputActionEvent_7();
	void InpActEvt_QuickActions_K2Node_InputActionEvent_6();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1();
	void InpActEvt_Chat_K2Node_InputActionEvent_5();
	void InpActEvt_Chat_K2Node_InputActionEvent_4();
	void InpActEvt_MenuSelect_K2Node_InputActionEvent_3();
	void InpActEvt_MenuCancel_K2Node_InputActionEvent_2();
	void InpActEvt_MenuCancelKeyboard_K2Node_InputActionEvent_1();
	void On_Destroyed_Stuff();
	void OnControllerTypeChanged();
	void refreshOnLeave();
	void UpdateInitialBlueprintSetup();
	void Rollback_Position();
	void Spawn_Smoke_Puff();
	void ReceiveBeginPlay();
	void ReceiveOnPawnPossessed();
	void ReceiveOnEnchantmentTriggered();
	void DelayRefreshInputMode();
	void OnPreSeamlessTravel();
	void ReceiveEndPlay();
	void OnLocationClicked();
	void OnActorClicked();
	void OnHighlightTargetChanged();
	void OnSecondaryHighlightTargetChanged();
	void ToggleMapOverlay();
	void Toggle_Map();
	void Map_Timer_Expired();
	void BndEvt__LootUnlocker_K2Node_ComponentBoundEvent_0_OnFailedToOpenChest__DelegateSignature();
	void OnStopForceFeedbackEvent();
	void OnPlayForceFeedbackEvent();
	void chatWheelUse();
	void TogglePause();
	void ReceiveTick();
	void SendChat();
	void ChatWheelClose();
	void ChatAction();
	void OnAnyPlayerDamaged();
	void OpenFriends();
	void ChatShortcuts();
	void OnLevelStarted();
	void ReceiveOnArmorPropertyTriggered();
	void OnEnchantmentTriggeredClient();
	void BndEvt__BP_ShopperComponent_K2Node_ComponentBoundEvent_1_OnOpenMissionSelector__DelegateSignature();
	void ExecuteUbergraph_BP_PlayerController();
	void OnArmorPropertyTriggered__DelegateSignature();
	void OnHudCreated__DelegateSignature();
	void OnInputActionChanged__DelegateSignature();
	void OnPlayerCharacterPossessed__DelegateSignature();
	void OnAnyPlayerCharactersChanged__DelegateSignature();
	void OnEnchantmentTriggered__DelegateSignature();
	void OnPawnPossessed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

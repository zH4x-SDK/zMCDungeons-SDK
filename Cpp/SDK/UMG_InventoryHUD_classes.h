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

// WidgetBlueprintGeneratedClass UMG_InventoryHUD.UMG_InventoryHUD_C
// 0x0000
class UUMG_InventoryHUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryHUD.UMG_InventoryHUD_C");
		return ptr;
	}



	void IsInventoryOpenCall();
	void ChangePlayerCall();
	void ControllerTypeChanged();
	void IsOverridable();
	void GetBlocksCharacterInput();
	void GetModalMask();
	void FindSlotFor();
	void AddDataBlankToWidgetGrid();
	void UpdateDataBlankToWidget();
	void UpdateVisiblePendingItems();
	void SetNavigationFromCosmeticState();
	void GetFirstInventorySlot();
	void CreateGridSlotWidget();
	void MakeInspectorNavBarItems();
	void IsFilterAvailable();
	void GetNumFilters();
	void GetNearestFilterByIndex();
	void GetFilterIndex();
	void CanSalvage();
	void PlayTextToSpeech();
	void IsFilterCosmetics();
	void TextToSpeech();
	void GamepadCancelAssigningItem();
	void GetDraggedOrAssigningSlot();
	void IsInventoryFirstSlotEmpty();
	void ShouldLeaveFirstInventorySlotEmpty();
	void TrySelectSlotFilter();
	void UpdateInventoryCount();
	void ClearNewMarking();
	void UpdateSlot();
	void RemovePendingSlots();
	void GetUMGSlotWidget();
	void CreateUMGSlotWidget();
	void CheckForSlotsUpdate();
	void ChangePlayer();
	void SetGearNavigationDefaults();
	void FindAdjacentGearSlot();
	void FindNonEmptyFilter();
	void FindFirstAppropriateSlot();
	void Set_Navigation_Bar_from_State();
	void FindValidSlots();
	void SetDisabledAreas();
	void InputSwitch();
	void update_ghost_position();
	void show_hide_ghost();
	void set_navigation_bar_from_selected();
	void GetFirstAvailableFilterInDirection();
	void SetFilterToItemType();
	void GetWallet();
	void RefreshInspectedSlot();
	void FindInventorySlot();
	void NavigateEnchantments();
	void Setup_gear_navigation_for_item();
	void GamepadNavigation();
	void SlotAnyItemChanged();
	void OnSlotUsedAsUpgrade();
	void TryUpgradeItem();
	void FindLowestItemPowerSwappableEquipmentSlot();
	void FindFirstFreeSwappableEquipmentSlot();
	void FindBestFilterForItem();
	void EnsureItemVisibleInActiveFilter();
	void FindFirstFreeInventorySlot();
	void SlotAutoMoveFindMatchingGearSlot();
	void SlotAutoMoveFindFreeInventorySlot();
	void SlotDragLeft();
	void RefreshEquippedGearPower();
	void SetEquipmentComponent();
	void SetPlayerCharacterInternal();
	void UpdateScrolling();
	void InspectItemEnchantmentIndex();
	void GetBestSlotForCompare();
	void SetPawn();
	void ClearSalvageUndo();
	void GetBestInspector();
	void RefreshInspectorSwitcher();
	void SetGradientVisibility();
	void FindVisibleEquipmentSlotContainingItem();
	void PurgeItem();
	void FindVisibleInventorySlotContainingItem();
	void SetSelectedFilter();
	void ShuffleItemsToFillHoles();
	void SetScrollEnabled();
	void SlotDragEntered();
	void UpdateSlotsFilter();
	void DoesItemPassInventoryUseOnlyFilter();
	void DoesItemPassEnchantmentsFilter();
	void DoesItemPassSlotTypeFilter();
	void DoesItemPassFilter();
	void SlotMarkedNewChanged();
	void OnSlotsFilterHoveredChanged();
	void FindFirstVisibleNotNewInventorySlotWithItem();
	void OnSlotsFilterButtonPressed();
	void SetSlotsFilter();
	void PositionVisibleSlotsOnGrid();
	void FindEquippedItemOfType();
	void FindSlotContainingItem();
	void SetInUpgradeState();
	void UpgradeSlot();
	void SlotDragEnd();
	void GetItemStash();
	void FindFirstSlotWithItem();
	void SetDrawPreview();
	void SetSelectedSlot();
	void SlotDragBegin();
	void AddInventorySlot();
	void OpenCloseInventory();
	void DisplayInventory();
	void RefreshFocus();
	void Construct();
	void DragBegin();
	void DragEnd();
	void SlotSelected();
	void RebuildInventory();
	void OpenClose();
	void Tick();
	void BndEvt__UMG_Gradient_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BackgroundSurface_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetPlayerCharacter();
	void BndEvt__UMG_InventoryItemInspector_K2Node_ComponentBoundEvent_6_OnItemSalvaged__DelegateSignature();
	void BndEvt__UMG_InventoryItemInspector_K2Node_ComponentBoundEvent_7_OnItemEnchantmentSelected__DelegateSignature();
	void BndEvt__UMG_InventoryItemInspector_K2Node_ComponentBoundEvent_8_OnUpgradeStateChanged__DelegateSignature();
	void BndEvt__UMG_InventoryItemSalvaged_K2Node_ComponentBoundEvent_0_OnSalvageUndo__DelegateSignature();
	void BndEvt__UMG_InventoryDropSurface_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void Gamepad_UpgradeSelect();
	void Gamepad_UpgradeCancelled();
	void Gamepad_Close();
	void onModeChanged();
	void SlotClicked();
	void CreateEnchantmentInspectorWidget();
	void RemoveEnchantmentInspectorWidget();
	void OutsideClickEntantscroll();
	void EnchantScrollVisibilityChanged();
	void PreConstruct();
	void EnchantmentSuccess();
	void BndEvt__CosmeticsContent_K2Node_ComponentBoundEvent_3_OnCosmeticDefHighlighted__DelegateSignature();
	void Should_Play_TTS();
	void Play_TTS();
	void Should_Play_TTS_On_Filter_Changed();
	void Play_Filter_TTS();
	void BndEvt__UMG_PlayerView_K2Node_ComponentBoundEvent_9_OnOtherPlayerWasDamaged__DelegateSignature();
	void BndEvt__CosmeticsContent_K2Node_ComponentBoundEvent_5_OnAnyCosmeticsAvailableChanged__DelegateSignature();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_11_OnWasClicked__DelegateSignature();
	void CreateSlotWidgetLoop();
	void BndEvt__CosmeticsContent_K2Node_ComponentBoundEvent_10_OnEquipStateChanged__DelegateSignature();
	void OnScroll();
	void BndEvt__UMG_CustomNavigation_K2Node_ComponentBoundEvent_12_OnNavigationDirection__DelegateSignature();
	void PerformCosmeticAction();
	void GamepadApplyDiamonDustSuccess();
	void GamepadUndoSalvage();
	void GamepadAbortSalvage();
	void GamepadCompleteSalvaging();
	void GamepadBeginSalvaging();
	void Abort_Enchanting();
	void gamepadAbortAssign();
	void RightBumper();
	void LeftBumper();
	void GamepadQuickAssign();
	void ListenMenuQuickAssign();
	void ListenMenuRightReleased();
	void ListenMenuLeftReleased();
	void ListenMenuDownReleased();
	void ListenMenuUpReleased();
	void GamepadTick();
	void ListenMenuRightPressed();
	void ListenMenuLeftPressed();
	void ListenMenuDownPressed();
	void ListenMenuUpPressed();
	void RefreshEnchantmentReferences();
	void GamepadAssignInventoryItem();
	void GamepadChangeFilter();
	void GamepadCloseEnchantmentInspector();
	void GamepadAbortDiamondDust();
	void GamepadResetState();
	void GamepadCloseInventory();
	void GamepadResetSelection();
	void GamepadOpenEnchantmentInspector();
	void GamepadApplyDiamondDust();
	void GamepadApplyEnchantment();
	void GamepadSelectInventoryItem();
	void GamepadBeginEnchanting();
	void On_Prev_Filter();
	void On_Next_Filter();
	void ListenMenuSelectAlt2();
	void ListeMenuSelectAlt1();
	void ListenMenuCancel();
	void ListenMenuSelect();
	void GamepadShutdown();
	void GamepadInitialize();
	void ExecuteUbergraph_UMG_InventoryHUD();
	void InventoryClosed__DelegateSignature();
	void InventoryOpened__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

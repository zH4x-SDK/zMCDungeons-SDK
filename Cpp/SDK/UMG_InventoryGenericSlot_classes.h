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

// WidgetBlueprintGeneratedClass UMG_InventoryGenericSlot.UMG_InventoryGenericSlot_C
// 0x0000
class UUMG_InventoryGenericSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryGenericSlot.UMG_InventoryGenericSlot_C");
		return ptr;
	}



	void OnPreviewMouseButtonDown();
	void GetLocked();
	void SetLocked();
	void PlayGamepadHoverSound();
	void PlayGamepadSelectSound();
	void SetNoItem();
	void ManualDrop();
	void OnDroppedOnInventory();
	void OnDroppedOnCharacter();
	void TryToAutoMoveItem();
	void SwapItemWithSlot();
	void SetDragHovered();
	void SetSlotType();
	void UpdateFrameTextures();
	void SetFrameRarity();
	void SetIsUpgraded();
	void SetComparedInventoryItem();
	void CheckTargetableSound();
	void SetPressed();
	void UpdateStateGraphics();
	void PlayCancelledItemSound();
	void PlaySwitchedItemSound();
	void WasLayouted();
	void UpdateItemMeta();
	void GetMarkedNew();
	void SetMarkedNew();
	void SetItemMeta();
	void UpdateItemData();
	void SetInventoryItem();
	void SetFlashAmount();
	void SetDisabled();
	void SetEmpty();
	void setHighlighted();
	void SetTargetable();
	void StateWasChanged();
	void SetSelected();
	void SetHovered();
	void SetDragged();
	void SetFrameStyle();
	void UpdateEnchantmentLevel();
	void OnMouseButtonUp();
	void GetTotalEnchantmentInvestment();
	void GetInventorySoundForType();
	void EndDrag();
	void OnDrop();
	void OnDragDetected();
	void SetInventorySlot();
	void UpdateSlot();
	void OnMouseEnter();
	void OnMouseLeave();
	void Tick();
	void Construct();
	void OnDragEnter();
	void OnDragLeave();
	void PreConstruct();
	void OnDragDestroyed();
	void CustomEvent_1();
	void Refresh();
	void OnDragCancelled();
	void BndEvt__Button_75_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_ItemGildedPlate_K2Node_ComponentBoundEvent_1_OnGildedChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_InventoryGenericSlot();
	void OnItemDataChanged__DelegateSignature();
	void OnAutoUnequipItem__DelegateSignature();
	void OnAutoEquipItem__DelegateSignature();
	void OnAutoMoveItem__DelegateSignature();
	void OnHoveredChanged__DelegateSignature();
	void OnMarkedNewChanged__DelegateSignature();
	void OnItemMeta__DelegateSignature();
	void OnItemData__DelegateSignature();
	void OnInventorySlotChanged__DelegateSignature();
	void OnDragLeft__DelegateSignature();
	void OnDragEntered__DelegateSignature();
	void OnEmptyChanged__DelegateSignature();
	void OnHighlightChanged__DelegateSignature();
	void OnSwitchFrameTextures__DelegateSignature();
	void OnInventorySlotDragEnded__DelegateSignature();
	void OnInventorySlotDragStarted__DelegateSignature();
	void OnInventorySlotSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

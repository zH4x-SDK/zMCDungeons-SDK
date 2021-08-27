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

// WidgetBlueprintGeneratedClass UMG_InventorySlotBase.UMG_InventorySlotBase_C
// 0x0000
class UUMG_InventorySlotBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventorySlotBase.UMG_InventorySlotBase_C");
		return ptr;
	}



	void CanMoveItem();
	void GetLocked();
	void OnSetInventorySlot();
	void OnManualDrop();
	void TrySwapItemWithSlot();
	void SetComparedItem();
	void WasLayouted();
	void GetMarkedNew();
	void GetItem();
	void SetUpgradeTargeting();
	void GetGenericSlotRef();
	void SetFlashAmount();
	void SetDisabled();
	void setHighlighted();
	void SetTargetable();
	void SetSelected();
	void SetInventorySlot();
	void Construct();
	void SlotSelected();
	void DragEnded();
	void DragStarted();
	void MarkedNewChanged();
	void DragEntered();
	void DragLeft();
	void AutoMove();
	void AutoEquip();
	void AutoUnequip();
	void ItemDataChanged();
	void ExecuteUbergraph_UMG_InventorySlotBase();
	void OnInventorySlotItemDataChanged__DelegateSignature();
	void OnInventorySlotAutoUnequip__DelegateSignature();
	void OnInventorySlotAutoEquip__DelegateSignature();
	void OnInventorySlotAutoMove__DelegateSignature();
	void OnInventorySlotDragLeft__DelegateSignature();
	void OnInventorySlotDragEntered__DelegateSignature();
	void OnInventorySlotMarkedNewChanged__DelegateSignature();
	void OnInventorySlotDragEnded__DelegateSignature();
	void OnInventorySlotDragStarted__DelegateSignature();
	void OnInventorySlotSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

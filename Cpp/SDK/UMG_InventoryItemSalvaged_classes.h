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

// WidgetBlueprintGeneratedClass UMG_InventoryItemSalvaged.UMG_InventoryItemSalvaged_C
// 0x0000
class UUMG_InventoryItemSalvaged_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemSalvaged.UMG_InventoryItemSalvaged_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void HasSalvagedItem();
	void SetSalvageTimer();
	void UndoSalvage();
	void SetSalvagedItem();
	void ClearSalvageUndo();
	void GetItemStash();
	void Tick();
	void BndEvt__UMG_SalvageUndoButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void Construct();
	void salvageAnimStart();
	void salvageAnimEnd();
	void inputChanged();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InventoryItemSalvaged();
	void OnSalvageUndo__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

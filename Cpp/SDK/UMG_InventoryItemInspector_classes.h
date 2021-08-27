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

// WidgetBlueprintGeneratedClass UMG_InventoryItemInspector.UMG_InventoryItemInspector_C
// 0x0000
class UUMG_InventoryItemInspector_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemInspector.UMG_InventoryItemInspector_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetSalvagePaybackTTS();
	void RefreshInspectedSlotItem();
	void GetEnchantmentSlotsWidget();
	void CanSalavage();
	void SetIsEnchanting();
	void HasInspectedItem();
	void InspectItemEnchantmentIndex();
	void OnClose();
	void SetSelectedSlot();
	void SetSalvageDialogVisibility();
	void SetComparedSlot();
	void SalvageSlot();
	void SetInspectedItem();
	void UpgradeStateChanged();
	void RefreshComparison();
	void GetItemStash();
	void BndEvt__UMG_SalvageButtonToggle_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_SalvageButtonCancel_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_SalvageButtonConfirm_K2Node_ComponentBoundEvent_2_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_SalvageButtonConfirm_K2Node_ComponentBoundEvent_5_OnWasHovered__DelegateSignature();
	void SetPlayerCharacter();
	void Gamepad_SalvageSelect();
	void Gamepad_SalvageConfirm();
	void Gamepad_SalvageCancel();
	void PreConstruct();
	void BndEvt__UMG_InventoryItemInspectInfo_K2Node_ComponentBoundEvent_2_OnExpandedEnchantments__DelegateSignature();
	void BndEvt__UMG_InventoryItemInspectInfo_K2Node_ComponentBoundEvent_3_OnItemEnchantmentSelected__DelegateSignature();
	void Tick();
	void ExecuteUbergraph_UMG_InventoryItemInspector();
	void OnUpgradeStateChanged__DelegateSignature();
	void OnItemEnchantmentSelected__DelegateSignature();
	void OnItemSalvaged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

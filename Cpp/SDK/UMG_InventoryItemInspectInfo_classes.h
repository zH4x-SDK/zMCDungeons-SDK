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

// WidgetBlueprintGeneratedClass UMG_InventoryItemInspectInfo.UMG_InventoryItemInspectInfo_C
// 0x0000
class UUMG_InventoryItemInspectInfo_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemInspectInfo.UMG_InventoryItemInspectInfo_C");
		return ptr;
	}



	void SetComparedItem();
	void UpdateVisibilities();
	void ShouldShowEnchantments();
	void IsNameOverflowing();
	void RefreshFlavour();
	void EnsurePrepass();
	void SetOverflowCheckNeeded();
	void IsCompact();
	void IsFlavourHidden();
	void CheckOverflow();
	void SetFlavourHidden();
	void RefreshCompactGraphics();
	void SetCompact();
	void IsFlavourOverflowing();
	void SetIsEnchanting();
	void HasInspectedItem();
	void InspectItemEnchantmentIndex();
	void OnClose();
	void SetCustomDialogVisibility();
	void SetInspectedItem();
	void RefreshComparison();
	void BndEvt__UMG_EnchantmentSlotsWidget_K2Node_ComponentBoundEvent_0_OnItemEnchantmentSelected__DelegateSignature();
	void SetPlayerCharacter();
	void Tick();
	void BndEvt__UMG_EnchantmentSlotsWidget_K2Node_ComponentBoundEvent_1_EnchantExpand__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UMG_InventoryItemInspectInfo();
	void OnExpandedEnchantments__DelegateSignature();
	void OnItemEnchantmentSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

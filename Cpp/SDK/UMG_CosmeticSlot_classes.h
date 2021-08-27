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

// WidgetBlueprintGeneratedClass UMG_CosmeticSlot.UMG_CosmeticSlot_C
// 0x0000
class UUMG_CosmeticSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CosmeticSlot.UMG_CosmeticSlot_C");
		return ptr;
	}



	void GetHasAnyCosmetics();
	void SetHasAnyCosmetics();
	void GetAllCosmeticOptions();
	void OnSlotCosmeticChanged();
	void IsCosmeticDefMarkedNew();
	void RefreshSlotOptionsMarkedNew();
	void OnCosmeticHighlighted();
	void OnCosmeticUnequipped();
	void OnCosmeticEquipped();
	void IsCosmeticDefSelected();
	void RefreshSelectedSlot();
	void RefreshSlots();
	void HideAll();
	void GetOrCreateCosmeticsSlotOptionWidget();
	void SetCosmeticsSlot();
	void Construct();
	void ExecuteUbergraph_UMG_CosmeticSlot();
	void OnEquipStateChanged__DelegateSignature();
	void OnAnyCosmeticsAvailableChanged__DelegateSignature();
	void OnCosmeticDefHighlighted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

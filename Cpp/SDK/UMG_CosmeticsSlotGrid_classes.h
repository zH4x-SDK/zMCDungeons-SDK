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

// WidgetBlueprintGeneratedClass UMG_CosmeticsSlotGrid.UMG_CosmeticsSlotGrid_C
// 0x0000
class UUMG_CosmeticsSlotGrid_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CosmeticsSlotGrid.UMG_CosmeticsSlotGrid_C");
		return ptr;
	}



	void GetAnyAvailable();
	void OnEquipChanged();
	void RefreshAnyAvailable();
	void OnCosmeticSlotAnyAvailableChanged();
	void ClearSelected();
	void HighlightCosmetic();
	void NavigateCosmetics();
	void GetAllSlotOptions();
	void OnCosmeticSlotDefHighlighted();
	void CollapseAll();
	void GetOrCreateCosmeticsSlotWidget();
	void SetCosmeticsComponent();
	void SetPlayerCharacterInternal();
	void ClearAll();
	void Construct();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_CosmeticsSlotGrid();
	void OnEquipStateChanged__DelegateSignature();
	void OnAnyCosmeticsAvailableChanged__DelegateSignature();
	void OnCosmeticDefHighlighted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_InventoryItemStats.UMG_InventoryItemStats_C
// 0x0000
class UUMG_InventoryItemStats_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemStats.UMG_InventoryItemStats_C");
		return ptr;
	}



	void RefreshVisibility();
	void RefreshPadding();
	void SetCompareItem();
	void SetJustification();
	void SetFontSize();
	void HasAny();
	void AddStatsIndex();
	void HideAll();
	void UpdateGraphics();
	void SetItem();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InventoryItemStats();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_InventoryItemPowerRating.UMG_InventoryItemPowerRating_C
// 0x0000
class UUMG_InventoryItemPowerRating_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemPowerRating.UMG_InventoryItemPowerRating_C");
		return ptr;
	}



	void SetPowerText();
	void UpdateComparedItemState();
	void SetComparedItem();
	void SetItem();
	void UpdateTextures();
	void SetIsGear();
	void UpdateItemState();
	void SetItemType();
	void SetEmphasized();
	void UpdateGraphics();
	void SetUnscaledPower();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InventoryItemPowerRating();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

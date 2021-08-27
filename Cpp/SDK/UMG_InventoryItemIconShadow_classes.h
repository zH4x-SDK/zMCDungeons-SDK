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

// WidgetBlueprintGeneratedClass UMG_InventoryItemIconShadow.UMG_InventoryItemIconShadow_C
// 0x0000
class UUMG_InventoryItemIconShadow_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemIconShadow.UMG_InventoryItemIconShadow_C");
		return ptr;
	}



	void UpdateTint();
	void SetFromItem();
	void UpdateScale();
	void SetIconScale();
	void UpdateGraphics();
	void GetImage();
	void SetItemType();
	void PreConstruct();
	void SetInventoryItemData();
	void ExecuteUbergraph_UMG_InventoryItemIconShadow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

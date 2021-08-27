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

// WidgetBlueprintGeneratedClass UMG_ItemPowerRating.UMG_ItemPowerRating_C
// 0x0000
class UUMG_ItemPowerRating_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemPowerRating.UMG_ItemPowerRating_C");
		return ptr;
	}



	void IsPowerShown();
	void SetItemData();
	void UpdateCompare();
	void SetCompareItem();
	void SetDisplayPower();
	void SwitchGearTextures();
	void SetIsGear();
	void SetItem();
	void SetItemType();
	void SetEmphasized();
	void UpdateGraphics();
	void SetUnscaledPower();
	void PreConstruct();
	void SetInventoryItemData();
	void ExecuteUbergraph_UMG_ItemPowerRating();
	void OnItemPowerShownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

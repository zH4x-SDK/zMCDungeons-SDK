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

// WidgetBlueprintGeneratedClass UMG_ItemGildedPlate.UMG_ItemGildedPlate_C
// 0x0000
class UUMG_ItemGildedPlate_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemGildedPlate.UMG_ItemGildedPlate_C");
		return ptr;
	}



	void isGilded();
	void UpdateGraphics();
	void SetGilded();
	void SetInventoryItemData();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ItemGildedPlate();
	void OnGildedChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

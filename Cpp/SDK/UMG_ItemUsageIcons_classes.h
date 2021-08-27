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

// WidgetBlueprintGeneratedClass UMG_ItemUsageIcons.UMG_ItemUsageIcons_C
// 0x0000
class UUMG_ItemUsageIcons_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemUsageIcons.UMG_ItemUsageIcons_C");
		return ptr;
	}



	void ClearItemData();
	void UpdateGraphics();
	void SetItemData();
	void PreConstruct();
	void SetInventoryItemData();
	void ExecuteUbergraph_UMG_ItemUsageIcons();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_ItemTagIcon.UMG_ItemTagIcon_C
// 0x0000
class UUMG_ItemTagIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemTagIcon.UMG_ItemTagIcon_C");
		return ptr;
	}



	void SetShowIcon();
	void IsIconShown();
	void ClearItemData();
	void GetBestIcon();
	void SetSlotType();
	void UpdateGraphics();
	void SetIsUpgraded();
	void SetItemType();
	void SetItemData();
	void Construct();
	void SetInventoryItemData();
	void ExecuteUbergraph_UMG_ItemTagIcon();
	void OnIconShownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

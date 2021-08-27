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

// WidgetBlueprintGeneratedClass UMG_InventoryItemInspectorIcon.UMG_InventoryItemInspectorIcon_C
// 0x0000
class UUMG_InventoryItemInspectorIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemInspectorIcon.UMG_InventoryItemInspectorIcon_C");
		return ptr;
	}



	void GetHighResIcon();
	void UpdateHighResGraphics();
	void GetInvestedPoints();
	void SetFromItem();
	void UpdateScale();
	void SetIconScale();
	void UpdateGraphics();
	void GetImage();
	void SetItemType();
	void SetInvestedPoints();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InventoryItemInspectorIcon();
	void OnHighResTextureChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

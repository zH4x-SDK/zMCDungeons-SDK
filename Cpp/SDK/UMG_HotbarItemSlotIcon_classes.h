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

// WidgetBlueprintGeneratedClass UMG_HotbarItemSlotIcon.UMG_HotbarItemSlotIcon_C
// 0x0000
class UUMG_HotbarItemSlotIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarItemSlotIcon.UMG_HotbarItemSlotIcon_C");
		return ptr;
	}



	void GetCurrentTexture();
	void RefreshItemTexture();
	void SetNoItemBgTexture();
	void SetItem();
	void RefreshVisibility();
	void SetItemTexture();
	void PreConstruct();
	void ExecuteUbergraph_UMG_HotbarItemSlotIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

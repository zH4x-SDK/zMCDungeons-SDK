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

// WidgetBlueprintGeneratedClass UMG_SkinSlotGrid.UMG_SkinSlotGrid_C
// 0x0000
class UUMG_SkinSlotGrid_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SkinSlotGrid.UMG_SkinSlotGrid_C");
		return ptr;
	}



	void OnSkinSlotHoveredChanged();
	void GetHighlightedSkinID();
	void UpdateHighlightedSlotSkin();
	void SetHighlightedSkinId();
	void UpdateSlotsState();
	void IsSkinDisabled();
	void IsSkinNew();
	void SetPlayerController();
	void GetSkinIdRelativeToHighlighted();
	void GetSkinLayoutIndex();
	void GetColRowLayoutIndex();
	void GetLayoutIndexColRow();
	void GetSelectedSkinID();
	void UpdateSelectedSlotSkin();
	void CreateSkinSlots();
	void SetSelectedSkinId();
	void OnSkinSlotSelected();
	void Tick();
	void ExecuteUbergraph_UMG_SkinSlotGrid();
	void OnSkinIdSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

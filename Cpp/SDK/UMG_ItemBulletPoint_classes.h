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

// WidgetBlueprintGeneratedClass UMG_ItemBulletPoint.UMG_ItemBulletPoint_C
// 0x0000
class UUMG_ItemBulletPoint_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemBulletPoint.UMG_ItemBulletPoint_C");
		return ptr;
	}



	void SetScaleInternal();
	void SetBulletTexture();
	void UpdateFont();
	void UpdateIcon();
	void SetItemBulletPointDataInternal();
	void SetAlignmentInternal();
	void SetFontSizeInternal();
	void SetTextInternal();
	void SetShadowScale();
	void SetRarity();
	void SetAffectorInfo();
	void CollapseSmoothly();
	void ExpandSmoothly();
	void SetCollapsed();
	void SetBullitStyle();
	void PreConstruct();
	void Construct();
	void SetText();
	void SetFontSize();
	void SetAlignment();
	void SetItemBulletPointData();
	void SetScale();
	void ExecuteUbergraph_UMG_ItemBulletPoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

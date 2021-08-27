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

// WidgetBlueprintGeneratedClass UMG_AffectorInfo.UMG_AffectorInfo_C
// 0x0000
class UUMG_AffectorInfo_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AffectorInfo.UMG_AffectorInfo_C");
		return ptr;
	}



	void SetInternalAffectorInfo();
	void SetInternalShadowScale();
	void SetInternalScale();
	void SetInternalAlignment();
	void SetInternalFontSize();
	void SetInternalText();
	void SetRarity();
	void SetItemBulletPointData();
	void CollapseSmoothly();
	void ExpandSmoothly();
	void SetCollapsed();
	void SetBullitStyle();
	void PreConstruct();
	void Construct();
	void SetFontSize();
	void SetText();
	void SetAlignment();
	void SetScale();
	void SetShadowScale();
	void SetAffectorInfo();
	void ExecuteUbergraph_UMG_AffectorInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

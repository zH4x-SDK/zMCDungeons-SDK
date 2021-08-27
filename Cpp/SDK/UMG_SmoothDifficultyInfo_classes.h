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

// WidgetBlueprintGeneratedClass UMG_SmoothDifficultyInfo.UMG_SmoothDifficultyInfo_C
// 0x0000
class UUMG_SmoothDifficultyInfo_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SmoothDifficultyInfo.UMG_SmoothDifficultyInfo_C");
		return ptr;
	}



	void SetInternalAffectorInfo();
	void SetInternalScale();
	void SetInternalAlignment();
	void SetInternalFontSize();
	void SetInternalText();
	void SetBullitStyle();
	void PreConstruct();
	void Construct();
	void SetFontSize();
	void SetText();
	void SetAlignment();
	void SetScale();
	void SetRarity();
	void SetShadowScale();
	void SetItemBulletPointData();
	void SetAffectorInfo();
	void CollapseSmoothly();
	void ExpandSmoothly();
	void SetCollapsed();
	void Tick();
	void ExecuteUbergraph_UMG_SmoothDifficultyInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

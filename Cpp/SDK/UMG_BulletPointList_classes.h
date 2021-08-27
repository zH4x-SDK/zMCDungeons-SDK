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

// WidgetBlueprintGeneratedClass UMG_BulletPointList.UMG_BulletPointList_C
// 0x0000
class UUMG_BulletPointList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_BulletPointList.UMG_BulletPointList_C");
		return ptr;
	}



	void SetCollapsedAll();
	void ExpandAllSmoothly();
	void SmoothExpandNext();
	void SmoothCollapseNext();
	void CollapseAllSmoothly();
	void SetShadowScale();
	void SetScale();
	void SetAlignment();
	void SetFontSize();
	void HasAny();
	void AddBulletPoints();
	void HideAll();
	void PreConstruct();
	void ExecuteUbergraph_UMG_BulletPointList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

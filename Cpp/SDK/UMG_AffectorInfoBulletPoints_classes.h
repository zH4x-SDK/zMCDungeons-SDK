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

// WidgetBlueprintGeneratedClass UMG_AffectorInfoBulletPoints.UMG_AffectorInfoBulletPoints_C
// 0x0000
class UUMG_AffectorInfoBulletPoints_C : public UUMG_BulletPointList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AffectorInfoBulletPoints.UMG_AffectorInfoBulletPoints_C");
		return ptr;
	}



	void GetAffectorCount();
	void SetAffectorInfo();
	void UpdateGraphics();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

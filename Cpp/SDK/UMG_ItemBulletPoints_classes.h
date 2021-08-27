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

// WidgetBlueprintGeneratedClass UMG_ItemBulletPoints.UMG_ItemBulletPoints_C
// 0x0000
class UUMG_ItemBulletPoints_C : public UUMG_BulletPointList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemBulletPoints.UMG_ItemBulletPoints_C");
		return ptr;
	}



	void SetItemData();
	void SetItem();
	void UpdateGraphics();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_ItemBulletPoints();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

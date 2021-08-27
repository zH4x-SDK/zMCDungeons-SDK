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

// BlueprintGeneratedClass UIBulletPoint.UIBulletPoint_C
// 0x0000
class UUIBulletPoint_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIBulletPoint.UIBulletPoint_C");
		return ptr;
	}



	void SetBullitStyle();
	void SetCollapsed();
	void ExpandSmoothly();
	void CollapseSmoothly();
	void SetAffectorInfo();
	void SetItemBulletPointData();
	void SetRarity();
	void SetShadowScale();
	void SetScale();
	void SetAlignment();
	void SetFontSize();
	void SetText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

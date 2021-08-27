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

// WidgetBlueprintGeneratedClass UMG_EnchantmentBigLevelPlate.UMG_EnchantmentBigLevelPlate_C
// 0x0000
class UUMG_EnchantmentBigLevelPlate_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentBigLevelPlate.UMG_EnchantmentBigLevelPlate_C");
		return ptr;
	}



	void GetBadgeLevelScale();
	void UpdateGraphics();
	void SetLevel();
	void PreConstruct();
	void ExecuteUbergraph_UMG_EnchantmentBigLevelPlate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

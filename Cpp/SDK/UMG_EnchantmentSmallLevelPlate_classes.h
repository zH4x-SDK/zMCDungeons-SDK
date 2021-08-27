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

// WidgetBlueprintGeneratedClass UMG_EnchantmentSmallLevelPlate.UMG_EnchantmentSmallLevelPlate_C
// 0x0000
class UUMG_EnchantmentSmallLevelPlate_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentSmallLevelPlate.UMG_EnchantmentSmallLevelPlate_C");
		return ptr;
	}



	void SetState();
	void setHighlighted();
	void UpdateGraphics();
	void SetLevel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

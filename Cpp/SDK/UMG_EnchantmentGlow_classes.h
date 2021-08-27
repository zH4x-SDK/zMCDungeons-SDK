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

// WidgetBlueprintGeneratedClass UMG_EnchantmentGlow.UMG_EnchantmentGlow_C
// 0x0000
class UUMG_EnchantmentGlow_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentGlow.UMG_EnchantmentGlow_C");
		return ptr;
	}



	void SetGlowScale();
	void UpdateGraphics();
	void SetInvestedPoints();
	void SetInventoryItemData();
	void ExecuteUbergraph_UMG_EnchantmentGlow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

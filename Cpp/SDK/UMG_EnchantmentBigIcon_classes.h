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

// WidgetBlueprintGeneratedClass UMG_EnchantmentBigIcon.UMG_EnchantmentBigIcon_C
// 0x0000
class UUMG_EnchantmentBigIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentBigIcon.UMG_EnchantmentBigIcon_C");
		return ptr;
	}



	void ResetAnimations();
	void UpdateMaterial();
	void OnWasEnchanted();
	void SetTypeAndLevel();
	void UpdateGraphics();
	void SetLevel();
	void setType();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

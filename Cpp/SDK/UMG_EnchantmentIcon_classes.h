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

// WidgetBlueprintGeneratedClass UMG_EnchantmentIcon.UMG_EnchantmentIcon_C
// 0x0000
class UUMG_EnchantmentIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentIcon.UMG_EnchantmentIcon_C");
		return ptr;
	}



	void OnShow();
	void SetVisible();
	void OnHide();
	void SetEnchantmentType();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_EnchantmentLevelEffect.UMG_EnchantmentLevelEffect_C
// 0x0000
class UUMG_EnchantmentLevelEffect_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentLevelEffect.UMG_EnchantmentLevelEffect_C");
		return ptr;
	}



	void setHighlighted();
	void SetText();
	void GetLevel();
	void UpdateGraphics();
	void SetState();
	void Tick();
	void Construct();
	void inputChanged();
	void ExecuteUbergraph_UMG_EnchantmentLevelEffect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_EnchantmentScroll.UMG_EnchantmentScroll_C
// 0x0000
class UUMG_EnchantmentScroll_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentScroll.UMG_EnchantmentScroll_C");
		return ptr;
	}



	void SetupPlatformSpecificImages();
	void UpdateVisibility();
	void GetEasedOpen();
	void AnimateInstantly();
	void GetOpenAnimationFillFactor();
	void GetOpenAnimationOffsetAlpha();
	void GetOpenAnimationPhase();
	void SetOpenAmount();
	void GetTargetOpenAmount();
	void SetOpen();
	void UpdateGraphics();
	void PreConstruct();
	void Construct();
	void Tick();
	void ExecuteUbergraph_UMG_EnchantmentScroll();
	void OpenVisualStateChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

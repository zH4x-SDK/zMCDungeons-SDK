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

// WidgetBlueprintGeneratedClass UMG_HotbarEnchantmentPoints.UMG_HotbarEnchantmentPoints_C
// 0x0000
class UUMG_HotbarEnchantmentPoints_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarEnchantmentPoints.UMG_HotbarEnchantmentPoints_C");
		return ptr;
	}



	void UpdateIconColor();
	void PlayFadeAnimation();
	void UpdateShouldNumbersBeVisible();
	void GetAvailableEnchantmentPoints();
	void OnLevelUp();
	void SetExperienceComponent();
	void UpdateCounter();
	void SetItemStashComponent();
	void OnLevelUpDelayed();
	void SetPlayerCharacter();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_HotbarEnchantmentPoints();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

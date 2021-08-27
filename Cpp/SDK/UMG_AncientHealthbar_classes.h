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

// WidgetBlueprintGeneratedClass UMG_AncientHealthbar.UMG_AncientHealthbar_C
// 0x0000
class UUMG_AncientHealthbar_C : public UUMG_GlobalHealthbarBaseWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AncientHealthbar.UMG_AncientHealthbar_C");
		return ptr;
	}



	void OnEnchantmentsUpdated();
	void SetMobInternal();
	void PreConstruct();
	void SetMob();
	void setHighlighted();
	void FadeOutMobName();
	void Event_OnNameFadedOut();
	void ReworkSize();
	void RefreshBar();
	void ShowHideBar();
	void OnShowBarAnimationFinished();
	void ExecuteUbergraph_UMG_AncientHealthbar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

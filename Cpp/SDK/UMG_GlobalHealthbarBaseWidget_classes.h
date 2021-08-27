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

// WidgetBlueprintGeneratedClass UMG_GlobalHealthbarBaseWidget.UMG_GlobalHealthbarBaseWidget_C
// 0x0000
class UUMG_GlobalHealthbarBaseWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GlobalHealthbarBaseWidget.UMG_GlobalHealthbarBaseWidget_C");
		return ptr;
	}



	void FadeOutMobName();
	void RefreshBar();
	void ShowHideBar();
	void ReworkSize();
	void setHighlighted();
	void SetMob();
	void SetNewVisibility();
	void IsPlayerInRange();
	void GetGlobalHealthBar();
	void SetGlobalHealthBar();
	void OnNameFadedOut__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_CreditsBGSwitcher.UMG_CreditsBGSwitcher_C
// 0x0000
class UUMG_CreditsBGSwitcher_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CreditsBGSwitcher.UMG_CreditsBGSwitcher_C");
		return ptr;
	}



	void OnFadeCompleted();
	void FadeBG();
	void UpdateIndex();
	void ResetTimer();
	void GetCurrentTexture();
	void SwitchTexture();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_CreditsBGSwitcher();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

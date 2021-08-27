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

// WidgetBlueprintGeneratedClass UMG_CreditsBG.UMG_CreditsBG_C
// 0x0000
class UUMG_CreditsBG_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CreditsBG.UMG_CreditsBG_C");
		return ptr;
	}



	void OnFadeOutCompleted();
	void OnFadeInCompleted();
	void BeginZoom();
	void BeginFadeIn();
	void BeginFadeOut();
	void SetTexture();
	void Tick();
	void ExecuteUbergraph_UMG_CreditsBG();
	void OnFadeOutComplete__DelegateSignature();
	void OnFadeInComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_TextCounter.UMG_TextCounter_C
// 0x0000
class UUMG_TextCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TextCounter.UMG_TextCounter_C");
		return ptr;
	}



	void HasPendingSmoothCounting();
	void Invalidate();
	void SetText();
	void SetSmoothCountDelay();
	void FinishSmoothCount();
	void SetCountingSmoothly();
	void SetShadowColor();
	void SetTextColor();
	void SetSmoothCount();
	void SetDisplayCount();
	void SetCounterSmooth();
	void SetCounterInstant();
	void SetTextFontFace();
	void SetTextSize();
	void SetTextString();
	void PreConstruct();
	void Tick();
	void SetCanCache();
	void ExecuteUbergraph_UMG_TextCounter();
	void OnSmoothCountStep__DelegateSignature();
	void OnStoppedCountingSmoothly__DelegateSignature();
	void OnStartedCountingSmoothly__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_HotbarCurrencyCounter.UMG_HotbarCurrencyCounter_C
// 0x0000
class UUMG_HotbarCurrencyCounter_C : public UCurrencyCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarCurrencyCounter.UMG_HotbarCurrencyCounter_C");
		return ptr;
	}



	void SetIconAlignment();
	void IsAnimating();
	void SetAnyChange();
	void GetHasPendingChange();
	void SetTextPosition();
	void RefreshGraphics();
	void SetAnimating();
	void SetPlayerCharacter();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_1_OnStartedCountingSmoothly__DelegateSignature();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_4_OnStoppedCountingSmoothly__DelegateSignature();
	void PreConstruct();
	void OnCurrencyTypeChanged();
	void OnValueChanged();
	void ExecuteUbergraph_UMG_HotbarCurrencyCounter();
	void OnPendingChangeChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

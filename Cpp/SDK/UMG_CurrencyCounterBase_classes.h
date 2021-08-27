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

// WidgetBlueprintGeneratedClass UMG_CurrencyCounterBase.UMG_CurrencyCounterBase_C
// 0x0000
class UUMG_CurrencyCounterBase_C : public UCurrencyCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CurrencyCounterBase.UMG_CurrencyCounterBase_C");
		return ptr;
	}



	void GetDesiredVisible();
	void RefreshVisible();
	void UpdateCurrencyItemIdAssets();
	void SetOpacity();
	void SetSmoothCountDelay();
	void FinishSmoothCount();
	void SetShowPop();
	void SetCountingSmoothly();
	void RefreshShopPop();
	void setHighlighted();
	void SetSmoothly();
	void SetInstantly();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_2_OnStartedCountingSmoothly__DelegateSignature();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_3_OnStoppedCountingSmoothly__DelegateSignature();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_0_OnSmoothCountStep__DelegateSignature();
	void OnValueChanged();
	void OnCurrencyTypeChanged();
	void PreConstruct();
	void Construct();
	void OnEmphasisChanged();
	void ExecuteUbergraph_UMG_CurrencyCounterBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

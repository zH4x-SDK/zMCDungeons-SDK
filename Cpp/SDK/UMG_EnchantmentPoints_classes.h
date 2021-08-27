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

// WidgetBlueprintGeneratedClass UMG_EnchantmentPoints.UMG_EnchantmentPoints_C
// 0x0000
class UUMG_EnchantmentPoints_C : public UEnchantmentPointsCounterWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentPoints.UMG_EnchantmentPoints_C");
		return ptr;
	}



	void FinishSmoothCount();
	void SetSmoothCountDelay();
	void UpdateCounterInstant();
	void SetEmphasize();
	void GetAvailableEnchantmentPoints();
	void UpdateCounterSmooth();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_0_OnStartedCountingSmoothly__DelegateSignature();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_1_OnStoppedCountingSmoothly__DelegateSignature();
	void BndEvt__UMG_TextCounter_K2Node_ComponentBoundEvent_0_OnSmoothCountStep__DelegateSignature();
	void OnValueChanged();
	void OnEmphasisChanged();
	void ExecuteUbergraph_UMG_EnchantmentPoints();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

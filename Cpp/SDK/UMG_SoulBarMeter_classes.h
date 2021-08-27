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

// WidgetBlueprintGeneratedClass UMG_SoulBarMeter.UMG_SoulBarMeter_C
// 0x0000
class UUMG_SoulBarMeter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SoulBarMeter.UMG_SoulBarMeter_C");
		return ptr;
	}



	void SetDelayedPercentage();
	void OnSoulsNeeded();
	void OnSoulPercentageChanged();
	void SetSoulComponent();
	void BndEvt__UMG_HotbarGenericMeter_K2Node_ComponentBoundEvent_1_OnIncreasingTrackerChanged__DelegateSignature();
	void BndEvt__UMG_HotbarGenericMeter_K2Node_ComponentBoundEvent_2_OnDecreasingTrackerChanged__DelegateSignature();
	void BndEvt__UMG_HotbarGenericMeter_K2Node_ComponentBoundEvent_0_OnMeterMaxedOut__DelegateSignature();
	void Tick();
	void PreConstruct();
	void ExecuteUbergraph_UMG_SoulBarMeter();
	void OnConsumingSoulsFactorChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

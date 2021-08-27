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

// WidgetBlueprintGeneratedClass UMG_HotbarGenericMeter.UMG_HotbarGenericMeter_C
// 0x0000
class UUMG_HotbarGenericMeter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarGenericMeter.UMG_HotbarGenericMeter_C");
		return ptr;
	}



	void SetPercentage();
	void SetVisualDecreasingPercentage();
	void SetVisualIncreasingPercentage();
	void SetVisualSoulPercentage();
	void SetPercentageSmoothly();
	void Tick();
	void Construct();
	void ExecuteUbergraph_UMG_HotbarGenericMeter();
	void OnDecreasingTrackerChanged__DelegateSignature();
	void OnIncreasingTrackerChanged__DelegateSignature();
	void OnMeterMaxedOut__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

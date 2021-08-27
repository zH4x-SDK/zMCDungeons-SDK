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

// WidgetBlueprintGeneratedClass UMG_OnlineCounter.UMG_OnlineCounter_C
// 0x0000
class UUMG_OnlineCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_OnlineCounter.UMG_OnlineCounter_C");
		return ptr;
	}



	void RefreshExpand();
	void SetShouldExpand();
	void SetCounterInstant();
	void RefreshFade();
	void SetCounterAnimated();
	void Tick();
	void Construct();
	void PreConstruct();
	void WidgetAnimationEvt_CounterOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_CounterIn_K2Node_WidgetAnimationEvent_2();
	void ExecuteUbergraph_UMG_OnlineCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

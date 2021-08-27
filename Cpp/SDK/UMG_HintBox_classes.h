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

// WidgetBlueprintGeneratedClass UMG_HintBox.UMG_HintBox_C
// 0x0000
class UUMG_HintBox_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HintBox.UMG_HintBox_C");
		return ptr;
	}



	void OnCollapse();
	void Hide();
	void SetBoxType();
	void Deactivate();
	void Activate();
	void Tick();
	void Construct();
	void PreConstruct();
	void Destruct();
	void ImportantPulseStart();
	void Activated();
	void WidgetAnimationEvt_CompletedFadeOut_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UMG_HintBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

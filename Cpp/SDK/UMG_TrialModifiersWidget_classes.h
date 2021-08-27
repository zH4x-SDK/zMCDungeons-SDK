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

// WidgetBlueprintGeneratedClass UMG_TrialModifiersWidget.UMG_TrialModifiersWidget_C
// 0x0000
class UUMG_TrialModifiersWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TrialModifiersWidget.UMG_TrialModifiersWidget_C");
		return ptr;
	}



	void OnDifficultyChanged();
	void SetHasAny();
	void RefreshActiveAffectorInfo();
	void SetGameBp();
	void ToggleShowModifiers();
	void Construct();
	void BndEvt__UMG_DropDownButton_K2Node_ComponentBoundEvent_0_OnDroppedDownChanged__DelegateSignature();
	void ResetUISwitch();
	void ExecuteUbergraph_UMG_TrialModifiersWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

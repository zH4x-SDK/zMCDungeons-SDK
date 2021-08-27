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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotAction.UMG_HotbarSlotAction_C
// 0x0000
class UUMG_HotbarSlotAction_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotAction.UMG_HotbarSlotAction_C");
		return ptr;
	}



	void UpdateWarningVisibility();
	void PlayWarning();
	void SetHintHighlight();
	void SetDisabled();
	void SetSimulatePressed();
	void PreConstruct();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_1_OnButtonStateWasChanged__DelegateSignature();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_2();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_2_OnWasHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarSlotAction();
	void OnActionButtonStateChanged__DelegateSignature();
	void OnActionClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotItemSlot.UMG_HotbarSlotItemSlot_C
// 0x0000
class UUMG_HotbarSlotItemSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotItemSlot.UMG_HotbarSlotItemSlot_C");
		return ptr;
	}



	void OnSlotItemCooldownUpdated();
	void RefreshHotbarIconInstance();
	void SetBusy();
	void RefreshSoulUsing();
	void IsDisabled();
	void RefreshBusy();
	void SetDisabled();
	void RefreshEnabled();
	void SetItemInstance();
	void RefreshCooldown();
	void SetPlayerCharacterInternal();
	void GetPlayerController();
	void OnSlotWantsToActivateChanged();
	void OnSlotItemCooldownChanged();
	void IsSlotItemOnCooldown();
	void OnSlotItemActivationCompleted();
	void OnItemInstanceChanged();
	void SetSlot();
	void GetCooldownFraction();
	void CanActivateSlot();
	void PreConstruct();
	void SetPlayerCharacter();
	void Tick();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_3_OnWasPressed__DelegateSignature();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_6_OnWasReleased__DelegateSignature();
	void Construct();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_4_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_5_OnSpecificHintDeactivated__DelegateSignature();
	void WidgetAnimationEvt_Activated_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Activated_K2Node_WidgetAnimationEvent_2();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_0_OnWasHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarSlotItemSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

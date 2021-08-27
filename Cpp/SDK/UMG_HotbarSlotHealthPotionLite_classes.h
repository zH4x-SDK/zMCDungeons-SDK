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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotHealthPotionLite.UMG_HotbarSlotHealthPotionLite_C
// 0x0000
class UUMG_HotbarSlotHealthPotionLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotHealthPotionLite.UMG_HotbarSlotHealthPotionLite_C");
		return ptr;
	}



	void OnSlotItemCooldownUpdated();
	void SetHintHighlightLite();
	void RefreshHotbarIconInstance();
	void IsDisabled();
	void SetDisabled();
	void RefreshEnabled();
	void SetItemInstance();
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
	void Tick();
	void PreConstruct();
	void SetPlayerCharacter();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_3_OnWasPressed__DelegateSignature();
	void BndEvt__UMG_HotbarSlotGeneric_K2Node_ComponentBoundEvent_6_OnWasReleased__DelegateSignature();
	void Construct();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_4_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_5_OnSpecificHintDeactivated__DelegateSignature();
	void WidgetAnimationEvt_Activated_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Activated_K2Node_WidgetAnimationEvent_2();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_2_OnShortcutHeld__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_7_OnShortcutReleased__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarSlotHealthPotionLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

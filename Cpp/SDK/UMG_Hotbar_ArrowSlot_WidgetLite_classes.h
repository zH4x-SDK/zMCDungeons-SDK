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

// WidgetBlueprintGeneratedClass UMG_Hotbar_ArrowSlot_WidgetLite.UMG_Hotbar_ArrowSlot_WidgetLite_C
// 0x0000
class UUMG_Hotbar_ArrowSlot_WidgetLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_ArrowSlot_WidgetLite.UMG_Hotbar_ArrowSlot_WidgetLite_C");
		return ptr;
	}



	void GetOrCreateOverlayWidget();
	void UpdateMainAmmoCount();
	void TriggerwarningHighlight();
	void SetAmmoPosition();
	void TriggerNoRangedWeaponWasEquipped();
	void CleanupWidgetSlots();
	void RefreshAmmoSlots();
	void GetItemSlotLastCount();
	void OnItemSlotDisplayCountChanged();
	void UpdateWidgetCounters();
	void UpdateTextCounters();
	void SetAmmoSlot();
	void AmmoSlotChanged();
	void GetOrCreateContentWidgetCounter();
	void SetRangedAttackComponent();
	void AddAmmoSlot();
	void SetPlayerCharacterIntenal();
	void RangedWeaponChanged();
	void HasRangedWeapon();
	void TriggerInsufficientArrows();
	void UpdateCounters();
	void SetPlayerCharacter();
	void Construct();
	void PreConstruct();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Hint_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_Hint_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_Warning_K2Node_WidgetAnimationEvent_4();
	void WidgetAnimationEvt_NoWeaponWarning_K2Node_WidgetAnimationEvent_5();
	void WidgetAnimationEvt_NoWeaponWarning_K2Node_WidgetAnimationEvent_6();
	void SetNewCurrentAmmoSlot();
	void ExecuteUbergraph_UMG_Hotbar_ArrowSlot_WidgetLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

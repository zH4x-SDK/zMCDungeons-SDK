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

// WidgetBlueprintGeneratedClass UMG_Hotbar_ArrowSlot_Widget.UMG_Hotbar_ArrowSlot_Widget_C
// 0x0000
class UUMG_Hotbar_ArrowSlot_Widget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_ArrowSlot_Widget.UMG_Hotbar_ArrowSlot_Widget_C");
		return ptr;
	}



	void TTSCount();
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
	void GetOrCreateWidgetCounter();
	void SetRangedAttackComponent();
	void AddAmmoSlot();
	void GetOrCreateTextCounter();
	void SetPlayerCharacterIntenal();
	void RangedWeaponChanged();
	void HasRangedWeapon();
	void TriggerInsufficientArrows();
	void UpdateCounters();
	void SetPlayerCharacter();
	void Construct();
	void PreConstruct();
	void PlayTTS();
	void Speck_Count();
	void ExecuteUbergraph_UMG_Hotbar_ArrowSlot_Widget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotRollLite.UMG_HotbarSlotRollLite_C
// 0x0000
class UUMG_HotbarSlotRollLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotRollLite.UMG_HotbarSlotRollLite_C");
		return ptr;
	}



	void HasDodgesLeft();
	void UpdateDodgeCounter();
	void SetCounterVisibility();
	void UpdateUsageHighlight();
	void DodgeCooldownChanged();
	void SetCooldownFractionLite();
	void SetPressed();
	void GetRollDodgeCooldown();
	void UpdateCooldown();
	void RefreshGraphics();
	void SetUseBigIcon();
	void SetPlayerCharacter();
	void PreConstruct();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_2_OnShortcutHeld__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_3_OnShortcutReleased__DelegateSignature();
	void Tick();
	void ExecuteUbergraph_UMG_HotbarSlotRollLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

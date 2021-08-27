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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotRoll.UMG_HotbarSlotRoll_C
// 0x0000
class UUMG_HotbarSlotRoll_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotRoll.UMG_HotbarSlotRoll_C");
		return ptr;
	}



	void UpdateDodgeCounter();
	void HasDodgesLeft();
	void SetCounterVisibility();
	void OnDodgeCooldownChanged();
	void SetIsDodgeRolling();
	void OnDodgeRollingChanged();
	void SetPressed();
	void UpdateCooldown();
	void RefreshGraphics();
	void SetUseBigIcon();
	void SetPlayerCharacter();
	void PreConstruct();
	void BndEvt__UMG_InputActionKeyHotbar_K2Node_ComponentBoundEvent_0_OnShortcutHeld__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbar_K2Node_ComponentBoundEvent_1_OnShortcutReleased__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarSlotRoll();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_TeleportToPlayerRow.UMG_TeleportToPlayerRow_C
// 0x0000
class UUMG_TeleportToPlayerRow_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TeleportToPlayerRow.UMG_TeleportToPlayerRow_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetPlayerAliveState();
	void RefreshActionKey();
	void GetButtonReference();
	void SetProgressBar();
	void GetPlayerCharacter();
	void SetPlayerCharacter();
	void PreConstruct();
	void Tick();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature();
	void WidgetAnimationEvt_ProgressGrow_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_ProgressGrow_K2Node_WidgetAnimationEvent_2();
	void BndEvt__UMG_HudPlayerPortrait_K2Node_ComponentBoundEvent_1_OnPlayerAliveStateChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_TeleportToPlayerRow();
	void OnPlayerAliveStateChanged__DelegateSignature();
	void TriggerTeleport__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

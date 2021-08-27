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

// WidgetBlueprintGeneratedClass UMG_Hotbar_TeleportToPlayersOctagon.UMG_Hotbar_TeleportToPlayersOctagon_C
// 0x0000
class UUMG_Hotbar_TeleportToPlayersOctagon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_TeleportToPlayersOctagon.UMG_Hotbar_TeleportToPlayersOctagon_C");
		return ptr;
	}



	void RefreshListOpen();
	void GetIsAlive();
	void ShouldListBeOpen();
	void OnAliveStateChanged();
	void UserOpenTeleportList();
	void UserCloseTeleportList();
	void SetShowDownedMate();
	void CheckNeedsWarning();
	void setPopupAlignment();
	void GetHasAnyTarget();
	void SetAnyTarget();
	void RefreshAnyTarget();
	void GetListVisible();
	void RefreshGraphics();
	void SetPlayerController();
	void SetDisabled();
	void OnTeleportStateChanged();
	void SetPressed();
	void SetListDesireOpen();
	void UseEnderPearlToPlayer();
	void UserToggleList();
	void BndEvt__TeleportToPlayersList_K2Node_ComponentBoundEvent_0_TeleportToFriend__DelegateSignature();
	void SetPlayerCharacter();
	void GlowPeaked();
	void BndEvt__UMG_HotbarSlotAction_K2Node_ComponentBoundEvent_4_OnActionClicked__DelegateSignature();
	void BndEvt__UMG_HotbarSlotAction_K2Node_ComponentBoundEvent_5_OnActionButtonStateChanged__DelegateSignature();
	void WidgetAnimationEvt_CloseList_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_OpenList_K2Node_WidgetAnimationEvent_2();
	void BndEvt__TeleportToPlayersList_K2Node_ComponentBoundEvent_1_AnyPlayerDownChanged__DelegateSignature();
	void WidgetAnimationEvt_FriendDownPulse_K2Node_WidgetAnimationEvent_3();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_3_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_6_OnSpecificHintDeactivated__DelegateSignature();
	void BndEvt__TeleportToPlayersList_K2Node_ComponentBoundEvent_7_OnCloseClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_Hotbar_TeleportToPlayersOctagon();
	void OpenChanged__DelegateSignature();
	void OnAnyTargetChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

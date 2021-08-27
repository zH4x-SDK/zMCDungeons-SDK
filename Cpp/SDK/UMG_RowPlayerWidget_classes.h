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

// WidgetBlueprintGeneratedClass UMG_RowPlayerWidget.UMG_RowPlayerWidget_C
// 0x0000
class UUMG_RowPlayerWidget_C : public UUMG_RowPlayerBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowPlayerWidget.UMG_RowPlayerWidget_C");
		return ptr;
	}



	void GetPlayerController();
	void GetPlayerState();
	void GetPlayerName();
	void GetCanKickPlayers();
	void GetIsHost();
	void GetCanLeaveLocally();
	void GetHoveredText();
	void GetOpenedText();
	void GetPressStickText();
	void GetIsGamepadFocusable();
	void SetGamepadFocusable();
	void SetBasePlayerState();
	void CouldBeConsideredHost();
	void SetNumberColor();
	void Setup();
	void setType();
	void SetIndex();
	void setInfo();
	void getRowButton();
	void PlayerStateChanged();
	void UpdateOptions();
	void SetPlayerCharacter();
	void BndEvt__Kick_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void OnMouseLeave();
	void OnMouseEnter();
	void BndEvt__rowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GamepadKick();
	void StickDown();
	void StickUp();
	void LeaveAnimationFinished();
	void BndEvt__UMG_PlayerPortrait_K2Node_ComponentBoundEvent_3_OnPlayerPortraitColorChanged__DelegateSignature();
	void BndEvt__UMG_PlatformControllerIcon_K2Node_ComponentBoundEvent_4_OnAnyIconChanged__DelegateSignature();
	void Dialogoutput();
	void ExecuteUbergraph_UMG_RowPlayerWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

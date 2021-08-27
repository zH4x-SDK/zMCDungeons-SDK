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

// WidgetBlueprintGeneratedClass UMG_RowInviteFriendWidget.UMG_RowInviteFriendWidget_C
// 0x0000
class UUMG_RowInviteFriendWidget_C : public UUMG_RowPlayerBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowInviteFriendWidget.UMG_RowInviteFriendWidget_C");
		return ptr;
	}



	void GetOpenedText();
	void GetPlayerName();
	void GetHoveredText();
	void NavInvite();
	void SetFriendRowStyle();
	void HasValidFriendData();
	void getRowButton();
	void UpdateOptions();
	void SetFriendData();
	void InviteSessionFailed_722F2ABE49E09F5188B68997C9554E7E();
	void InviteSessionSucceeded_722F2ABE49E09F5188B68997C9554E7E();
	void GamepadInvite();
	void OnAnimationFinished();
	void PreConstruct();
	void Construct();
	void BndEvt__UMG_RowFriendWidget_K2Node_ComponentBoundEvent_0_onRowHover__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_4_OnFocused__DelegateSignature();
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_5_OnUnfocused__DelegateSignature();
	void focusagain();
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__UMG_RowFriendWidget_K2Node_ComponentBoundEvent_3_onRowFocus__DelegateSignature();
	void ExecuteUbergraph_UMG_RowInviteFriendWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

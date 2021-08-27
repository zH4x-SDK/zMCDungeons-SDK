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

// WidgetBlueprintGeneratedClass UMG_RowGameWidget.UMG_RowGameWidget_C
// 0x0000
class UUMG_RowGameWidget_C : public UUMG_RowWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowGameWidget.UMG_RowGameWidget_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void SetNavigation();
	void HandleNavigation();
	void CanJoinCrossplaySession();
	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void TriggerRefreshJuice();
	void OnPrvilegeFailed();
	void OnPrivilegesSuccessful();
	void SetJoinable();
	void setPlayersData();
	void getRowButton();
	void Set_Session_Result();
	void JoinSessionFailed_66FB793C459EA2EE55C2B3BC58FCBB61();
	void JoinSessionCompleted_66FB793C459EA2EE55C2B3BC58FCBB61();
	void Construct();
	void childHover();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void inputChanged();
	void OnPrivilegeTaskSuccessful_Event_1();
	void OnPrivilegeTaskFailed_Event_1();
	void JoinOtherGameDialogInput();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_1_OnFocused__DelegateSignature();
	void childFocus();
	void PreConstruct();
	void EnableCrossplayDialogInput();
	void Removed();
	void ExecuteUbergraph_UMG_RowGameWidget();
	void OnNeedsRefresh__DelegateSignature();
	void OnJoinGameButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

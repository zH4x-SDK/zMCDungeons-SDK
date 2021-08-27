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

// WidgetBlueprintGeneratedClass UMG_InviteStack.UMG_InviteStack_C
// 0x0000
class UUMG_InviteStack_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InviteStack.UMG_InviteStack_C");
		return ptr;
	}



	void RefreshMinimised();
	void ShouldShowMinimised();
	void UnbindInputs();
	void AssignInputs();
	void OnControllerTypeChanged();
	void IsInviteVisible();
	void UpdateInviteTimeRemainings();
	void GetTimeRemaining();
	void PopInviteByIndex();
	void InviteCountChanged();
	void IncrementIndex();
	void RefreshGraphics();
	void AddSessionInvite();
	void BndEvt__UMG_PartyInviteReceivedWidget_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void BndEvt__NavigateLeftButton_K2Node_ComponentBoundEvent_5_OnWasClicked__DelegateSignature();
	void BndEvt__NavigateRightButton_K2Node_ComponentBoundEvent_6_OnWasClicked__DelegateSignature();
	void Tick();
	void Construct();
	void OnControllerTypeChanged_Event();
	void LeftInputClicked_Event();
	void RightInputClicked_Event();
	void ExecuteUbergraph_UMG_InviteStack();
	void RightInputClicked__DelegateSignature();
	void LeftInputClicked__DelegateSignature();
	void OnInviteCountChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

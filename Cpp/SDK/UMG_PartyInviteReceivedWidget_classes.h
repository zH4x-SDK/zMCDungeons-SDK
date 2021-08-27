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

// WidgetBlueprintGeneratedClass UMG_PartyInviteReceivedWidget.UMG_PartyInviteReceivedWidget_C
// 0x0000
class UUMG_PartyInviteReceivedWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyInviteReceivedWidget.UMG_PartyInviteReceivedWidget_C");
		return ptr;
	}



	void SetMinimised();
	void TTS();
	void OnRespondToInvitePopup();
	void OnControllerTypeChanged();
	void ToggleVisibility();
	void SetTimeRemaining();
	void RefreshGameSessionData();
	void SetInviteGameSession();
	void PreConstruct();
	void KeyboardAccept();
	void KeyboardDecline();
	void BndEvt__Accept_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__Decline_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__Accept_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__Decline_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void OnDialoguePopupInput();
	void OnNeedCrossplayDialogueInput();
	void ExecuteUbergraph_UMG_PartyInviteReceivedWidget();
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

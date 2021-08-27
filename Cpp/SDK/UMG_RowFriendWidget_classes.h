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

// WidgetBlueprintGeneratedClass UMG_RowFriendWidget.UMG_RowFriendWidget_C
// 0x0000
class UUMG_RowFriendWidget_C : public UUMG_RowPlayerBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowFriendWidget.UMG_RowFriendWidget_C");
		return ptr;
	}



	void GetPlayerName();
	void GetOpenedText();
	void UpdateStyle();
	void SetFriendRowStyle();
	void getRowButton();
	void SetFriendData();
	void BndEvt__Message_K2Node_ComponentBoundEvent_8_OnWasClicked__DelegateSignature();
	void BndEvt__Join_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnWasHovered__DelegateSignature();
	void BndEvt__Invite_K2Node_ComponentBoundEvent_3_OnWasHovered__DelegateSignature();
	void BndEvt__Join_K2Node_ComponentBoundEvent_4_OnWasHovered__DelegateSignature();
	void BndEvt__Message_K2Node_ComponentBoundEvent_5_OnWasHovered__DelegateSignature();
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_6_OnWasUnhovered__DelegateSignature();
	void BndEvt__Invite_K2Node_ComponentBoundEvent_7_OnWasUnhovered__DelegateSignature();
	void BndEvt__Join_K2Node_ComponentBoundEvent_9_OnWasUnhovered__DelegateSignature();
	void BndEvt__Message_K2Node_ComponentBoundEvent_10_OnWasPressed__DelegateSignature();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void OnMouseLeave();
	void OnMouseEnter();
	void BndEvt__rowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__rowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_RowFriendWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_AddFriendContents.UMG_AddFriendContents_C
// 0x0000
class UUMG_AddFriendContents_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AddFriendContents.UMG_AddFriendContents_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetOpenedText();
	void GetButtonHoveredText();
	void RefreshNavigationBar();
	void SetupNavigationBar();
	void FindFocusableWidget();
	void GetCurrentListNameTerminology();
	void SetResponse();
	void ResetState();
	void CanSearch();
	void SetGameInstance();
	void TryFindPlayer();
	void OnFindPlayerCompleted();
	void UpdateGraphics();
	void PreConstruct();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__SearchField_K2Node_ComponentBoundEvent_2_OnTextCommited__DelegateSignature();
	void BndEvt__UMG_InitialBackButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void Construct();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnWasClicked__DelegateSignature();
	void inputChanged();
	void BndEvt__SearchField_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature();
	void BndEvt__SearchField_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_6_OnWasFocused__DelegateSignature();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_7_OnWasFocused__DelegateSignature();
	void Tick();
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_8_OnWasHovered__DelegateSignature();
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_9_OnWasHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_AddFriendContents();
	void OnButtonsChanged__DelegateSignature();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

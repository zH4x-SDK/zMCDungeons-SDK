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

// WidgetBlueprintGeneratedClass UMG_AddFriendSearchField.UMG_AddFriendSearchField_C
// 0x0000
class UUMG_AddFriendSearchField_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AddFriendSearchField.UMG_AddFriendSearchField_C");
		return ptr;
	}



	void GetButtonActionText();
	void GetGamepadFocusable();
	void BlockSidebarInputLossPreventor();
	void OnKeyDown();
	void GetFocusableWidget();
	void SetFocus();
	void UpdateText();
	void GetCurrentText();
	void StopEditing();
	void StartEditing();
	void CommitText();
	void SetText();
	void RefreshStateGraphics();
	void SetEditing();
	void BndEvt__EditableTextBlock_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature();
	void BndEvt__EditableTextBlock_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature();
	void SetTextConsole();
	void ListenMenuSelect();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void Construct();
	void ExecuteUbergraph_UMG_AddFriendSearchField();
	void OnFocused__DelegateSignature();
	void OnTextChanged__DelegateSignature();
	void OnTextCommited__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

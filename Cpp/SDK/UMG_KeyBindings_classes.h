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

// WidgetBlueprintGeneratedClass UMG_KeyBindings.UMG_KeyBindings_C
// 0x0000
class UUMG_KeyBindings_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_KeyBindings.UMG_KeyBindings_C");
		return ptr;
	}



	void ActionHasSaveEntry();
	void FillEmptyKeybinds();
	void GetClosedText();
	void GetOpenedText();
	void ControllerTypeChanged();
	void GetK_MButtons();
	void UpdateNav();
	void ShouldSpeak();
	void FormatPCNavAsText();
	void SetLeftDefaults();
	void CanClose();
	void RefreshInputKeys();
	void SetupForInputType();
	void CheckForEmptyScreen();
	void keySubstitutions();
	void GetRowFromName();
	void ConstructProblemString();
	void CheckForProblems();
	void CheckForConflicts();
	void SwapKeybind();
	void CheckForEmptyRequired();
	void GetSelectedButtonKeybind();
	void ClearKeybinding();
	void LoadSavedKeybinds();
	void SaveKeybinds();
	void SetDefaults();
	void SetPlatform();
	void RefreshButtons();
	void Construct();
	void SetupGamepadListeners();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void setupExtraBindings();
	void DialogueInput_Event_1();
	void CloseSubMenu();
	void input_changed();
	void BndEvt__acceptButton_K2Node_ComponentBoundEvent_2_OnWasClicked__DelegateSignature();
	void BndEvt__clearButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void Clear();
	void ResetDialogueInput();
	void DefaultsPressed();
	void BndEvt__defaultsButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__UMG_TextButton_C_0_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void deselect();
	void SetKeybind();
	void bindSelected();
	void buttonHovered();
	void setNav();
	void BndEvt__leftButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void ResetLeftDialogueInput();
	void LeftHandedPressed();
	void TriedToClose();
	void ExecuteUbergraph_UMG_KeyBindings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

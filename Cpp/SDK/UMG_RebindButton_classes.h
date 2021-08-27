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

// WidgetBlueprintGeneratedClass UMG_RebindButton.UMG_RebindButton_C
// 0x0000
class UUMG_RebindButton_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RebindButton.UMG_RebindButton_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetParentWidget();
	void GetHoveredText();
	void GetSizebox();
	void SetRowReference();
	void SetIsSelected();
	void StartRebinding();
	void CancelRebinding();
	void OnPreviewMouseButtonDown();
	void OnKeyUp();
	void FinishRebinding();
	void SetNewRebind();
	void OnPreviewKeyDown();
	void HasKeybind();
	void GetButtonKeybinding();
	void clearButton();
	void setupButton();
	void SetInputAction();
	void Get_Selectable_Reference();
	void BndEvt__mouseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ListenMenuSelect();
	void GamepadClick();
	void MouseCaptureResponse();
	void Tick();
	void HoveredEvent();
	void UnhoveredEvent();
	void Construct();
	void ExecuteUbergraph_UMG_RebindButton();
	void IsRebindingChanged__DelegateSignature();
	void SetSelected__DelegateSignature();
	void SetKeybind__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_Popup.UMG_Popup_C
// 0x0000
class UUMG_Popup_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Popup.UMG_Popup_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void OnPlayAnimationReverseFinished();
	void OnPlayAnimationForwardFinished();
	void isButtonHeld();
	void shouldForceFocus();
	void Remove();
	void SetTextBody();
	void OnKeyUp();
	void OnPreviewKeyDown();
	void ButtonSelected();
	void AddButton();
	void SetupPopup();
	void Close();
	void BndEvt__UMG_ModalCloseSurface_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature();
	void PreConstruct();
	void buttonClicked();
	void Tick();
	void OnKeyPressed();
	void OnKeyReleased();
	void Construct();
	void ExecuteUbergraph_UMG_Popup();
	void OnRemoved__DelegateSignature();
	void DialogueInput__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

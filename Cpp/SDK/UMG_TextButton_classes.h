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

// WidgetBlueprintGeneratedClass UMG_TextButton.UMG_TextButton_C
// 0x0000
class UUMG_TextButton_C : public UUMG_ClickableButtonLogic_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TextButton.UMG_TextButton_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetHoveredText();
	void SetContentPadding();
	void ManualHoverCheck();
	void UpdatePadding();
	void SetExtraContentPadding();
	void SetTextAutoWrap();
	void setupMeta();
	void SetBgAppearance();
	void SetBgColor();
	void SetTextFontFace();
	void SetTextSize();
	void UpdateGraphicsInternal();
	void SetText();
	void PreConstruct();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_84_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ButtonSurface_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
	void OnUpdateGraphics();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void GamepadHover();
	void GamepadUnhover();
	void ListenMenuSelect();
	void GamepadClick();
	void RedoButtonAppearanceSetup();
	void ExecuteUbergraph_UMG_TextButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

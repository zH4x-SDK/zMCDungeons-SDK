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

// WidgetBlueprintGeneratedClass UMG_ClickableButtonLogic.UMG_ClickableButtonLogic_C
// 0x0000
class UUMG_ClickableButtonLogic_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ClickableButtonLogic.UMG_ClickableButtonLogic_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetPressedOrActionHeld();
	void SetActionHeld();
	void GetHoveredOrFocused();
	void GetFocused();
	void SetFocused();
	void GetDisabled();
	void OnUpdateGraphics();
	void SetClicked();
	void GetPressed();
	void GetHovered();
	void GetSelected();
	void SetSelected();
	void SetPressed();
	void SetHovered();
	void SetDisabled();
	void ExecuteUbergraph_UMG_ClickableButtonLogic();
	void OnUnfocused__DelegateSignature();
	void OnFocused__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnStateChanged__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

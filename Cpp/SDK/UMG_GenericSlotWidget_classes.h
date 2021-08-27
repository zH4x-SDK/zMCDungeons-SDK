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

// WidgetBlueprintGeneratedClass UMG_GenericSlotWidget.UMG_GenericSlotWidget_C
// 0x0000
class UUMG_GenericSlotWidget_C : public UUMG_ActionBindBoundBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GenericSlotWidget.UMG_GenericSlotWidget_C");
		return ptr;
	}



	void GetCurrentInputActions();
	void RefreshInputActions();
	void SetFocused();
	void RefreshInputDesired();
	void ManualHoverCheck();
	void GetDisabled();
	void SetOutlinePadding();
	void GetHovered();
	void GetSelected();
	void WasLayouted();
	void SetFlashAmount();
	void UpdateShine();
	void UpdateFlash();
	void GetMarkedNew();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void SetPressed();
	void UpdateStateGraphics();
	void SetMarkedNew();
	void SetDisabled();
	void setHighlighted();
	void StateWasChanged();
	void SetSelected();
	void SetHovered();
	void PreConstruct();
	void Tick();
	void OnMouseEnter();
	void OnMouseLeave();
	void Construct();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void OnInputActionPressed();
	void OnRecursivelyShown();
	void OnRecursivelyHidden();
	void BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_GenericSlotWidget();
	void OnSlotReselected__DelegateSignature();
	void OnFocusedChanged__DelegateSignature();
	void OnInputAction__DelegateSignature();
	void OnSelectedChanged__DelegateSignature();
	void OnStateChanged__DelegateSignature();
	void OnHoveredChanged__DelegateSignature();
	void OnMarkedNewChanged__DelegateSignature();
	void OnHighlightChanged__DelegateSignature();
	void OnSlotSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

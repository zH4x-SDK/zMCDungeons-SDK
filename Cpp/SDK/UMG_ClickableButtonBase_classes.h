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

// WidgetBlueprintGeneratedClass UMG_ClickableButtonBase.UMG_ClickableButtonBase_C
// 0x0000
class UUMG_ClickableButtonBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ClickableButtonBase.UMG_ClickableButtonBase_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void RefreshBindings();
	void GetButtonReference();
	void OnHoveredEvent();
	void OnPressedEvent();
	void OnUnhoveredEvent();
	void Construct();
	void OnReleasedEvent();
	void inputChanged();
	void OnClickedEvent();
	void PreConstruct();
	void FocusedEvent();
	void ExecuteUbergraph_UMG_ClickableButtonBase();
	void OnWasFocused__DelegateSignature();
	void OnWasReleased__DelegateSignature();
	void OnWasUnhovered__DelegateSignature();
	void OnWasPressed__DelegateSignature();
	void OnWasHovered__DelegateSignature();
	void OnWasClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

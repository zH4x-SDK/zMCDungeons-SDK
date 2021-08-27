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

// WidgetBlueprintGeneratedClass UMG_TextButtonBase.UMG_TextButtonBase_C
// 0x0000
class UUMG_TextButtonBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TextButtonBase.UMG_TextButtonBase_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetButtonReference();
	void PreConstruct();
	void OnClickedEvent();
	void OnHoveredEvent();
	void OnUnhoveredEvent();
	void Construct();
	void inputChanged();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void FocusedEvent();
	void ExecuteUbergraph_UMG_TextButtonBase();
	void OnWasFocused__DelegateSignature();
	void OnWasUnhovered__DelegateSignature();
	void OnWasHovered__DelegateSignature();
	void OnWasClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

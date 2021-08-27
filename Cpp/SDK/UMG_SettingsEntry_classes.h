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

// WidgetBlueprintGeneratedClass UMG_SettingsEntry.UMG_SettingsEntry_C
// 0x0000
class UUMG_SettingsEntry_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SettingsEntry.UMG_SettingsEntry_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetParentWidget();
	void GetSizebox();
	void GetHintText();
	void GetDungeonsControllerType();
	void SetScreenType();
	void SetInitialValue();
	void Get_Selectable_Reference();
	void Construct();
	void OnEntryHovered();
	void Clear_Hover();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void OnMouseLeave();
	void OnMouseEnter();
	void UpdateCursorHoverState();
	void HoveredEvent();
	void UnhoveredEvent();
	void OnEntryUnhovered();
	void PlayValueChangedTextToSpeech();
	void ExecuteUbergraph_UMG_SettingsEntry();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnButtonClick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

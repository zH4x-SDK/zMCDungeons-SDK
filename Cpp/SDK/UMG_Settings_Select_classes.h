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

// WidgetBlueprintGeneratedClass UMG_Settings_Select.UMG_Settings_Select_C
// 0x0000
class UUMG_Settings_Select_C : public UUMG_Settings_Platform_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Settings_Select.UMG_Settings_Select_C");
		return ptr;
	}



	void ShowCooldownText();
	void SetCooldownText();
	void GetHoveredText();
	void GetSizebox();
	void Get_Button_Text();
	void SetButtonText();
	void Set_BG_Visibility();
	void Get_Selectable_Reference();
	void setupButton();
	void PreConstruct();
	void BndEvt__mouseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ListenMenuSelect();
	void GamepadClick();
	void ControllerTypeChange();
	void HoveredEvent();
	void UnhoveredEvent();
	void Construct();
	void ExecuteUbergraph_UMG_Settings_Select();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_ToggleButton.UMG_ToggleButton_C
// 0x0000
class UUMG_ToggleButton_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ToggleButton.UMG_ToggleButton_C");
		return ptr;
	}



	void GetHoveredText();
	void TrySetValue();
	void TryToggleValue();
	void GetValueAsText();
	void UpdateGraphics();
	void SetValue();
	void Get_Selectable_Reference();
	void setupButton();
	void PreConstruct();
	void BndEvt__buttonL_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void inputChanged();
	void HoveredEvent();
	void UnhoveredEvent();
	void Construct();
	void OnMenuSelect();
	void ExecuteUbergraph_UMG_ToggleButton();
	void onTryToChangeValue__DelegateSignature();
	void OnValueChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

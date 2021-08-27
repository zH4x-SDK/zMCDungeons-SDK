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

// WidgetBlueprintGeneratedClass UMG_Settings_MultiSelect.UMG_Settings_MultiSelect_C
// 0x0000
class UUMG_Settings_MultiSelect_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Settings_MultiSelect.UMG_Settings_MultiSelect_C");
		return ptr;
	}



	void GetHoveredText();
	void GetSizebox();
	void WriteToSaveBuffer();
	void SetSelection();
	void Switch_Mode();
	void OnPreviewKeyDown();
	void Set_Selection_Visuals();
	void Change_Selection();
	void Get_Selectable_Reference();
	void setupButton();
	void PreConstruct();
	void BndEvt__buttonL_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__buttonR_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetInitialValue();
	void inputChanged();
	void HoveredEvent();
	void UnhoveredEvent();
	void Construct();
	void Tick();
	void ExecuteUbergraph_UMG_Settings_MultiSelect();
	void onSettingChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

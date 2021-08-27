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

// WidgetBlueprintGeneratedClass UMG_Settings_MultiSelectRich.UMG_Settings_MultiSelectRich_C
// 0x0000
class UUMG_Settings_MultiSelectRich_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Settings_MultiSelectRich.UMG_Settings_MultiSelectRich_C");
		return ptr;
	}



	void Generate_index_map();
	void Index_Of_Loc();
	void Get_Selection_Loc();
	void Get_Selection();
	void Using_Loc_Option_Collection();
	void ElementCount();
	void EntryLabel();
	void GetHoveredText();
	void GetSizebox();
	void WriteToSaveBuffer();
	void SetSelection();
	void OnPreviewKeyDown();
	void Set_Selection_Visuals();
	void Change_Selection();
	void Get_Selectable_Reference();
	void setupButton();
	void PreConstruct();
	void BndEvt__buttonL_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__buttonR_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetInitialValue();
	void HoveredEvent();
	void UnhoveredEvent();
	void Construct();
	void Tick();
	void inputChanged();
	void ExecuteUbergraph_UMG_Settings_MultiSelectRich();
	void onSettingChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_Settings_Slider.UMG_Settings_Slider_C
// 0x0000
class UUMG_Settings_Slider_C : public UUMG_Settings_Platform_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Settings_Slider.UMG_Settings_Slider_C");
		return ptr;
	}



	void GetHoveredText();
	void GetSizebox();
	void OnKeyUp();
	void WriteToSaveBuffer();
	void setInternalVariables();
	void denormalise_Value();
	void normalise_Value();
	void SetValue();
	void setValueText();
	void changeValue();
	void OnPreviewKeyDown();
	void Get_Selectable_Reference();
	void setupButton();
	void PreConstruct();
	void BndEvt__mouseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature();
	void SetInitialValue();
	void Construct();
	void ExecuteUbergraph_UMG_Settings_Slider();
	void OnChangeRelease__DelegateSignature();
	void OnValueChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

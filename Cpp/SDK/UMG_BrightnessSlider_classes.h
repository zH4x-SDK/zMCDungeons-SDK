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

// WidgetBlueprintGeneratedClass UMG_BrightnessSlider.UMG_BrightnessSlider_C
// 0x0000
class UUMG_BrightnessSlider_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_BrightnessSlider.UMG_BrightnessSlider_C");
		return ptr;
	}



	void SetOpen();
	void RevertSetting();
	void SaveSetting();
	void IsSwitchHandheld();
	void RefreshInputMode();
	void Get_Value_Text_1();
	void inputChanged();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void MoveLeft();
	void MoveRight();
	void valueChanged();
	void SetupInputEvents();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void SliderValueChanged();
	void OnSliderValueChanged();
	void ExecuteUbergraph_UMG_BrightnessSlider();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

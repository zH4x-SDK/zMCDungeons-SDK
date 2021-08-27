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

// WidgetBlueprintGeneratedClass UMG_ToggleNewsButton.UMG_ToggleNewsButton_C
// 0x0000
class UUMG_ToggleNewsButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ToggleNewsButton.UMG_ToggleNewsButton_C");
		return ptr;
	}



	void SetLeftSpacing();
	void SetForceGamepad();
	void GetForcedGamepad();
	void RefreshGraphics();
	void GetDroppedDown();
	void ToggleDroppedDown();
	void SetDroppedDown();
	void GetButtonReference();
	void PreConstruct();
	void Construct();
	void ControllerTypeChanged();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_ToggleNewsButton();
	void OnGamepadForcedChanged__DelegateSignature();
	void OnDroppedDownStateGraphics__DelegateSignature();
	void OnDroppedDownChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

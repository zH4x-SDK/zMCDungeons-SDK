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

// WidgetBlueprintGeneratedClass UMG_InitialBrightness.UMG_InitialBrightness_C
// 0x0000
class UUMG_InitialBrightness_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialBrightness.UMG_InitialBrightness_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void RefreshVisuals();
	void Continue();
	void Construct();
	void SetupGamepadListeners();
	void Back();
	void BndEvt__UMG_DoneButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void inputChanged();
	void BndEvt__UMG_InitialBackButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void OnOpenChanged();
	void ExecuteUbergraph_UMG_InitialBrightness();
	void OnFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

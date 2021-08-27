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

// WidgetBlueprintGeneratedClass UMG_ControllerMaps.UMG_ControllerMaps_C
// 0x0000
class UUMG_ControllerMaps_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ControllerMaps.UMG_ControllerMaps_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetClosedText();
	void GetOpenedText();
	void RefreshBindings();
	void openCustomise();
	void PreConstruct();
	void SetupGamepadListeners();
	void Construct();
	void BndEvt__CustomiseControls_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void OnSubmenuClosedCallback();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_0_CloseClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_ControllerMaps();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

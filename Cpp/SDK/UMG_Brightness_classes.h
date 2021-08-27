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

// WidgetBlueprintGeneratedClass UMG_Brightness.UMG_Brightness_C
// 0x0000
class UUMG_Brightness_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Brightness.UMG_Brightness_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void RefreshVisuals();
	void Close();
	void Construct();
	void SetupGamepadListeners();
	void BndEvt__UMG_DoneButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void Apply();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_2_CloseClicked__DelegateSignature();
	void inputChanged();
	void CloseSubMenu();
	void DoNothing();
	void OnOpenChanged();
	void ForceCloseSubMenu();
	void ExecuteUbergraph_UMG_Brightness();
	void OnFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_Configure_Online_Play.UMG_Configure_Online_Play_C
// 0x0000
class UUMG_Configure_Online_Play_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Configure_Online_Play.UMG_Configure_Online_Play_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void UnlinkMsAccount();
	void SetupButtons();
	void IsAccountLinked();
	void SetupGamepadListeners();
	void Construct();
	void BndEvt__ActivateOnlinePlay_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void BndEvt__SignOutOfYouMicrosoftAccount_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void CustomEvent_1();
	void BndEvt__Crossplay_K2Node_ComponentBoundEvent_2_onSettingChange__DelegateSignature();
	void CrossplayChanged();
	void BndEvt__UMG_Settings_Select_C_0_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_5_CloseClicked__DelegateSignature();
	void TeardownPostPopup();
	void UnlinkRequested();
	void Close_Sub_Menu();
	void PreConstruct();
	void ExecuteUbergraph_UMG_Configure_Online_Play();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

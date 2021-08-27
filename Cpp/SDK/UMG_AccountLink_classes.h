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

// WidgetBlueprintGeneratedClass UMG_AccountLink.UMG_AccountLink_C
// 0x0000
class UUMG_AccountLink_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AccountLink.UMG_AccountLink_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void ShowMsaLinkScreen();
	void PSN_SigninRequired();
	void SkipFlow();
	void SetXblInactive();
	void GetLoginFlow();
	void UpdateNavigationBar();
	void SetPlayerController();
	void Skip();
	void Link();
	void Close();
	void PreConstruct();
	void SetupGamepadListeners();
	void Construct();
	void Close_Popup();
	void OnOKDialogueInput();
	void OnShowMsaLink();
	void LoginCompleteEvent();
	void PSNLoginComplete();
	void Destruct();
	void OnOpenChanged();
	void DoNothing();
	void ExecuteUbergraph_UMG_AccountLink();
	void OnLinkFailed__DelegateSignature();
	void OnLinkComplete__DelegateSignature();
	void On_Close__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_SignInPopup.UMG_SignInPopup_C
// 0x0000
class UUMG_SignInPopup_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SignInPopup.UMG_SignInPopup_C");
		return ptr;
	}



	void SetPictureUrl();
	void SetGamerscore();
	void GetOpenedText();
	void SetPlayerInfo();
	void OnFail_B9ACF41A45DFDCD5822316B722E0C137();
	void OnSuccess_B9ACF41A45DFDCD5822316B722E0C137();
	void Construct();
	void OnCLose_();
	void SetupGamepadListeners();
	void IgnoreInput();
	void Tick();
	void PreConstruct();
	void OnOpenChanged();
	void ExecuteUbergraph_UMG_SignInPopup();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

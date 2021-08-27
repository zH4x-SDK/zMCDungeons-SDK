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

// WidgetBlueprintGeneratedClass UMg_CreditsRoll.UMG_CreditsRoll_C
// 0x0000
class UUMG_CreditsRoll_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMg_CreditsRoll.UMG_CreditsRoll_C");
		return ptr;
	}



	void GetClosedText();
	void GetOpenedText();
	void TearDown();
	void StopMusic();
	void PlayMusic();
	void isGamepad();
	void SwitchButtonVisibility();
	void FadeOut();
	void Construct();
	void Tick();
	void StartScroll();
	void AnimationFinished();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void CloseSubMenu();
	void Close();
	void SetupGamepadListeners();
	void ExecuteUbergraph_UMG_CreditsRoll();
	void SetupFinished__DelegateSignature();
	void CloseClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

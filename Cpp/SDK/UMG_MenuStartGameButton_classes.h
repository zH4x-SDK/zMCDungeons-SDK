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

// WidgetBlueprintGeneratedClass UMG_MenuStartGameButton.UMG_MenuStartGameButton_C
// 0x0000
class UUMG_MenuStartGameButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuStartGameButton.UMG_MenuStartGameButton_C");
		return ptr;
	}



	void SetVisuallySlim();
	void SetLockGameMode();
	void GetSelectedGameMode();
	void StartGame();
	void SelectStartGameMode();
	void CloseList();
	void OpenList();
	void SetDisabled();
	void OnFocusReceived();
	void SetListOpen();
	void SetSelectedStartGameMode();
	void PreConstruct();
	void BndEvt__MenuSelectedStartGameMode_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_MenuStartGameModesList_K2Node_ComponentBoundEvent_2_OnStartGameModeSelected__DelegateSignature();
	void BndEvt__UMG_MenuStartGameModesList_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__UMG_StartGameButton_K2Node_ComponentBoundEvent_0_OnWasHovered__DelegateSignature();
	void BndEvt__UMG_StartGameButton_K2Node_ComponentBoundEvent_5_OnWasUnhovered__DelegateSignature();
	void BndEvt__UMG_MenuStartGameModesList_K2Node_ComponentBoundEvent_6_OnGameModeAddedToList__DelegateSignature();
	void CustomEvent_1();
	void Construct();
	void ExecuteUbergraph_UMG_MenuStartGameButton();
	void OnStartGameModeStarted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

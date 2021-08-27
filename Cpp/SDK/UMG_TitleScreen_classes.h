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

// WidgetBlueprintGeneratedClass UMG_TitleScreen.UMG_TitleScreen_C
// 0x0000
class UUMG_TitleScreen_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TitleScreen.UMG_TitleScreen_C");
		return ptr;
	}



	void Cleanup();
	void XboxAccountSelectionCancelled();
	void DebugConsoleRequested();
	void GetLoginFlow();
	void ShouldShowPressAnyButton();
	void OnBlockingMessageInput();
	void TryShowBlockingMessage();
	void GetMenuReadyPlayerController();
	void TryContinueToMenu();
	void OnGlobalSaveLoaded();
	void IsXBLVisible();
	void SetXBLLoginVisible();
	void ResetSelectedController();
	void RefreshRedstoneLoader();
	void SetLoggingIn();
	void StartPlatformLogin();
	void GetBPGameInstance();
	void RefreshPressAnyButton();
	void SetSelectedController();
	void HasSelectedController();
	void GetUserManager();
	void GetPlayerThatPushedTheButton();
	void Construct();
	void OnAnyKeyPressedEvent();
	void SignedOutCallback();
	void BndEvt__UMG_XBLLogin_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void OnEntitlementsReceived();
	void OnBlockingMessageReceived();
	void PostSetup();
	void Tick();
	void BndEvt__UMG_XBLLogin_K2Node_ComponentBoundEvent_3_OnRequestVisible__DelegateSignature();
	void OnLoginComplete();
	void OnShowAccountLinkScreen();
	void OnLinkCancelled();
	void Dialogoutput();
	void ExecuteUbergraph_UMG_TitleScreen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

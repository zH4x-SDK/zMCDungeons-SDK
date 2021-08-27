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

// WidgetBlueprintGeneratedClass UMG_PlayerHUD.UMG_PlayerHUD_C
// 0x0000
class UUMG_PlayerHUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerHUD.UMG_PlayerHUD_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void RefreshToastBinds();
	void ShowDebugHUD();
	void SetHUDScale();
	void GetAllActiveHotbars();
	void InitialiseHUDScaling();
	void UpdateHUDScaling();
	void UpdateLocalHotbars();
	void GetEnderPearlOpen();
	void GetDungeonsHud();
	void ToggleShowModifiers();
	void SetSecondaryTargetMob();
	void ToggleHUDVisible();
	void SetMapOverlayVisibility();
	void ToggleMapOverlay();
	void SetHighlightedMob();
	void OnLevelUp();
	void SetPlayerCharacter();
	void SetPlayerController();
	void SetEnderPearlOpen();
	void UseEnderPearlToPlayer();
	void OnPawnPossessed();
	void RemoveGlobalHealthBar();
	void AddGlobalHealthBar();
	void ToggleNarrator();
	void DisplayHUD();
	void SetMissionDetails();
	void Construct();
	void Tick();
	void Destruct();
	void ShowLevelUpToaster();
	void BndEvt__UMG_ReviveFriendsWidget_K2Node_ComponentBoundEvent_0_OnAnyPlayersDownChanged__DelegateSignature();
	void ShowSecretMissionUnlocked();
	void switchDockChange();
	void OnInitialized();
	void ShowMerchantUnlock();
	void RefreshHotbars();
	void ExecuteUbergraph_UMG_PlayerHUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

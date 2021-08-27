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

// WidgetBlueprintGeneratedClass UMG_CharacterPicker.UMG_CharacterPicker_C
// 0x0000
class UUMG_CharacterPicker_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterPicker.UMG_CharacterPicker_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ControllerTypeChanged();
	void CanDownloadOnGamepad();
	void CanUploadOnGamepad();
	void SelectLastUsedCharacter();
	void OnGlobalSaveDataLoaded();
	void CancelCreate();
	void SetAbsoluteSlotIndex();
	void GetCharacterActors();
	void SetNavigationBar();
	void ClearPlayerController();
	void UpdatePlayerHeader();
	void CanBackOnGamepad();
	void CanDeleteOnGamepad();
	void Delete();
	void RefreshProgressVisibility();
	void OnNoSaveDataFound();
	void Switch();
	void Confirm();
	void Create();
	void clone();
	void CanNavigatePickerOnGamepad();
	void CanCustomizeOnGamepad();
	void CanConfirmOnGamepad();
	void CanCloneOnGamepad();
	void TryLocalLeave();
	void CanSwitchCharacterOnGamepad();
	void CanCreateCharacterOnGamepad();
	void SetCharacterPickers();
	void OnSaveDataChanged();
	void RefreshOptionsState();
	void DetermineOptionsState();
	void CanNavigateRelative();
	void RefreshButtons();
	void AnyCharacterPickerChangedCharacter();
	void RefreshSaveSlotData();
	void GetPlayerController();
	void SetRelativeSlotIndex();
	void SetCharacterSaveSlot();
	void OnRecentSaveDataIndexChanged();
	void SetPlayerController();
	void IsNavigating();
	void RefreshNavigation();
	void SetIsCurrentlyPicking();
	void GamepadLeft();
	void bindOverview();
	void GamepadRight();
	void BndEvt__UMG_CharacterOptions_K2Node_ComponentBoundEvent_5_OnSwitchHero__DelegateSignature();
	void BndEvt__NavRight_K2Node_ComponentBoundEvent_8_OnWasClicked__DelegateSignature();
	void GamepadSwitch();
	void BndEvt__NavLeft_K2Node_ComponentBoundEvent_7_OnWasClicked__DelegateSignature();
	void GamepadSelect();
	void OnDone();
	void OnCreate();
	void bindPicking();
	void DeletePopup();
	void ClonePopup();
	void Construct();
	void onDelete();
	void OnCustomise();
	void OnClone();
	void BndEvt__UMG_CharacterOptions_K2Node_ComponentBoundEvent_0_OnDone__DelegateSignature();
	void BndEvt__UMG_CharacterOptions_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature();
	void unbindAll();
	void Cancel();
	void SetCharacterData();
	void StickDown();
	void StickUp();
	void BndEvt__UMG_CharacterOptions_K2Node_ComponentBoundEvent_1_OnLeaveAnimationFinished__DelegateSignature();
	void PreConstruct();
	void Upload();
	void Download();
	void BndEvt__UMG_CharacterOptions_K2Node_ComponentBoundEvent_4_OnDownload__DelegateSignature();
	void UploadDownload();
	void ExecuteUbergraph_UMG_CharacterPicker();
	void OnCloudEdit__DelegateSignature();
	void OnDesiredCameraChanged__DelegateSignature();
	void OnLocalLeave__DelegateSignature();
	void OnChangedCharacter__DelegateSignature();
	void OnCustomizePicker__DelegateSignature();
	void OnNavigatingChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

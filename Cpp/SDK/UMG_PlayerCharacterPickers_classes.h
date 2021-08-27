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

// WidgetBlueprintGeneratedClass UMG_PlayerCharacterPickers.UMG_PlayerCharacterPickers_C
// 0x0000
class UUMG_PlayerCharacterPickers_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerCharacterPickers.UMG_PlayerCharacterPickers_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetDesiredCamera();
	void GetCharacterDetailsTTS();
	void SetCloudSaveView();
	void GetCurrentNavigatingPicker();
	void RefreshRepresentations();
	void ShowOnlyMain();
	void ClearPickerBindings();
	void RefreshAvailableCommands();
	void ReturnToOverview();
	void SetupSinglePicker();
	void RefreshProgressVisibility();
	void InitialBootForceCustomize();
	void SetMenu();
	void OnLocalPlayerLeave();
	void OnAnyPickerChangedCharacter();
	void SetDesiredCamera();
	void OnPickerCustomize();
	void GetCameraForPlayerCount();
	void GetOwningPlayerControllerBase();
	void RefreshCharacterPickerBind();
	void Get3DCharacterSlotForSlotIndex();
	void Get3DCharacterSlotForPlayerIndex();
	void Refresh3DCharacterRepresentationsBind();
	void Set3DCharacterRepresentationsMode();
	void GetLocalPlayerCount();
	void OnLocalPlayerCountChanged();
	void GetAnyPickerNavigating();
	void RefreshPickerNavigating();
	void SetAnyPickerNavigating();
	void OnPickerNavigatingChanged();
	void Construct();
	void BndEvt__ButtonClone_K2Node_ComponentBoundEvent_0_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonSkin_K2Node_ComponentBoundEvent_1_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonDelete_K2Node_ComponentBoundEvent_2_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_ClickPassthrough__DelegateSignature();
	void On_Cancel();
	void BndEvt__UMG_CloudSavePicker_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
	void BndEvt__NavigationButton_C_0_K2Node_ComponentBoundEvent_6_ClickPassthrough__DelegateSignature();
	void ExecuteUbergraph_UMG_PlayerCharacterPickers();
	void OnLocalLeave__DelegateSignature();
	void OnAnyChangedCharacter__DelegateSignature();
	void OnDesiredCameraChanged__DelegateSignature();
	void OnCustomizePlayerController__DelegateSignature();
	void OnAnyPickerNavigatingChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

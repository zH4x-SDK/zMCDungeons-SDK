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

// WidgetBlueprintGeneratedClass UMG_CloudSavePicker.UMG_CloudSavePicker_C
// 0x0000
class UUMG_CloudSavePicker_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CloudSavePicker.UMG_CloudSavePicker_C");
		return ptr;
	}



	void DownloadNoSaves();
	void InitiateForceClose();
	void IsPerformingOperation();
	void TrySelectCurrentSave();
	void SetupSuccessOverlay();
	void CanDelete();
	void CanDownload();
	void CanUpload();
	void ResetState();
	void RefreshRight();
	void counter_caching();
	void GetOpenedText();
	void CanExit();
	void GetLoadErrorFromReason();
	void ControllerTypeChanged();
	void ClearNullSlots();
	void SortSlots();
	void GetValidSlotCount();
	void RefreshSlots();
	void SetNavigationFromHighlighted();
	void SetMode();
	void SetCloudCharactersCompleted_BD38D4AB4443D357FC8575B205961320();
	void GetCloudCharactersCompleted_BD38D4AB4443D357FC8575B205961320();
	void SetCloudCharactersCompleted_236504B64538A3BB461532BE742DA1C3();
	void GetCloudCharactersCompleted_236504B64538A3BB461532BE742DA1C3();
	void Construct();
	void Setup();
	void Close();
	void DeleteDialogInput();
	void Delete();
	void RowSelect();
	void BndEvt__deleteButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__actionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void GetFailedDialog();
	void SaveFailedDialog();
	void SetupGamepadListeners();
	void BndEvt__UMG_SettingsBackground_K2Node_ComponentBoundEvent_3_CloseClicked__DelegateSignature();
	void SetGamepadFocus();
	void MouseClick();
	void SetCurrentlySelected();
	void Removed();
	void OnHovered();
	void FadeinFinished();
	void Download();
	void downloadDLC();
	void Upload();
	void OverwriteInput();
	void Swapped();
	void uploadDLC();
	void PreConstruct();
	void BndEvt__UMG_TextButton_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void TrySave();
	void DeleteSuccess();
	void DeleteFail();
	void UploadSuccess();
	void UploadFail();
	void OnOpenChanged();
	void BndEvt__actionButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__deleteButton_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void BndEvt__SuccessCloseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void Tick();
	void DisableCounterCaching();
	void EnableCounterCaching();
	void ExecuteUbergraph_UMG_CloudSavePicker();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

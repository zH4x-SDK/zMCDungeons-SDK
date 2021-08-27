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

// WidgetBlueprintGeneratedClass UMG_InGameCharacterCreation.UMG_InGameCharacterCreation_C
// 0x0000
class UUMG_InGameCharacterCreation_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InGameCharacterCreation.UMG_InGameCharacterCreation_C");
		return ptr;
	}



	void IsOverridable();
	void GetModalMask();
	void GetBlocksCharacterInput();
	void CanChangeSaveSlot();
	void SetupSilhouette();
	void CanCustomise();
	void CanClone();
	void RefreshAvailableCommands();
	void SetPlayerDataVisibility();
	void SetPlayerData();
	void RefreshButtons();
	void ChangeSaveSlot();
	void SetPlayerController();
	void MoveLeft();
	void MoveRight();
	void BindInput();
	void CancelCloseMenu();
	void RefreshFocus();
	void BndEvt__NavLeft_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void BndEvt__NavRight_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void Construct();
	void customiseCharacter();
	void BndEvt__UMG_CharacterCustomize_K2Node_ComponentBoundEvent_6_OnSubMenuClosed__DelegateSignature();
	void OpenClose();
	void Close();
	void Create();
	void Done();
	void clone();
	void GamepadSelect();
	void OnClone();
	void OnCustomise();
	void ClonePopup();
	void BndEvt__UMG_CharacterCustomize_K2Node_ComponentBoundEvent_0_OnDeletedCharacter__DelegateSignature();
	void HandleControllerConnectionChanged();
	void ExecuteUbergraph_UMG_InGameCharacterCreation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

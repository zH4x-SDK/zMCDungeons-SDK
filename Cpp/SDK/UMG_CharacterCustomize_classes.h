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

// WidgetBlueprintGeneratedClass UMG_CharacterCustomize.UMG_CharacterCustomize_C
// 0x0000
class UUMG_CharacterCustomize_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterCustomize.UMG_CharacterCustomize_C");
		return ptr;
	}



	void GetDesiredCamera();
	void GetClosedText();
	void GetOpenedText();
	void ControllerTypeChanged();
	void CanClose();
	void TrySelectSkinId();
	void HighlightAndSelectSkinId();
	void CancelDisabled();
	void ChangeName();
	void ChangeSkinId();
	void GamepadNavigate();
	void AnyPlayerCharacterChanged();
	void OnCharacterChanged();
	void GetCurrentPlayerControllerSaveSlotActor();
	void Get3dCharacterSaveSlotActor();
	void SetDesiredCamera();
	void SetPlayerController();
	void BndEvt__UMG_SkinSlotGrid_K2Node_ComponentBoundEvent_1_OnSkinIdSelected__DelegateSignature();
	void BndEvt__UMG_CustomizeName_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature();
	void GamepadFaceBottom();
	void Bind_Input();
	void GamepadRight();
	void GamepadLeft();
	void GamepadDown();
	void GamePadUp();
	void BndEvt__UMG_DoneButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void customiseCancel();
	void OnOpenChanged();
	void BndEvt__ButtonAccessibility_K2Node_ComponentBoundEvent_3_ClickPassthrough__DelegateSignature();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_5_ClickPassthrough__DelegateSignature();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_6_OnWasClicked__DelegateSignature();
	void Construct();
	void CustomEvent();
	void UpdateLayout();
	void PreConstruct();
	void Tick();
	void ExecuteUbergraph_UMG_CharacterCustomize();
	void OnDeletedCharacter__DelegateSignature();
	void OnDesiredCameraChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

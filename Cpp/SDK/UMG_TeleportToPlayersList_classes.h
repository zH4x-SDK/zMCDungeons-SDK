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

// WidgetBlueprintGeneratedClass UMG_TeleportToPlayersList.UMG_TeleportToPlayersList_C
// 0x0000
class UUMG_TeleportToPlayersList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_TeleportToPlayersList.UMG_TeleportToPlayersList_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetClosestDownedPlayer();
	void GetAnyPlayerDown();
	void SetAnyPlayerDown();
	void CheckAnyPlayerDown();
	void OnAnyAliveStateChanged();
	void UseEnderPearlToPlayer();
	void RefreshVisuals();
	void SetPlayerController();
	void ClearProgress();
	void StartPlayerCharacterProgress();
	void GetActorByIndex();
	void TeleportTo();
	void RepopulateTeleportToPlayersList();
	void Construct();
	void PreConstruct();
	void BndEvt__UMG_CloseButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_TeleportToPlayersList();
	void AnyPlayerDownChanged__DelegateSignature();
	void OnCloseClicked__DelegateSignature();
	void TeleportToFriend__DelegateSignature();
	void TeleportToActor__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

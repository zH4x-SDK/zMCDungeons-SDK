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

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x0000
class ABP_PlayerCharacter_C : public APlayerCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}



	void GetLovikaSpringArmTargetLength();
	void GetCamera();
	void IsCameraOnPlayer();
	void TpggleCoopSquareVisibility();
	void LaunchCharacterToPos();
	void PlatformForceFeedback();
	void HealthPercentageLost();
	void DetermineForceFeedbackEffect();
	void OnCharacterDamageReceivedWithType();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void OnCharacterRevive();
	void On_Step();
	void Server_Update_Player_Name();
	void OnCharacterDown();
	void ReceiveDestroyed();
	void OnCharacterHeal();
	void OnCharacterDeath();
	void PlayerNumberChanged();
	void On_Attack_Begin();
	void AnyPlayerCharactersChanged();
	void OnLevelUp();
	void OnCharacterDamageReceived();
	void OnLocalPlayerTeleported();
	void SetPlayerLight();
	void K2_OnBecomeViewTarget();
	void OnPlayerLoadedInLevel_Event();
	void K2_OnEndViewTarget();
	void ManageCoopCamera1();
	void OnOtherPlayerLeft();
	void OnOtherPlayerJoined();
	void OnViewTargetStarted();
	void OnPlayerNumberUpdated();
	void IcyWaterEntry();
	void ManageCoopCamera();
	void ViewTargetStartedCall();
	void CustomEvent_1();
	void ReceiveEndPlay();
	void ExecuteUbergraph_BP_PlayerCharacter();
	void CharacterReviveDispatcher__DelegateSignature();
	void CharacterHealDispatcher__DelegateSignature();
	void CharacterDamageDispatcher__DelegateSignature();
	void CharacterDeathDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

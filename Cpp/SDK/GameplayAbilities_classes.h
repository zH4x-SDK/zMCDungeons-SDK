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

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}



	void TargetDataHasOrigin();
	void TargetDataHasHitResult();
	void TargetDataHasEndPoint();
	void TargetDataHasActor();
	void SetStackCountToMax();
	void SetStackCount();
	void SetDuration();
	void SendGameplayEventToActor();
	void NotEqual_GameplayAttributeGameplayAttribute();
	void MakeSpecHandle();
	void MakeGameplayCueParameters();
	void MakeFilterHandle();
	void IsValid();
	void IsInstigatorLocallyControlledPlayer();
	void IsInstigatorLocallyControlled();
	void HasHitResult();
	void GetTargetDataOrigin();
	void GetTargetDataEndPointTransform();
	void GetTargetDataEndPoint();
	void GetOrigin();
	void GetModifiedAttributeMagnitude();
	void GetInstigatorTransform();
	void GetInstigatorActor();
	void GetHitResultFromTargetData();
	void GetHitResult();
	void GetGameplayCueEndLocationAndNormal();
	void GetGameplayCueDirection();
	void GetFloatAttributeFromAbilitySystemComponent();
	void GetFloatAttributeBaseFromAbilitySystemComponent();
	void GetFloatAttributeBase();
	void GetFloatAttribute();
	void GetEffectContext();
	void GetDataCountFromTargetData();
	void GetAllLinkedGameplayEffectSpecHandles();
	void GetAllActorsFromTargetData();
	void GetActorsFromTargetData();
	void GetActorCount();
	void GetActorByIndex();
	void GetActiveGameplayEffectTotalDuration();
	void GetActiveGameplayEffectStartTime();
	void GetActiveGameplayEffectStackLimitCount();
	void GetActiveGameplayEffectStackCount();
	void GetActiveGameplayEffectRemainingDuration();
	void GetActiveGameplayEffectExpectedEndTime();
	void GetActiveGameplayEffectDebugString();
	void GetAbilitySystemComponent();
	void ForwardGameplayCueToTarget();
	void FilterTargetData();
	void EvaluateAttributeValueWithTagsAndBase();
	void EvaluateAttributeValueWithTags();
	void EqualEqual_GameplayAttributeGameplayAttribute();
	void EffectContextSetOrigin();
	void EffectContextIsValid();
	void EffectContextIsInstigatorLocallyControlled();
	void EffectContextHasHitResult();
	void EffectContextGetSourceObject();
	void EffectContextGetOriginalInstigatorActor();
	void EffectContextGetOrigin();
	void EffectContextGetInstigatorActor();
	void EffectContextGetHitResult();
	void EffectContextGetEffectCauser();
	void EffectContextAddHitResult();
	void DoesTargetDataContainActor();
	void DoesGameplayCueMeetTagRequirements();
	void CloneSpecHandle();
	void BreakGameplayCueParameters();
	void AssignTagSetByCallerMagnitude();
	void AssignSetByCallerMagnitude();
	void AppendTargetDataHandle();
	void AddLinkedGameplayEffectSpec();
	void AddLinkedGameplayEffect();
	void AddGrantedTags();
	void AddGrantedTag();
	void AddAssetTags();
	void AddAssetTag();
	void AbilityTargetDataFromLocations();
	void AbilityTargetDataFromHitResult();
	void AbilityTargetDataFromActorArray();
	void AbilityTargetDataFromActor();
};

// Class GameplayAbilities.AbilitySystemComponent
// 0x0000
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}



	void TryActivateAbilityByClass();
	void TryActivateAbilitiesByTag();
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited();
	void SetActiveGameplayEffectLevelUsingQuery();
	void SetActiveGameplayEffectLevel();
	void ServerTryActivateAbilityWithEventData();
	void ServerTryActivateAbility();
	void ServerSetReplicatedTargetDataCancelled();
	void ServerSetReplicatedTargetData();
	void ServerSetReplicatedEventWithPayload();
	void ServerSetReplicatedEvent();
	void ServerSetInputReleased();
	void ServerSetInputPressed();
	void ServerPrintDebug_RequestWithStrings();
	void ServerPrintDebug_Request();
	void ServerEndAbility();
	void ServerCurrentMontageSetPlayRate();
	void ServerCurrentMontageSetNextSectionName();
	void ServerCurrentMontageJumpToSectionName();
	void ServerCancelAbility();
	void ServerAbilityRPCBatch();
	void RemoveActiveGameplayEffectBySourceEffect();
	void RemoveActiveGameplayEffect();
	void RemoveActiveEffectsWithTags();
	void RemoveActiveEffectsWithSourceTags();
	void RemoveActiveEffectsWithGrantedTags();
	void RemoveActiveEffectsWithAppliedTags();
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams();
	void NetMulticast_InvokeGameplayCuesExecuted();
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams();
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec();
	void NetMulticast_InvokeGameplayCueExecuted();
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams();
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec();
	void NetMulticast_InvokeGameplayCueAdded_WithParams();
	void NetMulticast_InvokeGameplayCueAdded();
	void MakeOutgoingSpec();
	void MakeEffectContext();
	void K2_InitStats();
	void IsGameplayCueActive();
	void GetUserAbilityActivationInhibited();
	void GetGameplayEffectMagnitude();
	void GetGameplayEffectCount();
	void GetActiveEffects();
	void ClientTryActivateAbility();
	void ClientSetReplicatedEvent();
	void ClientPrintDebug_Response();
	void ClientEndAbility();
	void ClientCancelAbility();
	void ClientActivateAbilitySucceedWithEventData();
	void ClientActivateAbilitySucceed();
	void ClientActivateAbilityFailed();
	void BP_ApplyGameplayEffectToTarget();
	void BP_ApplyGameplayEffectToSelf();
	void BP_ApplyGameplayEffectSpecToTarget();
	void BP_ApplyGameplayEffectSpecToSelf();
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature();
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000
class AAbilitySystemDebugHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemGlobals
// 0x0000
class UAbilitySystemGlobals : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}



	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};

// Class GameplayAbilities.AbilitySystemInterface
// 0x0000
class UAbilitySystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemReplicationProxyInterface");
		return ptr;
	}



};

// Class GameplayAbilities.AttributeSet
// 0x0000
class UAttributeSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0000
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}



};

// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0000
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}



};

// Class GameplayAbilities.AbilityTask
// 0x0000
class UAbilityTask : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}



};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0000
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return ptr;
	}



};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0000
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}



	void ApplyRootMotionConstantForce();
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0000
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}



	void OnLandedCallback();
	void Finish();
	void ApplyRootMotionJumpForce();
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0000
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}



	void OnTargetActorSwapped();
	void OnRep_TargetLocation();
	void ApplyRootMotionMoveToTargetDataActorForce();
	void ApplyRootMotionMoveToActorForce();
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0000
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}



	void ApplyRootMotionMoveToForce();
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0000
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}



	void ApplyRootMotionRadialForce();
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0000
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}



	void MoveToLocation();
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0000
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}



	void WaitNetSync();
	void OnSignalCallback();
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0000
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}



	void OnMontageInterrupted();
	void OnMontageEnded();
	void OnMontageBlendingOut();
	void CreatePlayMontageAndWaitProxy();
};

// Class GameplayAbilities.AbilityTask_Repeat
// 0x0000
class UAbilityTask_Repeat : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}



	void RepeatAction();
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0000
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}



	void SpawnActor();
	void FinishSpawningActor();
	void BeginSpawningActor();
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0000
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}



	void StartAbilityState();
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0000
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}



	void VisualizeTargetingUsingActor();
	void VisualizeTargeting();
	void FinishSpawningActor();
	void BeginSpawningActor();
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0000
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}



	void WaitForAbilityActivateWithTagRequirements();
	void WaitForAbilityActivate_Query();
	void WaitForAbilityActivate();
	void OnAbilityActivate();
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0000
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}



	void WaitForAbilityCommit_Query();
	void WaitForAbilityCommit();
	void OnAbilityCommit();
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0000
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}



	void WaitForAttributeChangeWithComparison();
	void WaitForAttributeChange();
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0000
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}



	void WaitForAttributeChangeRatioThreshold();
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0000
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}



	void WaitForAttributeChangeThreshold();
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0000
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}



	void WaitCancel();
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0000
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}



	void WaitConfirm();
	void OnConfirmCallback();
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0000
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}



	void WaitConfirmCancel();
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0000
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}



	void WaitDelay();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0000
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}



	void OnApplyGameplayEffectCallback();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0000
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}



	void WaitGameplayEffectAppliedToSelf_Query();
	void WaitGameplayEffectAppliedToSelf();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0000
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}



	void WaitGameplayEffectAppliedToTarget_Query();
	void WaitGameplayEffectAppliedToTarget();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x0000
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}



	void WaitGameplayEffectBlockedByImmunity();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0000
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}



	void WaitForGameplayEffectRemoved();
	void OnGameplayEffectRemoved();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0000
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}



	void WaitForGameplayEffectStackChange();
	void OnGameplayEffectStackChange();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0000
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}



	void WaitGameplayEvent();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0000
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}



	void GameplayTagCallback();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0000
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}



	void WaitGameplayTagAdd();
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0000
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}



	void WaitGameplayTagRemove();
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0000
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}



	void WaitInputPress();
	void OnPressCallback();
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0000
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}



	void WaitInputRelease();
	void OnReleaseCallback();
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0000
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}



	void OnMovementModeChange();
	void CreateWaitMovementModeChange();
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0000
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}



	void WaitForOverlap();
	void OnHitCallback();
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0000
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}



	void WaitTargetDataUsingActor();
	void WaitTargetData();
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback();
	void OnTargetDataReadyCallback();
	void OnTargetDataCancelledCallback();
	void FinishSpawningActor();
	void BeginSpawningActor();
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0000
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}



	void CreateWaitVelocityChange();
};

// Class GameplayAbilities.GameplayAbility
// 0x0000
class UGameplayAbility : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}



	void SetShouldBlockOtherAbilities();
	void SetCanBeCanceled();
	void SendGameplayEvent();
	void RemoveGrantedByEffect();
	void MontageStop();
	void MontageSetNextSectionName();
	void MontageJumpToSection();
	void MakeTargetLocationInfoFromOwnerSkeletalMeshComponent();
	void MakeTargetLocationInfoFromOwnerActor();
	void MakeOutgoingGameplayEffectSpec();
	void K2_ShouldAbilityRespondToEvent();
	void K2_RemoveGameplayCue();
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams();
	void K2_ExecuteGameplayCue();
	void K2_EndAbility();
	void K2_CommitExecute();
	void K2_CommitAbilityCost();
	void K2_CommitAbilityCooldown();
	void K2_CommitAbility();
	void K2_CheckAbilityCost();
	void K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	void K2_CanActivateAbility();
	void K2_ApplyGameplayEffectSpecToTarget();
	void K2_ApplyGameplayEffectSpecToOwner();
	void K2_AddGameplayCueWithParams();
	void K2_AddGameplayCue();
	void K2_ActivateAbilityFromEvent();
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	void GetOwningComponentFromActorInfo();
	void GetOwningActorFromActorInfo();
	void GetGrantedByEffectContext();
	void GetCurrentSourceObject();
	void GetCurrentMontage();
	void GetCooldownTimeRemaining();
	void GetContextFromOwner();
	void GetAvatarActorFromActorInfo();
	void GetActorInfo();
	void GetAbilitySystemComponentFromActorInfo();
	void GetAbilityLevel();
	void EndTaskByInstanceName();
	void EndAbilityState();
	void ConfirmTaskByInstanceName();
	void CancelTaskByInstanceName();
	void BP_RemoveGameplayEffectFromOwnerWithHandle();
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags();
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags();
	void BP_ApplyGameplayEffectToTarget();
	void BP_ApplyGameplayEffectToOwner();
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbility_Montage
// 0x0000
class UGameplayAbility_Montage : public UGameplayAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000
class UGameplayAbilityBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilitySet
// 0x0000
class UGameplayAbilitySet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0000
class AGameplayAbilityTargetActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}



	void ConfirmTargeting();
	void CancelTargeting();
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0000
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0000
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0000
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0000
class AGameplayAbilityWorldReticle : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}



	void SetReticleMaterialParamVector();
	void SetReticleMaterialParamFloat();
	void OnValidTargetChanged();
	void OnTargetingAnActor();
	void OnParametersInitialized();
	void FaceTowardSource();
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0000
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueInterface
// 0x0000
class UGameplayCueInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}



	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler();
};

// Class GameplayAbilities.GameplayCueManager
// 0x0000
class UGameplayCueManager : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0000
class AGameplayCueNotify_Actor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}



	void WhileActive();
	void OnRemove();
	void OnOwnerDestroyed();
	void OnExecute();
	void OnActive();
	void K2_HandleGameplayCue();
	void K2_EndGameplayCue();
};

// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0000
class UGameplayCueNotify_Static : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}



	void WhileActive();
	void OnRemove();
	void OnExecute();
	void OnActive();
	void K2_HandleGameplayCue();
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0000
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueSet
// 0x0000
class UGameplayCueSet : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueTranslator
// 0x0000
class UGameplayCueTranslator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffect
// 0x0000
class UGameplayEffect : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectCalculation
// 0x0000
class UGameplayEffectCalculation : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}



	void CanApplyGameplayEffect();
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0000
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}



	void Execute();
};

// Class GameplayAbilities.GameplayEffectUIData
// 0x0000
class UGameplayEffectUIData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0000
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}



};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0000
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}



	void CalculateBaseMagnitude();
};

// Class GameplayAbilities.GameplayTagReponseTable
// 0x0000
class UGameplayTagReponseTable : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}



	void TagResponseEvent();
};

// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000
class UTickableAttributeSetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

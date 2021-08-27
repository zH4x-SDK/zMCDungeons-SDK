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
// Parameters
//---------------------------------------------------------------------------

// Function Dungeons.Enchantment.GetUpgradeCostForEnchantmentTypeLevel
struct UEnchantment_GetUpgradeCostForEnchantmentTypeLevel_Params
{
};

// Function Dungeons.Enchantment.GetNameForEnchantmentType
struct UEnchantment_GetNameForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetLevelEffectDescriptionForEnchantmentType
struct UEnchantment_GetLevelEffectDescriptionForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetIsRarityForEnchantmentType
struct UEnchantment_GetIsRarityForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetIconTextureForEnchantmentType
struct UEnchantment_GetIconTextureForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetIconMaterialInstanceForEnchantmentType
struct UEnchantment_GetIconMaterialInstanceForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetHasTagForEnchantmentType
struct UEnchantment_GetHasTagForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetEnchantmentTypeRarity
struct UEnchantment_GetEnchantmentTypeRarity_Params
{
};

// Function Dungeons.Enchantment.GetEnchantmentTypeCategory
struct UEnchantment_GetEnchantmentTypeCategory_Params
{
};

// Function Dungeons.Enchantment.GetDisplayBulletPointsTextForEnchantmentType
struct UEnchantment_GetDisplayBulletPointsTextForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetDescriptionForEnchantmentType
struct UEnchantment_GetDescriptionForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.GetCanBeUsedByMobsForEnchantmentType
struct UEnchantment_GetCanBeUsedByMobsForEnchantmentType_Params
{
};

// Function Dungeons.Enchantment.BroadcastEnchantmentTriggeredEvent
struct UEnchantment_BroadcastEnchantmentTriggeredEvent_Params
{
};

// Function Dungeons.Accelerating.GetSpeedLimit
struct UAccelerating_GetSpeedLimit_Params
{
};

// Function Dungeons.Activatable.OnActivated
struct UActivatable_OnActivated_Params
{
};

// Function Dungeons.PropActor.PlayerLeftVisibleRange
struct APropActor_PlayerLeftVisibleRange_Params
{
};

// Function Dungeons.PropActor.PlayerInVisibleRangeChanged
struct APropActor_PlayerInVisibleRangeChanged_Params
{
};

// Function Dungeons.PropActor.PlayerEnteredVisibleRange
struct APropActor_PlayerEnteredVisibleRange_Params
{
};

// Function Dungeons.PropActor.GetInPlayerVisibleRange
struct APropActor_GetInPlayerVisibleRange_Params
{
};

// Function Dungeons.DungeonsUserWidget.OnSetOwner
struct UDungeonsUserWidget_OnSetOwner_Params
{
};

// Function Dungeons.CounterWidgetBase.SetEmphasis
struct UCounterWidgetBase_SetEmphasis_Params
{
};

// Function Dungeons.CounterWidgetBase.OnValueChanged
struct UCounterWidgetBase_OnValueChanged_Params
{
};

// Function Dungeons.CounterWidgetBase.OnEmphasisChanged
struct UCounterWidgetBase_OnEmphasisChanged_Params
{
};

// Function Dungeons.CounterWidgetBase.GetValue
struct UCounterWidgetBase_GetValue_Params
{
};

// Function Dungeons.CounterWidgetBase.GetEmphasis
struct UCounterWidgetBase_GetEmphasis_Params
{
};

// Function Dungeons.ActorQuery.IsLocationRangeOfPlayerCharacter
struct UActorQuery_IsLocationRangeOfPlayerCharacter_Params
{
};

// Function Dungeons.ActorQuery.IsInRangeOfPlayerCharacter
struct UActorQuery_IsInRangeOfPlayerCharacter_Params
{
};

// Function Dungeons.ActorQuery.GetPlayerCharactersInRange
struct UActorQuery_GetPlayerCharactersInRange_Params
{
};

// Function Dungeons.ActorQuery.GetGameBP
struct UActorQuery_GetGameBP_Params
{
};

// Function Dungeons.ActorQuery.GetFriendlyMobCharactersInRange
struct UActorQuery_GetFriendlyMobCharactersInRange_Params
{
};

// Function Dungeons.ActorQuery.GetClosestSocket
struct UActorQuery_GetClosestSocket_Params
{
};

// Function Dungeons.ActorQuery.GetActorHealthBarPosition
struct UActorQuery_GetActorHealthBarPosition_Params
{
};

// Function Dungeons.ActorQuery.GetActorDistanceSquared
struct UActorQuery_GetActorDistanceSquared_Params
{
};

// Function Dungeons.ActorQuery.GetActorDistance
struct UActorQuery_GetActorDistance_Params
{
};

// Function Dungeons.AffectorAttributeSet.OnRep_DealDamageMul
struct UAffectorAttributeSet_OnRep_DealDamageMul_Params
{
};

// Function Dungeons.AffectorFunctionLibrary.GetNumOfMidGameAffectors
struct UAffectorFunctionLibrary_GetNumOfMidGameAffectors_Params
{
};

// Function Dungeons.ItemInstance.ServerHandleItemActorRemoval
struct AItemInstance_ServerHandleItemActorRemoval_Params
{
};

// Function Dungeons.ItemInstance.OnOwnerControllerReplicated
struct AItemInstance_OnOwnerControllerReplicated_Params
{
};

// Function Dungeons.ItemInstance.OnActivated
struct AItemInstance_OnActivated_Params
{
};

// Function Dungeons.ItemInstance.MulticastHandleItemActorSpawn
struct AItemInstance_MulticastHandleItemActorSpawn_Params
{
};

// Function Dungeons.ItemInstance.MulticastHandleItemActorRemoval
struct AItemInstance_MulticastHandleItemActorRemoval_Params
{
};

// Function Dungeons.ItemInstance.GetItemId
struct AItemInstance_GetItemId_Params
{
};

// Function Dungeons.ItemInstance.GetInventoryDropSoundForItemId
struct AItemInstance_GetInventoryDropSoundForItemId_Params
{
};

// Function Dungeons.ItemInstance.Client_UseItem
struct AItemInstance_Client_UseItem_Params
{
};

// Function Dungeons.ItemInstance.CanActivate
struct AItemInstance_CanActivate_Params
{
};

// Function Dungeons.ItemInstance.ActivateServer
struct AItemInstance_ActivateServer_Params
{
};

// Function Dungeons.ArmorProperty.GetNameForArmorPropertyType
struct UArmorProperty_GetNameForArmorPropertyType_Params
{
};

// Function Dungeons.ArmorProperty.GetIconTextureForArmorPropertyType
struct UArmorProperty_GetIconTextureForArmorPropertyType_Params
{
};

// Function Dungeons.ArmorProperty.GetIconMaterialInstanceForArmorPropertyType
struct UArmorProperty_GetIconMaterialInstanceForArmorPropertyType_Params
{
};

// Function Dungeons.ArmorProperty.BroadcastArmorPropertyTriggeredEvent
struct UArmorProperty_BroadcastArmorPropertyTriggeredEvent_Params
{
};

// Function Dungeons.HealOnOverlapActor.OnTargetDied
struct AHealOnOverlapActor_OnTargetDied_Params
{
};

// Function Dungeons.HealOnOverlapActor.OnHeal
struct AHealOnOverlapActor_OnHeal_Params
{
};

// Function Dungeons.Altruistic.MulticastSpawnSoul
struct UAltruistic_MulticastSpawnSoul_Params
{
};

// Function Dungeons.AmbienceActor.GetGroupName
struct AAmbienceActor_GetGroupName_Params
{
};

// Function Dungeons.AmbienceVisualActor.SetAsActiveAmbience
struct AAmbienceVisualActor_SetAsActiveAmbience_Params
{
};

// Function Dungeons.AmbienceVisualActor.GetAmbienceID
struct AAmbienceVisualActor_GetAmbienceID_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnPlayerExitedAmbience
struct AAmbienceTriggerActor_OnPlayerExitedAmbience_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnPlayerEnteredAmbience
struct AAmbienceTriggerActor_OnPlayerEnteredAmbience_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnAmbienceShow
struct AAmbienceTriggerActor_OnAmbienceShow_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnAmbienceHide
struct AAmbienceTriggerActor_OnAmbienceHide_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnAmbienceDeactivated
struct AAmbienceTriggerActor_OnAmbienceDeactivated_Params
{
};

// Function Dungeons.AmbienceTriggerActor.OnAmbienceActivated
struct AAmbienceTriggerActor_OnAmbienceActivated_Params
{
};

// Function Dungeons.AncientGuardianComponent.SetReturnState
struct UAncientGuardianComponent_SetReturnState_Params
{
};

// Function Dungeons.AncientGuardianComponent.SetAncientGuardianState
struct UAncientGuardianComponent_SetAncientGuardianState_Params
{
};

// Function Dungeons.AncientGuardianComponent.OnRep_StateChange
struct UAncientGuardianComponent_OnRep_StateChange_Params
{
};

// Function Dungeons.AncientGuardianComponent.GetAncientGuardianState
struct UAncientGuardianComponent_GetAncientGuardianState_Params
{
};

// Function Dungeons.AoeTargetProvider.RequestTargetForComponent
struct UAoeTargetProvider_RequestTargetForComponent_Params
{
};

// Function Dungeons.AoeTargetProvider.GetAttackRange
struct UAoeTargetProvider_GetAttackRange_Params
{
};

// Function Dungeons.AttackComponent.GetCoolDownAsScalarValue
struct UAttackComponent_GetCoolDownAsScalarValue_Params
{
};

// Function Dungeons.AttackComponent.CanAttack
struct UAttackComponent_CanAttack_Params
{
};

// Function Dungeons.AttackComponent.AttackServer
struct UAttackComponent_AttackServer_Params
{
};

// Function Dungeons.AttackComponent.AttackLocal
struct UAttackComponent_AttackLocal_Params
{
};

// Function Dungeons.AoeMarkerComponent.OnOwnerDeath
struct UAoeMarkerComponent_OnOwnerDeath_Params
{
};

// Function Dungeons.AoeMarkerComponent.IsAttackInProgress
struct UAoeMarkerComponent_IsAttackInProgress_Params
{
};

// Function Dungeons.AreaBuffComponent.TryUpdateBuffedCharacter
struct UAreaBuffComponent_TryUpdateBuffedCharacter_Params
{
};

// Function Dungeons.AreaBuffComponent.OnSphereOverlapEnd
struct UAreaBuffComponent_OnSphereOverlapEnd_Params
{
};

// Function Dungeons.AreaBuffComponent.OnSphereOverlapBegin
struct UAreaBuffComponent_OnSphereOverlapBegin_Params
{
};

// Function Dungeons.AreaDamageComponent.ApplyDamage
struct UAreaDamageComponent_ApplyDamage_Params
{
};

// Function Dungeons.AreaHeal.OnHealthPotionActivated
struct UAreaHeal_OnHealthPotionActivated_Params
{
};

// Function Dungeons.ArmorPropertiesComponent.ServerRemoveAllProperties
struct UArmorPropertiesComponent_ServerRemoveAllProperties_Params
{
};

// Function Dungeons.ArmorPropertiesComponent.ServerDeactivateProperties
struct UArmorPropertiesComponent_ServerDeactivateProperties_Params
{
};

// Function Dungeons.ArmorPropertiesComponent.ServerAddProperties
struct UArmorPropertiesComponent_ServerAddProperties_Params
{
};

// Function Dungeons.ArmorPropertiesComponent.ServerActivateProperties
struct UArmorPropertiesComponent_ServerActivateProperties_Params
{
};

// Function Dungeons.EquipmentSlotActorAnimNotifyState.Received_SlotActorNotifyTick
struct UEquipmentSlotActorAnimNotifyState_Received_SlotActorNotifyTick_Params
{
};

// Function Dungeons.EquipmentSlotActorAnimNotifyState.Received_SlotActorNotifyEnd
struct UEquipmentSlotActorAnimNotifyState_Received_SlotActorNotifyEnd_Params
{
};

// Function Dungeons.EquipmentSlotActorAnimNotifyState.Received_SlotActorNotifyBegin
struct UEquipmentSlotActorAnimNotifyState_Received_SlotActorNotifyBegin_Params
{
};

// Function Dungeons.BaseProjectile.ToggleMagical
struct ABaseProjectile_ToggleMagical_Params
{
};

// Function Dungeons.BaseProjectile.ToggleCharged
struct ABaseProjectile_ToggleCharged_Params
{
};

// Function Dungeons.BaseProjectile.ShouldIgnoreCollision
struct ABaseProjectile_ShouldIgnoreCollision_Params
{
};

// Function Dungeons.BaseProjectile.SetDestroyOnHit
struct ABaseProjectile_SetDestroyOnHit_Params
{
};

// Function Dungeons.BaseProjectile.ProcessHit
struct ABaseProjectile_ProcessHit_Params
{
};

// Function Dungeons.BaseProjectile.OnProjectileReset
struct ABaseProjectile_OnProjectileReset_Params
{
};

// Function Dungeons.BaseProjectile.OnProjectileLaunch
struct ABaseProjectile_OnProjectileLaunch_Params
{
};

// Function Dungeons.BaseProjectile.OnOverlapEnd
struct ABaseProjectile_OnOverlapEnd_Params
{
};

// Function Dungeons.BaseProjectile.OnOverlapBegin
struct ABaseProjectile_OnOverlapBegin_Params
{
};

// Function Dungeons.BaseProjectile.IsMagical
struct ABaseProjectile_IsMagical_Params
{
};

// Function Dungeons.BaseProjectile.GetInstigatorHadAuthority
struct ABaseProjectile_GetInstigatorHadAuthority_Params
{
};

// Function Dungeons.BaseProjectile.GetHomingTargetLocation
struct ABaseProjectile_GetHomingTargetLocation_Params
{
};

// Function Dungeons.BaseProjectile.GetDamageFactor
struct ABaseProjectile_GetDamageFactor_Params
{
};

// Function Dungeons.Arrow.UpdateProjectileComponent
struct AArrow_UpdateProjectileComponent_Params
{
};

// Function Dungeons.BaseProjectileProp.OnExplode
struct ABaseProjectileProp_OnExplode_Params
{
};

// Function Dungeons.BaseProjectileProp.OnBeginPulse
struct ABaseProjectileProp_OnBeginPulse_Params
{
};

// Function Dungeons.BaseProjectileProp.AttachedToActorHidden
struct ABaseProjectileProp_AttachedToActorHidden_Params
{
};

// Function Dungeons.ArrowProp.OnInitializedProp
struct AArrowProp_OnInitializedProp_Params
{
};

// Function Dungeons.ArrowProp.Initialise
struct AArrowProp_Initialise_Params
{
};

// Function Dungeons.ItemSlot.Swap
struct UItemSlot_Swap_Params
{
};

// Function Dungeons.ItemSlot.OnRep_ItemMaterialSettingsReplicated
struct UItemSlot_OnRep_ItemMaterialSettingsReplicated_Params
{
};

// Function Dungeons.ItemSlot.OnRep_ItemInstanceReplicated
struct UItemSlot_OnRep_ItemInstanceReplicated_Params
{
};

// Function Dungeons.ItemSlot.OnRep_CountReplicated
struct UItemSlot_OnRep_CountReplicated_Params
{
};

// Function Dungeons.ItemSlot.OnRep_CooldownReduction
struct UItemSlot_OnRep_CooldownReduction_Params
{
};

// Function Dungeons.ItemSlot.IsOnCooldown
struct UItemSlot_IsOnCooldown_Params
{
};

// Function Dungeons.ItemSlot.IsBusy
struct UItemSlot_IsBusy_Params
{
};

// Function Dungeons.ItemSlot.GetWantsToActivate
struct UItemSlot_GetWantsToActivate_Params
{
};

// Function Dungeons.ItemSlot.GetItem
struct UItemSlot_GetItem_Params
{
};

// Function Dungeons.ItemSlot.GetDisplayCount
struct UItemSlot_GetDisplayCount_Params
{
};

// Function Dungeons.ItemSlot.GetCount
struct UItemSlot_GetCount_Params
{
};

// Function Dungeons.ItemSlot.GetCooldownSecondsRemaining
struct UItemSlot_GetCooldownSecondsRemaining_Params
{
};

// Function Dungeons.ItemSlot.GetCooldownSecondsReduction
struct UItemSlot_GetCooldownSecondsReduction_Params
{
};

// Function Dungeons.ItemSlot.GetCooldownSecondsDuration
struct UItemSlot_GetCooldownSecondsDuration_Params
{
};

// Function Dungeons.ItemSlot.GetCooldownFractionRemaining
struct UItemSlot_GetCooldownFractionRemaining_Params
{
};

// Function Dungeons.ItemSlot.EquipItem
struct UItemSlot_EquipItem_Params
{
};

// Function Dungeons.ItemSlot.ConsumeAmount
struct UItemSlot_ConsumeAmount_Params
{
};

// Function Dungeons.ItemSlot.Consume
struct UItemSlot_Consume_Params
{
};

// Function Dungeons.ItemSlot.Clear
struct UItemSlot_Clear_Params
{
};

// Function Dungeons.ItemSlot.CanActivateSlot
struct UItemSlot_CanActivateSlot_Params
{
};

// Function Dungeons.ArrowItemSlot.OnRangedWeaponUpdated
struct UArrowItemSlot_OnRangedWeaponUpdated_Params
{
};

// Function Dungeons.ArrowItemSlot.GetAmmoCounterWidgetClass
struct UArrowItemSlot_GetAmmoCounterWidgetClass_Params
{
};

// Function Dungeons.ArrowItemSlot.GetAmmoCounterLiteOverlayWidgetClass
struct UArrowItemSlot_GetAmmoCounterLiteOverlayWidgetClass_Params
{
};

// Function Dungeons.ArrowItemSlot.GetAmmoCounterLiteContentWidgetClass
struct UArrowItemSlot_GetAmmoCounterLiteContentWidgetClass_Params
{
};

// Function Dungeons.ArrowVobbleComponent.StartVobble
struct UArrowVobbleComponent_StartVobble_Params
{
};

// Function Dungeons.AssetManagerFunctionLibrary.GetDefaultInventoryAssetManager
struct UAssetManagerFunctionLibrary_GetDefaultInventoryAssetManager_Params
{
};

// Function Dungeons.AssetManagerFunctionLibrary.GetDefaultAssetManager
struct UAssetManagerFunctionLibrary_GetDefaultAssetManager_Params
{
};

// Function Dungeons.AssetManagerFunctionLibrary.CreateHiddenShadowMeshCopy
struct UAssetManagerFunctionLibrary_CreateHiddenShadowMeshCopy_Params
{
};

// Function Dungeons.Attachable.AttachedToActorHidden
struct UAttachable_AttachedToActorHidden_Params
{
};

// Function Dungeons.AudioCollectionComponent.GetMusicTracksForLevel
struct UAudioCollectionComponent_GetMusicTracksForLevel_Params
{
};

// Function Dungeons.AudioCollectionComponent.GetEncounterMusic
struct UAudioCollectionComponent_GetEncounterMusic_Params
{
};

// Function Dungeons.AudioCollectionComponent.GetBossMusic
struct UAudioCollectionComponent_GetBossMusic_Params
{
};

// Function Dungeons.AudioManager.GetSoundCueFirstSoundWaveDuration
struct AAudioManager_GetSoundCueFirstSoundWaveDuration_Params
{
};

// Function Dungeons.AudioManagerBase.PushMusicTrackSoft
struct AAudioManagerBase_PushMusicTrackSoft_Params
{
};

// Function Dungeons.AudioManagerBase.PushMusicTrack
struct AAudioManagerBase_PushMusicTrack_Params
{
};

// Function Dungeons.AudioManagerBase.Pop
struct AAudioManagerBase_Pop_Params
{
};

// Function Dungeons.AudioMusicManager.Pause
struct AAudioMusicManager_Pause_Params
{
};

// Function Dungeons.AudioMusicManager.GetEncounterMusicTrack
struct AAudioMusicManager_GetEncounterMusicTrack_Params
{
};

// Function Dungeons.AudioMusicManager.GetCurrentLevelAudioCollection
struct AAudioMusicManager_GetCurrentLevelAudioCollection_Params
{
};

// Function Dungeons.RangedAttackComponent.SpawnProjectileMulticast
struct URangedAttackComponent_SpawnProjectileMulticast_Params
{
};

// Function Dungeons.RangedAttackComponent.ServerStopAttackAnimation
struct URangedAttackComponent_ServerStopAttackAnimation_Params
{
};

// Function Dungeons.RangedAttackComponent.ServerEndAttack
struct URangedAttackComponent_ServerEndAttack_Params
{
};

// Function Dungeons.RangedAttackComponent.ServerBeginAttack
struct URangedAttackComponent_ServerBeginAttack_Params
{
};

// Function Dungeons.RangedAttackComponent.RemoveThrowable
struct URangedAttackComponent_RemoveThrowable_Params
{
};

// Function Dungeons.RangedAttackComponent.OnWeaponSlotUpdated
struct URangedAttackComponent_OnWeaponSlotUpdated_Params
{
};

// Function Dungeons.RangedAttackComponent.OnRep_AttackIndex
struct URangedAttackComponent_OnRep_AttackIndex_Params
{
};

// Function Dungeons.RangedAttackComponent.HasRangedWeaponEquipped
struct URangedAttackComponent_HasRangedWeaponEquipped_Params
{
};

// Function Dungeons.RangedAttackComponent.GetWeaponChargeTime
struct URangedAttackComponent_GetWeaponChargeTime_Params
{
};

// Function Dungeons.RangedAttackComponent.GetCurrentAmmoSlot
struct URangedAttackComponent_GetCurrentAmmoSlot_Params
{
};

// Function Dungeons.RangedAttackComponent.GetAvailableAmmoSlots
struct URangedAttackComponent_GetAvailableAmmoSlots_Params
{
};

// Function Dungeons.RangedAttackComponent.GetAndRemoveTopThrowable
struct URangedAttackComponent_GetAndRemoveTopThrowable_Params
{
};

// Function Dungeons.RangedAttackComponent.CanAddThrowable
struct URangedAttackComponent_CanAddThrowable_Params
{
};

// Function Dungeons.RangedAttackComponent.AmmoSlotChangedCount
struct URangedAttackComponent_AmmoSlotChangedCount_Params
{
};

// Function Dungeons.RangedAttackComponent.AddThrowable
struct URangedAttackComponent_AddThrowable_Params
{
};

// Function Dungeons.AwarenessComponent.IsTriggered
struct UAwarenessComponent_IsTriggered_Params
{
};

// Function Dungeons.AwarenessComponent.IsAware
struct UAwarenessComponent_IsAware_Params
{
};

// Function Dungeons.AwarenessComponent.GetFraction
struct UAwarenessComponent_GetFraction_Params
{
};

// Function Dungeons.MochilaComponent.OnRep_ActorClass
struct UMochilaComponent_OnRep_ActorClass_Params
{
};

// Function Dungeons.MochilaComponent.ApplyDamage
struct UMochilaComponent_ApplyDamage_Params
{
};

// Function Dungeons.Barrier.OnRadiusLeave
struct UBarrier_OnRadiusLeave_Params
{
};

// Function Dungeons.Barrier.OnRadiusEnter
struct UBarrier_OnRadiusEnter_Params
{
};

// Function Dungeons.BaseCharacter.UpdatePushVolumeMovement
struct ABaseCharacter_UpdatePushVolumeMovement_Params
{
};

// Function Dungeons.BaseCharacter.SpawnEffectsAtLocation
struct ABaseCharacter_SpawnEffectsAtLocation_Params
{
};

// Function Dungeons.BaseCharacter.SpawnAttachedParticles
struct ABaseCharacter_SpawnAttachedParticles_Params
{
};

// Function Dungeons.BaseCharacter.SetTargetable
struct ABaseCharacter_SetTargetable_Params
{
};

// Function Dungeons.BaseCharacter.SetPushImmunity
struct ABaseCharacter_SetPushImmunity_Params
{
};

// Function Dungeons.BaseCharacter.SetModifierSurface
struct ABaseCharacter_SetModifierSurface_Params
{
};

// Function Dungeons.BaseCharacter.SetAttackState
struct ABaseCharacter_SetAttackState_Params
{
};

// Function Dungeons.BaseCharacter.ServerRemoveInvulnerability
struct ABaseCharacter_ServerRemoveInvulnerability_Params
{
};

// Function Dungeons.BaseCharacter.ServerApplyInvulnerability
struct ABaseCharacter_ServerApplyInvulnerability_Params
{
};

// Function Dungeons.BaseCharacter.OnRep_WorldState
struct ABaseCharacter_OnRep_WorldState_Params
{
};

// Function Dungeons.BaseCharacter.OnRep_Master
struct ABaseCharacter_OnRep_Master_Params
{
};

// Function Dungeons.BaseCharacter.OnRep_LookAtActor
struct ABaseCharacter_OnRep_LookAtActor_Params
{
};

// Function Dungeons.BaseCharacter.OnRep_AttackState
struct ABaseCharacter_OnRep_AttackState_Params
{
};

// Function Dungeons.BaseCharacter.OnPushRecieverDeactivated
struct ABaseCharacter_OnPushRecieverDeactivated_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterRevive
struct ABaseCharacter_OnCharacterRevive_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterHeal
struct ABaseCharacter_OnCharacterHeal_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterDeath
struct ABaseCharacter_OnCharacterDeath_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterDamageReceivedWithType
struct ABaseCharacter_OnCharacterDamageReceivedWithType_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterDamageReceivedWithTag
struct ABaseCharacter_OnCharacterDamageReceivedWithTag_Params
{
};

// Function Dungeons.BaseCharacter.OnCharacterDamageReceived
struct ABaseCharacter_OnCharacterDamageReceived_Params
{
};

// Function Dungeons.BaseCharacter.OnAttackedWhileBubbled
struct ABaseCharacter_OnAttackedWhileBubbled_Params
{
};

// Function Dungeons.BaseCharacter.MulticastStopSlotAnimation
struct ABaseCharacter_MulticastStopSlotAnimation_Params
{
};

// Function Dungeons.BaseCharacter.MulticastStopMontage
struct ABaseCharacter_MulticastStopMontage_Params
{
};

// Function Dungeons.BaseCharacter.MulticastStopAnimation
struct ABaseCharacter_MulticastStopAnimation_Params
{
};

// Function Dungeons.BaseCharacter.MulticastSetPlayrateMontage
struct ABaseCharacter_MulticastSetPlayrateMontage_Params
{
};

// Function Dungeons.BaseCharacter.MulticastResumeMontage
struct ABaseCharacter_MulticastResumeMontage_Params
{
};

// Function Dungeons.BaseCharacter.MulticastPlayMontageSectionWithBlendAtSectionPercentagePacked
struct ABaseCharacter_MulticastPlayMontageSectionWithBlendAtSectionPercentagePacked_Params
{
};

// Function Dungeons.BaseCharacter.MulticastPlayMontagePacked
struct ABaseCharacter_MulticastPlayMontagePacked_Params
{
};

// Function Dungeons.BaseCharacter.MulticastPlayMeleeAttackVariantAnimation
struct ABaseCharacter_MulticastPlayMeleeAttackVariantAnimation_Params
{
};

// Function Dungeons.BaseCharacter.MulticastPlayAnimationAsDynamicMontagePacked
struct ABaseCharacter_MulticastPlayAnimationAsDynamicMontagePacked_Params
{
};

// Function Dungeons.BaseCharacter.MulticastPauseMontage
struct ABaseCharacter_MulticastPauseMontage_Params
{
};

// Function Dungeons.BaseCharacter.MulticastJumpToSectionMontageWithPlayratePacked
struct ABaseCharacter_MulticastJumpToSectionMontageWithPlayratePacked_Params
{
};

// Function Dungeons.BaseCharacter.MulticastJumpToSectionMontage
struct ABaseCharacter_MulticastJumpToSectionMontage_Params
{
};

// Function Dungeons.BaseCharacter.Kill
struct ABaseCharacter_Kill_Params
{
};

// Function Dungeons.BaseCharacter.IsUnderwater
struct ABaseCharacter_IsUnderwater_Params
{
};

// Function Dungeons.BaseCharacter.IsTargetable
struct ABaseCharacter_IsTargetable_Params
{
};

// Function Dungeons.BaseCharacter.IsHostileTowards
struct ABaseCharacter_IsHostileTowards_Params
{
};

// Function Dungeons.BaseCharacter.IsFrozenSolid
struct ABaseCharacter_IsFrozenSolid_Params
{
};

// Function Dungeons.BaseCharacter.IsFriendlyTowards
struct ABaseCharacter_IsFriendlyTowards_Params
{
};

// Function Dungeons.BaseCharacter.IsBlocking
struct ABaseCharacter_IsBlocking_Params
{
};

// Function Dungeons.BaseCharacter.GetStepMaterial
struct ABaseCharacter_GetStepMaterial_Params
{
};

// Function Dungeons.BaseCharacter.GetRagdollOnDeathComponent
struct ABaseCharacter_GetRagdollOnDeathComponent_Params
{
};

// Function Dungeons.BaseCharacter.GetPushVolumeReactiveComponent
struct ABaseCharacter_GetPushVolumeReactiveComponent_Params
{
};

// Function Dungeons.BaseCharacter.GetOverlapMaterial
struct ABaseCharacter_GetOverlapMaterial_Params
{
};

// Function Dungeons.BaseCharacter.GetOrCreatePushVolumeReactiveComponent
struct ABaseCharacter_GetOrCreatePushVolumeReactiveComponent_Params
{
};

// Function Dungeons.BaseCharacter.GetMaster
struct ABaseCharacter_GetMaster_Params
{
};

// Function Dungeons.BaseCharacter.GetAttackState
struct ABaseCharacter_GetAttackState_Params
{
};

// Function Dungeons.BaseCharacter.CanHealTarget
struct ABaseCharacter_CanHealTarget_Params
{
};

// Function Dungeons.BaseCharacter.CanDamageTarget
struct ABaseCharacter_CanDamageTarget_Params
{
};

// Function Dungeons.PlayerControllerBase.SetGamepadLightColourForDuration
struct APlayerControllerBase_SetGamepadLightColourForDuration_Params
{
};

// Function Dungeons.PlayerControllerBase.SetCoopGamepadLightColourIndex
struct APlayerControllerBase_SetCoopGamepadLightColourIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.SaveCharacterData
struct APlayerControllerBase_SaveCharacterData_Params
{
};

// Function Dungeons.PlayerControllerBase.OnSelectedSkinId
struct APlayerControllerBase_OnSelectedSkinId_Params
{
};

// Function Dungeons.PlayerControllerBase.IsOwnedByInitialLocalPlayer
struct APlayerControllerBase_IsOwnedByInitialLocalPlayer_Params
{
};

// Function Dungeons.PlayerControllerBase.IsInitialized
struct APlayerControllerBase_IsInitialized_Params
{
};

// Function Dungeons.PlayerControllerBase.HasSaveData
struct APlayerControllerBase_HasSaveData_Params
{
};

// Function Dungeons.PlayerControllerBase.HasEverSelectedSkinId
struct APlayerControllerBase_HasEverSelectedSkinId_Params
{
};

// Function Dungeons.PlayerControllerBase.GetSaveLocalUserNum
struct APlayerControllerBase_GetSaveLocalUserNum_Params
{
};

// Function Dungeons.PlayerControllerBase.GetRecentSaveDataIndex
struct APlayerControllerBase_GetRecentSaveDataIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.GetNumProfiles
struct APlayerControllerBase_GetNumProfiles_Params
{
};

// Function Dungeons.PlayerControllerBase.GetLocalPlayerDisplayText
struct APlayerControllerBase_GetLocalPlayerDisplayText_Params
{
};

// Function Dungeons.PlayerControllerBase.GetIsCharacterSlotIndexSelectable
struct APlayerControllerBase_GetIsCharacterSlotIndexSelectable_Params
{
};

// Function Dungeons.PlayerControllerBase.GetInputDirectionalPadState
struct APlayerControllerBase_GetInputDirectionalPadState_Params
{
};

// Function Dungeons.PlayerControllerBase.GetInputAnalogStickStateRadialDeadzone
struct APlayerControllerBase_GetInputAnalogStickStateRadialDeadzone_Params
{
};

// Function Dungeons.PlayerControllerBase.GetGamepadActive
struct APlayerControllerBase_GetGamepadActive_Params
{
};

// Function Dungeons.PlayerControllerBase.GetFirstAvailableSaveIndex
struct APlayerControllerBase_GetFirstAvailableSaveIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.GetCharacterSlotByIndex
struct APlayerControllerBase_GetCharacterSlotByIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.GetAvailableSaveDataByIndex
struct APlayerControllerBase_GetAvailableSaveDataByIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.DeleteCharacterByIndex
struct APlayerControllerBase_DeleteCharacterByIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.CreateNewCharacter
struct APlayerControllerBase_CreateNewCharacter_Params
{
};

// Function Dungeons.PlayerControllerBase.ControllerTypeChanged
struct APlayerControllerBase_ControllerTypeChanged_Params
{
};

// Function Dungeons.PlayerControllerBase.CloneCharacter
struct APlayerControllerBase_CloneCharacter_Params
{
};

// Function Dungeons.PlayerControllerBase.CanDeleteCharacterByIndex
struct APlayerControllerBase_CanDeleteCharacterByIndex_Params
{
};

// Function Dungeons.PlayerControllerBase.CanCreateNewCharacter
struct APlayerControllerBase_CanCreateNewCharacter_Params
{
};

// Function Dungeons.PlayerControllerBase.AssignSaveData
struct APlayerControllerBase_AssignSaveData_Params
{
};

// Function Dungeons.BaseMenuPlayerController.StartOnlineGame
struct ABaseMenuPlayerController_StartOnlineGame_Params
{
};

// Function Dungeons.BaseMenuPlayerController.StartOfflineGame
struct ABaseMenuPlayerController_StartOfflineGame_Params
{
};

// Function Dungeons.BaseMenuPlayerController.BeginPlay
struct ABaseMenuPlayerController_BeginPlay_Params
{
};

// Function Dungeons.BasePlayerController.UpdateInitialBlueprintSetup
struct ABasePlayerController_UpdateInitialBlueprintSetup_Params
{
};

// Function Dungeons.BasePlayerController.ShowDebugInfo
struct ABasePlayerController_ShowDebugInfo_Params
{
};

// Function Dungeons.BasePlayerController.SetWantsToActivateSlot
struct ABasePlayerController_SetWantsToActivateSlot_Params
{
};

// Function Dungeons.BasePlayerController.SetTeleportListOpen
struct ABasePlayerController_SetTeleportListOpen_Params
{
};

// Function Dungeons.BasePlayerController.SetPlayerIsImmovable
struct ABasePlayerController_SetPlayerIsImmovable_Params
{
};

// Function Dungeons.BasePlayerController.SetInputCapturedByUI
struct ABasePlayerController_SetInputCapturedByUI_Params
{
};

// Function Dungeons.BasePlayerController.ServerSetNetConnectionSpeed
struct ABasePlayerController_ServerSetNetConnectionSpeed_Params
{
};

// Function Dungeons.BasePlayerController.ServerRequestMoveEveryoneToLobby
struct ABasePlayerController_ServerRequestMoveEveryoneToLobby_Params
{
};

// Function Dungeons.BasePlayerController.ServerRequestAwards
struct ABasePlayerController_ServerRequestAwards_Params
{
};

// Function Dungeons.BasePlayerController.ServerInteract
struct ABasePlayerController_ServerInteract_Params
{
};

// Function Dungeons.BasePlayerController.Server_DeferredConsoleCommand
struct ABasePlayerController_Server_DeferredConsoleCommand_Params
{
};

// Function Dungeons.BasePlayerController.ResetMouseCursorToLastPosition
struct ABasePlayerController_ResetMouseCursorToLastPosition_Params
{
};

// Function Dungeons.BasePlayerController.ResetAllStates
struct ABasePlayerController_ResetAllStates_Params
{
};

// Function Dungeons.BasePlayerController.ReceiveOnPawnPossessed
struct ABasePlayerController_ReceiveOnPawnPossessed_Params
{
};

// Function Dungeons.BasePlayerController.ReceiveOnObjectiveSettingsChange
struct ABasePlayerController_ReceiveOnObjectiveSettingsChange_Params
{
};

// Function Dungeons.BasePlayerController.ReceiveOnEnchantmentTriggered
struct ABasePlayerController_ReceiveOnEnchantmentTriggered_Params
{
};

// Function Dungeons.BasePlayerController.ReceiveOnArmorPropertyTriggered
struct ABasePlayerController_ReceiveOnArmorPropertyTriggered_Params
{
};

// Function Dungeons.BasePlayerController.OnStopForceFeedbackEvent
struct ABasePlayerController_OnStopForceFeedbackEvent_Params
{
};

// Function Dungeons.BasePlayerController.OnSecondaryHighlightTargetChanged
struct ABasePlayerController_OnSecondaryHighlightTargetChanged_Params
{
};

// Function Dungeons.BasePlayerController.OnRootPlayerGamepadReleased
struct ABasePlayerController_OnRootPlayerGamepadReleased_Params
{
};

// Function Dungeons.BasePlayerController.OnRootPlayerGamepadPressed
struct ABasePlayerController_OnRootPlayerGamepadPressed_Params
{
};

// Function Dungeons.BasePlayerController.OnRootPlayer
struct ABasePlayerController_OnRootPlayer_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedTargetingModeToggle
struct ABasePlayerController_OnRangedTargetingModeToggle_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedTargetingModeReleased
struct ABasePlayerController_OnRangedTargetingModeReleased_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedTargetingModePressed
struct ABasePlayerController_OnRangedTargetingModePressed_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedAttackButtonGamepadReleased
struct ABasePlayerController_OnRangedAttackButtonGamepadReleased_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedAttackButtonGamepadPressed
struct ABasePlayerController_OnRangedAttackButtonGamepadPressed_Params
{
};

// Function Dungeons.BasePlayerController.OnRangedAttackButton
struct ABasePlayerController_OnRangedAttackButton_Params
{
};

// Function Dungeons.BasePlayerController.OnRangeAttackAxisSecondary
struct ABasePlayerController_OnRangeAttackAxisSecondary_Params
{
};

// Function Dungeons.BasePlayerController.OnRangeAttackAxisPrimary
struct ABasePlayerController_OnRangeAttackAxisPrimary_Params
{
};

// Function Dungeons.BasePlayerController.OnPreSeamlessTravel
struct ABasePlayerController_OnPreSeamlessTravel_Params
{
};

// Function Dungeons.BasePlayerController.OnPostSeamlessTravel
struct ABasePlayerController_OnPostSeamlessTravel_Params
{
};

// Function Dungeons.BasePlayerController.OnPlayForceFeedbackEvent
struct ABasePlayerController_OnPlayForceFeedbackEvent_Params
{
};

// Function Dungeons.BasePlayerController.OnPlayerRespawned
struct ABasePlayerController_OnPlayerRespawned_Params
{
};

// Function Dungeons.BasePlayerController.OnPlayerDeath
struct ABasePlayerController_OnPlayerDeath_Params
{
};

// Function Dungeons.BasePlayerController.OnMoveButton
struct ABasePlayerController_OnMoveButton_Params
{
};

// Function Dungeons.BasePlayerController.OnMeleeAttackButtonReleased
struct ABasePlayerController_OnMeleeAttackButtonReleased_Params
{
};

// Function Dungeons.BasePlayerController.OnMeleeAttackButtonPressed
struct ABasePlayerController_OnMeleeAttackButtonPressed_Params
{
};

// Function Dungeons.BasePlayerController.OnMeleeAttackButton
struct ABasePlayerController_OnMeleeAttackButton_Params
{
};

// Function Dungeons.BasePlayerController.OnLocationClicked
struct ABasePlayerController_OnLocationClicked_Params
{
};

// Function Dungeons.BasePlayerController.OnHotbarItemUsed
struct ABasePlayerController_OnHotbarItemUsed_Params
{
};

// Function Dungeons.BasePlayerController.OnHighlightTargetChanged
struct ABasePlayerController_OnHighlightTargetChanged_Params
{
};

// Function Dungeons.BasePlayerController.OnFirePerformanceAnalytics
struct ABasePlayerController_OnFirePerformanceAnalytics_Params
{
};

// Function Dungeons.BasePlayerController.OnDodgeForwardButton
struct ABasePlayerController_OnDodgeForwardButton_Params
{
};

// Function Dungeons.BasePlayerController.OnDodgeButton
struct ABasePlayerController_OnDodgeButton_Params
{
};

// Function Dungeons.BasePlayerController.OnDebugState
struct ABasePlayerController_OnDebugState_Params
{
};

// Function Dungeons.BasePlayerController.OnDebugPointer
struct ABasePlayerController_OnDebugPointer_Params
{
};

// Function Dungeons.BasePlayerController.OnCancelTeleport
struct ABasePlayerController_OnCancelTeleport_Params
{
};

// Function Dungeons.BasePlayerController.OnAnyPlayerDamaged
struct ABasePlayerController_OnAnyPlayerDamaged_Params
{
};

// Function Dungeons.BasePlayerController.OnActorClicked
struct ABasePlayerController_OnActorClicked_Params
{
};

// Function Dungeons.BasePlayerController.MoveToLocation
struct ABasePlayerController_MoveToLocation_Params
{
};

// Function Dungeons.BasePlayerController.MoveToActor
struct ABasePlayerController_MoveToActor_Params
{
};

// Function Dungeons.BasePlayerController.IsTeleportListOpen
struct ABasePlayerController_IsTeleportListOpen_Params
{
};

// Function Dungeons.BasePlayerController.IsTeleporting
struct ABasePlayerController_IsTeleporting_Params
{
};

// Function Dungeons.BasePlayerController.IsInputTypeAllowed
struct ABasePlayerController_IsInputTypeAllowed_Params
{
};

// Function Dungeons.BasePlayerController.IsInputCapturedByUI
struct ABasePlayerController_IsInputCapturedByUI_Params
{
};

// Function Dungeons.BasePlayerController.IsInputCapturedByTeleport
struct ABasePlayerController_IsInputCapturedByTeleport_Params
{
};

// Function Dungeons.BasePlayerController.IsInitialSetupDone
struct ABasePlayerController_IsInitialSetupDone_Params
{
};

// Function Dungeons.BasePlayerController.IsChatWheelVisible
struct ABasePlayerController_IsChatWheelVisible_Params
{
};

// Function Dungeons.BasePlayerController.InitialBlueprintSetupComplete
struct ABasePlayerController_InitialBlueprintSetupComplete_Params
{
};

// Function Dungeons.BasePlayerController.HasValidLocalPlayer
struct ABasePlayerController_HasValidLocalPlayer_Params
{
};

// Function Dungeons.BasePlayerController.GetWalletComponent
struct ABasePlayerController_GetWalletComponent_Params
{
};

// Function Dungeons.BasePlayerController.GetTeleportDependents
struct ABasePlayerController_GetTeleportDependents_Params
{
};

// Function Dungeons.BasePlayerController.GetTeleportCandidates
struct ABasePlayerController_GetTeleportCandidates_Params
{
};

// Function Dungeons.BasePlayerController.GetPlayerId
struct ABasePlayerController_GetPlayerId_Params
{
};

// Function Dungeons.BasePlayerController.GetPlayerDisplayName
struct ABasePlayerController_GetPlayerDisplayName_Params
{
};

// Function Dungeons.BasePlayerController.GetPathFollowingComponent
struct ABasePlayerController_GetPathFollowingComponent_Params
{
};

// Function Dungeons.BasePlayerController.GetLocalPlayerIndex
struct ABasePlayerController_GetLocalPlayerIndex_Params
{
};

// Function Dungeons.BasePlayerController.GetItemStashComponent
struct ABasePlayerController_GetItemStashComponent_Params
{
};

// Function Dungeons.BasePlayerController.GetIsMoving
struct ABasePlayerController_GetIsMoving_Params
{
};

// Function Dungeons.BasePlayerController.GetControlledPlayerCharacter
struct ABasePlayerController_GetControlledPlayerCharacter_Params
{
};

// Function Dungeons.BasePlayerController.GetAudioListenerLocation
struct ABasePlayerController_GetAudioListenerLocation_Params
{
};

// Function Dungeons.BasePlayerController.DodgeInDirection
struct ABasePlayerController_DodgeInDirection_Params
{
};

// Function Dungeons.BasePlayerController.ClientDropItems
struct ABasePlayerController_ClientDropItems_Params
{
};

// Function Dungeons.BasePlayerController.ClickyClicked
struct ABasePlayerController_ClickyClicked_Params
{
};

// Function Dungeons.BasePlayerController.CenterMouseCursor
struct ABasePlayerController_CenterMouseCursor_Params
{
};

// Function Dungeons.BasePlayerController.CancelCurrentInputActions
struct ABasePlayerController_CancelCurrentInputActions_Params
{
};

// Function Dungeons.BasePlayerController.AdjustCameraFovBasedOnCharacterSpeed
struct ABasePlayerController_AdjustCameraFovBasedOnCharacterSpeed_Params
{
};

// Function Dungeons.BasePlayerState.SetRespawnSeconds
struct ABasePlayerState_SetRespawnSeconds_Params
{
};

// Function Dungeons.BasePlayerState.SetReady
struct ABasePlayerState_SetReady_Params
{
};

// Function Dungeons.BasePlayerState.SetOwnedByHost
struct ABasePlayerState_SetOwnedByHost_Params
{
};

// Function Dungeons.BasePlayerState.ServerAssignSecondaryUniqueId
struct ABasePlayerState_ServerAssignSecondaryUniqueId_Params
{
};

// Function Dungeons.BasePlayerState.ServerAssignPlayerPlatform
struct ABasePlayerState_ServerAssignPlayerPlatform_Params
{
};

// Function Dungeons.BasePlayerState.ServerAssignDisplayName
struct ABasePlayerState_ServerAssignDisplayName_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_SetReady
struct ABasePlayerState_OnRep_SetReady_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_SecondaryDisplayName
struct ABasePlayerState_OnRep_SecondaryDisplayName_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_PlayerPlatform
struct ABasePlayerState_OnRep_PlayerPlatform_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_PlayerNumber
struct ABasePlayerState_OnRep_PlayerNumber_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_OwnedByHost
struct ABasePlayerState_OnRep_OwnedByHost_Params
{
};

// Function Dungeons.BasePlayerState.OnRep_DisplayName
struct ABasePlayerState_OnRep_DisplayName_Params
{
};

// Function Dungeons.BasePlayerState.IsReady
struct ABasePlayerState_IsReady_Params
{
};

// Function Dungeons.BasePlayerState.GetRespawnSeconds
struct ABasePlayerState_GetRespawnSeconds_Params
{
};

// Function Dungeons.BasePlayerState.GetPlayerSecondaryDisplayName
struct ABasePlayerState_GetPlayerSecondaryDisplayName_Params
{
};

// Function Dungeons.BasePlayerState.GetPlayerPrimaryDisplayName
struct ABasePlayerState_GetPlayerPrimaryDisplayName_Params
{
};

// Function Dungeons.BasePlayerState.GetPlayerPlatform
struct ABasePlayerState_GetPlayerPlatform_Params
{
};

// Function Dungeons.BasePlayerState.GetPlayerNumber
struct ABasePlayerState_GetPlayerNumber_Params
{
};

// Function Dungeons.BasePlayerState.GetPlayerDisplayName
struct ABasePlayerState_GetPlayerDisplayName_Params
{
};

// Function Dungeons.BasePushVolume.SetPushVolumeTimerActive
struct ABasePushVolume_SetPushVolumeTimerActive_Params
{
};

// Function Dungeons.BasePushVolume.SetPushVolumeExtent
struct ABasePushVolume_SetPushVolumeExtent_Params
{
};

// Function Dungeons.BasePushVolume.SetPushVolumeActive
struct ABasePushVolume_SetPushVolumeActive_Params
{
};

// Function Dungeons.BasePushVolume.OnWindAreaEndOverlap
struct ABasePushVolume_OnWindAreaEndOverlap_Params
{
};

// Function Dungeons.BasePushVolume.OnWindAreaBeginOverlap
struct ABasePushVolume_OnWindAreaBeginOverlap_Params
{
};

// Function Dungeons.BasePushVolume.OnRep_VolumeIsEnabled
struct ABasePushVolume_OnRep_VolumeIsEnabled_Params
{
};

// Function Dungeons.BasePushVolume.IsPushVolumeActive
struct ABasePushVolume_IsPushVolumeActive_Params
{
};

// Function Dungeons.BasePushVolume.GetForce
struct ABasePushVolume_GetForce_Params
{
};

// Function Dungeons.BeaconAttackComponent.Start
struct UBeaconAttackComponent_Start_Params
{
};

// Function Dungeons.BeaconAttackComponent.MulticastStart
struct UBeaconAttackComponent_MulticastStart_Params
{
};

// Function Dungeons.BeamAttackComponent.OnRep_PhaseChange
struct UBeamAttackComponent_OnRep_PhaseChange_Params
{
};

// Function Dungeons.BeamAttackComponent.GetCurrentTargetActor
struct UBeamAttackComponent_GetCurrentTargetActor_Params
{
};

// Function Dungeons.BeamAttackComponent.EndBeam
struct UBeamAttackComponent_EndBeam_Params
{
};

// Function Dungeons.BeamAttackComponent.BeginTargetingBeam
struct UBeamAttackComponent_BeginTargetingBeam_Params
{
};

// Function Dungeons.BeamAttackComponent.BeginDamagingBeam
struct UBeamAttackComponent_BeginDamagingBeam_Params
{
};

// Function Dungeons.BeamTargetUpdaterComponent.RemoveParticleSystemComponent
struct UBeamTargetUpdaterComponent_RemoveParticleSystemComponent_Params
{
};

// Function Dungeons.BeamTargetUpdaterComponent.AddParticleSystemComponent
struct UBeamTargetUpdaterComponent_AddParticleSystemComponent_Params
{
};

// Function Dungeons.ActorBeamTargetUpdaterComponent.SetActorTarget
struct UActorBeamTargetUpdaterComponent_SetActorTarget_Params
{
};

// Function Dungeons.ActorBeamTargetUpdaterComponent.ForceUpdate
struct UActorBeamTargetUpdaterComponent_ForceUpdate_Params
{
};

// Function Dungeons.HealthPotionSynergy.OnItemSuccess
struct UHealthPotionSynergy_OnItemSuccess_Params
{
};

// Function Dungeons.BeeNest.OnRep_Expired
struct ABeeNest_OnRep_Expired_Params
{
};

// Function Dungeons.BeeNest.OnDespawn
struct ABeeNest_OnDespawn_Params
{
};

// Function Dungeons.BeeNest.OnBeeSpawn
struct ABeeNest_OnBeeSpawn_Params
{
};

// Function Dungeons.BeeNestItemInstance.OnRep_BeeNest
struct ABeeNestItemInstance_OnRep_BeeNest_Params
{
};

// Function Dungeons.BehaviorComponent.OnStun
struct UBehaviorComponent_OnStun_Params
{
};

// Function Dungeons.BehaviorComponent.OnBubbled
struct UBehaviorComponent_OnBubbled_Params
{
};

// Function Dungeons.BlindCloudSpawnHelper.SpawnBlindCloud
struct UBlindCloudSpawnHelper_SpawnBlindCloud_Params
{
};

// Function Dungeons.BlindCloud.OnPlayerCharacterLeftNonFriendlyCloud
struct ABlindCloud_OnPlayerCharacterLeftNonFriendlyCloud_Params
{
};

// Function Dungeons.BlindCloud.OnPlayerCharacterEnteredNonFriendlyCloud
struct ABlindCloud_OnPlayerCharacterEnteredNonFriendlyCloud_Params
{
};

// Function Dungeons.BlockingMessage.Retry
struct UBlockingMessage_Retry_Params
{
};

// Function Dungeons.BlockingMessage.GetType
struct UBlockingMessage_GetType_Params
{
};

// Function Dungeons.BlockingMessage.Dismiss
struct UBlockingMessage_Dismiss_Params
{
};

// Function Dungeons.BonusShot.SpawnProjectilesMulticast
struct UBonusShot_SpawnProjectilesMulticast_Params
{
};

// Function Dungeons.BubbleColumn.SetOxygenEnabled
struct ABubbleColumn_SetOxygenEnabled_Params
{
};

// Function Dungeons.BubbleColumn.SetHot
struct ABubbleColumn_SetHot_Params
{
};

// Function Dungeons.BubbleColumn.OnRep_IsHot
struct ABubbleColumn_OnRep_IsHot_Params
{
};

// Function Dungeons.BubbleColumn.OnRep_IsEnabled
struct ABubbleColumn_OnRep_IsEnabled_Params
{
};

// Function Dungeons.BubbledHelper.DealDamageOnRadius
struct UBubbledHelper_DealDamageOnRadius_Params
{
};

// Function Dungeons.BubbledHelper.ApplyBubbleEffect
struct UBubbledHelper_ApplyBubbleEffect_Params
{
};

// Function Dungeons.TotemBaseActor.OnWeakenedVitalityReached
struct ATotemBaseActor_OnWeakenedVitalityReached_Params
{
};

// Function Dungeons.TotemBaseActor.OnPlayerExit
struct ATotemBaseActor_OnPlayerExit_Params
{
};

// Function Dungeons.TotemBaseActor.OnPlayerEnter
struct ATotemBaseActor_OnPlayerEnter_Params
{
};

// Function Dungeons.TotemBaseActor.OnEndSphereOverlap
struct ATotemBaseActor_OnEndSphereOverlap_Params
{
};

// Function Dungeons.TotemBaseActor.OnDestroyCountdownStarted
struct ATotemBaseActor_OnDestroyCountdownStarted_Params
{
};

// Function Dungeons.TotemBaseActor.OnBeginSphereOverlap
struct ATotemBaseActor_OnBeginSphereOverlap_Params
{
};

// Function Dungeons.TotemBaseActor.GetHealthFraction
struct ATotemBaseActor_GetHealthFraction_Params
{
};

// Function Dungeons.BumpableComponent.OnActorHit
struct UBumpableComponent_OnActorHit_Params
{
};

// Function Dungeons.IntervalExecutionEnchantment.OnIntervalExecute
struct UIntervalExecutionEnchantment_OnIntervalExecute_Params
{
};

// Function Dungeons.MerchantSlotBase.IsUnlocked
struct UMerchantSlotBase_IsUnlocked_Params
{
};

// Function Dungeons.MerchantSlotBase.HasPrice
struct UMerchantSlotBase_HasPrice_Params
{
};

// Function Dungeons.MerchantSlotBase.GetPrice
struct UMerchantSlotBase_GetPrice_Params
{
};

// Function Dungeons.MerchantSlotBase.GetActiveUnlockQuest
struct UMerchantSlotBase_GetActiveUnlockQuest_Params
{
};

// Function Dungeons.MerchantItemSlotBase.IsReserved
struct UMerchantItemSlotBase_IsReserved_Params
{
};

// Function Dungeons.MerchantItemSlotBase.IsItemUnlocked
struct UMerchantItemSlotBase_IsItemUnlocked_Params
{
};

// Function Dungeons.MerchantItemSlotBase.IsItemReserved
struct UMerchantItemSlotBase_IsItemReserved_Params
{
};

// Function Dungeons.MerchantItemSlotBase.HasItem
struct UMerchantItemSlotBase_HasItem_Params
{
};

// Function Dungeons.MerchantItemSlotBase.GetItem
struct UMerchantItemSlotBase_GetItem_Params
{
};

// Function Dungeons.MerchantItemSlotBase.GetDisplayItemCache
struct UMerchantItemSlotBase_GetDisplayItemCache_Params
{
};

// Function Dungeons.MerchantTransactionBase.TryExecute
struct UMerchantTransactionBase_TryExecute_Params
{
};

// Function Dungeons.MerchantTransactionBase.QueryProblemStatus
struct UMerchantTransactionBase_QueryProblemStatus_Params
{
};

// Function Dungeons.MerchantTransactionBase.HasPrice
struct UMerchantTransactionBase_HasPrice_Params
{
};

// Function Dungeons.MerchantTransactionBase.GetSuccessStatusReason
struct UMerchantTransactionBase_GetSuccessStatusReason_Params
{
};

// Function Dungeons.MerchantTransactionBase.GetStatusReason
struct UMerchantTransactionBase_GetStatusReason_Params
{
};

// Function Dungeons.MerchantTransactionBase.GetStatusBulletPoints
struct UMerchantTransactionBase_GetStatusBulletPoints_Params
{
};

// Function Dungeons.MerchantTransactionBase.GetPrice
struct UMerchantTransactionBase_GetPrice_Params
{
};

// Function Dungeons.MerchantTransactionBase.CanSelectAllRequiredSelections
struct UMerchantTransactionBase_CanSelectAllRequiredSelections_Params
{
};

// Function Dungeons.MerchantTransactionBase.CanExecute
struct UMerchantTransactionBase_CanExecute_Params
{
};

// Function Dungeons.CameraModifier_NightModifier.OnBecomingNightChanged
struct UCameraModifier_NightModifier_OnBecomingNightChanged_Params
{
};

// Function Dungeons.ChainReaction.SpawnProjectilesMulticast
struct UChainReaction_SpawnProjectilesMulticast_Params
{
};

// Function Dungeons.CharacterAnimInstance.GetPlayerCharacter
struct UCharacterAnimInstance_GetPlayerCharacter_Params
{
};

// Function Dungeons.CharacterAnimInstance.GetMobCharacter
struct UCharacterAnimInstance_GetMobCharacter_Params
{
};

// Function Dungeons.CharacterAnimInstance.GetBaseCharacter
struct UCharacterAnimInstance_GetBaseCharacter_Params
{
};

// Function Dungeons.CharacterSerializeComponent.SetSkin
struct UCharacterSerializeComponent_SetSkin_Params
{
};

// Function Dungeons.CharacterSerializeComponent.SetName
struct UCharacterSerializeComponent_SetName_Params
{
};

// Function Dungeons.CharacterSerializeComponent.SetLegendaryStatus
struct UCharacterSerializeComponent_SetLegendaryStatus_Params
{
};

// Function Dungeons.CharacterSerializeComponent.ReadSkin
struct UCharacterSerializeComponent_ReadSkin_Params
{
};

// Function Dungeons.CharacterSerializeComponent.ReadName
struct UCharacterSerializeComponent_ReadName_Params
{
};

// Function Dungeons.CharacterSerializeComponent.HasProfile
struct UCharacterSerializeComponent_HasProfile_Params
{
};

// Function Dungeons.CharacterSerializeComponent.GetLegendaryStatus
struct UCharacterSerializeComponent_GetLegendaryStatus_Params
{
};

// Function Dungeons.CharacterSerializeComponent.GetCloudPlayerId
struct UCharacterSerializeComponent_GetCloudPlayerId_Params
{
};

// Function Dungeons.CharacterSerializeComponent.AssignCharacter
struct UCharacterSerializeComponent_AssignCharacter_Params
{
};

// Function Dungeons.CharacterLazySaveComponent.SaveFailed
struct UCharacterLazySaveComponent_SaveFailed_Params
{
};

// Function Dungeons.CharacterLevelUtils.getProgress
struct UCharacterLevelUtils_getProgress_Params
{
};

// Function Dungeons.CharacterSaveData.OnConsoleSaveDataFinishedLoad
struct UCharacterSaveData_OnConsoleSaveDataFinishedLoad_Params
{
};

// Function Dungeons.CharacterSaveData.GetLegendaryStatus
struct UCharacterSaveData_GetLegendaryStatus_Params
{
};

// Function Dungeons.ChargedRedstoneMineActor.OnOverlapBegin
struct AChargedRedstoneMineActor_OnOverlapBegin_Params
{
};

// Function Dungeons.ChargedRedstoneMineActor.OnExplode
struct AChargedRedstoneMineActor_OnExplode_Params
{
};

// Function Dungeons.ChargedRedstoneMineActor.MulticastExplode
struct AChargedRedstoneMineActor_MulticastExplode_Params
{
};

// Function Dungeons.ChargedRedstoneMineActor.Explode
struct AChargedRedstoneMineActor_Explode_Params
{
};

// Function Dungeons.ChargingAcceleration.OnCharge
struct UChargingAcceleration_OnCharge_Params
{
};

// Function Dungeons.ChargingAcceleration.OnAttackOver
struct UChargingAcceleration_OnAttackOver_Params
{
};

// Function Dungeons.ChatComponent.ServerSendPickupItem
struct UChatComponent_ServerSendPickupItem_Params
{
};

// Function Dungeons.ChatComponent.ServerSendEmote
struct UChatComponent_ServerSendEmote_Params
{
};

// Function Dungeons.ChatComponent.ServerSendChatMessage
struct UChatComponent_ServerSendChatMessage_Params
{
};

// Function Dungeons.ChatComponent.RecieveChatMessage
struct UChatComponent_RecieveChatMessage_Params
{
};

// Function Dungeons.ChatComponent.RecieveChatEmote
struct UChatComponent_RecieveChatEmote_Params
{
};

// Function Dungeons.ChatComponent.ItemPickedUp
struct UChatComponent_ItemPickedUp_Params
{
};

// Function Dungeons.ChatComponent.ClientSendPlayerStatus
struct UChatComponent_ClientSendPlayerStatus_Params
{
};

// Function Dungeons.ChatComponent.ClientSendPickupItem
struct UChatComponent_ClientSendPickupItem_Params
{
};

// Function Dungeons.ChatComponent.ClientSendEmote
struct UChatComponent_ClientSendEmote_Params
{
};

// Function Dungeons.ChatComponent.ClientSendChatMessage
struct UChatComponent_ClientSendChatMessage_Params
{
};

// Function Dungeons.CinematicSequence.Stop
struct UCinematicSequence_Stop_Params
{
};

// Function Dungeons.CinematicSequence.OnStopped
struct UCinematicSequence_OnStopped_Params
{
};

// Function Dungeons.CinematicSequence.IsPlaying
struct UCinematicSequence_IsPlaying_Params
{
};

// Function Dungeons.CogCrossbowEnchantment.OnRep_CanAttack
struct UCogCrossbowEnchantment_OnRep_CanAttack_Params
{
};

// Function Dungeons.ConduitButton.OnConduitHeld
struct AConduitButton_OnConduitHeld_Params
{
};

// Function Dungeons.ConduitButton.OnConduitDropped
struct AConduitButton_OnConduitDropped_Params
{
};

// Function Dungeons.ConduitButton.GiveConduitToCharacter
struct AConduitButton_GiveConduitToCharacter_Params
{
};

// Function Dungeons.ConduitButton.DropConduitStorable
struct AConduitButton_DropConduitStorable_Params
{
};

// Function Dungeons.ConduitButton.CompleteDarkConduit
struct AConduitButton_CompleteDarkConduit_Params
{
};

// Function Dungeons.ThrowablePropActor.ThrowServer
struct AThrowablePropActor_ThrowServer_Params
{
};

// Function Dungeons.ThrowablePropActor.ThrowInPlayerForwardDir
struct AThrowablePropActor_ThrowInPlayerForwardDir_Params
{
};

// Function Dungeons.ThrowablePropActor.ThrowInMouseDir
struct AThrowablePropActor_ThrowInMouseDir_Params
{
};

// Function Dungeons.ThrowablePropActor.OnRep_IsActivated
struct AThrowablePropActor_OnRep_IsActivated_Params
{
};

// Function Dungeons.ThrowablePropActor.OnEffectExecuted
struct AThrowablePropActor_OnEffectExecuted_Params
{
};

// Function Dungeons.ThrowablePropActor.OnActivated
struct AThrowablePropActor_OnActivated_Params
{
};

// Function Dungeons.ConduitItem.UpdateMaterials
struct AConduitItem_UpdateMaterials_Params
{
};

// Function Dungeons.ConduitItem.OnRep_IsHeldByPlayer
struct AConduitItem_OnRep_IsHeldByPlayer_Params
{
};

// Function Dungeons.ConduitItem.GiveConduitToCharacter
struct AConduitItem_GiveConduitToCharacter_Params
{
};

// Function Dungeons.ConduitItem.EnableSound
struct AConduitItem_EnableSound_Params
{
};

// Function Dungeons.ContinousDamageActor.SetGameplayEffectSpec
struct AContinousDamageActor_SetGameplayEffectSpec_Params
{
};

// Function Dungeons.ContinousDamageActor.OnDamageDisabled
struct AContinousDamageActor_OnDamageDisabled_Params
{
};

// Function Dungeons.ContinousDamageComponent.OnComponentEndOverlap
struct UContinousDamageComponent_OnComponentEndOverlap_Params
{
};

// Function Dungeons.ContinousDamageComponent.OnComponentBeginOverlap
struct UContinousDamageComponent_OnComponentBeginOverlap_Params
{
};

// Function Dungeons.CooldownProvider.IsOnCooldown
struct UCooldownProvider_IsOnCooldown_Params
{
};

// Function Dungeons.CooldownProvider.GetCooldownSecondsRemaining
struct UCooldownProvider_GetCooldownSecondsRemaining_Params
{
};

// Function Dungeons.CooldownProvider.GetCooldownSecondsDuration
struct UCooldownProvider_GetCooldownSecondsDuration_Params
{
};

// Function Dungeons.CooldownProvider.GetCooldownFractionRemaining
struct UCooldownProvider_GetCooldownFractionRemaining_Params
{
};

// Function Dungeons.CorpseAttractorComponent.OnRep_CurrentlyActiveMobs
struct UCorpseAttractorComponent_OnRep_CurrentlyActiveMobs_Params
{
};

// Function Dungeons.TogglableItemInstance.ServerToggle
struct ATogglableItemInstance_ServerToggle_Params
{
};

// Function Dungeons.TogglableItemInstance.OnRep_BackingToggle
struct ATogglableItemInstance_OnRep_BackingToggle_Params
{
};

// Function Dungeons.TogglableItemInstance.ClientToggle
struct ATogglableItemInstance_ClientToggle_Params
{
};

// Function Dungeons.CosmeticItemDef.GetEntitlementName
struct UCosmeticItemDef_GetEntitlementName_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticType
struct UCosmeticItemDef_GetCosmeticType_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticInventoryRotation
struct UCosmeticItemDef_GetCosmeticInventoryRotation_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticId
struct UCosmeticItemDef_GetCosmeticId_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticIconTexture
struct UCosmeticItemDef_GetCosmeticIconTexture_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticEquippedSound
struct UCosmeticItemDef_GetCosmeticEquippedSound_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticEquippedAnimation
struct UCosmeticItemDef_GetCosmeticEquippedAnimation_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticDisplayName
struct UCosmeticItemDef_GetCosmeticDisplayName_Params
{
};

// Function Dungeons.CosmeticItemDef.GetCosmeticDisplayDescription
struct UCosmeticItemDef_GetCosmeticDisplayDescription_Params
{
};

// Function Dungeons.CosmeticItemDef.GetBlueprintClass
struct UCosmeticItemDef_GetBlueprintClass_Params
{
};

// Function Dungeons.CosmeticItemInfo.GetType
struct ACosmeticItemInfo_GetType_Params
{
};

// Function Dungeons.CosmeticItemInfo.GetItemName
struct ACosmeticItemInfo_GetItemName_Params
{
};

// Function Dungeons.CosmeticsComponent.GetSlots
struct UCosmeticsComponent_GetSlots_Params
{
};

// Function Dungeons.CosmeticsComponent.FindAvailableCosmeticTypeDefinitions
struct UCosmeticsComponent_FindAvailableCosmeticTypeDefinitions_Params
{
};

// Function Dungeons.CosmeticsDisplayComponent.OnStoreItemUpdated
struct UCosmeticsDisplayComponent_OnStoreItemUpdated_Params
{
};

// Function Dungeons.CosmeticsSlot.UnequipCosmetic
struct UCosmeticsSlot_UnequipCosmetic_Params
{
};

// Function Dungeons.CosmeticsSlot.ServerSetCosmetic
struct UCosmeticsSlot_ServerSetCosmetic_Params
{
};

// Function Dungeons.CosmeticsSlot.OnRep_CosmeticReplicated
struct UCosmeticsSlot_OnRep_CosmeticReplicated_Params
{
};

// Function Dungeons.CosmeticsSlot.OnHighlightedInUi
struct UCosmeticsSlot_OnHighlightedInUi_Params
{
};

// Function Dungeons.CosmeticsSlot.IsCosmeticNew
struct UCosmeticsSlot_IsCosmeticNew_Params
{
};

// Function Dungeons.CosmeticsSlot.IsCosmeticEquipped
struct UCosmeticsSlot_IsCosmeticEquipped_Params
{
};

// Function Dungeons.CosmeticsSlot.GetType
struct UCosmeticsSlot_GetType_Params
{
};

// Function Dungeons.CosmeticsSlot.GetItem
struct UCosmeticsSlot_GetItem_Params
{
};

// Function Dungeons.CosmeticsSlot.GetEquippedCosmetic
struct UCosmeticsSlot_GetEquippedCosmetic_Params
{
};

// Function Dungeons.CosmeticsSlot.GetAvailableCosmetics
struct UCosmeticsSlot_GetAvailableCosmetics_Params
{
};

// Function Dungeons.CosmeticsSlot.EquipCosmetic
struct UCosmeticsSlot_EquipCosmetic_Params
{
};

// Function Dungeons.CosmeticsUtil.getCostmeticTypeDisplayName
struct UCosmeticsUtil_getCostmeticTypeDisplayName_Params
{
};

// Function Dungeons.DungeonsSessionAttributesEntity.GetSessionPlayerInfo
struct UDungeonsSessionAttributesEntity_GetSessionPlayerInfo_Params
{
};

// Function Dungeons.DungeonsSessionAttributesEntity.GetOnlineService
struct UDungeonsSessionAttributesEntity_GetOnlineService_Params
{
};

// Function Dungeons.CurrencyCounterWidgetBase.SetCurrencyType
struct UCurrencyCounterWidgetBase_SetCurrencyType_Params
{
};

// Function Dungeons.CurrencyCounterWidgetBase.OnCurrencyTypeChanged
struct UCurrencyCounterWidgetBase_OnCurrencyTypeChanged_Params
{
};

// Function Dungeons.CurrencyCounterWidgetBase.IsCurrencyItemId
struct UCurrencyCounterWidgetBase_IsCurrencyItemId_Params
{
};

// Function Dungeons.CurrencyCounterWidgetBase.GetCurrencyItemId
struct UCurrencyCounterWidgetBase_GetCurrencyItemId_Params
{
};

// Function Dungeons.CustomMover.ExecuteCustomMove
struct UCustomMover_ExecuteCustomMove_Params
{
};

// Function Dungeons.CustomMoverItemInstance.OnRep_Slot
struct ACustomMoverItemInstance_OnRep_Slot_Params
{
};

// Function Dungeons.DamageAttributeSet.OnRep_DamageMultiplier
struct UDamageAttributeSet_OnRep_DamageMultiplier_Params
{
};

// Function Dungeons.DamageNumberBatchingComponent.ClientExecuteDamageNumbers
struct UDamageNumberBatchingComponent_ClientExecuteDamageNumbers_Params
{
};

// Function Dungeons.Synergy.OnItemSuccess
struct USynergy_OnItemSuccess_Params
{
};

// Function Dungeons.Synergy.OnItemInstanceChanged
struct USynergy_OnItemInstanceChanged_Params
{
};

// Function Dungeons.DarkConduitInteraction.OnConduitOutOfRange
struct ADarkConduitInteraction_OnConduitOutOfRange_Params
{
};

// Function Dungeons.DarkConduitInteraction.OnConduitInRange
struct ADarkConduitInteraction_OnConduitInRange_Params
{
};

// Function Dungeons.WaveSpawner.OnGameReady
struct AWaveSpawner_OnGameReady_Params
{
};

// Function Dungeons.DeathBarter.ServerSendCount
struct UDeathBarter_ServerSendCount_Params
{
};

// Function Dungeons.DeathBarter.Client_OnBeforeDeath
struct UDeathBarter_Client_OnBeforeDeath_Params
{
};

// Function Dungeons.ItemDropComponent.TearDownComponent
struct UItemDropComponent_TearDownComponent_Params
{
};

// Function Dungeons.ItemDropComponent.ServerDropItems
struct UItemDropComponent_ServerDropItems_Params
{
};

// Function Dungeons.DeductingItemDropComponent.ServerDeductItems
struct UDeductingItemDropComponent_ServerDeductItems_Params
{
};

// Function Dungeons.Deflecting.MulticastDeflect
struct UDeflecting_MulticastDeflect_Params
{
};

// Function Dungeons.DemoUtils.TryStartDemo
struct UDemoUtils_TryStartDemo_Params
{
};

// Function Dungeons.DemoUtils.SkipSplash
struct UDemoUtils_SkipSplash_Params
{
};

// Function Dungeons.DemoUtils.IsDemo
struct UDemoUtils_IsDemo_Params
{
};

// Function Dungeons.DifficultyAttributeSet.OnRep_DifficultyPerformHealingMultiplier
struct UDifficultyAttributeSet_OnRep_DifficultyPerformHealingMultiplier_Params
{
};

// Function Dungeons.DifficultyAttributeSet.OnRep_DifficultyDealDamageMultiplier
struct UDifficultyAttributeSet_OnRep_DifficultyDealDamageMultiplier_Params
{
};

// Function Dungeons.DifficultyUtil.GetUnlockText
struct UDifficultyUtil_GetUnlockText_Params
{
};

// Function Dungeons.DifficultyUtil.GetUnlockRequirementText
struct UDifficultyUtil_GetUnlockRequirementText_Params
{
};

// Function Dungeons.DifficultyUtil.GetUnlockExplainerText
struct UDifficultyUtil_GetUnlockExplainerText_Params
{
};

// Function Dungeons.DifficultyUtil.GetTotalNumThreatLevelsAndEndlessStruggles
struct UDifficultyUtil_GetTotalNumThreatLevelsAndEndlessStruggles_Params
{
};

// Function Dungeons.DifficultyUtil.GetTotalNumThreatLevels
struct UDifficultyUtil_GetTotalNumThreatLevels_Params
{
};

// Function Dungeons.DifficultyUtil.GetTotalNumEndlessStruggles
struct UDifficultyUtil_GetTotalNumEndlessStruggles_Params
{
};

// Function Dungeons.DifficultyUtil.getThreatLevelDisplayName
struct UDifficultyUtil_getThreatLevelDisplayName_Params
{
};

// Function Dungeons.DifficultyUtil.getThreatCompletedRequirementText
struct UDifficultyUtil_getThreatCompletedRequirementText_Params
{
};

// Function Dungeons.DifficultyUtil.GetStartingLivesForDifficulty
struct UDifficultyUtil_GetStartingLivesForDifficulty_Params
{
};

// Function Dungeons.DifficultyUtil.GetNumThreatLevelsInDifficulty
struct UDifficultyUtil_GetNumThreatLevelsInDifficulty_Params
{
};

// Function Dungeons.DifficultyUtil.GetNumThreatLevelsAndEndlessStrugglesInDifficulty
struct UDifficultyUtil_GetNumThreatLevelsAndEndlessStrugglesInDifficulty_Params
{
};

// Function Dungeons.DifficultyUtil.GetNumEndlessStrugglesInDifficulty
struct UDifficultyUtil_GetNumEndlessStrugglesInDifficulty_Params
{
};

// Function Dungeons.DifficultyUtil.GetExtraChallengeDispalyName
struct UDifficultyUtil_GetExtraChallengeDispalyName_Params
{
};

// Function Dungeons.DifficultyUtil.getEndlessStruggleDisplayName
struct UDifficultyUtil_getEndlessStruggleDisplayName_Params
{
};

// Function Dungeons.DifficultyUtil.GetEndlessStruggleConfiguration
struct UDifficultyUtil_GetEndlessStruggleConfiguration_Params
{
};

// Function Dungeons.DifficultyUtil.getDifficultyThreatLevelDisplayName
struct UDifficultyUtil_getDifficultyThreatLevelDisplayName_Params
{
};

// Function Dungeons.DifficultyUtil.getDifficultyPlusDisplayName
struct UDifficultyUtil_getDifficultyPlusDisplayName_Params
{
};

// Function Dungeons.DifficultyUtil.getDifficultyEndlessStruggleDisplayName
struct UDifficultyUtil_getDifficultyEndlessStruggleDisplayName_Params
{
};

// Function Dungeons.DifficultyUtil.getDifficultyDisplayName
struct UDifficultyUtil_getDifficultyDisplayName_Params
{
};

// Function Dungeons.Dimmer.OnRep_Sign
struct ADimmer_OnRep_Sign_Params
{
};

// Function Dungeons.Dimmer.OnRep_DayFraction
struct ADimmer_OnRep_DayFraction_Params
{
};

// Function Dungeons.Dimmer.GetNightProgress
struct ADimmer_GetNightProgress_Params
{
};

// Function Dungeons.DLCDefs.OpenExternalStorePageForDlcName
struct UDLCDefs_OpenExternalStorePageForDlcName_Params
{
};

// Function Dungeons.DLCDefs.GetDLCUpsellTitleText
struct UDLCDefs_GetDLCUpsellTitleText_Params
{
};

// Function Dungeons.DLCDefs.GetDLCUpsellDescriptionText
struct UDLCDefs_GetDLCUpsellDescriptionText_Params
{
};

// Function Dungeons.DLCDefs.GetDLCUpsellBulletPoints
struct UDLCDefs_GetDLCUpsellBulletPoints_Params
{
};

// Function Dungeons.DLCDefs.GetDLCNameText
struct UDLCDefs_GetDLCNameText_Params
{
};

// Function Dungeons.DLCDefs.GetDLCNameReleased
struct UDLCDefs_GetDLCNameReleased_Params
{
};

// Function Dungeons.DLCDefs.GetDLCLocaleRequiresLogoTranslation
struct UDLCDefs_GetDLCLocaleRequiresLogoTranslation_Params
{
};

// Function Dungeons.DLCDefs.GetDLCInspectorLogoTexture
struct UDLCDefs_GetDLCInspectorLogoTexture_Params
{
};

// Function Dungeons.DLCDefs.GetDLCInspectorBackgroundTexture
struct UDLCDefs_GetDLCInspectorBackgroundTexture_Params
{
};

// Function Dungeons.MobGroupBehaviorComponent.ResetState
struct UMobGroupBehaviorComponent_ResetState_Params
{
};

// Function Dungeons.MobGroupBehaviorComponent.CheckAttackerHealth
struct UMobGroupBehaviorComponent_CheckAttackerHealth_Params
{
};

// Function Dungeons.DolphinBehaviorComponent.DoLootActorQuery
struct UDolphinBehaviorComponent_DoLootActorQuery_Params
{
};

// Function Dungeons.DoorComponent.Open
struct UDoorComponent_Open_Params
{
};

// Function Dungeons.DoorComponent.OnRep_IsOpen
struct UDoorComponent_OnRep_IsOpen_Params
{
};

// Function Dungeons.DoorComponent.IsDoorOpen
struct UDoorComponent_IsDoorOpen_Params
{
};

// Function Dungeons.DoorComponent.Close
struct UDoorComponent_Close_Params
{
};

// Function Dungeons.DragDropUtils.SetDragDropCursorOverride
struct UDragDropUtils_SetDragDropCursorOverride_Params
{
};

// Function Dungeons.DungeonHUD.SetIsVisible
struct ADungeonHUD_SetIsVisible_Params
{
};

// Function Dungeons.DungeonHUD.SetHotbarSize
struct ADungeonHUD_SetHotbarSize_Params
{
};

// Function Dungeons.DungeonHUD.SetHotbarBackgroundVisibility
struct ADungeonHUD_SetHotbarBackgroundVisibility_Params
{
};

// Function Dungeons.DungeonHUD.SetHotbarBackgroundScaling
struct ADungeonHUD_SetHotbarBackgroundScaling_Params
{
};

// Function Dungeons.DungeonHUD.SetHotbarBackgroundOffset
struct ADungeonHUD_SetHotbarBackgroundOffset_Params
{
};

// Function Dungeons.DungeonHUD.SetEmote
struct ADungeonHUD_SetEmote_Params
{
};

// Function Dungeons.DungeonHUD.SetCoopHotbarBackgroundOffset
struct ADungeonHUD_SetCoopHotbarBackgroundOffset_Params
{
};

// Function Dungeons.DungeonsAbilitySystemComponent.GetActiveEffectsWithUiData
struct UDungeonsAbilitySystemComponent_GetActiveEffectsWithUiData_Params
{
};

// Function Dungeons.DungeonsAbilitySystemGlobals.GetPeriod
struct UDungeonsAbilitySystemGlobals_GetPeriod_Params
{
};

// Function Dungeons.DungeonsAssetManager.UnloadAllObjects
struct UDungeonsAssetManager_UnloadAllObjects_Params
{
};

// Function Dungeons.DungeonsAssetManager.OnInventoryOpen
struct UDungeonsAssetManager_OnInventoryOpen_Params
{
};

// Function Dungeons.DungeonsAssetManager.OnInventoryClosed
struct UDungeonsAssetManager_OnInventoryClosed_Params
{
};

// Function Dungeons.DungeonsAssetManager.LoadSyncAssetFromPath
struct UDungeonsAssetManager_LoadSyncAssetFromPath_Params
{
};

// Function Dungeons.DungeonsAssetManager.IsEditor
struct UDungeonsAssetManager_IsEditor_Params
{
};

// Function Dungeons.DungeonsAssetManager.GetTextureFromString
struct UDungeonsAssetManager_GetTextureFromString_Params
{
};

// Function Dungeons.DungeonsAssetManager.GetSoundFromString
struct UDungeonsAssetManager_GetSoundFromString_Params
{
};

// Function Dungeons.DungeonsAudioUtils.GetLevelName
struct UDungeonsAudioUtils_GetLevelName_Params
{
};

// Function Dungeons.DungeonsAudioUtils.GetCurrentLevelAudioCollection
struct UDungeonsAudioUtils_GetCurrentLevelAudioCollection_Params
{
};

// Function Dungeons.DungeonsAudioUtils.CinematicPlaying
struct UDungeonsAudioUtils_CinematicPlaying_Params
{
};

// Function Dungeons.DungeonsBorder.SetVerticalAlignment
struct UDungeonsBorder_SetVerticalAlignment_Params
{
};

// Function Dungeons.DungeonsBorder.SetPadding
struct UDungeonsBorder_SetPadding_Params
{
};

// Function Dungeons.DungeonsBorder.SetHorizontalAlignment
struct UDungeonsBorder_SetHorizontalAlignment_Params
{
};

// Function Dungeons.DungeonsBorder.SetDesiredSizeScale
struct UDungeonsBorder_SetDesiredSizeScale_Params
{
};

// Function Dungeons.DungeonsBorder.SetContentColorAndOpacity
struct UDungeonsBorder_SetContentColorAndOpacity_Params
{
};

// Function Dungeons.DungeonsBorder.SetBrushFromTexture
struct UDungeonsBorder_SetBrushFromTexture_Params
{
};

// Function Dungeons.DungeonsBorder.SetBrushFromMaterial
struct UDungeonsBorder_SetBrushFromMaterial_Params
{
};

// Function Dungeons.DungeonsBorder.SetBrushFromAsset
struct UDungeonsBorder_SetBrushFromAsset_Params
{
};

// Function Dungeons.DungeonsBorder.SetBrushColor
struct UDungeonsBorder_SetBrushColor_Params
{
};

// Function Dungeons.DungeonsBorder.SetBrush
struct UDungeonsBorder_SetBrush_Params
{
};

// Function Dungeons.DungeonsBorder.GetDynamicMaterial
struct UDungeonsBorder_GetDynamicMaterial_Params
{
};

// Function Dungeons.DungeonsBorderSlot.SetVerticalAlignment
struct UDungeonsBorderSlot_SetVerticalAlignment_Params
{
};

// Function Dungeons.DungeonsBorderSlot.SetPadding
struct UDungeonsBorderSlot_SetPadding_Params
{
};

// Function Dungeons.DungeonsBorderSlot.SetHorizontalAlignment
struct UDungeonsBorderSlot_SetHorizontalAlignment_Params
{
};

// Function Dungeons.DungeonsCheatManager.Suicide
struct UDungeonsCheatManager_Suicide_Params
{
};

// Function Dungeons.DungeonsCheatManager.ShowDebugInfo
struct UDungeonsCheatManager_ShowDebugInfo_Params
{
};

// Function Dungeons.DungeonsCheatManager.EndGame
struct UDungeonsCheatManager_EndGame_Params
{
};

// Function Dungeons.DungeonsCloudSaveBPProxy.SetCloudCharacters
struct UDungeonsCloudSaveBPProxy_SetCloudCharacters_Params
{
};

// Function Dungeons.DungeonsCloudSaveBPProxy.GetCloudCharacters
struct UDungeonsCloudSaveBPProxy_GetCloudCharacters_Params
{
};

// Function Dungeons.DungeonsCloudSaveBPProxy.DownloadCloudCharacter
struct UDungeonsCloudSaveBPProxy_DownloadCloudCharacter_Params
{
};

// Function Dungeons.DungeonsCloudSaveBPProxy.CloudSaveExit
struct UDungeonsCloudSaveBPProxy_CloudSaveExit_Params
{
};

// Function Dungeons.ControllerTypeManager.ShutdownGameStreaming
struct UControllerTypeManager_ShutdownGameStreaming_Params
{
};

// Function Dungeons.ControllerTypeManager.ShowTouchControl
struct UControllerTypeManager_ShowTouchControl_Params
{
};

// Function Dungeons.ControllerTypeManager.RawInputKeyPressed
struct UControllerTypeManager_RawInputKeyPressed_Params
{
};

// Function Dungeons.ControllerTypeManager.InitializeGameStreaming
struct UControllerTypeManager_InitializeGameStreaming_Params
{
};

// Function Dungeons.ControllerTypeManager.HideTouchControl
struct UControllerTypeManager_HideTouchControl_Params
{
};

// Function Dungeons.ControllerTypeManager.GetIsTouchInputEnabled
struct UControllerTypeManager_GetIsTouchInputEnabled_Params
{
};

// Function Dungeons.ControllerTypeManager.GetIsStreaming
struct UControllerTypeManager_GetIsStreaming_Params
{
};

// Function Dungeons.ControllerTypeManager.GetGamepadCount
struct UControllerTypeManager_GetGamepadCount_Params
{
};

// Function Dungeons.ControllerTypeManager.GetControllerType
struct UControllerTypeManager_GetControllerType_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.PushBackOnActorInDirection
struct UDungeonsEffectLibrary_PushBackOnActorInDirection_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.PushBackOnActor
struct UDungeonsEffectLibrary_PushBackOnActor_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.JumpPadLaunchActorInDirection
struct UDungeonsEffectLibrary_JumpPadLaunchActorInDirection_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.HitFlashOnMesh
struct UDungeonsEffectLibrary_HitFlashOnMesh_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.HitFlashOnCharacter
struct UDungeonsEffectLibrary_HitFlashOnCharacter_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.HitFlashOnActor
struct UDungeonsEffectLibrary_HitFlashOnActor_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.GetMaterialInstanceDynamicFromMesh
struct UDungeonsEffectLibrary_GetMaterialInstanceDynamicFromMesh_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.GetAllMaterialInstanceDynamicFromMesh
struct UDungeonsEffectLibrary_GetAllMaterialInstanceDynamicFromMesh_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.FindFeetOffsetForActor
struct UDungeonsEffectLibrary_FindFeetOffsetForActor_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.FindCurrentGroundOffset
struct UDungeonsEffectLibrary_FindCurrentGroundOffset_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.DissolveActor
struct UDungeonsEffectLibrary_DissolveActor_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.AlignEffectToCurrentGround
struct UDungeonsEffectLibrary_AlignEffectToCurrentGround_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.AlignEffectAtActorFeet
struct UDungeonsEffectLibrary_AlignEffectAtActorFeet_Params
{
};

// Function Dungeons.DungeonsEffectLibrary.AddTagToSceneComponents
struct UDungeonsEffectLibrary_AddTagToSceneComponents_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.UpdateFriendsList
struct UDungeonsFriendsInterface_UpdateFriendsList_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.SupportsAddFriend
struct UDungeonsFriendsInterface_SupportsAddFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.ShowSessionPlayerProfile
struct UDungeonsFriendsInterface_ShowSessionPlayerProfile_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.ShowProfileOfName
struct UDungeonsFriendsInterface_ShowProfileOfName_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.ShowPlayerProfile
struct UDungeonsFriendsInterface_ShowPlayerProfile_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.ShowLocalPlayerProfile
struct UDungeonsFriendsInterface_ShowLocalPlayerProfile_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.ShouldDisplayFriend
struct UDungeonsFriendsInterface_ShouldDisplayFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.SetPrivateGame
struct UDungeonsFriendsInterface_SetPrivateGame_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.SetPresenceStatus
struct UDungeonsFriendsInterface_SetPresenceStatus_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.RemoveFriend
struct UDungeonsFriendsInterface_RemoveFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.JoinSessionOfFriend
struct UDungeonsFriendsInterface_JoinSessionOfFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.IsValidFriend
struct UDungeonsFriendsInterface_IsValidFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.IsSessionOpenForInvites
struct UDungeonsFriendsInterface_IsSessionOpenForInvites_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.IsPrivateGame
struct UDungeonsFriendsInterface_IsPrivateGame_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.IsPlayingMultiplayer
struct UDungeonsFriendsInterface_IsPlayingMultiplayer_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.GetOnlineFriends
struct UDungeonsFriendsInterface_GetOnlineFriends_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.GetFriendsInDungeons
struct UDungeonsFriendsInterface_GetFriendsInDungeons_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.GetFriendInvitableStatus
struct UDungeonsFriendsInterface_GetFriendInvitableStatus_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.GetAllFriends
struct UDungeonsFriendsInterface_GetAllFriends_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.DoesPlayerHaveValidNetID
struct UDungeonsFriendsInterface_DoesPlayerHaveValidNetID_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.CanDisplayProfileOfName
struct UDungeonsFriendsInterface_CanDisplayProfileOfName_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.AddPlayerAsFriend
struct UDungeonsFriendsInterface_AddPlayerAsFriend_Params
{
};

// Function Dungeons.DungeonsFriendsInterface.AddFriendByListName
struct UDungeonsFriendsInterface_AddFriendByListName_Params
{
};

// Function Dungeons.PlayerInfoUtil.JoinSession
struct UPlayerInfoUtil_JoinSession_Params
{
};

// Function Dungeons.PlayerInfoUtil.IsPlayerHost
struct UPlayerInfoUtil_IsPlayerHost_Params
{
};

// Function Dungeons.PlayerInfoUtil.GetInviteSenderName
struct UPlayerInfoUtil_GetInviteSenderName_Params
{
};

// Function Dungeons.PlayerInfoUtil.GetHostDisplayName
struct UPlayerInfoUtil_GetHostDisplayName_Params
{
};

// Function Dungeons.DungeonsFriendUtil.GetFriendOnlineStatus
struct UDungeonsFriendUtil_GetFriendOnlineStatus_Params
{
};

// Function Dungeons.DungeonsGameInstance.UpdateUsingMultiplayerFeatures
struct UDungeonsGameInstance_UpdateUsingMultiplayerFeatures_Params
{
};

// Function Dungeons.DungeonsGameInstance.UpdateLocalCoopScreenStates
struct UDungeonsGameInstance_UpdateLocalCoopScreenStates_Params
{
};

// Function Dungeons.DungeonsGameInstance.UpdateLocalCoopCamera
struct UDungeonsGameInstance_UpdateLocalCoopCamera_Params
{
};

// Function Dungeons.DungeonsGameInstance.UpdateControllerLocalPlayerDisplayIndex
struct UDungeonsGameInstance_UpdateControllerLocalPlayerDisplayIndex_Params
{
};

// Function Dungeons.DungeonsGameInstance.TitleScreenKickback
struct UDungeonsGameInstance_TitleScreenKickback_Params
{
};

// Function Dungeons.DungeonsGameInstance.StartOnlinePrivilegeCheck
struct UDungeonsGameInstance_StartOnlinePrivilegeCheck_Params
{
};

// Function Dungeons.DungeonsGameInstance.ShouldDisableOnlineGame
struct UDungeonsGameInstance_ShouldDisableOnlineGame_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetupInputKeyReleasedDelegate
struct UDungeonsGameInstance_SetupInputKeyReleasedDelegate_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetupInputKeyPressedDelegate
struct UDungeonsGameInstance_SetupInputKeyPressedDelegate_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetSelectedGameMode
struct UDungeonsGameInstance_SetSelectedGameMode_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetPlayerWasKicked
struct UDungeonsGameInstance_SetPlayerWasKicked_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetPlayerTitle
struct UDungeonsGameInstance_SetPlayerTitle_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetInitialBootFlowComplete
struct UDungeonsGameInstance_SetInitialBootFlowComplete_Params
{
};

// Function Dungeons.DungeonsGameInstance.SetCachedUIWidget
struct UDungeonsGameInstance_SetCachedUIWidget_Params
{
};

// Function Dungeons.DungeonsGameInstance.SessionInviteReceived
struct UDungeonsGameInstance_SessionInviteReceived_Params
{
};

// Function Dungeons.DungeonsGameInstance.SaveGlobalState
struct UDungeonsGameInstance_SaveGlobalState_Params
{
};

// Function Dungeons.DungeonsGameInstance.ResetPoppingData
struct UDungeonsGameInstance_ResetPoppingData_Params
{
};

// Function Dungeons.DungeonsGameInstance.PushGlobalErrorMessage
struct UDungeonsGameInstance_PushGlobalErrorMessage_Params
{
};

// Function Dungeons.DungeonsGameInstance.ProcessAcceptedInvite
struct UDungeonsGameInstance_ProcessAcceptedInvite_Params
{
};

// Function Dungeons.DungeonsGameInstance.PopLocalPlayersToCheckpoint
struct UDungeonsGameInstance_PopLocalPlayersToCheckpoint_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnUserAdded
struct UDungeonsGameInstance_OnUserAdded_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnSessionInviteAcceptedBP
struct UDungeonsGameInstance_OnSessionInviteAcceptedBP_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnReadyToSignIntoEGS
struct UDungeonsGameInstance_OnReadyToSignIntoEGS_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnPreLoadMap
struct UDungeonsGameInstance_OnPreLoadMap_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnPostLoadMap
struct UDungeonsGameInstance_OnPostLoadMap_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnNonInitialUserAcceptedInvite
struct UDungeonsGameInstance_OnNonInitialUserAcceptedInvite_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnNetworkError
struct UDungeonsGameInstance_OnNetworkError_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnInviteAcceptedOnLocalPlay
struct UDungeonsGameInstance_OnInviteAcceptedOnLocalPlay_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnInGameJoin
struct UDungeonsGameInstance_OnInGameJoin_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnGlobalSaveDataLoaded
struct UDungeonsGameInstance_OnGlobalSaveDataLoaded_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnFireHeartBeatAnalytics
struct UDungeonsGameInstance_OnFireHeartBeatAnalytics_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnDebugPromptMessage
struct UDungeonsGameInstance_OnDebugPromptMessage_Params
{
};

// Function Dungeons.DungeonsGameInstance.OnClientKicked
struct UDungeonsGameInstance_OnClientKicked_Params
{
};

// Function Dungeons.DungeonsGameInstance.MessageBoxButtonPressed
struct UDungeonsGameInstance_MessageBoxButtonPressed_Params
{
};

// Function Dungeons.DungeonsGameInstance.LookForInvites
struct UDungeonsGameInstance_LookForInvites_Params
{
};

// Function Dungeons.DungeonsGameInstance.LoadSaveData
struct UDungeonsGameInstance_LoadSaveData_Params
{
};

// Function Dungeons.DungeonsGameInstance.JoinSessionFailed
struct UDungeonsGameInstance_JoinSessionFailed_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsLocalCoop
struct UDungeonsGameInstance_IsLocalCoop_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsLoadingScreenShown
struct UDungeonsGameInstance_IsLoadingScreenShown_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsInMenu
struct UDungeonsGameInstance_IsInMenu_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsInitialBoot
struct UDungeonsGameInstance_IsInitialBoot_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsHost
struct UDungeonsGameInstance_IsHost_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsControllerIdInGracePeriod
struct UDungeonsGameInstance_IsControllerIdInGracePeriod_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsConsoleCurrentlySaving
struct UDungeonsGameInstance_IsConsoleCurrentlySaving_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsConnected
struct UDungeonsGameInstance_IsConnected_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsAnyPlayerInWorld
struct UDungeonsGameInstance_IsAnyPlayerInWorld_Params
{
};

// Function Dungeons.DungeonsGameInstance.IsAnyPlayerAliveAndInWorld
struct UDungeonsGameInstance_IsAnyPlayerAliveAndInWorld_Params
{
};

// Function Dungeons.DungeonsGameInstance.HasBaseGameEntitlement
struct UDungeonsGameInstance_HasBaseGameEntitlement_Params
{
};

// Function Dungeons.DungeonsGameInstance.HandlePlayerPopping
struct UDungeonsGameInstance_HandlePlayerPopping_Params
{
};

// Function Dungeons.DungeonsGameInstance.HandleLocalPlayerRequest
struct UDungeonsGameInstance_HandleLocalPlayerRequest_Params
{
};

// Function Dungeons.DungeonsGameInstance.HandleLocalPlayerLeave
struct UDungeonsGameInstance_HandleLocalPlayerLeave_Params
{
};

// Function Dungeons.DungeonsGameInstance.HandleControllerConnectionChange
struct UDungeonsGameInstance_HandleControllerConnectionChange_Params
{
};

// Function Dungeons.DungeonsGameInstance.GoOnline
struct UDungeonsGameInstance_GoOnline_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetUserManager
struct UDungeonsGameInstance_GetUserManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetTimeUntilTeleportCooldown
struct UDungeonsGameInstance_GetTimeUntilTeleportCooldown_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetSwitchOperationMode
struct UDungeonsGameInstance_GetSwitchOperationMode_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetSoundMixManager
struct UDungeonsGameInstance_GetSoundMixManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetSelectedGameMode
struct UDungeonsGameInstance_GetSelectedGameMode_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetPlayerWasKicked
struct UDungeonsGameInstance_GetPlayerWasKicked_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetPlayerTitle
struct UDungeonsGameInstance_GetPlayerTitle_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetPlayerControllerFromControllerID
struct UDungeonsGameInstance_GetPlayerControllerFromControllerID_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetNextProgressTarget
struct UDungeonsGameInstance_GetNextProgressTarget_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetNextObjectiveBasedLeader
struct UDungeonsGameInstance_GetNextObjectiveBasedLeader_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetLoginFlow
struct UDungeonsGameInstance_GetLoginFlow_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetLocalPlayerUserCount
struct UDungeonsGameInstance_GetLocalPlayerUserCount_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetLoadingScreenInitializer
struct UDungeonsGameInstance_GetLoadingScreenInitializer_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetKeyboardManager
struct UDungeonsGameInstance_GetKeyboardManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetHintManager
struct UDungeonsGameInstance_GetHintManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetFriendsInterface
struct UDungeonsGameInstance_GetFriendsInterface_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetDungeonsInventoryAssetManager
struct UDungeonsGameInstance_GetDungeonsInventoryAssetManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetDungeonsAssetManager
struct UDungeonsGameInstance_GetDungeonsAssetManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetControllerTypeManager
struct UDungeonsGameInstance_GetControllerTypeManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetCachedUIWidget
struct UDungeonsGameInstance_GetCachedUIWidget_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetBlockingMessages
struct UDungeonsGameInstance_GetBlockingMessages_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetAudioSFXManager
struct UDungeonsGameInstance_GetAudioSFXManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetAudioMusicManager
struct UDungeonsGameInstance_GetAudioMusicManager_Params
{
};

// Function Dungeons.DungeonsGameInstance.GetAlivePlayerCharacter
struct UDungeonsGameInstance_GetAlivePlayerCharacter_Params
{
};

// Function Dungeons.DungeonsGameInstance.ForceLeaveRecentlyLeftControllers
struct UDungeonsGameInstance_ForceLeaveRecentlyLeftControllers_Params
{
};

// Function Dungeons.DungeonsGameInstance.EndLoadingScreen
struct UDungeonsGameInstance_EndLoadingScreen_Params
{
};

// Function Dungeons.DungeonsGameInstance.DeclineInvite
struct UDungeonsGameInstance_DeclineInvite_Params
{
};

// Function Dungeons.DungeonsGameInstance.CreateMessage
struct UDungeonsGameInstance_CreateMessage_Params
{
};

// Function Dungeons.DungeonsGameInstance.createCharacterLevel
struct UDungeonsGameInstance_createCharacterLevel_Params
{
};

// Function Dungeons.DungeonsGameInstance.ClearOnlineEvents
struct UDungeonsGameInstance_ClearOnlineEvents_Params
{
};

// Function Dungeons.DungeonsGameInstance.ClearCachedUIWidgets
struct UDungeonsGameInstance_ClearCachedUIWidgets_Params
{
};

// Function Dungeons.DungeonsGameInstance.CheckMultiplayerFeatures
struct UDungeonsGameInstance_CheckMultiplayerFeatures_Params
{
};

// Function Dungeons.DungeonsGameInstance.CheckConnectionStatus
struct UDungeonsGameInstance_CheckConnectionStatus_Params
{
};

// Function Dungeons.DungeonsGameInstance.CanTeleportToCheckpoint
struct UDungeonsGameInstance_CanTeleportToCheckpoint_Params
{
};

// Function Dungeons.DungeonsGameInstance.CanGoOnline
struct UDungeonsGameInstance_CanGoOnline_Params
{
};

// Function Dungeons.DungeonsGameInstance.BeginLoadingScreenWithTravel
struct UDungeonsGameInstance_BeginLoadingScreenWithTravel_Params
{
};

// Function Dungeons.DungeonsGameInstance.BeginLoadingScreen
struct UDungeonsGameInstance_BeginLoadingScreen_Params
{
};

// Function Dungeons.DungeonsGameInstance.AssignOnlineEvents
struct UDungeonsGameInstance_AssignOnlineEvents_Params
{
};

// Function Dungeons.DungeonsGameInstance.AcceptInvite
struct UDungeonsGameInstance_AcceptInvite_Params
{
};

// Function Dungeons.DungeonsGameMode.PostLogin
struct ADungeonsGameMode_PostLogin_Params
{
};

// Function Dungeons.DungeonsGameMode.OnSecretFound
struct ADungeonsGameMode_OnSecretFound_Params
{
};

// Function Dungeons.DungeonsGameMode.OnOpenLootChest
struct ADungeonsGameMode_OnOpenLootChest_Params
{
};

// Function Dungeons.DungeonsGameMode.OnJoinedPlayerNameChanged
struct ADungeonsGameMode_OnJoinedPlayerNameChanged_Params
{
};

// Function Dungeons.DungeonsGameMode.KickPlayer
struct ADungeonsGameMode_KickPlayer_Params
{
};

// Function Dungeons.DungeonsGameMode.GetOrFindGame
struct ADungeonsGameMode_GetOrFindGame_Params
{
};

// Function Dungeons.DungeonsGameMode.ApplyDifficultyEffects
struct ADungeonsGameMode_ApplyDifficultyEffects_Params
{
};

// Function Dungeons.DungeonsGameplayCueManager.GetFullNormalFromCueParameters
struct UDungeonsGameplayCueManager_GetFullNormalFromCueParameters_Params
{
};

// Function Dungeons.DungeonsGameStateBase.IsLobby
struct ADungeonsGameStateBase_IsLobby_Params
{
};

// Function Dungeons.DungeonsGameStateBase.GetPlayerStates
struct ADungeonsGameStateBase_GetPlayerStates_Params
{
};

// Function Dungeons.DungeonsGameStateBase.GetPlayersCount
struct ADungeonsGameStateBase_GetPlayersCount_Params
{
};

// Function Dungeons.DungeonsGameState.SetIsGameOver
struct ADungeonsGameState_SetIsGameOver_Params
{
};

// Function Dungeons.DungeonsGameState.RefreshAverageTeamPower
struct ADungeonsGameState_RefreshAverageTeamPower_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_ShowLives
struct ADungeonsGameState_OnRep_ShowLives_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_ReviveEnabled
struct ADungeonsGameState_OnRep_ReviveEnabled_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_PartsDiscovered
struct ADungeonsGameState_OnRep_PartsDiscovered_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_OnIsGameOver
struct ADungeonsGameState_OnRep_OnIsGameOver_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_LivesLostThisSession
struct ADungeonsGameState_OnRep_LivesLostThisSession_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_Lives
struct ADungeonsGameState_OnRep_Lives_Params
{
};

// Function Dungeons.DungeonsGameState.OnRep_AverageTeamPower
struct ADungeonsGameState_OnRep_AverageTeamPower_Params
{
};

// Function Dungeons.DungeonsGameState.IsAnyPlayerMatchingAliveState
struct ADungeonsGameState_IsAnyPlayerMatchingAliveState_Params
{
};

// Function Dungeons.DungeonsGameState.GetShowLives
struct ADungeonsGameState_GetShowLives_Params
{
};

// Function Dungeons.DungeonsGameState.GetReviveEnabled
struct ADungeonsGameState_GetReviveEnabled_Params
{
};

// Function Dungeons.DungeonsGameState.GetPlayersMatchingAliveStateCount
struct ADungeonsGameState_GetPlayersMatchingAliveStateCount_Params
{
};

// Function Dungeons.DungeonsGameState.GetLives
struct ADungeonsGameState_GetLives_Params
{
};

// Function Dungeons.DungeonsGameState.GetIsGameOver
struct ADungeonsGameState_GetIsGameOver_Params
{
};

// Function Dungeons.DungeonsGameState.GetCinematic
struct ADungeonsGameState_GetCinematic_Params
{
};

// Function Dungeons.DungeonsGameState.GetAverageTeamPower
struct ADungeonsGameState_GetAverageTeamPower_Params
{
};

// Function Dungeons.DungeonsImage.SetOpacity
struct UDungeonsImage_SetOpacity_Params
{
};

// Function Dungeons.DungeonsImage.SetColorAndOpacity
struct UDungeonsImage_SetColorAndOpacity_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushTintColor
struct UDungeonsImage_SetBrushTintColor_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushSize
struct UDungeonsImage_SetBrushSize_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromTextureDynamic
struct UDungeonsImage_SetBrushFromTextureDynamic_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromTexture
struct UDungeonsImage_SetBrushFromTexture_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromSoftTextureBlockingHighLow
struct UDungeonsImage_SetBrushFromSoftTextureBlockingHighLow_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromSoftTextureBlocking
struct UDungeonsImage_SetBrushFromSoftTextureBlocking_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromSoftTexture
struct UDungeonsImage_SetBrushFromSoftTexture_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromSoftSprite
struct UDungeonsImage_SetBrushFromSoftSprite_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromMaterial
struct UDungeonsImage_SetBrushFromMaterial_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromAtlasInterface
struct UDungeonsImage_SetBrushFromAtlasInterface_Params
{
};

// Function Dungeons.DungeonsImage.SetBrushFromAsset
struct UDungeonsImage_SetBrushFromAsset_Params
{
};

// Function Dungeons.DungeonsImage.SetBrush
struct UDungeonsImage_SetBrush_Params
{
};

// Function Dungeons.DungeonsImage.OnRootWidgetVisibilityChanged
struct UDungeonsImage_OnRootWidgetVisibilityChanged_Params
{
};

// Function Dungeons.DungeonsImage.GetDynamicMaterial
struct UDungeonsImage_GetDynamicMaterial_Params
{
};

// Function Dungeons.DungeonsImage.CheckForHardReferencedImage
struct UDungeonsImage_CheckForHardReferencedImage_Params
{
};

// Function Dungeons.DungeonsLevelStreamingDynamic.OnLevelLoadedCall
struct UDungeonsLevelStreamingDynamic_OnLevelLoadedCall_Params
{
};

// Function Dungeons.DungeonsLoginFlow.OnLoadSaveDataCompleted
struct UDungeonsLoginFlow_OnLoadSaveDataCompleted_Params
{
};

// Function Dungeons.DungeonsLoginFlow.Login
struct UDungeonsLoginFlow_Login_Params
{
};

// Function Dungeons.DungeonsLoginFlow.DoPostLoginAction
struct UDungeonsLoginFlow_DoPostLoginAction_Params
{
};

// Function Dungeons.DungeonsLoginFlowCrossPlay.OnLoadSaveDataComplete
struct UDungeonsLoginFlowCrossPlay_OnLoadSaveDataComplete_Params
{
};

// Function Dungeons.DungeonsLoginFlowCrossPlay.HasLinkingSucceeded
struct UDungeonsLoginFlowCrossPlay_HasLinkingSucceeded_Params
{
};

// Function Dungeons.DungeonsLoginFlowCrossPlay.CrossPlayLogin
struct UDungeonsLoginFlowCrossPlay_CrossPlayLogin_Params
{
};

// Function Dungeons.DungeonsLoginFlowCrossPlay.CancelMsaLoginUI
struct UDungeonsLoginFlowCrossPlay_CancelMsaLoginUI_Params
{
};

// Function Dungeons.DungeonsLoginFlowWin.UpdateURL
struct UDungeonsLoginFlowWin_UpdateURL_Params
{
};

// Function Dungeons.DungeonsNavMeshUtil.UpdateSceneComponentNavMesh
struct UDungeonsNavMeshUtil_UpdateSceneComponentNavMesh_Params
{
};

// Function Dungeons.DungeonsNavModifierComponent.RecalculateBounds
struct UDungeonsNavModifierComponent_RecalculateBounds_Params
{
};

// Function Dungeons.DungeonsPlatformUtils.GetPlatformUsesRightForAccept
struct UDungeonsPlatformUtils_GetPlatformUsesRightForAccept_Params
{
};

// Function Dungeons.DungeonsPlatformUtils.GetPlatformSupportsTitleNewsNavigation
struct UDungeonsPlatformUtils_GetPlatformSupportsTitleNewsNavigation_Params
{
};

// Function Dungeons.DungeonsPlayerCameraManager.PlayWorldCameraShakeAtPawn
struct ADungeonsPlayerCameraManager_PlayWorldCameraShakeAtPawn_Params
{
};

// Function Dungeons.DungeonsProjectileMovementComp.ResetComponent
struct UDungeonsProjectileMovementComp_ResetComponent_Params
{
};

// DelegateFunction Dungeons.DungeonsProjectileMovementComp.OnProjectileStartsSinking__DelegateSignature
struct UDungeonsProjectileMovementComp_OnProjectileStartsSinking__DelegateSignature_Params
{
};

// Function Dungeons.DungeonsProjectileMovementComp.IsSinking
struct UDungeonsProjectileMovementComp_IsSinking_Params
{
};

// Function Dungeons.DungeonsScrollBox.ScrollWidgetIntoViewWithPadding
struct UDungeonsScrollBox_ScrollWidgetIntoViewWithPadding_Params
{
};

// Function Dungeons.DungeonsTargetMarker.SetupTargetLockedParticles
struct ADungeonsTargetMarker_SetupTargetLockedParticles_Params
{
};

// Function Dungeons.DungeonsTargetMarker.SetupAttackBeganParticles
struct ADungeonsTargetMarker_SetupAttackBeganParticles_Params
{
};

// Function Dungeons.DungeonsTargetMarker.ResetLockedClient
struct ADungeonsTargetMarker_ResetLockedClient_Params
{
};

// Function Dungeons.DungeonsTargetMarker.OnTargetLockedClient
struct ADungeonsTargetMarker_OnTargetLockedClient_Params
{
};

// Function Dungeons.DungeonsTargetMarker.OnTargetLockedBP
struct ADungeonsTargetMarker_OnTargetLockedBP_Params
{
};

// Function Dungeons.DungeonsTargetMarker.OnTargetLocked
struct ADungeonsTargetMarker_OnTargetLocked_Params
{
};

// Function Dungeons.DungeonsTargetMarker.OnAttackEndedBP
struct ADungeonsTargetMarker_OnAttackEndedBP_Params
{
};

// Function Dungeons.DungeonsTargetMarker.OnAttackBeganBP
struct ADungeonsTargetMarker_OnAttackBeganBP_Params
{
};

// Function Dungeons.DungeonsUserManager.TryPlayerControllerPlatformLogin
struct UDungeonsUserManager_TryPlayerControllerPlatformLogin_Params
{
};

// Function Dungeons.DungeonsUserManager.RemovePlayer
struct UDungeonsUserManager_RemovePlayer_Params
{
};

// Function Dungeons.DungeonsUserManager.RemoveExtraLocalPlayers
struct UDungeonsUserManager_RemoveExtraLocalPlayers_Params
{
};

// Function Dungeons.DungeonsUserManager.Print
struct UDungeonsUserManager_Print_Params
{
};

// Function Dungeons.DungeonsUserManager.OnLoginRequestEnded
struct UDungeonsUserManager_OnLoginRequestEnded_Params
{
};

// Function Dungeons.DungeonsUserManager.Logout
struct UDungeonsUserManager_Logout_Params
{
};

// Function Dungeons.DungeonsUserManager.GetSwitchOfflineUserName
struct UDungeonsUserManager_GetSwitchOfflineUserName_Params
{
};

// Function Dungeons.DungeonsUserManager.GetServiceInitialUserLocalIndex
struct UDungeonsUserManager_GetServiceInitialUserLocalIndex_Params
{
};

// Function Dungeons.DungeonsUserManager.GetPlayerControllerFromControllerID
struct UDungeonsUserManager_GetPlayerControllerFromControllerID_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalUserSystemIdFromControllerID
struct UDungeonsUserManager_GetLocalUserSystemIdFromControllerID_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalUserNumFromControllerID
struct UDungeonsUserManager_GetLocalUserNumFromControllerID_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalUserName
struct UDungeonsUserManager_GetLocalUserName_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalPlayers
struct UDungeonsUserManager_GetLocalPlayers_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalPlayerIndexFromPlayerController
struct UDungeonsUserManager_GetLocalPlayerIndexFromPlayerController_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalPlayerIndex
struct UDungeonsUserManager_GetLocalPlayerIndex_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalPlayerControllers
struct UDungeonsUserManager_GetLocalPlayerControllers_Params
{
};

// Function Dungeons.DungeonsUserManager.GetLocalMenuPlayerControllers
struct UDungeonsUserManager_GetLocalMenuPlayerControllers_Params
{
};

// Function Dungeons.DungeonsUserManager.GetInitialUserSystemId
struct UDungeonsUserManager_GetInitialUserSystemId_Params
{
};

// Function Dungeons.DungeonsUserManager.GetInitialUser
struct UDungeonsUserManager_GetInitialUser_Params
{
};

// Function Dungeons.DungeonsUserManager.GetInitialPlayerController
struct UDungeonsUserManager_GetInitialPlayerController_Params
{
};

// Function Dungeons.DungeonsUserManager.GetAllLocalPlayerControllers
struct UDungeonsUserManager_GetAllLocalPlayerControllers_Params
{
};

// Function Dungeons.DungeonsUserManager.CreatePlayer
struct UDungeonsUserManager_CreatePlayer_Params
{
};

// Function Dungeons.DungeonsVisiblityRootWidget.OnRecursivelyShown
struct UDungeonsVisiblityRootWidget_OnRecursivelyShown_Params
{
};

// Function Dungeons.DungeonsVisiblityRootWidget.OnRecursivelyHidden
struct UDungeonsVisiblityRootWidget_OnRecursivelyHidden_Params
{
};

// Function Dungeons.DungeonsVisiblityRootWidget.OnChangedVisibility
struct UDungeonsVisiblityRootWidget_OnChangedVisibility_Params
{
};

// Function Dungeons.DungeonsVisiblityRootWidget.GetVisibleRecursive
struct UDungeonsVisiblityRootWidget_GetVisibleRecursive_Params
{
};

// DelegateFunction Dungeons.DungeonsWebBrowser.OnUrlChanged__DelegateSignature
struct UDungeonsWebBrowser_OnUrlChanged__DelegateSignature_Params
{
};

// DelegateFunction Dungeons.DungeonsWebBrowser.OnLoadCompleted__DelegateSignature
struct UDungeonsWebBrowser_OnLoadCompleted__DelegateSignature_Params
{
};

// DelegateFunction Dungeons.DungeonsWebBrowser.OnHandleError__DelegateSignature
struct UDungeonsWebBrowser_OnHandleError__DelegateSignature_Params
{
};

// DelegateFunction Dungeons.DungeonsWebBrowser.OnBeforePopup__DelegateSignature
struct UDungeonsWebBrowser_OnBeforePopup__DelegateSignature_Params
{
};

// Function Dungeons.DungeonsWebBrowser.LoadURL
struct UDungeonsWebBrowser_LoadURL_Params
{
};

// Function Dungeons.DungeonsWebBrowser.LoadString
struct UDungeonsWebBrowser_LoadString_Params
{
};

// Function Dungeons.DungeonsWebBrowser.GetUrl
struct UDungeonsWebBrowser_GetUrl_Params
{
};

// Function Dungeons.DungeonsWebBrowser.GetTitleText
struct UDungeonsWebBrowser_GetTitleText_Params
{
};

// Function Dungeons.DungeonsWebBrowser.ExecuteJavascript
struct UDungeonsWebBrowser_ExecuteJavascript_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.SetActiveWidgetIndex
struct UDungeonsWidgetSwitcher_SetActiveWidgetIndex_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.SetActiveWidget
struct UDungeonsWidgetSwitcher_SetActiveWidget_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.GetWidgetAtIndex
struct UDungeonsWidgetSwitcher_GetWidgetAtIndex_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.GetNumWidgets
struct UDungeonsWidgetSwitcher_GetNumWidgets_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.GetActiveWidgetIndex
struct UDungeonsWidgetSwitcher_GetActiveWidgetIndex_Params
{
};

// Function Dungeons.DungeonsWidgetSwitcher.GetActiveWidget
struct UDungeonsWidgetSwitcher_GetActiveWidget_Params
{
};

// Function Dungeons.DynamicBeam.Spawn
struct ADynamicBeam_Spawn_Params
{
};

// Function Dungeons.DynamicBeam.OnSpawn
struct ADynamicBeam_OnSpawn_Params
{
};

// Function Dungeons.DynamicBeam.Despawn
struct ADynamicBeam_Despawn_Params
{
};

// Function Dungeons.MerchantQuestBase.IsCompleted
struct UMerchantQuestBase_IsCompleted_Params
{
};

// Function Dungeons.MerchantQuestBase.GetProgressText
struct UMerchantQuestBase_GetProgressText_Params
{
};

// Function Dungeons.MerchantQuestBase.GetProgressFraction
struct UMerchantQuestBase_GetProgressFraction_Params
{
};

// Function Dungeons.MerchantQuestBase.GetExplainerText
struct UMerchantQuestBase_GetExplainerText_Params
{
};

// Function Dungeons.MerchantQuestBase.GetCountText
struct UMerchantQuestBase_GetCountText_Params
{
};

// Function Dungeons.MerchantQuestBase.GetCompletedCount
struct UMerchantQuestBase_GetCompletedCount_Params
{
};

// Function Dungeons.EffectGroup.SpawnEffect
struct UEffectGroup_SpawnEffect_Params
{
};

// Function Dungeons.EffectGroup.SetParams
struct UEffectGroup_SetParams_Params
{
};

// Function Dungeons.EffectGroupContainer.SpawnEffectInGroup
struct UEffectGroupContainer_SpawnEffectInGroup_Params
{
};

// Function Dungeons.EffectsActor.SpawnEffectsInRadius
struct AEffectsActor_SpawnEffectsInRadius_Params
{
};

// Function Dungeons.EffectsActor.SpawnEffectsAtLocation
struct AEffectsActor_SpawnEffectsAtLocation_Params
{
};

// Function Dungeons.EffectsActor.ServerSpawnEffectsAtLocation
struct AEffectsActor_ServerSpawnEffectsAtLocation_Params
{
};

// Function Dungeons.EffectsActor.MulticastSpawnEffectsAtLocation
struct AEffectsActor_MulticastSpawnEffectsAtLocation_Params
{
};

// Function Dungeons.MerchantCurrencyComponent.GetCurrencyItemId
struct UMerchantCurrencyComponent_GetCurrencyItemId_Params
{
};

// Function Dungeons.MerchantCurrencyComponent.GetCurrencyBalance
struct UMerchantCurrencyComponent_GetCurrencyBalance_Params
{
};

// Function Dungeons.EmeraldShield.OnEmeraldsCollected
struct UEmeraldShield_OnEmeraldsCollected_Params
{
};

// Function Dungeons.StorableItem.ReInitialiseItemBP
struct AStorableItem_ReInitialiseItemBP_Params
{
};

// Function Dungeons.StorableItem.ReceiveOnPickupDenied
struct AStorableItem_ReceiveOnPickupDenied_Params
{
};

// Function Dungeons.StorableItem.ReceiveOnPickup
struct AStorableItem_ReceiveOnPickup_Params
{
};

// Function Dungeons.StorableItem.OnPickupDenied
struct AStorableItem_OnPickupDenied_Params
{
};

// Function Dungeons.StorableItem.OnPickup
struct AStorableItem_OnPickup_Params
{
};

// Function Dungeons.StorableItem.OnLanded
struct AStorableItem_OnLanded_Params
{
};

// Function Dungeons.StorableItem.MulticastApplyDropEffect
struct AStorableItem_MulticastApplyDropEffect_Params
{
};

// Function Dungeons.StorableItem.HandleInteraction
struct AStorableItem_HandleInteraction_Params
{
};

// Function Dungeons.StorableItem.GetStorablePickupSoundForItemId
struct AStorableItem_GetStorablePickupSoundForItemId_Params
{
};

// Function Dungeons.StorableItem.GetStorableDropSoundForItemId
struct AStorableItem_GetStorableDropSoundForItemId_Params
{
};

// Function Dungeons.EmoteDefs.GetEmoteText
struct UEmoteDefs_GetEmoteText_Params
{
};

// Function Dungeons.EmoteDefs.GetEmoteIconTexture
struct UEmoteDefs_GetEmoteIconTexture_Params
{
};

// Function Dungeons.EmoteDefs.GetEmoteIconSoftTexture
struct UEmoteDefs_GetEmoteIconSoftTexture_Params
{
};

// Function Dungeons.EnchantmentComponent.OnRep_Enchantments
struct UEnchantmentComponent_OnRep_Enchantments_Params
{
};

// Function Dungeons.EnchantmentComponent.HighestIndex
struct UEnchantmentComponent_HighestIndex_Params
{
};

// Function Dungeons.EnchantmentComponent.HighestAvailableIndex
struct UEnchantmentComponent_HighestAvailableIndex_Params
{
};

// Function Dungeons.EnchantmentComponent.GetEnchantmentsWithRarity
struct UEnchantmentComponent_GetEnchantmentsWithRarity_Params
{
};

// Function Dungeons.EnchantmentComponent.GetEnchantments
struct UEnchantmentComponent_GetEnchantments_Params
{
};

// Function Dungeons.EnchantmentComponent.GetEnchantment
struct UEnchantmentComponent_GetEnchantment_Params
{
};

// Function Dungeons.ThrowableItemInstance.SetTargetServer
struct AThrowableItemInstance_SetTargetServer_Params
{
};

// Function Dungeons.ThrowableItemInstance.CalculateVelocityAmountToLoc
struct AThrowableItemInstance_CalculateVelocityAmountToLoc_Params
{
};

// Function Dungeons.ThrownItem.OnOverlapBegin
struct AThrownItem_OnOverlapBegin_Params
{
};

// Function Dungeons.ThrownItem.OnHitObject
struct AThrownItem_OnHitObject_Params
{
};

// Function Dungeons.EquipmentComponent.OnRespawn
struct UEquipmentComponent_OnRespawn_Params
{
};

// Function Dungeons.EquipmentComponent.OnEquippableItemSlotUpdated
struct UEquipmentComponent_OnEquippableItemSlotUpdated_Params
{
};

// Function Dungeons.EquipmentComponent.GetTotalEquippedDisplayItemPower
struct UEquipmentComponent_GetTotalEquippedDisplayItemPower_Params
{
};

// Function Dungeons.EquipmentComponent.GetSlotsOfType
struct UEquipmentComponent_GetSlotsOfType_Params
{
};

// Function Dungeons.EquipmentDisplayComponent.OnRespawn
struct UEquipmentDisplayComponent_OnRespawn_Params
{
};

// Function Dungeons.EquipmentDisplayComponent.OnGearItemSlotUpdated
struct UEquipmentDisplayComponent_OnGearItemSlotUpdated_Params
{
};

// Function Dungeons.FallingIceActor.SetScaledExplosionDamage
struct AFallingIceActor_SetScaledExplosionDamage_Params
{
};

// Function Dungeons.FallingIceActor.OnSummonPlayed
struct AFallingIceActor_OnSummonPlayed_Params
{
};

// Function Dungeons.FallingIceActor.OnHitboxOverlap
struct AFallingIceActor_OnHitboxOverlap_Params
{
};

// Function Dungeons.FallingIceActor.OnExplode
struct AFallingIceActor_OnExplode_Params
{
};

// Function Dungeons.FallingIceActor.DropIceblock
struct AFallingIceActor_DropIceblock_Params
{
};

// Function Dungeons.FetchTitleNewsCallbackProxy.FetchTitleNews
struct UFetchTitleNewsCallbackProxy_FetchTitleNews_Params
{
};

// Function Dungeons.FetchTitleNewsMapPopupCallbackProxy.FetchTitleNewsPopups
struct UFetchTitleNewsMapPopupCallbackProxy_FetchTitleNewsPopups_Params
{
};

// Function Dungeons.FindDungeonsSessionCallbackProxy.FindDungeonsSessions
struct UFindDungeonsSessionCallbackProxy_FindDungeonsSessions_Params
{
};

// Function Dungeons.FireworkArrow.OnArrowFired
struct AFireworkArrow_OnArrowFired_Params
{
};

// Function Dungeons.FireworkBombProjectile.OnPreDestroy
struct AFireworkBombProjectile_OnPreDestroy_Params
{
};

// Function Dungeons.FireworkBombProjectile.OnOverlapBegin
struct AFireworkBombProjectile_OnOverlapBegin_Params
{
};

// Function Dungeons.FireworkBombActor.OnPreDestroy
struct AFireworkBombActor_OnPreDestroy_Params
{
};

// Function Dungeons.FireworkBombActor.OnOverlapBegin
struct AFireworkBombActor_OnOverlapBegin_Params
{
};

// Function Dungeons.FireworkBombInstance.MulticastSpawnBomb
struct AFireworkBombInstance_MulticastSpawnBomb_Params
{
};

// Function Dungeons.FishHookItem.OnHitObject
struct AFishHookItem_OnHitObject_Params
{
};

// Function Dungeons.FishingRodItemInstance.SpawnHook
struct AFishingRodItemInstance_SpawnHook_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnRep_FishingRodVisible
struct AFishingRodItemInstance_OnRep_FishingRodVisible_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnHookThrow
struct AFishingRodItemInstance_OnHookThrow_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnHookonDenied
struct AFishingRodItemInstance_OnHookonDenied_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnHookHitTarget
struct AFishingRodItemInstance_OnHookHitTarget_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnHookHitPlayer
struct AFishingRodItemInstance_OnHookHitPlayer_Params
{
};

// Function Dungeons.FishingRodItemInstance.OnHookedMob
struct AFishingRodItemInstance_OnHookedMob_Params
{
};

// Function Dungeons.FishingRodItemInstance.MulticastSpawnHook
struct AFishingRodItemInstance_MulticastSpawnHook_Params
{
};

// Function Dungeons.FishingRodItemInstance.Client_OnHookedMob
struct AFishingRodItemInstance_Client_OnHookedMob_Params
{
};

// Function Dungeons.FlickeringLightComponent.SetIntensityCoarse
struct UFlickeringLightComponent_SetIntensityCoarse_Params
{
};

// Function Dungeons.StorableDropBaseEnchantment.OnHealthPotionActivated
struct UStorableDropBaseEnchantment_OnHealthPotionActivated_Params
{
};

// Function Dungeons.FrozenSolidIceCubeActor.GetCurrentInteractCount
struct AFrozenSolidIceCubeActor_GetCurrentInteractCount_Params
{
};

// Function Dungeons.FrozenSolidIceCubeActor.EnableBounce
struct AFrozenSolidIceCubeActor_EnableBounce_Params
{
};

// Function Dungeons.FrozenSolidIceCubeActor.ApplyBounceToOwner
struct AFrozenSolidIceCubeActor_ApplyBounceToOwner_Params
{
};

// Function Dungeons.FrozenSolidIceCubeAttributeSet.OnRep_OwnerInteractionMagnitude
struct UFrozenSolidIceCubeAttributeSet_OnRep_OwnerInteractionMagnitude_Params
{
};

// Function Dungeons.FrozenSolidIceCubeAttributeSet.OnRep_OtherInteractionMagnitude
struct UFrozenSolidIceCubeAttributeSet_OnRep_OtherInteractionMagnitude_Params
{
};

// Function Dungeons.MeshFadeBaseComponent.SetMeshHidden
struct UMeshFadeBaseComponent_SetMeshHidden_Params
{
};

// Function Dungeons.GameBP.RingAtObjective
struct AGameBP_RingAtObjective_Params
{
};

// Function Dungeons.GameBP.OnRep_TrialDefs
struct AGameBP_OnRep_TrialDefs_Params
{
};

// Function Dungeons.GameBP.OnRep_ObjectiveLocations
struct AGameBP_OnRep_ObjectiveLocations_Params
{
};

// Function Dungeons.GameBP.OnRep_LevelSettings
struct AGameBP_OnRep_LevelSettings_Params
{
};

// Function Dungeons.GameBP.OnRep_IncrementedEmergentDifficulty
struct AGameBP_OnRep_IncrementedEmergentDifficulty_Params
{
};

// Function Dungeons.GameBP.OnRep_ChallengeRewardLocations
struct AGameBP_OnRep_ChallengeRewardLocations_Params
{
};

// Function Dungeons.GameBP.OnRep_AffectorsChanged
struct AGameBP_OnRep_AffectorsChanged_Params
{
};

// Function Dungeons.GameBP.IsPlayerInRangeOfObjective
struct AGameBP_IsPlayerInRangeOfObjective_Params
{
};

// Function Dungeons.GameBP.GetTriggerRegionCenter
struct AGameBP_GetTriggerRegionCenter_Params
{
};

// Function Dungeons.GameBP.GetPreviousTileDoor
struct AGameBP_GetPreviousTileDoor_Params
{
};

// Function Dungeons.GameBP.GetPreviousDoor
struct AGameBP_GetPreviousDoor_Params
{
};

// Function Dungeons.GameBP.GetPresentationHandler
struct AGameBP_GetPresentationHandler_Params
{
};

// Function Dungeons.GameBP.GetObjectiveLocations
struct AGameBP_GetObjectiveLocations_Params
{
};

// Function Dungeons.GameBP.GetNextTileDoor
struct AGameBP_GetNextTileDoor_Params
{
};

// Function Dungeons.GameBP.GetNextDoor
struct AGameBP_GetNextDoor_Params
{
};

// Function Dungeons.GameBP.GetChallengeRewardLocations
struct AGameBP_GetChallengeRewardLocations_Params
{
};

// Function Dungeons.GameBP.GetActiveAffectorInfo
struct AGameBP_GetActiveAffectorInfo_Params
{
};

// Function Dungeons.GameplayBlueprintFunctionLibrary.Filter
struct UGameplayBlueprintFunctionLibrary_Filter_Params
{
};

// Function Dungeons.GameplayEffectDamageComponent.AttackLocal
struct UGameplayEffectDamageComponent_AttackLocal_Params
{
};

// Function Dungeons.GameplayEffectTriggerBoxComponent.OnOverlapEnd
struct UGameplayEffectTriggerBoxComponent_OnOverlapEnd_Params
{
};

// Function Dungeons.GameplayEffectTriggerBoxComponent.OnOverlapBegin
struct UGameplayEffectTriggerBoxComponent_OnOverlapBegin_Params
{
};

// Function Dungeons.GameplayEffectTriggerSphereComponent.OnOverlapEnd
struct UGameplayEffectTriggerSphereComponent_OnOverlapEnd_Params
{
};

// Function Dungeons.GameplayEffectTriggerSphereComponent.OnOverlapBegin
struct UGameplayEffectTriggerSphereComponent_OnOverlapBegin_Params
{
};

// Function Dungeons.GameplayEffectTriggerSphereComponent.BP_RemoveGameplayEffectFromActor
struct UGameplayEffectTriggerSphereComponent_BP_RemoveGameplayEffectFromActor_Params
{
};

// Function Dungeons.GameplayEffectTriggerSphereComponent.BP_ApplyGameplayEffectToActor
struct UGameplayEffectTriggerSphereComponent_BP_ApplyGameplayEffectToActor_Params
{
};

// Function Dungeons.GameplayEffectUtil.CreateEffectSpec
struct UGameplayEffectUtil_CreateEffectSpec_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetTutorialHintsEnabled
struct UGameSettingsFunctionLibrary_SetTutorialHintsEnabled_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetRightDeadzone
struct UGameSettingsFunctionLibrary_SetRightDeadzone_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetMouseLockMode
struct UGameSettingsFunctionLibrary_SetMouseLockMode_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetLeftDeadzone
struct UGameSettingsFunctionLibrary_SetLeftDeadzone_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetGraphicsPreset
struct UGameSettingsFunctionLibrary_SetGraphicsPreset_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetDefaultXblActiveState
struct UGameSettingsFunctionLibrary_SetDefaultXblActiveState_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetDefaultCrossplayState
struct UGameSettingsFunctionLibrary_SetDefaultCrossplayState_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.SetBackgroundAutoMute
struct UGameSettingsFunctionLibrary_SetBackgroundAutoMute_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.IsResolutionValid
struct UGameSettingsFunctionLibrary_IsResolutionValid_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.GetPS4LightbarEffectsEnabled
struct UGameSettingsFunctionLibrary_GetPS4LightbarEffectsEnabled_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.GetPlayerColours
struct UGameSettingsFunctionLibrary_GetPlayerColours_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.GetPathfinderEnabled
struct UGameSettingsFunctionLibrary_GetPathfinderEnabled_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.GetChatEnabled
struct UGameSettingsFunctionLibrary_GetChatEnabled_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteShadowQualityCommand
struct UGameSettingsFunctionLibrary_ExecuteShadowQualityCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteResolutionCommand
struct UGameSettingsFunctionLibrary_ExecuteResolutionCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteParticleQualityCommand
struct UGameSettingsFunctionLibrary_ExecuteParticleQualityCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteBrightnessCommand
struct UGameSettingsFunctionLibrary_ExecuteBrightnessCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteBloomQualityCommand
struct UGameSettingsFunctionLibrary_ExecuteBloomQualityCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteAntiAliasQualityCommand
struct UGameSettingsFunctionLibrary_ExecuteAntiAliasQualityCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.ExecuteAmbientOcclusionQualityCommand
struct UGameSettingsFunctionLibrary_ExecuteAmbientOcclusionQualityCommand_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.EnableSubtitles
struct UGameSettingsFunctionLibrary_EnableSubtitles_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.EnableScreenShake
struct UGameSettingsFunctionLibrary_EnableScreenShake_Params
{
};

// Function Dungeons.GameSettingsFunctionLibrary.AreSubtitlesForceDisabled
struct UGameSettingsFunctionLibrary_AreSubtitlesForceDisabled_Params
{
};

// Function Dungeons.GameVersion.SubPlatformCheckMatch
struct UGameVersion_SubPlatformCheckMatch_Params
{
};

// Function Dungeons.GameVersion.PlatformCheckMatch
struct UGameVersion_PlatformCheckMatch_Params
{
};

// Function Dungeons.GameVersion.GetVersionNumber
struct UGameVersion_GetVersionNumber_Params
{
};

// Function Dungeons.GameVersion.GetSubPlatformMatch
struct UGameVersion_GetSubPlatformMatch_Params
{
};

// Function Dungeons.GameVersion.GetSubPlatformEnum
struct UGameVersion_GetSubPlatformEnum_Params
{
};

// Function Dungeons.GameVersion.GetPlatformMatch
struct UGameVersion_GetPlatformMatch_Params
{
};

// Function Dungeons.GameVersion.GetPlatformEnum
struct UGameVersion_GetPlatformEnum_Params
{
};

// Function Dungeons.GameVersion.GetMenuVersionString
struct UGameVersion_GetMenuVersionString_Params
{
};

// Function Dungeons.GameVersion.GetConfigurationMatch
struct UGameVersion_GetConfigurationMatch_Params
{
};

// Function Dungeons.GameVersion.GetBuildNumber
struct UGameVersion_GetBuildNumber_Params
{
};

// Function Dungeons.GameVersion.GetBuildConfiguration
struct UGameVersion_GetBuildConfiguration_Params
{
};

// Function Dungeons.GameVersion.DungeonsPrintText
struct UGameVersion_DungeonsPrintText_Params
{
};

// Function Dungeons.GameVersion.DungeonsPrintString
struct UGameVersion_DungeonsPrintString_Params
{
};

// Function Dungeons.GameVersion.BuildVersion
struct UGameVersion_BuildVersion_Params
{
};

// Function Dungeons.GearActor.OnDetachedComponentCreated
struct AGearActor_OnDetachedComponentCreated_Params
{
};

// Function Dungeons.GlobalHealthBarComponent.OnDeath_Internal
struct UGlobalHealthBarComponent_OnDeath_Internal_Params
{
};

// Function Dungeons.GlobalHealthBarComponent.OnDeath
struct UGlobalHealthBarComponent_OnDeath_Params
{
};

// Function Dungeons.GlobalHealthBarComponent.OnAlive
struct UGlobalHealthBarComponent_OnAlive_Params
{
};

// Function Dungeons.GlobalStateData.OnCharacterLoadFinished
struct UGlobalStateData_OnCharacterLoadFinished_Params
{
};

// Function Dungeons.GlobalStateData.GetTitle
struct UGlobalStateData_GetTitle_Params
{
};

// Function Dungeons.GlobalStateData.ChangeTitle
struct UGlobalStateData_ChangeTitle_Params
{
};

// Function Dungeons.GlobalStateData.AfterConsoleSaveDataLoaded
struct UGlobalStateData_AfterConsoleSaveDataLoaded_Params
{
};

// Function Dungeons.Gravity.OnStopPull
struct UGravity_OnStopPull_Params
{
};

// Function Dungeons.GrowAttackComponent.HandleDamage
struct UGrowAttackComponent_HandleDamage_Params
{
};

// Function Dungeons.GrowAttackComponent.Disenchant
struct UGrowAttackComponent_Disenchant_Params
{
};

// Function Dungeons.GrowComponent.OnRep_Sign
struct UGrowComponent_OnRep_Sign_Params
{
};

// Function Dungeons.GuardianEyeInstance.InterruptServer
struct AGuardianEyeInstance_InterruptServer_Params
{
};

// Function Dungeons.GuardianEyeInstance.InterruptLocal
struct AGuardianEyeInstance_InterruptLocal_Params
{
};

// Function Dungeons.GuardianEyeInstance.EndBeam
struct AGuardianEyeInstance_EndBeam_Params
{
};

// Function Dungeons.GuardianEyeInstance.BeginCharge
struct AGuardianEyeInstance_BeginCharge_Params
{
};

// Function Dungeons.GuardianEyeInstance.BeginBeam
struct AGuardianEyeInstance_BeginBeam_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_TakeMeleeDamageMultiplier
struct UHealthAttributeSet_OnRep_TakeMeleeDamageMultiplier_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_TakeDamageMultiplier
struct UHealthAttributeSet_OnRep_TakeDamageMultiplier_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_Shield
struct UHealthAttributeSet_OnRep_Shield_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_ResistDeath
struct UHealthAttributeSet_OnRep_ResistDeath_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_ReceiveHealingMultiplier
struct UHealthAttributeSet_OnRep_ReceiveHealingMultiplier_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_MaxHealth
struct UHealthAttributeSet_OnRep_MaxHealth_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_HealthThreshold
struct UHealthAttributeSet_OnRep_HealthThreshold_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_Health
struct UHealthAttributeSet_OnRep_Health_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_ArmorHealingItemPowerFactor
struct UHealthAttributeSet_OnRep_ArmorHealingItemPowerFactor_Params
{
};

// Function Dungeons.HealthAttributeSet.OnRep_ArmorAttackItemPowerFactor
struct UHealthAttributeSet_OnRep_ArmorAttackItemPowerFactor_Params
{
};

// Function Dungeons.HealthBarComponent.GetSmoothHealthPercentage
struct UHealthBarComponent_GetSmoothHealthPercentage_Params
{
};

// Function Dungeons.HealthBarComponent.GetScale
struct UHealthBarComponent_GetScale_Params
{
};

// Function Dungeons.HealthBarComponent.GetOpacity
struct UHealthBarComponent_GetOpacity_Params
{
};

// Function Dungeons.HealthBarComponent.GetHealthPercentage
struct UHealthBarComponent_GetHealthPercentage_Params
{
};

// Function Dungeons.HealthComponent.ShouldImpactProjectile
struct UHealthComponent_ShouldImpactProjectile_Params
{
};

// Function Dungeons.HealthComponent.ServerApplyHeal
struct UHealthComponent_ServerApplyHeal_Params
{
};

// Function Dungeons.HealthComponent.OnResurrection
struct UHealthComponent_OnResurrection_Params
{
};

// Function Dungeons.HealthComponent.Kill
struct UHealthComponent_Kill_Params
{
};

// Function Dungeons.HealthComponent.IsAlive
struct UHealthComponent_IsAlive_Params
{
};

// Function Dungeons.HealthComponent.GetShield
struct UHealthComponent_GetShield_Params
{
};

// Function Dungeons.HealthComponent.GetMaximumHealth
struct UHealthComponent_GetMaximumHealth_Params
{
};

// Function Dungeons.HealthComponent.GetHealthAsDisplayAmount
struct UHealthComponent_GetHealthAsDisplayAmount_Params
{
};

// Function Dungeons.HealthComponent.GetDamageMultiplier
struct UHealthComponent_GetDamageMultiplier_Params
{
};

// Function Dungeons.HealthComponent.GetCurrentHealth
struct UHealthComponent_GetCurrentHealth_Params
{
};

// Function Dungeons.HintManager.OnTeleportPressed
struct UHintManager_OnTeleportPressed_Params
{
};

// Function Dungeons.HintManager.OnSlotActivated
struct UHintManager_OnSlotActivated_Params
{
};

// Function Dungeons.HintManager.OnObjectiveUpdated
struct UHintManager_OnObjectiveUpdated_Params
{
};

// Function Dungeons.HintManager.OnMissionSelectOpened
struct UHintManager_OnMissionSelectOpened_Params
{
};

// Function Dungeons.HintManager.OnMapToggled
struct UHintManager_OnMapToggled_Params
{
};

// Function Dungeons.HintManager.OnLevelUp
struct UHintManager_OnLevelUp_Params
{
};

// Function Dungeons.HintManager.OnInventoryOpened
struct UHintManager_OnInventoryOpened_Params
{
};

// Function Dungeons.HintManager.OnInventoryFilterChanged
struct UHintManager_OnInventoryFilterChanged_Params
{
};

// Function Dungeons.HintManager.OnInventoryClosed
struct UHintManager_OnInventoryClosed_Params
{
};

// Function Dungeons.HintManager.OnEnchantmentSelected
struct UHintManager_OnEnchantmentSelected_Params
{
};

// Function Dungeons.HintManager.OnChatWheelVisibilityChanged
struct UHintManager_OnChatWheelVisibilityChanged_Params
{
};

// Function Dungeons.HintManager.OnChatWheelOptionSelected
struct UHintManager_OnChatWheelOptionSelected_Params
{
};

// Function Dungeons.HintManager.OnChatWheelMessageSent
struct UHintManager_OnChatWheelMessageSent_Params
{
};

// Function Dungeons.HintManager.OnAvailableEnchantmentPointsChanged
struct UHintManager_OnAvailableEnchantmentPointsChanged_Params
{
};

// Function Dungeons.HorsemenTargetProvider.ApplyDamage
struct AHorsemenTargetProvider_ApplyDamage_Params
{
};

// Function Dungeons.ImpactSoundProvider.GetImpactSound
struct UImpactSoundProvider_GetImpactSound_Params
{
};

// Function Dungeons.IncreasedArrowBundleSize.OnArrowsPickedUp
struct UIncreasedArrowBundleSize_OnArrowsPickedUp_Params
{
};

// Function Dungeons.InstancedMeshBase.Place
struct AInstancedMeshBase_Place_Params
{
};

// Function Dungeons.InstantTravelActor.OnInstantTravel
struct AInstantTravelActor_OnInstantTravel_Params
{
};

// Function Dungeons.InstantTravelActor.InstantTravelToDestination
struct AInstantTravelActor_InstantTravelToDestination_Params
{
};

// Function Dungeons.InteractableComponent.SetTextDesc
struct UInteractableComponent_SetTextDesc_Params
{
};

// Function Dungeons.InteractableComponent.SetText
struct UInteractableComponent_SetText_Params
{
};

// Function Dungeons.InteractableComponent.SetContextSensitiveAction
struct UInteractableComponent_SetContextSensitiveAction_Params
{
};

// Function Dungeons.InteractableComponent.SetContextPromptOffset
struct UInteractableComponent_SetContextPromptOffset_Params
{
};

// Function Dungeons.InteractableComponent.SetBalloontipBehavior
struct UInteractableComponent_SetBalloontipBehavior_Params
{
};

// Function Dungeons.InteractableComponent.RemoveWorldHud
struct UInteractableComponent_RemoveWorldHud_Params
{
};

// Function Dungeons.InteractableComponent.PurgeAllInteractors
struct UInteractableComponent_PurgeAllInteractors_Params
{
};

// Function Dungeons.InteractableComponent.OnInteractingPlayerDestroyed
struct UInteractableComponent_OnInteractingPlayerDestroyed_Params
{
};

// Function Dungeons.InteractableComponent.IsInteractionEnalbed
struct UInteractableComponent_IsInteractionEnalbed_Params
{
};

// Function Dungeons.InteractableComponent.IsHighlighted
struct UInteractableComponent_IsHighlighted_Params
{
};

// Function Dungeons.InteractableComponent.HasBeenUsedBy
struct UInteractableComponent_HasBeenUsedBy_Params
{
};

// Function Dungeons.InteractableComponent.GetType
struct UInteractableComponent_GetType_Params
{
};

// Function Dungeons.InteractableComponent.GetRadiusGamepadModifier
struct UInteractableComponent_GetRadiusGamepadModifier_Params
{
};

// Function Dungeons.InteractableComponent.GetRadius
struct UInteractableComponent_GetRadius_Params
{
};

// Function Dungeons.InteractableComponent.GetInteractingPlayers
struct UInteractableComponent_GetInteractingPlayers_Params
{
};

// Function Dungeons.InteractableComponent.GetContextSensitiveAction
struct UInteractableComponent_GetContextSensitiveAction_Params
{
};

// Function Dungeons.InteractableComponent.GetContextPromptOffset
struct UInteractableComponent_GetContextPromptOffset_Params
{
};

// Function Dungeons.InteractableComponent.GetBalloontipText
struct UInteractableComponent_GetBalloontipText_Params
{
};

// Function Dungeons.InteractableComponent.GetBalloonTipDescription
struct UInteractableComponent_GetBalloonTipDescription_Params
{
};

// Function Dungeons.InteractableComponent.GetBalloontipBehavior
struct UInteractableComponent_GetBalloontipBehavior_Params
{
};

// Function Dungeons.InteractableComponent.GetBalloonItemDescriptionBehavior
struct UInteractableComponent_GetBalloonItemDescriptionBehavior_Params
{
};

// Function Dungeons.InteractableComponent.GetBalloonItemData
struct UInteractableComponent_GetBalloonItemData_Params
{
};

// Function Dungeons.InteractableComponent.EnsureWorldHud
struct UInteractableComponent_EnsureWorldHud_Params
{
};

// Function Dungeons.InteractableComponent.EndHighlight
struct UInteractableComponent_EndHighlight_Params
{
};

// Function Dungeons.InteractableComponent.EnableInteraction
struct UInteractableComponent_EnableInteraction_Params
{
};

// Function Dungeons.InteractableComponent.DisableInteraction
struct UInteractableComponent_DisableInteraction_Params
{
};

// Function Dungeons.InteractableComponent.BeginHighlight
struct UInteractableComponent_BeginHighlight_Params
{
};

// Function Dungeons.InventoryItem.TryUpgradeItem
struct UInventoryItem_TryUpgradeItem_Params
{
};

// Function Dungeons.InventoryItem.IsNetherite
struct UInventoryItem_IsNetherite_Params
{
};

// Function Dungeons.InventoryItem.IsMarkedNew
struct UInventoryItem_IsMarkedNew_Params
{
};

// Function Dungeons.InventoryItem.IsInventoryOnly
struct UInventoryItem_IsInventoryOnly_Params
{
};

// Function Dungeons.InventoryItem.IsGifted
struct UInventoryItem_IsGifted_Params
{
};

// Function Dungeons.InventoryItem.IsGear
struct UInventoryItem_IsGear_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexMaxed
struct UInventoryItem_IsEnchantIndexMaxed_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexLocked
struct UInventoryItem_IsEnchantIndexLocked_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexHidden
struct UInventoryItem_IsEnchantIndexHidden_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexEnchanted
struct UInventoryItem_IsEnchantIndexEnchanted_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexDisabled
struct UInventoryItem_IsEnchantIndexDisabled_Params
{
};

// Function Dungeons.InventoryItem.IsEnchantIndexAffordable
struct UInventoryItem_IsEnchantIndexAffordable_Params
{
};

// Function Dungeons.InventoryItem.IsCloned
struct UInventoryItem_IsCloned_Params
{
};

// Function Dungeons.InventoryItem.IsBeingOffered
struct UInventoryItem_IsBeingOffered_Params
{
};

// Function Dungeons.InventoryItem.HasTag
struct UInventoryItem_HasTag_Params
{
};

// Function Dungeons.InventoryItem.GetTotalInvestedEnchantmentPoints
struct UInventoryItem_GetTotalInvestedEnchantmentPoints_Params
{
};

// Function Dungeons.InventoryItem.GetTotalEnchantmentRows
struct UInventoryItem_GetTotalEnchantmentRows_Params
{
};

// Function Dungeons.InventoryItem.GetTag
struct UInventoryItem_GetTag_Params
{
};

// Function Dungeons.InventoryItem.GetIsUpgraded
struct UInventoryItem_GetIsUpgraded_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayNameText
struct UInventoryItem_GetDisplayNameText_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayItemPowerText
struct UInventoryItem_GetDisplayItemPowerText_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayItemPowerInt
struct UInventoryItem_GetDisplayItemPowerInt_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayFlavourText
struct UInventoryItem_GetDisplayFlavourText_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayDescriptionText
struct UInventoryItem_GetDisplayDescriptionText_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayCharacteristicsText
struct UInventoryItem_GetDisplayCharacteristicsText_Params
{
};

// Function Dungeons.InventoryItem.GetDisplayBulletPointsText
struct UInventoryItem_GetDisplayBulletPointsText_Params
{
};

// Function Dungeons.InventoryItem.EnchantIndex
struct UInventoryItem_EnchantIndex_Params
{
};

// Function Dungeons.InventoryItem.Enchantable
struct UInventoryItem_Enchantable_Params
{
};

// Function Dungeons.InventoryItem.ClearMarkedNew
struct UInventoryItem_ClearMarkedNew_Params
{
};

// Function Dungeons.InventoryItem.CanSalvage
struct UInventoryItem_CanSalvage_Params
{
};

// Function Dungeons.InventoryItem.CanEnchantIndex
struct UInventoryItem_CanEnchantIndex_Params
{
};

// Function Dungeons.InventoryItem.CanEnchant
struct UInventoryItem_CanEnchant_Params
{
};

// Function Dungeons.InventoryItem.CanBeUpgraded
struct UInventoryItem_CanBeUpgraded_Params
{
};

// Function Dungeons.InventoryItemDataFunctionLibrary.GetStoreCount
struct UInventoryItemDataFunctionLibrary_GetStoreCount_Params
{
};

// Function Dungeons.MerchantSelectionSlotBase.GetSelectionClass
struct UMerchantSelectionSlotBase_GetSelectionClass_Params
{
};

// Function Dungeons.MerchantSelectionSlotBase.GetSelection
struct UMerchantSelectionSlotBase_GetSelection_Params
{
};

// Function Dungeons.InventoryItemMerchantSlotBase.GetInventoryItem
struct UInventoryItemMerchantSlotBase_GetInventoryItem_Params
{
};

// Function Dungeons.InventoryItemUtil.NotEqual_InventoryItemDataArray
struct UInventoryItemUtil_NotEqual_InventoryItemDataArray_Params
{
};

// Function Dungeons.InventoryItemUtil.GetTotalInvestedEnchantmentPoints
struct UInventoryItemUtil_GetTotalInvestedEnchantmentPoints_Params
{
};

// Function Dungeons.InventoryItemUtil.GetShouldDisplayRarity
struct UInventoryItemUtil_GetShouldDisplayRarity_Params
{
};

// Function Dungeons.InventoryItemUtil.GetShouldDisplayPower
struct UInventoryItemUtil_GetShouldDisplayPower_Params
{
};

// Function Dungeons.InventoryItemUtil.GetNumberOfEnchantmentSlots
struct UInventoryItemUtil_GetNumberOfEnchantmentSlots_Params
{
};

// Function Dungeons.InventoryItemUtil.GetNumberOfEnchantmentsInSlot
struct UInventoryItemUtil_GetNumberOfEnchantmentsInSlot_Params
{
};

// Function Dungeons.InventoryItemUtil.GetItemsArchetypeCounts
struct UInventoryItemUtil_GetItemsArchetypeCounts_Params
{
};

// Function Dungeons.InventoryItemUtil.GetItemEventType
struct UInventoryItemUtil_GetItemEventType_Params
{
};

// Function Dungeons.InventoryItemUtil.GetItemArchetypes
struct UInventoryItemUtil_GetItemArchetypes_Params
{
};

// Function Dungeons.InventoryItemUtil.GetIsNetherite
struct UInventoryItemUtil_GetIsNetherite_Params
{
};

// Function Dungeons.InventoryItemUtil.GetIsEventItem
struct UInventoryItemUtil_GetIsEventItem_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayRarity
struct UInventoryItemUtil_GetDisplayRarity_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayNameText
struct UInventoryItemUtil_GetDisplayNameText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayItemPowerText
struct UInventoryItemUtil_GetDisplayItemPowerText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayItemPowerInt
struct UInventoryItemUtil_GetDisplayItemPowerInt_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayItemNameAndPowerText
struct UInventoryItemUtil_GetDisplayItemNameAndPowerText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayFlavourText
struct UInventoryItemUtil_GetDisplayFlavourText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayDescriptionText
struct UInventoryItemUtil_GetDisplayDescriptionText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayCharacteristicsText
struct UInventoryItemUtil_GetDisplayCharacteristicsText_Params
{
};

// Function Dungeons.InventoryItemUtil.GetDisplayBulletPointsText
struct UInventoryItemUtil_GetDisplayBulletPointsText_Params
{
};

// Function Dungeons.InventoryItemUtil.DoesEnchantmentSlotContainAnyOfRarity
struct UInventoryItemUtil_DoesEnchantmentSlotContainAnyOfRarity_Params
{
};

// Function Dungeons.InviteDungeonsSessionCallbackProxy.InviteDungeonsFriend
struct UInviteDungeonsSessionCallbackProxy_InviteDungeonsFriend_Params
{
};

// Function Dungeons.MerchantAnnouncementUtil.GetAnnouncementText
struct UMerchantAnnouncementUtil_GetAnnouncementText_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_Souls
struct UItemAttributeSet_OnRep_Souls_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_SoulGatheringMultiplier
struct UItemAttributeSet_OnRep_SoulGatheringMultiplier_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_SoulGathering
struct UItemAttributeSet_OnRep_SoulGathering_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_PotionCooldownMultiplier
struct UItemAttributeSet_OnRep_PotionCooldownMultiplier_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_MaxSouls
struct UItemAttributeSet_OnRep_MaxSouls_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_ItemLifeStealAmount
struct UItemAttributeSet_OnRep_ItemLifeStealAmount_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_ItemDamageMultiplier
struct UItemAttributeSet_OnRep_ItemDamageMultiplier_Params
{
};

// Function Dungeons.ItemAttributeSet.OnRep_ItemCooldownMultiplier
struct UItemAttributeSet_OnRep_ItemCooldownMultiplier_Params
{
};

// Function Dungeons.ItemCooldownReset.OnHealthPotionActivated
struct UItemCooldownReset_OnHealthPotionActivated_Params
{
};

// Function Dungeons.ItemDropActor.DropItems
struct AItemDropActor_DropItems_Params
{
};

// Function Dungeons.ItemDropChanceActor.OnSlotCountChanged
struct AItemDropChanceActor_OnSlotCountChanged_Params
{
};

// Function Dungeons.ItemDropChanceActor.OnPlayerHealthChanged
struct AItemDropChanceActor_OnPlayerHealthChanged_Params
{
};

// Function Dungeons.ItemDropEffectComponent.Apply
struct UItemDropEffectComponent_Apply_Params
{
};

// Function Dungeons.ItemFunctionLibrary.StreamIconTextureForItemIdHigh
struct UItemFunctionLibrary_StreamIconTextureForItemIdHigh_Params
{
};

// Function Dungeons.ItemFunctionLibrary.NotEqual_ItemTypeID
struct UItemFunctionLibrary_NotEqual_ItemTypeID_Params
{
};

// Function Dungeons.ItemFunctionLibrary.MakeItemId
struct UItemFunctionLibrary_MakeItemId_Params
{
};

// Function Dungeons.ItemFunctionLibrary.IsItemIdValid
struct UItemFunctionLibrary_IsItemIdValid_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetTagForItemType
struct UItemFunctionLibrary_GetTagForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetSlotTypeForItemType
struct UItemFunctionLibrary_GetSlotTypeForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetNameForItemType
struct UItemFunctionLibrary_GetNameForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsUniqueForItemType
struct UItemFunctionLibrary_GetIsUniqueForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsSoulUseForItemType
struct UItemFunctionLibrary_GetIsSoulUseForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsSoulGatherForItemType
struct UItemFunctionLibrary_GetIsSoulGatherForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsPassiveForItemType
struct UItemFunctionLibrary_GetIsPassiveForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsInventoryOnlyForItemType
struct UItemFunctionLibrary_GetIsInventoryOnlyForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIsGearForItemType
struct UItemFunctionLibrary_GetIsGearForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIconTextureForItemTypeHigh
struct UItemFunctionLibrary_GetIconTextureForItemTypeHigh_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetIconTextureForItemType
struct UItemFunctionLibrary_GetIconTextureForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetHasCooldownForItemType
struct UItemFunctionLibrary_GetHasCooldownForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetGearIconTextureForItemType
struct UItemFunctionLibrary_GetGearIconTextureForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetDescriptionForItemType
struct UItemFunctionLibrary_GetDescriptionForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetDefaultDurationForItemType
struct UItemFunctionLibrary_GetDefaultDurationForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetDefaultCooldownForItemType
struct UItemFunctionLibrary_GetDefaultCooldownForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.GetAmmoIconSmallTextureForItemType
struct UItemFunctionLibrary_GetAmmoIconSmallTextureForItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.EqualEqual_ItemTypeID
struct UItemFunctionLibrary_EqualEqual_ItemTypeID_Params
{
};

// Function Dungeons.ItemFunctionLibrary.DoesSlotTypeAcceptItemType
struct UItemFunctionLibrary_DoesSlotTypeAcceptItemType_Params
{
};

// Function Dungeons.ItemFunctionLibrary.Conv_ItemTypeIDToString
struct UItemFunctionLibrary_Conv_ItemTypeIDToString_Params
{
};

// Function Dungeons.ItemFunctionLibrary.BreakItemId
struct UItemFunctionLibrary_BreakItemId_Params
{
};

// Function Dungeons.ItemPowerUtil.GetItemPowerDisplayText
struct UItemPowerUtil_GetItemPowerDisplayText_Params
{
};

// Function Dungeons.ItemPowerUtil.GetItemPowerDisplayInt
struct UItemPowerUtil_GetItemPowerDisplayInt_Params
{
};

// Function Dungeons.InventoryItemSlot.WasSelectedInUI
struct UInventoryItemSlot_WasSelectedInUI_Params
{
};

// Function Dungeons.InventoryItemSlot.Swap
struct UInventoryItemSlot_Swap_Params
{
};

// Function Dungeons.InventoryItemSlot.IsLocked
struct UInventoryItemSlot_IsLocked_Params
{
};

// Function Dungeons.InventoryItemSlot.HasSlotChanged
struct UInventoryItemSlot_HasSlotChanged_Params
{
};

// Function Dungeons.InventoryItemSlot.GetTagIconsStillLoading
struct UInventoryItemSlot_GetTagIconsStillLoading_Params
{
};

// Function Dungeons.InventoryItemSlot.GetTagForSlotType
struct UInventoryItemSlot_GetTagForSlotType_Params
{
};

// Function Dungeons.InventoryItemSlot.GetIconTexturesStillLoading
struct UInventoryItemSlot_GetIconTexturesStillLoading_Params
{
};

// Function Dungeons.InventoryItemSlot.GetIconTextureForItemTag
struct UInventoryItemSlot_GetIconTextureForItemTag_Params
{
};

// Function Dungeons.InventoryItemSlot.GetIconTextureForItemId
struct UInventoryItemSlot_GetIconTextureForItemId_Params
{
};

// Function Dungeons.InventoryItemSlot.GetChangeIndex
struct UInventoryItemSlot_GetChangeIndex_Params
{
};

// Function Dungeons.InventoryItemSlot.FinishedSlotChanged
struct UInventoryItemSlot_FinishedSlotChanged_Params
{
};

// Function Dungeons.InventoryItemSlot.CanSwapWith
struct UInventoryItemSlot_CanSwapWith_Params
{
};

// Function Dungeons.InventoryItemSlot.AcceptsItem
struct UInventoryItemSlot_AcceptsItem_Params
{
};

// Function Dungeons.InventoryEquipmentItemSlot.OnCooldownChanged
struct UInventoryEquipmentItemSlot_OnCooldownChanged_Params
{
};

// Function Dungeons.ItemStashComponent.ShuffleItemsToFillHoles
struct UItemStashComponent_ShuffleItemsToFillHoles_Params
{
};

// Function Dungeons.ItemStashComponent.ServerVendorGiftItemTo
struct UItemStashComponent_ServerVendorGiftItemTo_Params
{
};

// Function Dungeons.ItemStashComponent.SerializeSaveState
struct UItemStashComponent_SerializeSaveState_Params
{
};

// Function Dungeons.ItemStashComponent.SalvageItemUndo
struct UItemStashComponent_SalvageItemUndo_Params
{
};

// Function Dungeons.ItemStashComponent.SalvageItemInSlot
struct UItemStashComponent_SalvageItemInSlot_Params
{
};

// Function Dungeons.ItemStashComponent.RemoveItem
struct UItemStashComponent_RemoveItem_Params
{
};

// Function Dungeons.ItemStashComponent.OnLevelUp
struct UItemStashComponent_OnLevelUp_Params
{
};

// Function Dungeons.ItemStashComponent.IsInventoryFull
struct UItemStashComponent_IsInventoryFull_Params
{
};

// Function Dungeons.ItemStashComponent.InventoryUIRequiresRefresh
struct UItemStashComponent_InventoryUIRequiresRefresh_Params
{
};

// Function Dungeons.ItemStashComponent.InventorySize
struct UItemStashComponent_InventorySize_Params
{
};

// Function Dungeons.ItemStashComponent.HasPreviouslyFoundItem
struct UItemStashComponent_HasPreviouslyFoundItem_Params
{
};

// Function Dungeons.ItemStashComponent.HasPreviouslyFoundCurrency
struct UItemStashComponent_HasPreviouslyFoundCurrency_Params
{
};

// Function Dungeons.ItemStashComponent.HasMissionOfferings
struct UItemStashComponent_HasMissionOfferings_Params
{
};

// Function Dungeons.ItemStashComponent.HasDeferredItems
struct UItemStashComponent_HasDeferredItems_Params
{
};

// Function Dungeons.ItemStashComponent.GetSalvageInfo
struct UItemStashComponent_GetSalvageInfo_Params
{
};

// Function Dungeons.ItemStashComponent.GetNumNewItems
struct UItemStashComponent_GetNumNewItems_Params
{
};

// Function Dungeons.ItemStashComponent.GetNumItemsInInventory
struct UItemStashComponent_GetNumItemsInInventory_Params
{
};

// Function Dungeons.ItemStashComponent.GetMissionOfferings
struct UItemStashComponent_GetMissionOfferings_Params
{
};

// Function Dungeons.ItemStashComponent.GetMaxInventoryCount
struct UItemStashComponent_GetMaxInventoryCount_Params
{
};

// Function Dungeons.ItemStashComponent.GetLowestPoweredItem
struct UItemStashComponent_GetLowestPoweredItem_Params
{
};

// Function Dungeons.ItemStashComponent.GetInventorySlots
struct UItemStashComponent_GetInventorySlots_Params
{
};

// Function Dungeons.ItemStashComponent.GetEquippedItemsOfSlotType
struct UItemStashComponent_GetEquippedItemsOfSlotType_Params
{
};

// Function Dungeons.ItemStashComponent.GetEquipmentSlots
struct UItemStashComponent_GetEquipmentSlots_Params
{
};

// Function Dungeons.ItemStashComponent.GetChangeIndex
struct UItemStashComponent_GetChangeIndex_Params
{
};

// Function Dungeons.ItemStashComponent.GetCanOpenWithKeyCommand
struct UItemStashComponent_GetCanOpenWithKeyCommand_Params
{
};

// Function Dungeons.ItemStashComponent.Expand
struct UItemStashComponent_Expand_Params
{
};

// Function Dungeons.ItemStashComponent.ExitInventoryUI
struct UItemStashComponent_ExitInventoryUI_Params
{
};

// Function Dungeons.ItemStashComponent.EnterInventoryUI
struct UItemStashComponent_EnterInventoryUI_Params
{
};

// Function Dungeons.ItemStashComponent.CompareItemPowerWithEquipped
struct UItemStashComponent_CompareItemPowerWithEquipped_Params
{
};

// Function Dungeons.ItemStashComponent.ClientVendorGiftItem
struct UItemStashComponent_ClientVendorGiftItem_Params
{
};

// Function Dungeons.ItemStashComponent.ClientPickupItem
struct UItemStashComponent_ClientPickupItem_Params
{
};

// Function Dungeons.ItemStashComponent.ClientGiftItem
struct UItemStashComponent_ClientGiftItem_Params
{
};

// Function Dungeons.ItemStashComponent.ClientAddItem
struct UItemStashComponent_ClientAddItem_Params
{
};

// Function Dungeons.ItemStashComponent.AvailableEnchantmentPoints
struct UItemStashComponent_AvailableEnchantmentPoints_Params
{
};

// Function Dungeons.ItemStatsUtil.GetItemStats
struct UItemStatsUtil_GetItemStats_Params
{
};

// Function Dungeons.JoinDungeonsSessionCallbackProxy.JoinDungeonsSession
struct UJoinDungeonsSessionCallbackProxy_JoinDungeonsSession_Params
{
};

// Function Dungeons.KeybindHelper.SetSavedKeybinds
struct UKeybindHelper_SetSavedKeybinds_Params
{
};

// Function Dungeons.KeybindHelper.KeyToString
struct UKeybindHelper_KeyToString_Params
{
};

// Function Dungeons.KeybindHelper.GetSavedKeybinds
struct UKeybindHelper_GetSavedKeybinds_Params
{
};

// Function Dungeons.KeybindHelper.GetLeftConfig
struct UKeybindHelper_GetLeftConfig_Params
{
};

// Function Dungeons.KeybindHelper.GetDefaultConfig
struct UKeybindHelper_GetDefaultConfig_Params
{
};

// Function Dungeons.KillTrackerComponent.HandleMobKill
struct UKillTrackerComponent_HandleMobKill_Params
{
};

// Function Dungeons.KillTrackerComponent.Client_RegisterKill
struct UKillTrackerComponent_Client_RegisterKill_Params
{
};

// Function Dungeons.LeapComponent.HandleLanded
struct ULeapComponent_HandleLanded_Params
{
};

// Function Dungeons.LevelSettingsUtil.IsLobby
struct ULevelSettingsUtil_IsLobby_Params
{
};

// Function Dungeons.LevelSettingsUtil.getThreatLevel
struct ULevelSettingsUtil_getThreatLevel_Params
{
};

// Function Dungeons.LevelSettingsUtil.GetLevelName
struct ULevelSettingsUtil_GetLevelName_Params
{
};

// Function Dungeons.LevelSettingsUtil.GetLevelDisplayName
struct ULevelSettingsUtil_GetLevelDisplayName_Params
{
};

// Function Dungeons.LevelSettingsUtil.getEndlessStruggle
struct ULevelSettingsUtil_getEndlessStruggle_Params
{
};

// Function Dungeons.LevelSettingsUtil.getDifficulty
struct ULevelSettingsUtil_getDifficulty_Params
{
};

// Function Dungeons.LevelSettingsUtil.CreateUnlockKeyForLevel
struct ULevelSettingsUtil_CreateUnlockKeyForLevel_Params
{
};

// Function Dungeons.LightFeatherInstance.OnPlayerLanded
struct ALightFeatherInstance_OnPlayerLanded_Params
{
};

// Function Dungeons.LiveOpsKillComponent.ServerAssignClientFilter
struct ULiveOpsKillComponent_ServerAssignClientFilter_Params
{
};

// Function Dungeons.LiveOpsKillComponent.HandleMobKilled
struct ULiveOpsKillComponent_HandleMobKilled_Params
{
};

// Function Dungeons.LiveOpsKillComponent.ClientKillTriggered
struct ULiveOpsKillComponent_ClientKillTriggered_Params
{
};

// Function Dungeons.LoadingScreenInitializer.IsCurrentlyShown
struct ULoadingScreenInitializer_IsCurrentlyShown_Params
{
};

// Function Dungeons.LobbyActor.OnRep_RequestChanged
struct ALobbyActor_OnRep_RequestChanged_Params
{
};

// Function Dungeons.LobbyActor.OnRep_IsRequestingLevelChanged
struct ALobbyActor_OnRep_IsRequestingLevelChanged_Params
{
};

// Function Dungeons.LobbyActor.IsRequestingLevel
struct ALobbyActor_IsRequestingLevel_Params
{
};

// Function Dungeons.LobbyActor.GetTimeout
struct ALobbyActor_GetTimeout_Params
{
};

// Function Dungeons.LobbyActor.GetRequest
struct ALobbyActor_GetRequest_Params
{
};

// Function Dungeons.LobbyBP.QuitToMenuAfterRewardScreen
struct ALobbyBP_QuitToMenuAfterRewardScreen_Params
{
};

// Function Dungeons.LobbyChest.HandleInteraction
struct ALobbyChest_HandleInteraction_Params
{
};

// Function Dungeons.LocalizationUtils.VoiceOverLocalizationChanged
struct ULocalizationUtils_VoiceOverLocalizationChanged_Params
{
};

// Function Dungeons.LocalizationUtils.LocStringForWeb
struct ULocalizationUtils_LocStringForWeb_Params
{
};

// Function Dungeons.LocalizationUtils.GetLocaleString
struct ULocalizationUtils_GetLocaleString_Params
{
};

// Function Dungeons.LocalizationUtils.GetEULAPage
struct ULocalizationUtils_GetEULAPage_Params
{
};

// Function Dungeons.LocalizationUtils.GetDefaultLanguageEnum
struct ULocalizationUtils_GetDefaultLanguageEnum_Params
{
};

// Function Dungeons.LocalizationUtils.GetAccessibilityURL
struct ULocalizationUtils_GetAccessibilityURL_Params
{
};

// Function Dungeons.LocalizationUtils.CurrentLocale
struct ULocalizationUtils_CurrentLocale_Params
{
};

// Function Dungeons.LocalizationUtils.CompareLanguageISO
struct ULocalizationUtils_CompareLanguageISO_Params
{
};

// Function Dungeons.LocalizationUtils.ChangeLocalizationByString
struct ULocalizationUtils_ChangeLocalizationByString_Params
{
};

// Function Dungeons.LocalizationUtils.ChangeLocalization
struct ULocalizationUtils_ChangeLocalization_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.UnlinkXBLAccount
struct ULoginFlowBpFunctionsLib_UnlinkXBLAccount_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.SignOutXBL
struct ULoginFlowBpFunctionsLib_SignOutXBL_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.ShouldDisplayCloudServicesFeature
struct ULoginFlowBpFunctionsLib_ShouldDisplayCloudServicesFeature_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.SetDebugConsoleOpen
struct ULoginFlowBpFunctionsLib_SetDebugConsoleOpen_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.SetCrossplayState
struct ULoginFlowBpFunctionsLib_SetCrossplayState_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.IsSignedInToPSN
struct ULoginFlowBpFunctionsLib_IsSignedInToPSN_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.IsProfileTextToSpeechEnabled
struct ULoginFlowBpFunctionsLib_IsProfileTextToSpeechEnabled_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.IsDebugConsoleOpen
struct ULoginFlowBpFunctionsLib_IsDebugConsoleOpen_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.IsCrossplayEnabled
struct ULoginFlowBpFunctionsLib_IsCrossplayEnabled_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.GetXBLPictureUri
struct ULoginFlowBpFunctionsLib_GetXBLPictureUri_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.GetXBLNameTag
struct ULoginFlowBpFunctionsLib_GetXBLNameTag_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.GetXBLGamerscore
struct ULoginFlowBpFunctionsLib_GetXBLGamerscore_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.GetLinkErrorGamertagHint
struct ULoginFlowBpFunctionsLib_GetLinkErrorGamertagHint_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.AreCloudServicesEnabled
struct ULoginFlowBpFunctionsLib_AreCloudServicesEnabled_Params
{
};

// Function Dungeons.LoginFlowBpFunctionsLib.ActivateDungeonsOSS
struct ULoginFlowBpFunctionsLib_ActivateDungeonsOSS_Params
{
};

// Function Dungeons.LootActor.Open
struct ALootActor_Open_Params
{
};

// Function Dungeons.LootActor.OnRep_ActivatedLoot
struct ALootActor_OnRep_ActivatedLoot_Params
{
};

// Function Dungeons.LootUnlockerComponent.ServerRequestOpen
struct ULootUnlockerComponent_ServerRequestOpen_Params
{
};

// Function Dungeons.LootUnlockerComponent.RequestUnlock
struct ULootUnlockerComponent_RequestUnlock_Params
{
};

// Function Dungeons.LootUnlockerComponent.Reject
struct ULootUnlockerComponent_Reject_Params
{
};

// Function Dungeons.LootUnlockerComponent.GetNumMobKills
struct ULootUnlockerComponent_GetNumMobKills_Params
{
};

// Function Dungeons.LootUnlockerComponent.GetNumCompletedMissionsAtDifficulty
struct ULootUnlockerComponent_GetNumCompletedMissionsAtDifficulty_Params
{
};

// Function Dungeons.LootUnlockerComponent.GetHasCompletedMissionAtDifficulty
struct ULootUnlockerComponent_GetHasCompletedMissionAtDifficulty_Params
{
};

// Function Dungeons.LootUnlockerComponent.GetEmeraldCount
struct ULootUnlockerComponent_GetEmeraldCount_Params
{
};

// Function Dungeons.LootUnlockerComponent.GetCharacterLevel
struct ULootUnlockerComponent_GetCharacterLevel_Params
{
};

// Function Dungeons.LootUnlockerComponent.Client_UnlockChest
struct ULootUnlockerComponent_Client_UnlockChest_Params
{
};

// Function Dungeons.LootUnlockerComponent.Accept
struct ULootUnlockerComponent_Accept_Params
{
};

// Function Dungeons.LovikaLevelActor.levelTrace
struct ALovikaLevelActor_levelTrace_Params
{
};

// Function Dungeons.LovikaLevelActor.getGeneratedLevelSettingsOrEmpty
struct ALovikaLevelActor_getGeneratedLevelSettingsOrEmpty_Params
{
};

// Function Dungeons.LovikaObjectgroupLevelActor.levelTrace
struct ALovikaObjectgroupLevelActor_levelTrace_Params
{
};

// Function Dungeons.LovikaSpringArmComponent.SetDesiredArmLegnth
struct ULovikaSpringArmComponent_SetDesiredArmLegnth_Params
{
};

// Function Dungeons.LovikaSpringArmComponent.ResetDesiredArmLength
struct ULovikaSpringArmComponent_ResetDesiredArmLength_Params
{
};

// Function Dungeons.LovikaSpringArmComponent.Reinitialize
struct ULovikaSpringArmComponent_Reinitialize_Params
{
};

// Function Dungeons.MapUtils.createMapTexture2D
struct UMapUtils_createMapTexture2D_Params
{
};

// Function Dungeons.MapPinComponent.Update
struct UMapPinComponent_Update_Params
{
};

// Function Dungeons.MapPinComponent.SetMapPin
struct UMapPinComponent_SetMapPin_Params
{
};

// Function Dungeons.MapPinComponent.Initialize
struct UMapPinComponent_Initialize_Params
{
};

// Function Dungeons.MapPinComponent.getMapPinClass
struct UMapPinComponent_getMapPinClass_Params
{
};

// Function Dungeons.MapPinComponent.GetMapPin
struct UMapPinComponent_GetMapPin_Params
{
};

// Function Dungeons.MapPinComponent.Get2DPosition
struct UMapPinComponent_Get2DPosition_Params
{
};

// Function Dungeons.MapPinComponent.CheckRetNull
struct UMapPinComponent_CheckRetNull_Params
{
};

// Function Dungeons.MapPinWidget.IsLocalPlayer
struct UMapPinWidget_IsLocalPlayer_Params
{
};

// Function Dungeons.MapPinWidget.DoUpdatePinRarity
struct UMapPinWidget_DoUpdatePinRarity_Params
{
};

// Function Dungeons.MapPinWidget.DoUpdateDownedState
struct UMapPinWidget_DoUpdateDownedState_Params
{
};

// Function Dungeons.MapPinWidget.DoUpdateDirection
struct UMapPinWidget_DoUpdateDirection_Params
{
};

// Function Dungeons.MapPinWidget.DoSetPlayerCharacter
struct UMapPinWidget_DoSetPlayerCharacter_Params
{
};

// Function Dungeons.MapPinWidget.DoSetPinColor
struct UMapPinWidget_DoSetPinColor_Params
{
};

// Function Dungeons.MapPinWidget.DoSetAspectScale
struct UMapPinWidget_DoSetAspectScale_Params
{
};

// Function Dungeons.MapStatActor.OnRep_TrackedCounts
struct AMapStatActor_OnRep_TrackedCounts_Params
{
};

// Function Dungeons.MapStatActor.GetTrackingTypeCount
struct AMapStatActor_GetTrackingTypeCount_Params
{
};

// Function Dungeons.MapTexture2D.worldToMap
struct UMapTexture2D_worldToMap_Params
{
};

// Function Dungeons.MapTexture2D.UpdateTerrain
struct UMapTexture2D_UpdateTerrain_Params
{
};

// Function Dungeons.MapTexture2D.SetDisplayedMaterialInstance
struct UMapTexture2D_SetDisplayedMaterialInstance_Params
{
};

// Function Dungeons.MapTexture2D.getTexture
struct UMapTexture2D_getTexture_Params
{
};

// Function Dungeons.MapTexture2D.getLocationUV
struct UMapTexture2D_getLocationUV_Params
{
};

// Function Dungeons.MapTexture2D.getAllMapPinActors
struct UMapTexture2D_getAllMapPinActors_Params
{
};

// Function Dungeons.MeleeAttackComponent.ServerSetHoldingAttack
struct UMeleeAttackComponent_ServerSetHoldingAttack_Params
{
};

// Function Dungeons.MeleeAttackComponent.OnWeaponSlotUpdated
struct UMeleeAttackComponent_OnWeaponSlotUpdated_Params
{
};

// Function Dungeons.MeleeAttackComponent.OnVariantCooldownDone
struct UMeleeAttackComponent_OnVariantCooldownDone_Params
{
};

// Function Dungeons.MeleeAttackComponent.OnDeath
struct UMeleeAttackComponent_OnDeath_Params
{
};

// Function Dungeons.MeleeAttackComponent.OnAttackVariantEnd
struct UMeleeAttackComponent_OnAttackVariantEnd_Params
{
};

// Function Dungeons.MeleeAttackComponent.CancelActions
struct UMeleeAttackComponent_CancelActions_Params
{
};

// Function Dungeons.MeleeAttackComponent.AttackWithVariantIndexServer
struct UMeleeAttackComponent_AttackWithVariantIndexServer_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeHealItemPowerFactor
struct UMeleeAttributeSet_OnRep_MeleeHealItemPowerFactor_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackSpeedMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackSpeedMultiplier_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackRangeMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackRangeMultiplier_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackPushbackMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackPushbackMultiplier_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackLifeStealAmount
struct UMeleeAttributeSet_OnRep_MeleeAttackLifeStealAmount_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackItemPowerFactor
struct UMeleeAttributeSet_OnRep_MeleeAttackItemPowerFactor_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackHitChanceMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackHitChanceMultiplier_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackDamageMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackDamageMultiplier_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackDamageIncrease
struct UMeleeAttributeSet_OnRep_MeleeAttackDamageIncrease_Params
{
};

// Function Dungeons.MeleeAttributeSet.OnRep_MeleeAttackAngleMultiplier
struct UMeleeAttributeSet_OnRep_MeleeAttackAngleMultiplier_Params
{
};

// Function Dungeons.MeleeWeaponGearItemInstance.GetEditableAttackVariants
struct AMeleeWeaponGearItemInstance_GetEditableAttackVariants_Params
{
};

// Function Dungeons.MeleeWeaponGearItemInstance.GetAttackVariants
struct AMeleeWeaponGearItemInstance_GetAttackVariants_Params
{
};

// Function Dungeons.MerchantActor.SimulateInteraction
struct AMerchantActor_SimulateInteraction_Params
{
};

// Function Dungeons.MerchantActor.SetCapture3DView
struct AMerchantActor_SetCapture3DView_Params
{
};

// Function Dungeons.MerchantActor.HandleInteraction
struct AMerchantActor_HandleInteraction_Params
{
};

// Function Dungeons.MerchantActorUtil.GetFirstSelectMissionOfferingsMerchant
struct UMerchantActorUtil_GetFirstSelectMissionOfferingsMerchant_Params
{
};

// Function Dungeons.MerchantDef.GetDisplayName
struct UMerchantDef_GetDisplayName_Params
{
};

// Function Dungeons.MerchantDefComponent.OnPlayerCharacterRemoving
struct UMerchantDefComponent_OnPlayerCharacterRemoving_Params
{
};

// Function Dungeons.MerchantDefComponent.OnPlayerCharacterAdding
struct UMerchantDefComponent_OnPlayerCharacterAdding_Params
{
};

// Function Dungeons.MerchantDefComponent.GetMerchantDisplayName
struct UMerchantDefComponent_GetMerchantDisplayName_Params
{
};

// Function Dungeons.MerchantSelectionBase.TryConfirmSelection
struct UMerchantSelectionBase_TryConfirmSelection_Params
{
};

// Function Dungeons.MerchantSelectionBase.TryCancelSelection
struct UMerchantSelectionBase_TryCancelSelection_Params
{
};

// Function Dungeons.MerchantSelectionBase.IsFocused
struct UMerchantSelectionBase_IsFocused_Params
{
};

// Function Dungeons.MerchantSelectionBase.HasSelectedAny
struct UMerchantSelectionBase_HasSelectedAny_Params
{
};

// Function Dungeons.MerchantSelectionBase.CanSelectAny
struct UMerchantSelectionBase_CanSelectAny_Params
{
};

// Function Dungeons.MerchantSelectionBase.CanConfirmSelection
struct UMerchantSelectionBase_CanConfirmSelection_Params
{
};

// Function Dungeons.MerchantSelectionBase.CanCancelSelection
struct UMerchantSelectionBase_CanCancelSelection_Params
{
};

// Function Dungeons.MerchantsUtil.UnlockMerchantForAllLocalPlayers
struct UMerchantsUtil_UnlockMerchantForAllLocalPlayers_Params
{
};

// Function Dungeons.MerchantsUtil.IsMerchantUnlocked
struct UMerchantsUtil_IsMerchantUnlocked_Params
{
};

// Function Dungeons.MerchantsUtil.IsMerchantLockedForLevel
struct UMerchantsUtil_IsMerchantLockedForLevel_Params
{
};

// Function Dungeons.MerchantsUtil.GetUnlockedMerchantsCount
struct UMerchantsUtil_GetUnlockedMerchantsCount_Params
{
};

// Function Dungeons.MerchantsUtil.GetTotalMerchantsCount
struct UMerchantsUtil_GetTotalMerchantsCount_Params
{
};

// Function Dungeons.MerchantsUtil.GetMerchantName
struct UMerchantsUtil_GetMerchantName_Params
{
};

// Function Dungeons.MerchantTransactionUtil.GetTransactionReasonText
struct UMerchantTransactionUtil_GetTransactionReasonText_Params
{
};

// Function Dungeons.MerchantWidgetBase.UpdateTransactions
struct UMerchantWidgetBase_UpdateTransactions_Params
{
};

// Function Dungeons.MerchantWidgetBase.UpdateSlots
struct UMerchantWidgetBase_UpdateSlots_Params
{
};

// Function Dungeons.MerchantWidgetBase.UpdateSelections
struct UMerchantWidgetBase_UpdateSelections_Params
{
};

// Function Dungeons.MerchantWidgetBase.UpdateSelectionFocus
struct UMerchantWidgetBase_UpdateSelectionFocus_Params
{
};

// Function Dungeons.MerchantWidgetBase.ShouldShowEnchantmentPoints
struct UMerchantWidgetBase_ShouldShowEnchantmentPoints_Params
{
};

// Function Dungeons.MerchantWidgetBase.OnUnboundMerchant
struct UMerchantWidgetBase_OnUnboundMerchant_Params
{
};

// Function Dungeons.MerchantWidgetBase.OnTransactionExecuted
struct UMerchantWidgetBase_OnTransactionExecuted_Params
{
};

// Function Dungeons.MerchantWidgetBase.OnItemAnnouncement
struct UMerchantWidgetBase_OnItemAnnouncement_Params
{
};

// Function Dungeons.MerchantWidgetBase.OnBoundMerchant
struct UMerchantWidgetBase_OnBoundMerchant_Params
{
};

// Function Dungeons.MerchantWidgetBase.OnBindChanged
struct UMerchantWidgetBase_OnBindChanged_Params
{
};

// Function Dungeons.MerchantWidgetBase.IsTransactionClassAvailable
struct UMerchantWidgetBase_IsTransactionClassAvailable_Params
{
};

// Function Dungeons.MerchantWidgetBase.IsSelectionClassRequired
struct UMerchantWidgetBase_IsSelectionClassRequired_Params
{
};

// Function Dungeons.MerchantWidgetBase.IsSelectionClassFocused
struct UMerchantWidgetBase_IsSelectionClassFocused_Params
{
};

// Function Dungeons.MerchantWidgetBase.HasAnyLockedSlot
struct UMerchantWidgetBase_HasAnyLockedSlot_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetTransactionByClass
struct UMerchantWidgetBase_GetTransactionByClass_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetSlotsByClass
struct UMerchantWidgetBase_GetSlotsByClass_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetSlots
struct UMerchantWidgetBase_GetSlots_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetSelectionFocus
struct UMerchantWidgetBase_GetSelectionFocus_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetSelectionByClass
struct UMerchantWidgetBase_GetSelectionByClass_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetRestockMethodsBulletPoints
struct UMerchantWidgetBase_GetRestockMethodsBulletPoints_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetMerchantActorOwner
struct UMerchantWidgetBase_GetMerchantActorOwner_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetLockedSlotsHint
struct UMerchantWidgetBase_GetLockedSlotsHint_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetDisplayName
struct UMerchantWidgetBase_GetDisplayName_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetDisplayDescription
struct UMerchantWidgetBase_GetDisplayDescription_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetDisplayBulletPoints
struct UMerchantWidgetBase_GetDisplayBulletPoints_Params
{
};

// Function Dungeons.MerchantWidgetBase.GetCurrencyComponent
struct UMerchantWidgetBase_GetCurrencyComponent_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMobStatus
struct UMissionChancesUtil_GetMobStatus_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMobChanceText
struct UMissionChancesUtil_GetMobChanceText_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMobChanceIconClass
struct UMissionChancesUtil_GetMobChanceIconClass_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMobChanceDLCText
struct UMissionChancesUtil_GetMobChanceDLCText_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionProbabilities
struct UMissionChancesUtil_GetMissionProbabilities_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionChancesTypeText
struct UMissionChancesUtil_GetMissionChancesTypeText_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionChancesTypesFiltered
struct UMissionChancesUtil_GetMissionChancesTypesFiltered_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionChancesTypes
struct UMissionChancesUtil_GetMissionChancesTypes_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionChancesText
struct UMissionChancesUtil_GetMissionChancesText_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMissionChances
struct UMissionChancesUtil_GetMissionChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMapRewardItemTypeChances
struct UMissionChancesUtil_GetMapRewardItemTypeChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMapRewardItemTagChances
struct UMissionChancesUtil_GetMapRewardItemTagChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMapRewardItemRarityChances
struct UMissionChancesUtil_GetMapRewardItemRarityChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMapLootItemTypeChances
struct UMissionChancesUtil_GetMapLootItemTypeChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetMapArtifactItemTypeChances
struct UMissionChancesUtil_GetMapArtifactItemTypeChances_Params
{
};

// Function Dungeons.MissionChancesUtil.GetCanShowItemType
struct UMissionChancesUtil_GetCanShowItemType_Params
{
};

// Function Dungeons.MissionDefs.IsTutorial
struct UMissionDefs_IsTutorial_Params
{
};

// Function Dungeons.MissionDefs.IsTrial
struct UMissionDefs_IsTrial_Params
{
};

// Function Dungeons.MissionDefs.IsSecret
struct UMissionDefs_IsSecret_Params
{
};

// Function Dungeons.MissionDefs.IsSalvageEnabled
struct UMissionDefs_IsSalvageEnabled_Params
{
};

// Function Dungeons.MissionDefs.IsMissionThreatLevelUnlockedByDefault
struct UMissionDefs_IsMissionThreatLevelUnlockedByDefault_Params
{
};

// Function Dungeons.MissionDefs.IsMissionThreatLevelSelectorHidden
struct UMissionDefs_IsMissionThreatLevelSelectorHidden_Params
{
};

// Function Dungeons.MissionDefs.IsHyperMission
struct UMissionDefs_IsHyperMission_Params
{
};

// Function Dungeons.MissionDefs.GetThreatLevelFraction
struct UMissionDefs_GetThreatLevelFraction_Params
{
};

// Function Dungeons.MissionDefs.GetSecretUnlockInMissionAsRequirementText
struct UMissionDefs_GetSecretUnlockInMissionAsRequirementText_Params
{
};

// Function Dungeons.MissionDefs.GetRequiredMissions
struct UMissionDefs_GetRequiredMissions_Params
{
};

// Function Dungeons.MissionDefs.GetRecommendedTotalGearItemPower
struct UMissionDefs_GetRecommendedTotalGearItemPower_Params
{
};

// Function Dungeons.MissionDefs.GetMissionVariationType
struct UMissionDefs_GetMissionVariationType_Params
{
};

// Function Dungeons.MissionDefs.GetMissionUITheme
struct UMissionDefs_GetMissionUITheme_Params
{
};

// Function Dungeons.MissionDefs.GetMissionTrialText
struct UMissionDefs_GetMissionTrialText_Params
{
};

// Function Dungeons.MissionDefs.GetMissionRequiresStartConfirmation
struct UMissionDefs_GetMissionRequiresStartConfirmation_Params
{
};

// Function Dungeons.MissionDefs.GetMissionRequiresOfferings
struct UMissionDefs_GetMissionRequiresOfferings_Params
{
};

// Function Dungeons.MissionDefs.GetMissionNightModeType
struct UMissionDefs_GetMissionNightModeType_Params
{
};

// Function Dungeons.MissionDefs.GetMissionLockedText
struct UMissionDefs_GetMissionLockedText_Params
{
};

// Function Dungeons.MissionDefs.GetMissionLockedDescription
struct UMissionDefs_GetMissionLockedDescription_Params
{
};

// Function Dungeons.MissionDefs.GetMissionLoadingScreenTexture
struct UMissionDefs_GetMissionLoadingScreenTexture_Params
{
};

// Function Dungeons.MissionDefs.GetMissionLoadingScreenSoftTexture
struct UMissionDefs_GetMissionLoadingScreenSoftTexture_Params
{
};

// Function Dungeons.MissionDefs.GetMissionExtraChallenge
struct UMissionDefs_GetMissionExtraChallenge_Params
{
};

// Function Dungeons.MissionDefs.GetMissionDisplayStoryTitle
struct UMissionDefs_GetMissionDisplayStoryTitle_Params
{
};

// Function Dungeons.MissionDefs.GetMissionDisplayStoryContents
struct UMissionDefs_GetMissionDisplayStoryContents_Params
{
};

// Function Dungeons.MissionDefs.GetMissionDisplayName
struct UMissionDefs_GetMissionDisplayName_Params
{
};

// Function Dungeons.MissionDefs.GetMissionConfirmStartWarning
struct UMissionDefs_GetMissionConfirmStartWarning_Params
{
};

// Function Dungeons.MissionDefs.GetMissionConfirmStartTitle
struct UMissionDefs_GetMissionConfirmStartTitle_Params
{
};

// Function Dungeons.MissionDefs.GetMissionAsRequirementToolTipText
struct UMissionDefs_GetMissionAsRequirementToolTipText_Params
{
};

// Function Dungeons.MissionDefs.GetMissionAsRequirementText
struct UMissionDefs_GetMissionAsRequirementText_Params
{
};

// Function Dungeons.MissionDefs.GetMapThreatLevelDescriptions
struct UMissionDefs_GetMapThreatLevelDescriptions_Params
{
};

// Function Dungeons.MissionDefs.GetLastSelectableThreatLevel
struct UMissionDefs_GetLastSelectableThreatLevel_Params
{
};

// Function Dungeons.MissionDefs.GetGearPowerDifficultyRecommendation
struct UMissionDefs_GetGearPowerDifficultyRecommendation_Params
{
};

// Function Dungeons.MissionDefs.GetFirstSelectableThreatLevel
struct UMissionDefs_GetFirstSelectableThreatLevel_Params
{
};

// Function Dungeons.MissionDefs.GetDisplayGearPowerGlobalThreatFraction
struct UMissionDefs_GetDisplayGearPowerGlobalThreatFraction_Params
{
};

// Function Dungeons.MissionDefs.GetDifficultyThreatGlobalThreatFraction
struct UMissionDefs_GetDifficultyThreatGlobalThreatFraction_Params
{
};

// Function Dungeons.MissionDefs.GetAllNonDisabledMissions
struct UMissionDefs_GetAllNonDisabledMissions_Params
{
};

// Function Dungeons.MissionDefs.GetAffectorInfo
struct UMissionDefs_GetAffectorInfo_Params
{
};

// Function Dungeons.MissionDifficultyUtil.IsMissionDifficultyValid
struct UMissionDifficultyUtil_IsMissionDifficultyValid_Params
{
};

// Function Dungeons.MissionInterestUtil.GetMissionInterestText
struct UMissionInterestUtil_GetMissionInterestText_Params
{
};

// Function Dungeons.MissionInterestUtil.GetMissionInterestIsNew
struct UMissionInterestUtil_GetMissionInterestIsNew_Params
{
};

// Function Dungeons.MissionInterestUtil.GetMissionInterestCarouselText
struct UMissionInterestUtil_GetMissionInterestCarouselText_Params
{
};

// Function Dungeons.MissionOfferingsTransactionBase.GetMissionOfferings
struct UMissionOfferingsTransactionBase_GetMissionOfferings_Params
{
};

// Function Dungeons.MissionOfferingsTransactionBase.GetMission
struct UMissionOfferingsTransactionBase_GetMission_Params
{
};

// Function Dungeons.MissionOfferingsTransactionBase.GetIsItemBeingOffered
struct UMissionOfferingsTransactionBase_GetIsItemBeingOffered_Params
{
};

// Function Dungeons.MissionOfferingsUtil.NotEqual_MissionOfferings
struct UMissionOfferingsUtil_NotEqual_MissionOfferings_Params
{
};

// Function Dungeons.MissionOfferingsUtil.GetOfferingsArchetypeCounts
struct UMissionOfferingsUtil_GetOfferingsArchetypeCounts_Params
{
};

// Function Dungeons.MissionOfferingsUtil.EqualEqual_MissionOfferings
struct UMissionOfferingsUtil_EqualEqual_MissionOfferings_Params
{
};

// Function Dungeons.MissionPresentationHandler.OnRep_SetMissionBoundingBox
struct UMissionPresentationHandler_OnRep_SetMissionBoundingBox_Params
{
};

// Function Dungeons.MissionPresentationHandler.OnRep_PresentationData
struct UMissionPresentationHandler_OnRep_PresentationData_Params
{
};

// Function Dungeons.MissionPresentationHandler.EndCurrentObjective
struct UMissionPresentationHandler_EndCurrentObjective_Params
{
};

// Function Dungeons.MissionProgressComponent.UnlockBonusMissionForAllPlayers
struct UMissionProgressComponent_UnlockBonusMissionForAllPlayers_Params
{
};

// Function Dungeons.MissionProgressComponent.UnlockBonusMissionForAllLocalPlayers
struct UMissionProgressComponent_UnlockBonusMissionForAllLocalPlayers_Params
{
};

// Function Dungeons.MissionProgressComponent.UnlockBonusMission
struct UMissionProgressComponent_UnlockBonusMission_Params
{
};

// Function Dungeons.MissionProgressComponent.SetThreatLevelAnnounced
struct UMissionProgressComponent_SetThreatLevelAnnounced_Params
{
};

// Function Dungeons.MissionProgressComponent.SetMapUIState
struct UMissionProgressComponent_SetMapUIState_Params
{
};

// Function Dungeons.MissionProgressComponent.SetHasDisplayedCompletionNotification
struct UMissionProgressComponent_SetHasDisplayedCompletionNotification_Params
{
};

// Function Dungeons.MissionProgressComponent.SetDifficultyAnnounced
struct UMissionProgressComponent_SetDifficultyAnnounced_Params
{
};

// Function Dungeons.MissionProgressComponent.SetContentAnnounced
struct UMissionProgressComponent_SetContentAnnounced_Params
{
};

// Function Dungeons.MissionProgressComponent.SetCompletedMission
struct UMissionProgressComponent_SetCompletedMission_Params
{
};

// Function Dungeons.MissionProgressComponent.QueryStartMissionStatus
struct UMissionProgressComponent_QueryStartMissionStatus_Params
{
};

// Function Dungeons.MissionProgressComponent.QueryMissionRequestIsStartable
struct UMissionProgressComponent_QueryMissionRequestIsStartable_Params
{
};

// Function Dungeons.MissionProgressComponent.PreviewMissionSelectionRequest
struct UMissionProgressComponent_PreviewMissionSelectionRequest_Params
{
};

// Function Dungeons.MissionProgressComponent.OnDifficultySelected
struct UMissionProgressComponent_OnDifficultySelected_Params
{
};

// Function Dungeons.MissionProgressComponent.IsUnlockedAndNotTutorial
struct UMissionProgressComponent_IsUnlockedAndNotTutorial_Params
{
};

// Function Dungeons.MissionProgressComponent.IsThreatLevelUnlocked
struct UMissionProgressComponent_IsThreatLevelUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.IsThreatLevelAnnounced
struct UMissionProgressComponent_IsThreatLevelAnnounced_Params
{
};

// Function Dungeons.MissionProgressComponent.IsRealmUnlocked
struct UMissionProgressComponent_IsRealmUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionUnlocked
struct UMissionProgressComponent_IsMissionUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionThreatLevelValid
struct UMissionProgressComponent_IsMissionThreatLevelValid_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionThreatLevelTooLow
struct UMissionProgressComponent_IsMissionThreatLevelTooLow_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionThreatLevelTooHigh
struct UMissionProgressComponent_IsMissionThreatLevelTooHigh_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionRevealed
struct UMissionProgressComponent_IsMissionRevealed_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionOfInterest
struct UMissionProgressComponent_IsMissionOfInterest_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionNew
struct UMissionProgressComponent_IsMissionNew_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionEndlessStruggleUnlocked
struct UMissionProgressComponent_IsMissionEndlessStruggleUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionDone
struct UMissionProgressComponent_IsMissionDone_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionDifficultyAndThreatLevelCompleted
struct UMissionProgressComponent_IsMissionDifficultyAndThreatLevelCompleted_Params
{
};

// Function Dungeons.MissionProgressComponent.IsMissionCompleted
struct UMissionProgressComponent_IsMissionCompleted_Params
{
};

// Function Dungeons.MissionProgressComponent.IsLevelUnlockedForAllLocalPlayers
struct UMissionProgressComponent_IsLevelUnlockedForAllLocalPlayers_Params
{
};

// Function Dungeons.MissionProgressComponent.IsDLCPlayable
struct UMissionProgressComponent_IsDLCPlayable_Params
{
};

// Function Dungeons.MissionProgressComponent.IsDLCOwned
struct UMissionProgressComponent_IsDLCOwned_Params
{
};

// Function Dungeons.MissionProgressComponent.IsDifficultyUnlocked
struct UMissionProgressComponent_IsDifficultyUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.IsDifficultyCompleted
struct UMissionProgressComponent_IsDifficultyCompleted_Params
{
};

// Function Dungeons.MissionProgressComponent.IsDifficultyAnnounced
struct UMissionProgressComponent_IsDifficultyAnnounced_Params
{
};

// Function Dungeons.MissionProgressComponent.IsAnyEndlessStruggleUnlocked
struct UMissionProgressComponent_IsAnyEndlessStruggleUnlocked_Params
{
};

// Function Dungeons.MissionProgressComponent.HasNeverSelectedDifficulty
struct UMissionProgressComponent_HasNeverSelectedDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.GetUnannouncedUnlockedThreatLevel
struct UMissionProgressComponent_GetUnannouncedUnlockedThreatLevel_Params
{
};

// Function Dungeons.MissionProgressComponent.GetUnannouncedUnlockedDifficulty
struct UMissionProgressComponent_GetUnannouncedUnlockedDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.GetUnannouncedEndGameContent
struct UMissionProgressComponent_GetUnannouncedEndGameContent_Params
{
};

// Function Dungeons.MissionProgressComponent.GetTotalMissionsInDifficultyOfVariationType
struct UMissionProgressComponent_GetTotalMissionsInDifficultyOfVariationType_Params
{
};

// Function Dungeons.MissionProgressComponent.GetNumCompletedMissionsAtDifficulty
struct UMissionProgressComponent_GetNumCompletedMissionsAtDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionValidThreatLevel
struct UMissionProgressComponent_GetMissionValidThreatLevel_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionValidEndlessStruggle
struct UMissionProgressComponent_GetMissionValidEndlessStruggle_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionUnlockRequirements
struct UMissionProgressComponent_GetMissionUnlockRequirements_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionThreatLevelCompleted
struct UMissionProgressComponent_GetMissionThreatLevelCompleted_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionNamesOfInterestInDifficulty
struct UMissionProgressComponent_GetMissionNamesOfInterestInDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionMarkerInterestTypes
struct UMissionProgressComponent_GetMissionMarkerInterestTypes_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionFilteredInterestTypes
struct UMissionProgressComponent_GetMissionFilteredInterestTypes_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMissionDifficultyCompleted
struct UMissionProgressComponent_GetMissionDifficultyCompleted_Params
{
};

// Function Dungeons.MissionProgressComponent.GetMapUIState
struct UMissionProgressComponent_GetMapUIState_Params
{
};

// Function Dungeons.MissionProgressComponent.GetHighestUnlockedEndlessStruggle
struct UMissionProgressComponent_GetHighestUnlockedEndlessStruggle_Params
{
};

// Function Dungeons.MissionProgressComponent.GetHighestCompletedEndlessStruggle
struct UMissionProgressComponent_GetHighestCompletedEndlessStruggle_Params
{
};

// Function Dungeons.MissionProgressComponent.GetHasCompletedMissionAtDifficulty
struct UMissionProgressComponent_GetHasCompletedMissionAtDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.GetCompletedMissionsInDifficultyOfVariationType
struct UMissionProgressComponent_GetCompletedMissionsInDifficultyOfVariationType_Params
{
};

// Function Dungeons.MissionProgressComponent.GetCompletedMissions
struct UMissionProgressComponent_GetCompletedMissions_Params
{
};

// Function Dungeons.MissionProgressComponent.GetBestMissionInterestCarouselInDifficulty
struct UMissionProgressComponent_GetBestMissionInterestCarouselInDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.DoesMissionHaveNewSecretLocations
struct UMissionProgressComponent_DoesMissionHaveNewSecretLocations_Params
{
};

// Function Dungeons.MissionProgressComponent.DoesMissionHaveNewRewards
struct UMissionProgressComponent_DoesMissionHaveNewRewards_Params
{
};

// Function Dungeons.MissionProgressComponent.DoesMissionHaveNewCapturedMerchants
struct UMissionProgressComponent_DoesMissionHaveNewCapturedMerchants_Params
{
};

// Function Dungeons.MissionProgressComponent.CountMissionsOfInterestInDifficulty
struct UMissionProgressComponent_CountMissionsOfInterestInDifficulty_Params
{
};

// Function Dungeons.MissionProgressComponent.ClearMissionState
struct UMissionProgressComponent_ClearMissionState_Params
{
};

// Function Dungeons.MissionProgressComponent.AreAllAvailableMissionDifficultiesCompleted
struct UMissionProgressComponent_AreAllAvailableMissionDifficultiesCompleted_Params
{
};

// Function Dungeons.MissionProgressHandler.PlayMissionEndVideo
struct AMissionProgressHandler_PlayMissionEndVideo_Params
{
};

// Function Dungeons.MissionProgressHandler.OnShowMissionVictory
struct AMissionProgressHandler_OnShowMissionVictory_Params
{
};

// Function Dungeons.MissionProgressHandler.OnRep_UpdateUI
struct AMissionProgressHandler_OnRep_UpdateUI_Params
{
};

// Function Dungeons.MissionProgressHandler.OnRep_MissionUpdated
struct AMissionProgressHandler_OnRep_MissionUpdated_Params
{
};

// Function Dungeons.MissionProgressHandler.OnRep_MissionDetails
struct AMissionProgressHandler_OnRep_MissionDetails_Params
{
};

// Function Dungeons.MissionProgressHandler.OnMissionFinished
struct AMissionProgressHandler_OnMissionFinished_Params
{
};

// Function Dungeons.MissionProgressHandler.OnEndVideoFinished
struct AMissionProgressHandler_OnEndVideoFinished_Params
{
};

// Function Dungeons.MissionProgressHandler.MulticastObjectiveEventLocation
struct AMissionProgressHandler_MulticastObjectiveEventLocation_Params
{
};

// Function Dungeons.MissionProgressHandler.MulticastMissionFinished
struct AMissionProgressHandler_MulticastMissionFinished_Params
{
};

// Function Dungeons.MissionProgressHandler.MulticastInstantMoveToLobby
struct AMissionProgressHandler_MulticastInstantMoveToLobby_Params
{
};

// Function Dungeons.MissionProgressHandler.MulticastGameOver
struct AMissionProgressHandler_MulticastGameOver_Params
{
};

// Function Dungeons.MissionProgressHandler.MoveToLobby
struct AMissionProgressHandler_MoveToLobby_Params
{
};

// Function Dungeons.MissionProgressHandler.MissionCancelledTravelToLobby
struct AMissionProgressHandler_MissionCancelledTravelToLobby_Params
{
};

// Function Dungeons.MissionProgressHandler.GetMissionProgressionCount
struct AMissionProgressHandler_GetMissionProgressionCount_Params
{
};

// Function Dungeons.MissionProgressHandler.FinishedObjectiveTag
struct AMissionProgressHandler_FinishedObjectiveTag_Params
{
};

// Function Dungeons.MissionQuery.GetPropNamesForTile
struct UMissionQuery_GetPropNamesForTile_Params
{
};

// Function Dungeons.MissionQuery.GetLevelName
struct UMissionQuery_GetLevelName_Params
{
};

// Function Dungeons.MissionRequestUtil.GetMissionState
struct UMissionRequestUtil_GetMissionState_Params
{
};

// Function Dungeons.MissionRequestUtil.GetMissionRequestDesiredEditor
struct UMissionRequestUtil_GetMissionRequestDesiredEditor_Params
{
};

// Function Dungeons.MissionRequestUtil.CreateMissionRequest
struct UMissionRequestUtil_CreateMissionRequest_Params
{
};

// Function Dungeons.MissionSelectorComponent.TryStartMissionSelection
struct UMissionSelectorComponent_TryStartMissionSelection_Params
{
};

// Function Dungeons.MissionSelectorComponent.TryContinueMission
struct UMissionSelectorComponent_TryContinueMission_Params
{
};

// Function Dungeons.MissionSelectorComponent.TravelToMission
struct UMissionSelectorComponent_TravelToMission_Params
{
};

// Function Dungeons.MissionSelectorComponent.ServerRequestLevel
struct UMissionSelectorComponent_ServerRequestLevel_Params
{
};

// Function Dungeons.MissionSelectorComponent.ServerReject
struct UMissionSelectorComponent_ServerReject_Params
{
};

// Function Dungeons.MissionSelectorComponent.ServerAccept
struct UMissionSelectorComponent_ServerAccept_Params
{
};

// Function Dungeons.MissionSelectorComponent.HandleLogout
struct UMissionSelectorComponent_HandleLogout_Params
{
};

// Function Dungeons.MissionSelectorComponent.ClientRequestFinished
struct UMissionSelectorComponent_ClientRequestFinished_Params
{
};

// Function Dungeons.MissionSelectorComponent.ClientLevelStarting
struct UMissionSelectorComponent_ClientLevelStarting_Params
{
};

// Function Dungeons.MissionSelectorComponent.ClientLevelRequested
struct UMissionSelectorComponent_ClientLevelRequested_Params
{
};

// Function Dungeons.MissionStateUtil.GetTotalDisplayItemPower
struct UMissionStateUtil_GetTotalDisplayItemPower_Params
{
};

// Function Dungeons.MissionStateUtil.getThreatLevel
struct UMissionStateUtil_getThreatLevel_Params
{
};

// Function Dungeons.MissionStateUtil.getMissionDifficulty
struct UMissionStateUtil_getMissionDifficulty_Params
{
};

// Function Dungeons.MissionStateUtil.GetLevelName
struct UMissionStateUtil_GetLevelName_Params
{
};

// Function Dungeons.MissionStateUtil.getEndlessStruggle
struct UMissionStateUtil_getEndlessStruggle_Params
{
};

// Function Dungeons.MissionStateUtil.getDifficulty
struct UMissionStateUtil_getDifficulty_Params
{
};

// Function Dungeons.MissionStateUtil.GetBulletPoints
struct UMissionStateUtil_GetBulletPoints_Params
{
};

// Function Dungeons.MissionThemeDefs.unloadThemeTextures
struct UMissionThemeDefs_unloadThemeTextures_Params
{
};

// Function Dungeons.MissionThemeDefs.preloadThemeTextures
struct UMissionThemeDefs_preloadThemeTextures_Params
{
};

// Function Dungeons.MissionThemeDefs.getRowName
struct UMissionThemeDefs_getRowName_Params
{
};

// Function Dungeons.MissionThemeDefs.getLockedDisplayText
struct UMissionThemeDefs_getLockedDisplayText_Params
{
};

// Function Dungeons.MissionThemeDefs.getLockedDescriptionText
struct UMissionThemeDefs_getLockedDescriptionText_Params
{
};

// Function Dungeons.MissionThemeDefs.GetDisplayText
struct UMissionThemeDefs_GetDisplayText_Params
{
};

// Function Dungeons.MobActivationComponent.IsMobActive
struct UMobActivationComponent_IsMobActive_Params
{
};

// Function Dungeons.MobActivationComponent.DeactivateMob
struct UMobActivationComponent_DeactivateMob_Params
{
};

// Function Dungeons.MobActivationComponent.ActivateMob
struct UMobActivationComponent_ActivateMob_Params
{
};

// Function Dungeons.MobBtController.OnDeath
struct AMobBtController_OnDeath_Params
{
};

// Function Dungeons.MobCharacter.TrySpawnXPOrbs
struct AMobCharacter_TrySpawnXPOrbs_Params
{
};

// Function Dungeons.MobCharacter.PlayerLeftVisibleRange
struct AMobCharacter_PlayerLeftVisibleRange_Params
{
};

// Function Dungeons.MobCharacter.PlayerInVisibleRangeChanged
struct AMobCharacter_PlayerInVisibleRangeChanged_Params
{
};

// Function Dungeons.MobCharacter.PlayerEnteredVisibleRange
struct AMobCharacter_PlayerEnteredVisibleRange_Params
{
};

// Function Dungeons.MobCharacter.OnUnderwaterTagChange
struct AMobCharacter_OnUnderwaterTagChange_Params
{
};

// Function Dungeons.MobCharacter.MobAtExtremePlayerRangeChanged
struct AMobCharacter_MobAtExtremePlayerRangeChanged_Params
{
};

// Function Dungeons.MobCharacter.IsEventMob
struct AMobCharacter_IsEventMob_Params
{
};

// Function Dungeons.MobCharacter.HasTag
struct AMobCharacter_HasTag_Params
{
};

// Function Dungeons.MobCharacter.GetMusicSequenceState
struct AMobCharacter_GetMusicSequenceState_Params
{
};

// Function Dungeons.MobCharacter.GetDisplayName
struct AMobCharacter_GetDisplayName_Params
{
};

// Function Dungeons.MobCharacter.AIController
struct AMobCharacter_AIController_Params
{
};

// Function Dungeons.MobEnchantmentComponent.GetEnchantmentsNonInherent
struct UMobEnchantmentComponent_GetEnchantmentsNonInherent_Params
{
};

// Function Dungeons.MobMashShockWave.OnOverlapBegin
struct AMobMashShockWave_OnOverlapBegin_Params
{
};

// Function Dungeons.MobMasherInstance.MulticastSpawnShockwave
struct AMobMasherInstance_MulticastSpawnShockwave_Params
{
};

// Function Dungeons.MobSummonItem.OnPlayerDeath
struct AMobSummonItem_OnPlayerDeath_Params
{
};

// Function Dungeons.MobSummonItem.OnPetDied
struct AMobSummonItem_OnPetDied_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_SpeedMultiplier
struct UMovementAttributeSet_OnRep_SpeedMultiplier_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_RotationMultiplier
struct UMovementAttributeSet_OnRep_RotationMultiplier_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_MaxDodgeCharges
struct UMovementAttributeSet_OnRep_MaxDodgeCharges_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_Gravity
struct UMovementAttributeSet_OnRep_Gravity_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_FrictionMultiplier
struct UMovementAttributeSet_OnRep_FrictionMultiplier_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_DodgeSpeed
struct UMovementAttributeSet_OnRep_DodgeSpeed_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_DodgeCooldown
struct UMovementAttributeSet_OnRep_DodgeCooldown_Params
{
};

// Function Dungeons.MovementAttributeSet.OnRep_DodgeCharges
struct UMovementAttributeSet_OnRep_DodgeCharges_Params
{
};

// Function Dungeons.MoveToTargetMovementComponent.SetTarget
struct UMoveToTargetMovementComponent_SetTarget_Params
{
};

// Function Dungeons.MoveToTargetMovementComponent.Reset
struct UMoveToTargetMovementComponent_Reset_Params
{
};

// Function Dungeons.MultiDodge.OnDodgeCounterIncreased
struct UMultiDodge_OnDodgeCounterIncreased_Params
{
};

// Function Dungeons.MultiDodge.OnDodgeCounterDecreased
struct UMultiDodge_OnDodgeCounterDecreased_Params
{
};

// Function Dungeons.MultiDodge.OnCooldownChanged
struct UMultiDodge_OnCooldownChanged_Params
{
};

// Function Dungeons.MultiDodge.AfterDodgeCooldown
struct UMultiDodge_AfterDodgeCooldown_Params
{
};

// Function Dungeons.MultiShot.SpawnProjectilesMulticast
struct UMultiShot_SpawnProjectilesMulticast_Params
{
};

// Function Dungeons.MusicOverrideComponent.GetEventMobMusicTracks
struct UMusicOverrideComponent_GetEventMobMusicTracks_Params
{
};

// Function Dungeons.SporeGrenade.OnPreDestroy
struct ASporeGrenade_OnPreDestroy_Params
{
};

// Function Dungeons.SporeGrenade.OnOverlapBegin
struct ASporeGrenade_OnOverlapBegin_Params
{
};

// Function Dungeons.NetherWartSporeGrenadeInstance.MulticastSpawnGrenades
struct ANetherWartSporeGrenadeInstance_MulticastSpawnGrenades_Params
{
};

// Function Dungeons.NotificationBroadcastActor.OnItemPickup
struct ANotificationBroadcastActor_OnItemPickup_Params
{
};

// Function Dungeons.NotificationBroadcastActor.MulticastPlayerLeftNotification
struct ANotificationBroadcastActor_MulticastPlayerLeftNotification_Params
{
};

// Function Dungeons.NotificationBroadcastActor.MulticastPlayerJoinedNotification
struct ANotificationBroadcastActor_MulticastPlayerJoinedNotification_Params
{
};

// Function Dungeons.ObjectiveIndicators.IsInsideCoopHotbar
struct UObjectiveIndicators_IsInsideCoopHotbar_Params
{
};

// Function Dungeons.OfferEnchantmentPoints.SetOfferedEnchantmentPoints
struct UOfferEnchantmentPoints_SetOfferedEnchantmentPoints_Params
{
};

// Function Dungeons.OfferEnchantmentPoints.GetOfferedEnchantmentPoints
struct UOfferEnchantmentPoints_GetOfferedEnchantmentPoints_Params
{
};

// Function Dungeons.OfferEnchantmentPoints.GetMaxOfferableEnchantmentPoints
struct UOfferEnchantmentPoints_GetMaxOfferableEnchantmentPoints_Params
{
};

// Function Dungeons.OneYearEventTracker.OnRequestUpdate
struct UOneYearEventTracker_OnRequestUpdate_Params
{
};

// Function Dungeons.OnlineFunctionLib.AllowToggleFriendsSidebar
struct UOnlineFunctionLib_AllowToggleFriendsSidebar_Params
{
};

// Function Dungeons.OnlineTextLabels.GetSignInError
struct UOnlineTextLabels_GetSignInError_Params
{
};

// Function Dungeons.OnlineTextLabels.GetPrivilegeError
struct UOnlineTextLabels_GetPrivilegeError_Params
{
};

// Function Dungeons.OnlineTextLabels.GetLinkAccountError
struct UOnlineTextLabels_GetLinkAccountError_Params
{
};

// Function Dungeons.OnlineTextLabels.GetAuthenticationErrorTitle
struct UOnlineTextLabels_GetAuthenticationErrorTitle_Params
{
};

// Function Dungeons.OnlineTextLabels.GetAuthenticationErrorMessage
struct UOnlineTextLabels_GetAuthenticationErrorMessage_Params
{
};

// Function Dungeons.OnlineUtil.IsOnlineSession
struct UOnlineUtil_IsOnlineSession_Params
{
};

// Function Dungeons.OnlineUtil.GetSessionType
struct UOnlineUtil_GetSessionType_Params
{
};

// Function Dungeons.OnlineUtil.GetSessionEnumType
struct UOnlineUtil_GetSessionEnumType_Params
{
};

// Function Dungeons.OpenChatDungeonsSessionCallbackProxy.OpenChatDungeonsFriend
struct UOpenChatDungeonsSessionCallbackProxy_OpenChatDungeonsFriend_Params
{
};

// Function Dungeons.OverlapListener.OnBeginOverlap
struct AOverlapListener_OnBeginOverlap_Params
{
};

// Function Dungeons.OxygenAttributeSet.OnRep_Oxygen
struct UOxygenAttributeSet_OnRep_Oxygen_Params
{
};

// Function Dungeons.OxygenAttributeSet.OnRep_MaxOxygen
struct UOxygenAttributeSet_OnRep_MaxOxygen_Params
{
};

// Function Dungeons.OxygenComponent.SetIsUnderwater
struct UOxygenComponent_SetIsUnderwater_Params
{
};

// Function Dungeons.OxygenComponent.OnWaterBreathingTagChange
struct UOxygenComponent_OnWaterBreathingTagChange_Params
{
};

// Function Dungeons.OxygenComponent.OnUnderwaterTagChange
struct UOxygenComponent_OnUnderwaterTagChange_Params
{
};

// Function Dungeons.OxygenComponent.OnNotifyOxygenLow
struct UOxygenComponent_OnNotifyOxygenLow_Params
{
};

// Function Dungeons.OxygenComponent.OnDrowning
struct UOxygenComponent_OnDrowning_Params
{
};

// Function Dungeons.OxygenComponent.GetMaximumOxygen
struct UOxygenComponent_GetMaximumOxygen_Params
{
};

// Function Dungeons.OxygenComponent.GetIsUnderwater
struct UOxygenComponent_GetIsUnderwater_Params
{
};

// Function Dungeons.OxygenComponent.GetIsOxygenLow
struct UOxygenComponent_GetIsOxygenLow_Params
{
};

// Function Dungeons.OxygenComponent.GetCurrentOxygenPercentage
struct UOxygenComponent_GetCurrentOxygenPercentage_Params
{
};

// Function Dungeons.OxygenComponent.GetCurrentOxygen
struct UOxygenComponent_GetCurrentOxygen_Params
{
};

// Function Dungeons.OxygenComponent.FillOxygen
struct UOxygenComponent_FillOxygen_Params
{
};

// Function Dungeons.OxygenComponent.EnableWaterBreathing
struct UOxygenComponent_EnableWaterBreathing_Params
{
};

// Function Dungeons.OxygenComponent.Client_OnDrowning
struct UOxygenComponent_Client_OnDrowning_Params
{
};

// Function Dungeons.OxygenComponent.BroadcastUnderwaterDelegate
struct UOxygenComponent_BroadcastUnderwaterDelegate_Params
{
};

// Function Dungeons.OxygenComponent.BeginPlay
struct UOxygenComponent_BeginPlay_Params
{
};

// Function Dungeons.OxygenSourceComponent.GetIsEnabled
struct AOxygenSourceComponent_GetIsEnabled_Params
{
};

// Function Dungeons.OxygenSourceComponent.EnableSound
struct AOxygenSourceComponent_EnableSound_Params
{
};

// Function Dungeons.OxygenSourceComponent.EnableMapPin
struct AOxygenSourceComponent_EnableMapPin_Params
{
};

// Function Dungeons.OxygenSourceComponent.Enable
struct AOxygenSourceComponent_Enable_Params
{
};

// Function Dungeons.PickupItemComponent.HandleActivateInstantItemServer
struct UPickupItemComponent_HandleActivateInstantItemServer_Params
{
};

// Function Dungeons.PickupItemComponent.CanPickup
struct UPickupItemComponent_CanPickup_Params
{
};

// Function Dungeons.PickupStorableComponent.ServerStore
struct UPickupStorableComponent_ServerStore_Params
{
};

// Function Dungeons.PickupStorableComponent.ServerSendPickupCounts
struct UPickupStorableComponent_ServerSendPickupCounts_Params
{
};

// Function Dungeons.PlayerAvatarComponent.ServerSelectSkin
struct UPlayerAvatarComponent_ServerSelectSkin_Params
{
};

// Function Dungeons.PlayerAvatarComponent.OnRep_SelectedSkin
struct UPlayerAvatarComponent_OnRep_SelectedSkin_Params
{
};

// Function Dungeons.PlayerAvatarComponent.OnRep_Color
struct UPlayerAvatarComponent_OnRep_Color_Params
{
};

// Function Dungeons.PlayerCharacter.TeleportToFriend
struct APlayerCharacter_TeleportToFriend_Params
{
};

// Function Dungeons.PlayerCharacter.TeleportPlayerToActor
struct APlayerCharacter_TeleportPlayerToActor_Params
{
};

// Function Dungeons.PlayerCharacter.SetReadyToPlayInternal
struct APlayerCharacter_SetReadyToPlayInternal_Params
{
};

// Function Dungeons.PlayerCharacter.SetReadyToPlay
struct APlayerCharacter_SetReadyToPlay_Params
{
};

// Function Dungeons.PlayerCharacter.SetIsInInventory
struct APlayerCharacter_SetIsInInventory_Params
{
};

// Function Dungeons.PlayerCharacter.ServerlaunchPlayer
struct APlayerCharacter_ServerlaunchPlayer_Params
{
};

// Function Dungeons.PlayerCharacter.SalvagePendingRewardItem
struct APlayerCharacter_SalvagePendingRewardItem_Params
{
};

// Function Dungeons.PlayerCharacter.RestartAtCheckpoint
struct APlayerCharacter_RestartAtCheckpoint_Params
{
};

// Function Dungeons.PlayerCharacter.RespawnPlayerMulticast
struct APlayerCharacter_RespawnPlayerMulticast_Params
{
};

// Function Dungeons.PlayerCharacter.PopToPlayer
struct APlayerCharacter_PopToPlayer_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_TridentKillCount
struct APlayerCharacter_OnRep_TridentKillCount_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_TNTKillCount
struct APlayerCharacter_OnRep_TNTKillCount_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_SpinBladeHitCount
struct APlayerCharacter_OnRep_SpinBladeHitCount_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_OpenedChestRarity
struct APlayerCharacter_OnRep_OpenedChestRarity_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_OcelotArmourTracking
struct APlayerCharacter_OnRep_OcelotArmourTracking_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_LoadedType
struct APlayerCharacter_OnRep_LoadedType_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_IceWeaponTracking
struct APlayerCharacter_OnRep_IceWeaponTracking_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_IceWandKillCount
struct APlayerCharacter_OnRep_IceWandKillCount_Params
{
};

// Function Dungeons.PlayerCharacter.OnRep_EmeraldArmourTracking
struct APlayerCharacter_OnRep_EmeraldArmourTracking_Params
{
};

// Function Dungeons.PlayerCharacter.OnPlayerTeleported
struct APlayerCharacter_OnPlayerTeleported_Params
{
};

// Function Dungeons.PlayerCharacter.OnPlayerNumberUpdated
struct APlayerCharacter_OnPlayerNumberUpdated_Params
{
};

// Function Dungeons.PlayerCharacter.OnPlayerAction
struct APlayerCharacter_OnPlayerAction_Params
{
};

// Function Dungeons.PlayerCharacter.OnOtherPlayerLeft
struct APlayerCharacter_OnOtherPlayerLeft_Params
{
};

// Function Dungeons.PlayerCharacter.OnOtherPlayerJoined
struct APlayerCharacter_OnOtherPlayerJoined_Params
{
};

// Function Dungeons.PlayerCharacter.OnLostConduit
struct APlayerCharacter_OnLostConduit_Params
{
};

// Function Dungeons.PlayerCharacter.OnLocalPlayerTeleported
struct APlayerCharacter_OnLocalPlayerTeleported_Params
{
};

// Function Dungeons.PlayerCharacter.OnLlamaOffering
struct APlayerCharacter_OnLlamaOffering_Params
{
};

// Function Dungeons.PlayerCharacter.OnIceWandGlowSquid
struct APlayerCharacter_OnIceWandGlowSquid_Params
{
};

// Function Dungeons.PlayerCharacter.OnFootstep
struct APlayerCharacter_OnFootstep_Params
{
};

// Function Dungeons.PlayerCharacter.OnEnterBubbleColumn
struct APlayerCharacter_OnEnterBubbleColumn_Params
{
};

// Function Dungeons.PlayerCharacter.OnCharacterDown
struct APlayerCharacter_OnCharacterDown_Params
{
};

// Function Dungeons.PlayerCharacter.OnCapsuleEndOverlap
struct APlayerCharacter_OnCapsuleEndOverlap_Params
{
};

// Function Dungeons.PlayerCharacter.OnCapsuleBeginOverlap
struct APlayerCharacter_OnCapsuleBeginOverlap_Params
{
};

// Function Dungeons.PlayerCharacter.OnBubbledEnemy
struct APlayerCharacter_OnBubbledEnemy_Params
{
};

// Function Dungeons.PlayerCharacter.NumPendingRewards
struct APlayerCharacter_NumPendingRewards_Params
{
};

// Function Dungeons.PlayerCharacter.LaunchCharacterToPos
struct APlayerCharacter_LaunchCharacterToPos_Params
{
};

// Function Dungeons.PlayerCharacter.IsOwnedByHostChanged
struct APlayerCharacter_IsOwnedByHostChanged_Params
{
};

// Function Dungeons.PlayerCharacter.IsOwnedByHost
struct APlayerCharacter_IsOwnedByHost_Params
{
};

// Function Dungeons.PlayerCharacter.IsOnGround
struct APlayerCharacter_IsOnGround_Params
{
};

// Function Dungeons.PlayerCharacter.IsLoadedInLevel
struct APlayerCharacter_IsLoadedInLevel_Params
{
};

// Function Dungeons.PlayerCharacter.IsInInventory
struct APlayerCharacter_IsInInventory_Params
{
};

// Function Dungeons.PlayerCharacter.IsIcyBreath
struct APlayerCharacter_IsIcyBreath_Params
{
};

// Function Dungeons.PlayerCharacter.IsDodgeRolling
struct APlayerCharacter_IsDodgeRolling_Params
{
};

// Function Dungeons.PlayerCharacter.IsDodgeOnCooldown
struct APlayerCharacter_IsDodgeOnCooldown_Params
{
};

// Function Dungeons.PlayerCharacter.IsAllowedToPerformAction
struct APlayerCharacter_IsAllowedToPerformAction_Params
{
};

// Function Dungeons.PlayerCharacter.InWorldAndAlive
struct APlayerCharacter_InWorldAndAlive_Params
{
};

// Function Dungeons.PlayerCharacter.HasPendingRewardItem
struct APlayerCharacter_HasPendingRewardItem_Params
{
};

// Function Dungeons.PlayerCharacter.HasDodgesLeft
struct APlayerCharacter_HasDodgesLeft_Params
{
};

// Function Dungeons.PlayerCharacter.HasBeenInCombat
struct APlayerCharacter_HasBeenInCombat_Params
{
};

// Function Dungeons.PlayerCharacter.HandleInteraction
struct APlayerCharacter_HandleInteraction_Params
{
};

// Function Dungeons.PlayerCharacter.GetTeleportState
struct APlayerCharacter_GetTeleportState_Params
{
};

// Function Dungeons.PlayerCharacter.GetTeleportDependents
struct APlayerCharacter_GetTeleportDependents_Params
{
};

// Function Dungeons.PlayerCharacter.GetTeleportCandidates
struct APlayerCharacter_GetTeleportCandidates_Params
{
};

// Function Dungeons.PlayerCharacter.GetStatTracker
struct APlayerCharacter_GetStatTracker_Params
{
};

// Function Dungeons.PlayerCharacter.GetPlayerNumber
struct APlayerCharacter_GetPlayerNumber_Params
{
};

// Function Dungeons.PlayerCharacter.GetPlayerColor
struct APlayerCharacter_GetPlayerColor_Params
{
};

// Function Dungeons.PlayerCharacter.GetPlayerAvatarData
struct APlayerCharacter_GetPlayerAvatarData_Params
{
};

// Function Dungeons.PlayerCharacter.GetPendingRewardItemRewardType
struct APlayerCharacter_GetPendingRewardItemRewardType_Params
{
};

// Function Dungeons.PlayerCharacter.GetPendingRewardItem
struct APlayerCharacter_GetPendingRewardItem_Params
{
};

// Function Dungeons.PlayerCharacter.GetLocalPlayerDisplayText
struct APlayerCharacter_GetLocalPlayerDisplayText_Params
{
};

// Function Dungeons.PlayerCharacter.GetItemSlotOfType
struct APlayerCharacter_GetItemSlotOfType_Params
{
};

// Function Dungeons.PlayerCharacter.GetDodgeCooldownProvider
struct APlayerCharacter_GetDodgeCooldownProvider_Params
{
};

// Function Dungeons.PlayerCharacter.GetDodgeCooldownFraction
struct APlayerCharacter_GetDodgeCooldownFraction_Params
{
};

// Function Dungeons.PlayerCharacter.GetCharacterLevel
struct APlayerCharacter_GetCharacterLevel_Params
{
};

// Function Dungeons.PlayerCharacter.GetBasePlayerDisplayName
struct APlayerCharacter_GetBasePlayerDisplayName_Params
{
};

// Function Dungeons.PlayerCharacter.GetAliveState
struct APlayerCharacter_GetAliveState_Params
{
};

// Function Dungeons.PlayerCharacter.GameplayCue_Damage_Weak
struct APlayerCharacter_GameplayCue_Damage_Weak_Params
{
};

// Function Dungeons.PlayerCharacter.GameplayCue_Damage
struct APlayerCharacter_GameplayCue_Damage_Params
{
};

// Function Dungeons.PlayerCharacter.ClientUnlockMerchant
struct APlayerCharacter_ClientUnlockMerchant_Params
{
};

// Function Dungeons.PlayerCharacter.ClientUnlockBonusMission
struct APlayerCharacter_ClientUnlockBonusMission_Params
{
};

// Function Dungeons.PlayerCharacter.Client_OnLostConduit
struct APlayerCharacter_Client_OnLostConduit_Params
{
};

// Function Dungeons.PlayerCharacter.Client_OnLlamaOffering
struct APlayerCharacter_Client_OnLlamaOffering_Params
{
};

// Function Dungeons.PlayerCharacter.Client_OnIceWandGlowSquid
struct APlayerCharacter_Client_OnIceWandGlowSquid_Params
{
};

// Function Dungeons.PlayerCharacter.Client_OnEnterBubbleColumn
struct APlayerCharacter_Client_OnEnterBubbleColumn_Params
{
};

// Function Dungeons.PlayerCharacter.Client_OnBubbledEnemy
struct APlayerCharacter_Client_OnBubbledEnemy_Params
{
};

// Function Dungeons.PlayerCharacter.ClaimPendingRewardItem
struct APlayerCharacter_ClaimPendingRewardItem_Params
{
};

// Function Dungeons.PlayerCharacter.CanPop
struct APlayerCharacter_CanPop_Params
{
};

// Function Dungeons.PlayerCharacter.CanDodge
struct APlayerCharacter_CanDodge_Params
{
};

// Function Dungeons.PlayerCharacter.ApplyMaterialToMesh
struct APlayerCharacter_ApplyMaterialToMesh_Params
{
};

// Function Dungeons.PlayerCharacter.ActivateSupplies
struct APlayerCharacter_ActivateSupplies_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetTotalEquippedGearPower
struct UPlayerCharacterDataProvider_GetTotalEquippedGearPower_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetOwnedGold
struct UPlayerCharacterDataProvider_GetOwnedGold_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetOwnedEmeralds
struct UPlayerCharacterDataProvider_GetOwnedEmeralds_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetLevel
struct UPlayerCharacterDataProvider_GetLevel_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetCharacterSkinId
struct UPlayerCharacterDataProvider_GetCharacterSkinId_Params
{
};

// Function Dungeons.PlayerCharacterDataProvider.GetCharacterName
struct UPlayerCharacterDataProvider_GetCharacterName_Params
{
};

// Function Dungeons.PlayerCharacterFunctionLibrary.GetPlayerCharacterByPlayerId
struct UPlayerCharacterFunctionLibrary_GetPlayerCharacterByPlayerId_Params
{
};

// Function Dungeons.PlayerCharacterFunctionLibrary.CountRemotePlayerCharacters
struct UPlayerCharacterFunctionLibrary_CountRemotePlayerCharacters_Params
{
};

// Function Dungeons.PlayerCharacterFunctionLibrary.CountLocalPlayerCharacters
struct UPlayerCharacterFunctionLibrary_CountLocalPlayerCharacters_Params
{
};

// Function Dungeons.PlayerCharacterMovementComponent.ServerBeginDodgePrediction
struct UPlayerCharacterMovementComponent_ServerBeginDodgePrediction_Params
{
};

// Function Dungeons.PlayerCharacterMovementComponent.ReplenishGravity
struct UPlayerCharacterMovementComponent_ReplenishGravity_Params
{
};

// Function Dungeons.PlayerCharacterMovementComponent.OnDodgeAnimationEndedTimer
struct UPlayerCharacterMovementComponent_OnDodgeAnimationEndedTimer_Params
{
};

// Function Dungeons.PlayerCharacterMovementComponent.OnDodgeAnimationEnded
struct UPlayerCharacterMovementComponent_OnDodgeAnimationEnded_Params
{
};

// Function Dungeons.PlayerCharacterMovementComponent.MulticastOnDodgeBegun
struct UPlayerCharacterMovementComponent_MulticastOnDodgeBegun_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.UpdateDateTimeToNow
struct APlayerCharacterSaveSlot_UpdateDateTimeToNow_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.IsDLCRequired
struct APlayerCharacterSaveSlot_IsDLCRequired_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.IsDLCEntitled
struct APlayerCharacterSaveSlot_IsDLCEntitled_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetPlayerAvatarComponent
struct APlayerCharacterSaveSlot_GetPlayerAvatarComponent_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetLegendaryStatus
struct APlayerCharacterSaveSlot_GetLegendaryStatus_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetItemStashComponent
struct APlayerCharacterSaveSlot_GetItemStashComponent_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetEquipmentComponent
struct APlayerCharacterSaveSlot_GetEquipmentComponent_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetDateTime
struct APlayerCharacterSaveSlot_GetDateTime_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetCosmeticsComponent
struct APlayerCharacterSaveSlot_GetCosmeticsComponent_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetCloudUploadeDateTime
struct APlayerCharacterSaveSlot_GetCloudUploadeDateTime_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.GetCloudPlayerId
struct APlayerCharacterSaveSlot_GetCloudPlayerId_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.ChangeSkinId
struct APlayerCharacterSaveSlot_ChangeSkinId_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.ChangeName
struct APlayerCharacterSaveSlot_ChangeName_Params
{
};

// Function Dungeons.PlayerCharacterSaveSlot.ChangeLegendaryStatus
struct APlayerCharacterSaveSlot_ChangeLegendaryStatus_Params
{
};

// Function Dungeons.PlayerControllerBaseFunctionLibrary.GetMaxControllerIndex
struct UPlayerControllerBaseFunctionLibrary_GetMaxControllerIndex_Params
{
};

// Function Dungeons.PlayerControllerBaseFunctionLibrary.GetFirstDungeonsPlayerController
struct UPlayerControllerBaseFunctionLibrary_GetFirstDungeonsPlayerController_Params
{
};

// Function Dungeons.PlayerControllerBaseFunctionLibrary.CountControllers
struct UPlayerControllerBaseFunctionLibrary_CountControllers_Params
{
};

// Function Dungeons.PlayerCoopCamera.UnblockPopping
struct APlayerCoopCamera_UnblockPopping_Params
{
};

// Function Dungeons.PlayerCoopCamera.CanPop
struct APlayerCoopCamera_CanPop_Params
{
};

// Function Dungeons.PlayerCoopCamera.BlockPopping
struct APlayerCoopCamera_BlockPopping_Params
{
};

// Function Dungeons.PlayerExperienceComponent.ServerSetXp
struct UPlayerExperienceComponent_ServerSetXp_Params
{
};

// Function Dungeons.PlayerExperienceComponent.OnRep_XpChanged
struct UPlayerExperienceComponent_OnRep_XpChanged_Params
{
};

// Function Dungeons.PlayerExperienceComponent.MulticastOnLevelUp
struct UPlayerExperienceComponent_MulticastOnLevelUp_Params
{
};

// Function Dungeons.PlayerExperienceComponent.LevelProgress
struct UPlayerExperienceComponent_LevelProgress_Params
{
};

// Function Dungeons.PlayerExperienceComponent.CurrentXp
struct UPlayerExperienceComponent_CurrentXp_Params
{
};

// Function Dungeons.PlayerExperienceComponent.CurrentLevel
struct UPlayerExperienceComponent_CurrentLevel_Params
{
};

// Function Dungeons.PlayerExperienceComponent.ClientRequestXp
struct UPlayerExperienceComponent_ClientRequestXp_Params
{
};

// Function Dungeons.PlayerView.ToggleActive
struct APlayerView_ToggleActive_Params
{
};

// Function Dungeons.PlayerView.SpinCharacter
struct APlayerView_SpinCharacter_Params
{
};

// Function Dungeons.PlayerView.SetPreferredCharacterRotation
struct APlayerView_SetPreferredCharacterRotation_Params
{
};

// Function Dungeons.PlayerView.SetPlayerCharacterSaveSlot
struct APlayerView_SetPlayerCharacterSaveSlot_Params
{
};

// Function Dungeons.PlayerView.SetPlayerCharacter
struct APlayerView_SetPlayerCharacter_Params
{
};

// Function Dungeons.PlayerView.RefreshSlotItemTypeCounts
struct APlayerView_RefreshSlotItemTypeCounts_Params
{
};

// Function Dungeons.PlayerView.RefreshSlotCosmeticCounts
struct APlayerView_RefreshSlotCosmeticCounts_Params
{
};

// Function Dungeons.PlayerView.ReEquipCape
struct APlayerView_ReEquipCape_Params
{
};

// Function Dungeons.PlayerView.OnWasDamaged
struct APlayerView_OnWasDamaged_Params
{
};

// Function Dungeons.PlayerView.OnPlayerHealthFractionChanged
struct APlayerView_OnPlayerHealthFractionChanged_Params
{
};

// Function Dungeons.PlayerView.OnOtherWasDamaged
struct APlayerView_OnOtherWasDamaged_Params
{
};

// Function Dungeons.PlayerView.OnOtherPlayerHealthFractionChanged
struct APlayerView_OnOtherPlayerHealthFractionChanged_Params
{
};

// Function Dungeons.PlayerView.OnItemTypeSlotSelected
struct APlayerView_OnItemTypeSlotSelected_Params
{
};

// Function Dungeons.PlayerView.OnItemTypeCountChanged
struct APlayerView_OnItemTypeCountChanged_Params
{
};

// Function Dungeons.PlayerView.OnGearItemSlotChanged
struct APlayerView_OnGearItemSlotChanged_Params
{
};

// Function Dungeons.PlayerView.OnEquippableItemSlotSelected
struct APlayerView_OnEquippableItemSlotSelected_Params
{
};

// Function Dungeons.PlayerView.OnEquippableItemSlotChanged
struct APlayerView_OnEquippableItemSlotChanged_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticSlotUpdated
struct APlayerView_OnCosmeticSlotUpdated_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticSlotItemHighlightChanged
struct APlayerView_OnCosmeticSlotItemHighlightChanged_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticSlotHighlightChanged
struct APlayerView_OnCosmeticSlotHighlightChanged_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticSlotEquipped
struct APlayerView_OnCosmeticSlotEquipped_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticItemEquipped
struct APlayerView_OnCosmeticItemEquipped_Params
{
};

// Function Dungeons.PlayerView.OnCosmeticCountChanged
struct APlayerView_OnCosmeticCountChanged_Params
{
};

// Function Dungeons.PlayerView.EquipCapeAfterDelay
struct APlayerView_EquipCapeAfterDelay_Params
{
};

// Function Dungeons.PlayerView.ApplyMaterialToMesh
struct APlayerView_ApplyMaterialToMesh_Params
{
};

// Function Dungeons.PlentifulQuiverInstance.OnSetCanAddArrow
struct APlentifulQuiverInstance_OnSetCanAddArrow_Params
{
};

// Function Dungeons.PoisonCloudSpawnHelper.SpawnPoisonCloud
struct UPoisonCloudSpawnHelper_SpawnPoisonCloud_Params
{
};

// Function Dungeons.PoisonCloud.OnDamageDisabled
struct APoisonCloud_OnDamageDisabled_Params
{
};

// Function Dungeons.PoisonCloud.OnCloudStarted
struct APoisonCloud_OnCloudStarted_Params
{
};

// Function Dungeons.Poisoned.PreCachePoisonClass
struct UPoisoned_PreCachePoisonClass_Params
{
};

// Function Dungeons.Poisoned.MulticastSpawnCloudEffect
struct UPoisoned_MulticastSpawnCloudEffect_Params
{
};

// Function Dungeons.PostGameWidget.Reset
struct UPostGameWidget_Reset_Params
{
};

// Function Dungeons.PostGameWidget.HasInfoToShow
struct UPostGameWidget_HasInfoToShow_Params
{
};

// Function Dungeons.PostGameWidget.GetMissionFinishedSummary
struct UPostGameWidget_GetMissionFinishedSummary_Params
{
};

// Function Dungeons.PotionFortification.OnHealthPotionActivated
struct UPotionFortification_OnHealthPotionActivated_Params
{
};

// Function Dungeons.ProgressStatUtil.GetProgressStatText
struct UProgressStatUtil_GetProgressStatText_Params
{
};

// Function Dungeons.ProgressStatUtil.GetProgressStatExplainerText
struct UProgressStatUtil_GetProgressStatExplainerText_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.SpawnXPOrbs
struct UProjectileFunctionLibrary_SpawnXPOrbs_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.SpawnProjectileProp
struct UProjectileFunctionLibrary_SpawnProjectileProp_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.SpawnOxygenBubble
struct UProjectileFunctionLibrary_SpawnOxygenBubble_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.SpawnHitParticleEffect
struct UProjectileFunctionLibrary_SpawnHitParticleEffect_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.SpawnAttachedArrowProp
struct UProjectileFunctionLibrary_SpawnAttachedArrowProp_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.PreCacheProjectileProp
struct UProjectileFunctionLibrary_PreCacheProjectileProp_Params
{
};

// Function Dungeons.ProjectileFunctionLibrary.DeSpawnAttachedArrowProp
struct UProjectileFunctionLibrary_DeSpawnAttachedArrowProp_Params
{
};

// Function Dungeons.ProjectileActorManager.OnPoolItemDestroyed
struct AProjectileActorManager_OnPoolItemDestroyed_Params
{
};

// Function Dungeons.ProjectileActorManager.OnHitParticleSystemFinished
struct AProjectileActorManager_OnHitParticleSystemFinished_Params
{
};

// Function Dungeons.ProjectileSpawnComponent.SpawnProjectiles
struct UProjectileSpawnComponent_SpawnProjectiles_Params
{
};

// Function Dungeons.ProjectileSpawnComponent.MulticastSpawnProjectiles
struct UProjectileSpawnComponent_MulticastSpawnProjectiles_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.NumberOfPushVolumeInfluences
struct UPushVolumeReactiveComponent_NumberOfPushVolumeInfluences_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.IsBeingEffectedByPushVolumes
struct UPushVolumeReactiveComponent_IsBeingEffectedByPushVolumes_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.GetResistanceIgnoredCumulativePushForce
struct UPushVolumeReactiveComponent_GetResistanceIgnoredCumulativePushForce_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.GetResistanceIgnoredCumulativePushDirection
struct UPushVolumeReactiveComponent_GetResistanceIgnoredCumulativePushDirection_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.GetCumulativePushForce
struct UPushVolumeReactiveComponent_GetCumulativePushForce_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.GetCumulativePushDirection
struct UPushVolumeReactiveComponent_GetCumulativePushDirection_Params
{
};

// Function Dungeons.PushVolumeReactiveComponent.CanVolumeInstanceBeAppliedToActor
struct UPushVolumeReactiveComponent_CanVolumeInstanceBeAppliedToActor_Params
{
};

// Function Dungeons.RagdollOnDeathComponent.UnRagdoll
struct URagdollOnDeathComponent_UnRagdoll_Params
{
};

// Function Dungeons.RagdollOnDeathComponent.LaunchOrStoreRagdollImpulse
struct URagdollOnDeathComponent_LaunchOrStoreRagdollImpulse_Params
{
};

// Function Dungeons.RagdollOnDeathComponent.ApplyPhysicsBlendWithRadialImpulse
struct URagdollOnDeathComponent_ApplyPhysicsBlendWithRadialImpulse_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedHealItemPowerFactor
struct URangedAttributeSet_OnRep_RangedHealItemPowerFactor_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackSpeedMultiplier
struct URangedAttributeSet_OnRep_RangedAttackSpeedMultiplier_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackPushbackMultiplier
struct URangedAttributeSet_OnRep_RangedAttackPushbackMultiplier_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackLifeStealAmount
struct URangedAttributeSet_OnRep_RangedAttackLifeStealAmount_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackItemPowerFactor
struct URangedAttributeSet_OnRep_RangedAttackItemPowerFactor_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackHitChanceMultiplier
struct URangedAttributeSet_OnRep_RangedAttackHitChanceMultiplier_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackDamageMultipler
struct URangedAttributeSet_OnRep_RangedAttackDamageMultipler_Params
{
};

// Function Dungeons.RangedAttributeSet.OnRep_RangedAttackDamageIncrease
struct URangedAttributeSet_OnRep_RangedAttackDamageIncrease_Params
{
};

// Function Dungeons.RangedWeaponGearItemInstance.GetRangedWeaponType
struct ARangedWeaponGearItemInstance_GetRangedWeaponType_Params
{
};

// Function Dungeons.RangedWeaponGearItemInstance.GetAnimNotifyStateSound
struct ARangedWeaponGearItemInstance_GetAnimNotifyStateSound_Params
{
};

// Function Dungeons.ReactsToHurt.ReactToHurt
struct UReactsToHurt_ReactToHurt_Params
{
};

// Function Dungeons.RealmDefs.IsRealmLocked
struct URealmDefs_IsRealmLocked_Params
{
};

// Function Dungeons.RealmDefs.GetRealmTravelText
struct URealmDefs_GetRealmTravelText_Params
{
};

// Function Dungeons.RealmDefs.GetRealmNameText
struct URealmDefs_GetRealmNameText_Params
{
};

// Function Dungeons.RealmDefs.GetRealmLockedTravelText
struct URealmDefs_GetRealmLockedTravelText_Params
{
};

// Function Dungeons.RealmDefs.GetRealmLockedDescriptionText
struct URealmDefs_GetRealmLockedDescriptionText_Params
{
};

// Function Dungeons.RealmDefs.GetEnabledRealmNames
struct URealmDefs_GetEnabledRealmNames_Params
{
};

// Function Dungeons.ReconnectComponent.Reconnect
struct UReconnectComponent_Reconnect_Params
{
};

// Function Dungeons.ReconnectComponent.OnSaveStateLoaded
struct UReconnectComponent_OnSaveStateLoaded_Params
{
};

// Function Dungeons.ReconnectComponent.IsCrossplaySession
struct UReconnectComponent_IsCrossplaySession_Params
{
};

// Function Dungeons.ReconnectComponent.ClearReconnect
struct UReconnectComponent_ClearReconnect_Params
{
};

// Function Dungeons.ReconnectComponent.CanReconnect
struct UReconnectComponent_CanReconnect_Params
{
};

// Function Dungeons.RecyclerQuiverInstance.OnSetAddArrow
struct ARecyclerQuiverInstance_OnSetAddArrow_Params
{
};

// Function Dungeons.RefreshSuppliesComponent.OnRep_UsedByChanged
struct URefreshSuppliesComponent_OnRep_UsedByChanged_Params
{
};

// Function Dungeons.Ricochet.MulticastRetargetArrow
struct URicochet_MulticastRetargetArrow_Params
{
};

// Function Dungeons.ReplicatedInteractableComponent.ServerMakeNonActive
struct UReplicatedInteractableComponent_ServerMakeNonActive_Params
{
};

// Function Dungeons.ReplicatedInteractableComponent.OnRep_IsActivated
struct UReplicatedInteractableComponent_OnRep_IsActivated_Params
{
};

// Function Dungeons.ReplicatedInteractableComponent.OnRep_ActivatableInitialized
struct UReplicatedInteractableComponent_OnRep_ActivatableInitialized_Params
{
};

// Function Dungeons.ReplicatedInteractableComponent.MulicastOnFail
struct UReplicatedInteractableComponent_MulicastOnFail_Params
{
};

// Function Dungeons.ReplicatedInteractInParentComponent.InteractInParentActor
struct UReplicatedInteractInParentComponent_InteractInParentActor_Params
{
};

// Function Dungeons.ReplicatedRandomSeedComponent.OnRep_Seed
struct UReplicatedRandomSeedComponent_OnRep_Seed_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_WindResistanceMagnitude
struct UResistanceAttributeSet_OnRep_WindResistanceMagnitude_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_SlowResistanceMagnitude
struct UResistanceAttributeSet_OnRep_SlowResistanceMagnitude_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_PushbackZClampMagnitude
struct UResistanceAttributeSet_OnRep_PushbackZClampMagnitude_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_PushbackResistanceMagnitude
struct UResistanceAttributeSet_OnRep_PushbackResistanceMagnitude_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_EnvironmentalProtectionMagnitude
struct UResistanceAttributeSet_OnRep_EnvironmentalProtectionMagnitude_Params
{
};

// Function Dungeons.ResistanceAttributeSet.OnRep_CurrentResistanceMagnitude
struct UResistanceAttributeSet_OnRep_CurrentResistanceMagnitude_Params
{
};

// Function Dungeons.RespawnAsTeamUsingLivesComponent.OnAffectorsChanged
struct URespawnAsTeamUsingLivesComponent_OnAffectorsChanged_Params
{
};

// Function Dungeons.ResurrectSurroundingMobs.OnAreaOverlapEnd
struct UResurrectSurroundingMobs_OnAreaOverlapEnd_Params
{
};

// Function Dungeons.ResurrectSurroundingMobs.OnAreaOverlapBegin
struct UResurrectSurroundingMobs_OnAreaOverlapBegin_Params
{
};

// Function Dungeons.ReusedEffectActor.OnEffectReset
struct AReusedEffectActor_OnEffectReset_Params
{
};

// Function Dungeons.ReviveComponent.ServerStartRevive
struct UReviveComponent_ServerStartRevive_Params
{
};

// Function Dungeons.ReviveComponent.ServerCancelRevive
struct UReviveComponent_ServerCancelRevive_Params
{
};

// Function Dungeons.ReviveComponent.getProgress
struct UReviveComponent_getProgress_Params
{
};

// Function Dungeons.ReviveComponent.ClientEndRevive
struct UReviveComponent_ClientEndRevive_Params
{
};

// Function Dungeons.RewardDataFunctionLibrary.GetInventoryItemDataFromRewardData
struct URewardDataFunctionLibrary_GetInventoryItemDataFromRewardData_Params
{
};

// Function Dungeons.SaveSpinnerInterface.GetIsSpinnerVisible
struct USaveSpinnerInterface_GetIsSpinnerVisible_Params
{
};

// Function Dungeons.ScreenFader.OnCompletedFade
struct AScreenFader_OnCompletedFade_Params
{
};

// Function Dungeons.SecretComponent.SecretFound
struct USecretComponent_SecretFound_Params
{
};

// Function Dungeons.SecretComponent.ExecuteSecretFound
struct USecretComponent_ExecuteSecretFound_Params
{
};

// Function Dungeons.SelectInventorySlot.SelectInventorySlot
struct USelectInventorySlot_SelectInventorySlot_Params
{
};

// Function Dungeons.SelectInventorySlot.PollHasSelectablesChanged
struct USelectInventorySlot_PollHasSelectablesChanged_Params
{
};

// Function Dungeons.SelectInventorySlot.GetUISlotTypeIcon
struct USelectInventorySlot_GetUISlotTypeIcon_Params
{
};

// Function Dungeons.SelectInventorySlot.GetSelectableInventorySlots
struct USelectInventorySlot_GetSelectableInventorySlots_Params
{
};

// Function Dungeons.SelectInventorySlot.GetInventorySlot
struct USelectInventorySlot_GetInventorySlot_Params
{
};

// Function Dungeons.SelectionChain.NavigatePrevious
struct USelectionChain_NavigatePrevious_Params
{
};

// Function Dungeons.SelectionChain.NavigateNext
struct USelectionChain_NavigateNext_Params
{
};

// Function Dungeons.SelectionChain.GetSelectionClass
struct USelectionChain_GetSelectionClass_Params
{
};

// Function Dungeons.SelectionChain.CanNavigatePrevious
struct USelectionChain_CanNavigatePrevious_Params
{
};

// Function Dungeons.SelectionChain.CanNavigateNext
struct USelectionChain_CanNavigateNext_Params
{
};

// Function Dungeons.SelectMerchantSlot.SelectMerchantSlot
struct USelectMerchantSlot_SelectMerchantSlot_Params
{
};

// Function Dungeons.SelectMerchantSlot.GetSelectableMerchantSlots
struct USelectMerchantSlot_GetSelectableMerchantSlots_Params
{
};

// Function Dungeons.SelectMerchantSlot.GetMerchantSlot
struct USelectMerchantSlot_GetMerchantSlot_Params
{
};

// Function Dungeons.SelectPlayerCharacter.SelectPlayerCharacter
struct USelectPlayerCharacter_SelectPlayerCharacter_Params
{
};

// Function Dungeons.SelectPlayerCharacter.GetSelectablePlayerCharacters
struct USelectPlayerCharacter_GetSelectablePlayerCharacters_Params
{
};

// Function Dungeons.SelectPlayerCharacter.GetPlayerCharacter
struct USelectPlayerCharacter_GetPlayerCharacter_Params
{
};

// Function Dungeons.ServerTimeSmoothingComponent.GetSmoothedServerTimeSeconds
struct UServerTimeSmoothingComponent_GetSmoothedServerTimeSeconds_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.getThreatLevel
struct UDungeonsSessionDisplayEntity_getThreatLevel_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetServerName
struct UDungeonsSessionDisplayEntity_GetServerName_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetPlayerName
struct UDungeonsSessionDisplayEntity_GetPlayerName_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetPingInMs
struct UDungeonsSessionDisplayEntity_GetPingInMs_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetMaxPlayers
struct UDungeonsSessionDisplayEntity_GetMaxPlayers_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetMapName
struct UDungeonsSessionDisplayEntity_GetMapName_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.getDifficulty
struct UDungeonsSessionDisplayEntity_getDifficulty_Params
{
};

// Function Dungeons.DungeonsSessionDisplayEntity.GetCurrentPlayers
struct UDungeonsSessionDisplayEntity_GetCurrentPlayers_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetXblActive
struct USettingsBlueprintFunctionLibrary_SetXblActive_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetSettingByNameInt64
struct USettingsBlueprintFunctionLibrary_SetSettingByNameInt64_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetSettingByName
struct USettingsBlueprintFunctionLibrary_SetSettingByName_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetSeenNews
struct USettingsBlueprintFunctionLibrary_SetSeenNews_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetSeenMapNews
struct USettingsBlueprintFunctionLibrary_SetSeenMapNews_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SetIntByName
struct USettingsBlueprintFunctionLibrary_SetIntByName_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.SaveGame
struct USettingsBlueprintFunctionLibrary_SaveGame_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.LoadGame
struct USettingsBlueprintFunctionLibrary_LoadGame_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.IsSignedInToXBL
struct USettingsBlueprintFunctionLibrary_IsSignedInToXBL_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.HasSeenNews
struct USettingsBlueprintFunctionLibrary_HasSeenNews_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.HasSeenMapNews
struct USettingsBlueprintFunctionLibrary_HasSeenMapNews_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetXblActive
struct USettingsBlueprintFunctionLibrary_GetXblActive_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetTrackedStatByName
struct USettingsBlueprintFunctionLibrary_GetTrackedStatByName_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetSettingFromSaveInt64
struct USettingsBlueprintFunctionLibrary_GetSettingFromSaveInt64_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetSettingFromSave
struct USettingsBlueprintFunctionLibrary_GetSettingFromSave_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetIsAccountLinked
struct USettingsBlueprintFunctionLibrary_GetIsAccountLinked_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetIntByName
struct USettingsBlueprintFunctionLibrary_GetIntByName_Params
{
};

// Function Dungeons.SettingsBlueprintFunctionLibrary.GetCrossplay
struct USettingsBlueprintFunctionLibrary_GetCrossplay_Params
{
};

// Function Dungeons.Shockwave.MulticastSpawnShockwave
struct UShockwave_MulticastSpawnShockwave_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnWillDestroy
struct AShockWebNodeActor_OnWillDestroy_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnRep_Target
struct AShockWebNodeActor_OnRep_Target_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnRep_IsFading
struct AShockWebNodeActor_OnRep_IsFading_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnRep_IsActive
struct AShockWebNodeActor_OnRep_IsActive_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnDetached
struct AShockWebNodeActor_OnDetached_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnBeamEnabled
struct AShockWebNodeActor_OnBeamEnabled_Params
{
};

// Function Dungeons.ShockWebNodeActor.OnBeamDisabled
struct AShockWebNodeActor_OnBeamDisabled_Params
{
};

// Function Dungeons.ShopperComponent.OnShowWidget
struct UShopperComponent_OnShowWidget_Params
{
};

// Function Dungeons.ShopperComponent.CreateWidgetOfClass
struct UShopperComponent_CreateWidgetOfClass_Params
{
};

// Function Dungeons.SimpleMovementComponent.StopSimulating
struct USimpleMovementComponent_StopSimulating_Params
{
};

// Function Dungeons.SimpleMovementComponent.SetRotationSpeed
struct USimpleMovementComponent_SetRotationSpeed_Params
{
};

// Function Dungeons.SimpleMovementComponent.OnRep_ServerPosition
struct USimpleMovementComponent_OnRep_ServerPosition_Params
{
};

// DelegateFunction Dungeons.SimpleMovementComponent.OnProjectileStopDelegate__DelegateSignature
struct USimpleMovementComponent_OnProjectileStopDelegate__DelegateSignature_Params
{
};

// Function Dungeons.SimpleMovementComponent.IsComponentMoving
struct USimpleMovementComponent_IsComponentMoving_Params
{
};

// Function Dungeons.SimplePlayerDistanceCheckPropActor.PlayersInRangeChangedEvent
struct ASimplePlayerDistanceCheckPropActor_PlayersInRangeChangedEvent_Params
{
};

// Function Dungeons.SkinDef.ShouldConsiderForDefault
struct USkinDef_ShouldConsiderForDefault_Params
{
};

// Function Dungeons.SkinDef.GetSkinId
struct USkinDef_GetSkinId_Params
{
};

// Function Dungeons.SkinDef.GetPortraitMaterialSoftObject
struct USkinDef_GetPortraitMaterialSoftObject_Params
{
};

// Function Dungeons.SkinDef.GetPortraitMaterial
struct USkinDef_GetPortraitMaterial_Params
{
};

// Function Dungeons.SkinDef.GetOrder
struct USkinDef_GetOrder_Params
{
};

// Function Dungeons.SkinDef.GetEntitlementName
struct USkinDef_GetEntitlementName_Params
{
};

// Function Dungeons.SkinDef.GetAvatarMaterialSoftObject
struct USkinDef_GetAvatarMaterialSoftObject_Params
{
};

// Function Dungeons.SkinDef.GetAvatarMaterial
struct USkinDef_GetAvatarMaterial_Params
{
};

// Function Dungeons.SkinsUtil.IsSkinValid
struct USkinsUtil_IsSkinValid_Params
{
};

// Function Dungeons.SkinsUtil.IsSkinEntitled
struct USkinsUtil_IsSkinEntitled_Params
{
};

// Function Dungeons.SkinsUtil.IsEntitlementRequired
struct USkinsUtil_IsEntitlementRequired_Params
{
};

// Function Dungeons.SkinsUtil.GetSkinPortraitMaterialSoft
struct USkinsUtil_GetSkinPortraitMaterialSoft_Params
{
};

// Function Dungeons.SkinsUtil.GetSkinPortraitMaterialInstance
struct USkinsUtil_GetSkinPortraitMaterialInstance_Params
{
};

// Function Dungeons.SkinsUtil.GetSkinIds
struct USkinsUtil_GetSkinIds_Params
{
};

// Function Dungeons.SkinsUtil.GetSkinAvatarMaterialSoft
struct USkinsUtil_GetSkinAvatarMaterialSoft_Params
{
};

// Function Dungeons.SkinsUtil.GetSkinAvatarMaterialInstance
struct USkinsUtil_GetSkinAvatarMaterialInstance_Params
{
};

// Function Dungeons.SkinsUtil.GetPlayerColor
struct USkinsUtil_GetPlayerColor_Params
{
};

// Function Dungeons.SkinsUtil.GetDefaultSkinIds
struct USkinsUtil_GetDefaultSkinIds_Params
{
};

// Function Dungeons.SnowBall.OnOverlapBegin
struct ASnowBall_OnOverlapBegin_Params
{
};

// Function Dungeons.Soul.OnStopSoul
struct ASoul_OnStopSoul_Params
{
};

// Function Dungeons.Soul.OnShouldAbsorb
struct ASoul_OnShouldAbsorb_Params
{
};

// Function Dungeons.Soul.OnLaunchSoul
struct ASoul_OnLaunchSoul_Params
{
};

// Function Dungeons.SoulComponent.ServerAddSouls
struct USoulComponent_ServerAddSouls_Params
{
};

// Function Dungeons.SoulComponent.OnAnyPlayerKilledMob
struct USoulComponent_OnAnyPlayerKilledMob_Params
{
};

// Function Dungeons.SoulComponent.IsCollecting
struct USoulComponent_IsCollecting_Params
{
};

// Function Dungeons.SoulComponent.GetSoulPercentage
struct USoulComponent_GetSoulPercentage_Params
{
};

// Function Dungeons.SoulComponent.GetSoulCount
struct USoulComponent_GetSoulCount_Params
{
};

// Function Dungeons.SoulComponent.GetMaxSoulCount
struct USoulComponent_GetMaxSoulCount_Params
{
};

// Function Dungeons.SoulComponent.ClientSpawnSoul
struct USoulComponent_ClientSpawnSoul_Params
{
};

// Function Dungeons.SoulHealer.MulticastSpawnSoul
struct ASoulHealer_MulticastSpawnSoul_Params
{
};

// Function Dungeons.SoundMixManager.PushSoundMix
struct USoundMixManager_PushSoundMix_Params
{
};

// Function Dungeons.SoundMixManager.PushReverb
struct USoundMixManager_PushReverb_Params
{
};

// Function Dungeons.SoundMixManager.PopSoundMix
struct USoundMixManager_PopSoundMix_Params
{
};

// Function Dungeons.SoundMixManager.PopReverb
struct USoundMixManager_PopReverb_Params
{
};

// Function Dungeons.SoundMixManager.PopAllSoundMixes
struct USoundMixManager_PopAllSoundMixes_Params
{
};

// Function Dungeons.SoundMixManager.GetReverbAt
struct USoundMixManager_GetReverbAt_Params
{
};

// Function Dungeons.SoundMixManager.EnableSoundMixes
struct USoundMixManager_EnableSoundMixes_Params
{
};

// Function Dungeons.SoundMixManager.DisableSoundMixes
struct USoundMixManager_DisableSoundMixes_Params
{
};

// Function Dungeons.SpawnActorIntervalComponent.SetInstigator
struct USpawnActorIntervalComponent_SetInstigator_Params
{
};

// Function Dungeons.SpinWheelActor.OnReturnedToPlayer
struct ASpinWheelActor_OnReturnedToPlayer_Params
{
};

// Function Dungeons.SpinWheelActor.OnOverlapBegin
struct ASpinWheelActor_OnOverlapBegin_Params
{
};

// Function Dungeons.SpinWheelInstance.ServerSpawnWheel
struct ASpinWheelInstance_ServerSpawnWheel_Params
{
};

// Function Dungeons.SpinWheelInstance.MulticastSpawnWheel
struct ASpinWheelInstance_MulticastSpawnWheel_Params
{
};

// Function Dungeons.SpiritSpeed.OnGatheredSoul
struct USpiritSpeed_OnGatheredSoul_Params
{
};

// Function Dungeons.SquidRollQuick.OnCloudDestroyed
struct USquidRollQuick_OnCloudDestroyed_Params
{
};

// Function Dungeons.SquidRollLimited.OnCloudDestroyed
struct USquidRollLimited_OnCloudDestroyed_Params
{
};

// Function Dungeons.StartMissionStatusUtil.IsStartable
struct UStartMissionStatusUtil_IsStartable_Params
{
};

// Function Dungeons.StartMissionStatusUtil.HasSuccess
struct UStartMissionStatusUtil_HasSuccess_Params
{
};

// Function Dungeons.StartMissionStatusUtil.HasProblem
struct UStartMissionStatusUtil_HasProblem_Params
{
};

// Function Dungeons.StartMissionStatusUtil.GetSuccess
struct UStartMissionStatusUtil_GetSuccess_Params
{
};

// Function Dungeons.StartMissionStatusUtil.GetProblem
struct UStartMissionStatusUtil_GetProblem_Params
{
};

// Function Dungeons.StatTrackerComponent.OnGameOver
struct UStatTrackerComponent_OnGameOver_Params
{
};

// Function Dungeons.StreamingLayoutTrigger.ShowTouchControl
struct AStreamingLayoutTrigger_ShowTouchControl_Params
{
};

// Function Dungeons.StreamingLayoutTrigger.OnOverlapBegin
struct AStreamingLayoutTrigger_OnOverlapBegin_Params
{
};

// Function Dungeons.StreamingLayoutTrigger.HideTouchControl
struct AStreamingLayoutTrigger_HideTouchControl_Params
{
};

// Function Dungeons.SubtitleOverlayWidget.OnSubtitlesText
struct USubtitleOverlayWidget_OnSubtitlesText_Params
{
};

// Function Dungeons.SuddenDeath.IsSuddenDeathCountingDown
struct ASuddenDeath_IsSuddenDeathCountingDown_Params
{
};

// Function Dungeons.SuddenDeath.IsSuddenDeathActive
struct ASuddenDeath_IsSuddenDeathActive_Params
{
};

// Function Dungeons.SuddenDeath.GetTimeSecondsUntilSuddenDeath
struct ASuddenDeath_GetTimeSecondsUntilSuddenDeath_Params
{
};

// Function Dungeons.TargetingActor.TargetSelected
struct ATargetingActor_TargetSelected_Params
{
};

// Function Dungeons.TargetingActor.TargetingCanceled
struct ATargetingActor_TargetingCanceled_Params
{
};

// Function Dungeons.LightingRodReticule.OnCharged
struct ALightingRodReticule_OnCharged_Params
{
};

// Function Dungeons.TargetingStrikeItem.ServerStartStrike
struct ATargetingStrikeItem_ServerStartStrike_Params
{
};

// Function Dungeons.TelemetryEventComponent.ClientLogTelemetryEvent
struct UTelemetryEventComponent_ClientLogTelemetryEvent_Params
{
};

// Function Dungeons.TelemetryUploadWidget.LogGameSessionUserGrade
struct UTelemetryUploadWidget_LogGameSessionUserGrade_Params
{
};

// Function Dungeons.TeleportComponent.Server_TeleportToFriend
struct UTeleportComponent_Server_TeleportToFriend_Params
{
};

// Function Dungeons.TeleportComponent.Server_TeleportToCheckpoint
struct UTeleportComponent_Server_TeleportToCheckpoint_Params
{
};

// Function Dungeons.TeleportComponent.Server_AbortTeleportTo
struct UTeleportComponent_Server_AbortTeleportTo_Params
{
};

// Function Dungeons.TeleportComponent.OnRep_TeleportState
struct UTeleportComponent_OnRep_TeleportState_Params
{
};

// Function Dungeons.TeleportComponent.IsTeleportTarget
struct UTeleportComponent_IsTeleportTarget_Params
{
};

// Function Dungeons.TeleportComponent.GetTeleportDependents
struct UTeleportComponent_GetTeleportDependents_Params
{
};

// Function Dungeons.TeleportComponent.GetTeleportCandidates
struct UTeleportComponent_GetTeleportCandidates_Params
{
};

// Function Dungeons.TeleportComponent.GetClosestDownedCandidate
struct UTeleportComponent_GetClosestDownedCandidate_Params
{
};

// Function Dungeons.TeleportComponent.Client_IssueTeleportMovement
struct UTeleportComponent_Client_IssueTeleportMovement_Params
{
};

// Function Dungeons.TeleportToOwnerComponent.TeleportIfFarAway
struct UTeleportToOwnerComponent_TeleportIfFarAway_Params
{
};

// Function Dungeons.TeleportToOwnerComponent.OnCharacterDied
struct UTeleportToOwnerComponent_OnCharacterDied_Params
{
};

// Function Dungeons.TempestGolemComponent.SetTempestStatus
struct UTempestGolemComponent_SetTempestStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.SetAttackSpeed
struct UTempestGolemComponent_SetAttackSpeed_Params
{
};

// Function Dungeons.TempestGolemComponent.SetArmStatus
struct UTempestGolemComponent_SetArmStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.RemoveDamageReduction
struct UTempestGolemComponent_RemoveDamageReduction_Params
{
};

// Function Dungeons.TempestGolemComponent.OnTrackingDone
struct UTempestGolemComponent_OnTrackingDone_Params
{
};

// Function Dungeons.TempestGolemComponent.OnRep_TempestStatus
struct UTempestGolemComponent_OnRep_TempestStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.OnRep_TempestShieldArmsStatus
struct UTempestGolemComponent_OnRep_TempestShieldArmsStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.OnRep_TempestRightArmStatus
struct UTempestGolemComponent_OnRep_TempestRightArmStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.OnRep_TempestLeftArmStatus
struct UTempestGolemComponent_OnRep_TempestLeftArmStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.IsTempestActive
struct UTempestGolemComponent_IsTempestActive_Params
{
};

// Function Dungeons.TempestGolemComponent.IsArmTracking
struct UTempestGolemComponent_IsArmTracking_Params
{
};

// Function Dungeons.TempestGolemComponent.HandleDamageReceived
struct UTempestGolemComponent_HandleDamageReceived_Params
{
};

// Function Dungeons.TempestGolemComponent.GetTempestStatus
struct UTempestGolemComponent_GetTempestStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.GetRightArmWeight
struct UTempestGolemComponent_GetRightArmWeight_Params
{
};

// Function Dungeons.TempestGolemComponent.GetLeftArmWeight
struct UTempestGolemComponent_GetLeftArmWeight_Params
{
};

// Function Dungeons.TempestGolemComponent.GetAttackSpeed
struct UTempestGolemComponent_GetAttackSpeed_Params
{
};

// Function Dungeons.TempestGolemComponent.GetArmStatus
struct UTempestGolemComponent_GetArmStatus_Params
{
};

// Function Dungeons.TempestGolemComponent.DealDamage
struct UTempestGolemComponent_DealDamage_Params
{
};

// Function Dungeons.TempestGolemComponent.CheckTempestStun
struct UTempestGolemComponent_CheckTempestStun_Params
{
};

// Function Dungeons.TempestGolemComponent.CanArmAttack
struct UTempestGolemComponent_CanArmAttack_Params
{
};

// Function Dungeons.TempestGolemComponent.ArmAttack
struct UTempestGolemComponent_ArmAttack_Params
{
};

// Function Dungeons.TempestGolemComponent.ApplyDamageReduction
struct UTempestGolemComponent_ApplyDamageReduction_Params
{
};

// Function Dungeons.TemporalUtils.DilateTime
struct UTemporalUtils_DilateTime_Params
{
};

// Function Dungeons.TemporalDilationNormalizer.Unaffect
struct ATemporalDilationNormalizer_Unaffect_Params
{
};

// Function Dungeons.TemporalDilationNormalizer.Affect
struct ATemporalDilationNormalizer_Affect_Params
{
};

// Function Dungeons.SpeedBoostOnOverlapActor.OnGrantSpeed
struct ASpeedBoostOnOverlapActor_OnGrantSpeed_Params
{
};

// Function Dungeons.TempoTheft.MulticastSpawnSoul
struct UTempoTheft_MulticastSpawnSoul_Params
{
};

// Function Dungeons.TextFormatFunctionLibrary.TimeSpanAsPaddedCountdownSeconds
struct UTextFormatFunctionLibrary_TimeSpanAsPaddedCountdownSeconds_Params
{
};

// Function Dungeons.TextFormatFunctionLibrary.DoublePaddedCountdown
struct UTextFormatFunctionLibrary_DoublePaddedCountdown_Params
{
};

// Function Dungeons.TileQuery.GetTileDegreesAtLocation
struct UTileQuery_GetTileDegreesAtLocation_Params
{
};

// Function Dungeons.TileQuery.GetTileDegrees
struct UTileQuery_GetTileDegrees_Params
{
};

// Function Dungeons.TileQuery.GetResourcePackAtLocation
struct UTileQuery_GetResourcePackAtLocation_Params
{
};

// Function Dungeons.TileQuery.GetResourcePack
struct UTileQuery_GetResourcePack_Params
{
};

// Function Dungeons.TileQuery.GetMyTileResourcePack
struct UTileQuery_GetMyTileResourcePack_Params
{
};

// Function Dungeons.TileQuery.GetMyTileDegrees
struct UTileQuery_GetMyTileDegrees_Params
{
};

// Function Dungeons.TileQuery.GetMyTileAmbienceGroupName
struct UTileQuery_GetMyTileAmbienceGroupName_Params
{
};

// Function Dungeons.TitlesBlueprintLibrary.GetTitle
struct UTitlesBlueprintLibrary_GetTitle_Params
{
};

// Function Dungeons.TitlesBlueprintLibrary.GetDescription
struct UTitlesBlueprintLibrary_GetDescription_Params
{
};

// Function Dungeons.TitlesBlueprintLibrary.GetAllTitles
struct UTitlesBlueprintLibrary_GetAllTitles_Params
{
};

// Function Dungeons.TitleImageFetcher.DownloadImageSuccessCallback
struct UTitleImageFetcher_DownloadImageSuccessCallback_Params
{
};

// Function Dungeons.TitleImageFetcher.DownloadImageFailureCallback
struct UTitleImageFetcher_DownloadImageFailureCallback_Params
{
};

// Function Dungeons.TitleNewsUtil.getTitleNewsItemAutoNextDelay
struct UTitleNewsUtil_getTitleNewsItemAutoNextDelay_Params
{
};

// Function Dungeons.TNT_Cart.Explode
struct UTNT_Cart_Explode_Params
{
};

// Function Dungeons.TormentProjectile.OnLifetimeThresholdReached
struct ATormentProjectile_OnLifetimeThresholdReached_Params
{
};

// Function Dungeons.TotemOfShielding.OnProjectileImpact
struct ATotemOfShielding_OnProjectileImpact_Params
{
};

// Function Dungeons.TotemOfShielding.OnBeginTorusOverlap
struct ATotemOfShielding_OnBeginTorusOverlap_Params
{
};

// Function Dungeons.ReviveOnOverlapActor.OnRevive
struct AReviveOnOverlapActor_OnRevive_Params
{
};

// Function Dungeons.TotemOfSpiritProtectionActor.OnPlayerRevived
struct ATotemOfSpiritProtectionActor_OnPlayerRevived_Params
{
};

// Function Dungeons.TotemOfSpiritProtectionActor.OnPlayerDown
struct ATotemOfSpiritProtectionActor_OnPlayerDown_Params
{
};

// Function Dungeons.TotemOfSpiritProtectionActor.MulticastSpawnReviveActor
struct ATotemOfSpiritProtectionActor_MulticastSpawnReviveActor_Params
{
};

// Function Dungeons.TrackingFallingIceActor.SetTarget
struct ATrackingFallingIceActor_SetTarget_Params
{
};

// Function Dungeons.TrackingFallingIceActor.OnTrackingComplete
struct ATrackingFallingIceActor_OnTrackingComplete_Params
{
};

// Function Dungeons.TridentItem.SetThrowVariablesServer
struct ATridentItem_SetThrowVariablesServer_Params
{
};

// Function Dungeons.TridentItem.SetActorRotationServer
struct ATridentItem_SetActorRotationServer_Params
{
};

// Function Dungeons.TridentItem.OnTridentStoppedMulticast
struct ATridentItem_OnTridentStoppedMulticast_Params
{
};

// Function Dungeons.TridentItem.OnTridentHit
struct ATridentItem_OnTridentHit_Params
{
};

// Function Dungeons.EffectBasedCooldownProvider.GetCooldownSecondsRemaining
struct UEffectBasedCooldownProvider_GetCooldownSecondsRemaining_Params
{
};

// Function Dungeons.EffectBasedCooldownProvider.GetCooldownSecondsDuration
struct UEffectBasedCooldownProvider_GetCooldownSecondsDuration_Params
{
};

// Function Dungeons.EffectBasedCooldownProvider.GetCooldownFractionRemaining
struct UEffectBasedCooldownProvider_GetCooldownFractionRemaining_Params
{
};

// Function Dungeons.UnlockKeyUtils.IsUnlocked
struct UUnlockKeyUtils_IsUnlocked_Params
{
};

// Function Dungeons.UnlockKeyUtils.GiveUnlockKeyToLocalPlayer
struct UUnlockKeyUtils_GiveUnlockKeyToLocalPlayer_Params
{
};

// Function Dungeons.UnlockKeyUtils.GiveUnlockKeyToAllLocalPlayers
struct UUnlockKeyUtils_GiveUnlockKeyToAllLocalPlayers_Params
{
};

// Function Dungeons.RespawnCandidateComponent.SetIsRespawnActive
struct URespawnCandidateComponent_SetIsRespawnActive_Params
{
};

// Function Dungeons.RespawnCandidateComponent.GetIsRespawnActive
struct URespawnCandidateComponent_GetIsRespawnActive_Params
{
};

// Function Dungeons.UpdraftTomeInstance.ApplyUpdraft
struct AUpdraftTomeInstance_ApplyUpdraft_Params
{
};

// Function Dungeons.UpgraderItemSlot.GetCompletedUpgradeQuest
struct UUpgraderItemSlot_GetCompletedUpgradeQuest_Params
{
};

// Function Dungeons.UpgraderItemSlot.GetActiveUpgradeQuest
struct UUpgraderItemSlot_GetActiveUpgradeQuest_Params
{
};

// Function Dungeons.UserFeedbackTextLabels.GetControllerDisconnectedMessage
struct UUserFeedbackTextLabels_GetControllerDisconnectedMessage_Params
{
};

// Function Dungeons.VesselBlock.OnKill
struct AVesselBlock_OnKill_Params
{
};

// Function Dungeons.VesselBlock.OnComponentEndOverlap
struct AVesselBlock_OnComponentEndOverlap_Params
{
};

// Function Dungeons.VesselBlock.OnComponentBeginOverlap
struct AVesselBlock_OnComponentBeginOverlap_Params
{
};

// Function Dungeons.VirtualKeyboardManager.ShowVirtualKeyboard
struct UVirtualKeyboardManager_ShowVirtualKeyboard_Params
{
};

// Function Dungeons.WalkPickupComponent.ResetPickup
struct UWalkPickupComponent_ResetPickup_Params
{
};

// Function Dungeons.WalkPickupComponent.ReplicateState
struct UWalkPickupComponent_ReplicateState_Params
{
};

// Function Dungeons.WalkPickupComponent.OnRep_ServerComponentVelocity
struct UWalkPickupComponent_OnRep_ServerComponentVelocity_Params
{
};

// Function Dungeons.WalkPickupComponent.OnRep_ServerComponentSpeed
struct UWalkPickupComponent_OnRep_ServerComponentSpeed_Params
{
};

// Function Dungeons.WalkPickupComponent.NetSetPhysicsEnabled
struct UWalkPickupComponent_NetSetPhysicsEnabled_Params
{
};

// Function Dungeons.WalletComponent.Deduct
struct UWalletComponent_Deduct_Params
{
};

// Function Dungeons.WalletComponent.ClientAdd
struct UWalletComponent_ClientAdd_Params
{
};

// Function Dungeons.WalletComponent.Balance
struct UWalletComponent_Balance_Params
{
};

// Function Dungeons.WearableCosmetic.OnDetachedComponentCreated
struct AWearableCosmetic_OnDetachedComponentCreated_Params
{
};

// Function Dungeons.WidgetHelper.SetOwnerRecursive
struct UWidgetHelper_SetOwnerRecursive_Params
{
};

// Function Dungeons.WidgetHelper.LoadClassAsset_Blocking
struct UWidgetHelper_LoadClassAsset_Blocking_Params
{
};

// Function Dungeons.WidgetHelper.IsVisibleRecursive
struct UWidgetHelper_IsVisibleRecursive_Params
{
};

// Function Dungeons.WidgetHelper.IsVisible
struct UWidgetHelper_IsVisible_Params
{
};

// Function Dungeons.WidgetHelper.IsChildVisible
struct UWidgetHelper_IsChildVisible_Params
{
};

// Function Dungeons.WidgetHelper.GetUserWidgetBeforeRoot
struct UWidgetHelper_GetUserWidgetBeforeRoot_Params
{
};

// Function Dungeons.WidgetHelper.GetFirstUserWidgetListeningForInputAction
struct UWidgetHelper_GetFirstUserWidgetListeningForInputAction_Params
{
};

// Function Dungeons.WidgetHelper.GetFirstUserWidgetDescendentListeningForInputAction
struct UWidgetHelper_GetFirstUserWidgetDescendentListeningForInputAction_Params
{
};

// Function Dungeons.WidgetHelper.GetFirstParentWidgetWithInterface
struct UWidgetHelper_GetFirstParentWidgetWithInterface_Params
{
};

// Function Dungeons.WidgetHelper.GetFirstFocusableUserWidgetDescendent
struct UWidgetHelper_GetFirstFocusableUserWidgetDescendent_Params
{
};

// Function Dungeons.WidgetHelper.GetAllVisibleDescendentWidgetsWithInterface
struct UWidgetHelper_GetAllVisibleDescendentWidgetsWithInterface_Params
{
};

// Function Dungeons.WidgetHelper.GetAllDescendentWidgetsWithInterface
struct UWidgetHelper_GetAllDescendentWidgetsWithInterface_Params
{
};

// Function Dungeons.WidgetHelper.GetAllDescendentWidgetsOfClass
struct UWidgetHelper_GetAllDescendentWidgetsOfClass_Params
{
};

// Function Dungeons.WildRage.HandleMobKillMob
struct UWildRage_HandleMobKillMob_Params
{
};

// Function Dungeons.WindPillar.StartRecharge
struct AWindPillar_StartRecharge_Params
{
};

// Function Dungeons.WindPillar.SetPillarState
struct AWindPillar_SetPillarState_Params
{
};

// Function Dungeons.WindPillar.SetChargeValue
struct AWindPillar_SetChargeValue_Params
{
};

// Function Dungeons.WindPillar.ResetTimerDelay
struct AWindPillar_ResetTimerDelay_Params
{
};

// Function Dungeons.WindPillar.RemoveCharacterFromTracking
struct AWindPillar_RemoveCharacterFromTracking_Params
{
};

// Function Dungeons.WindPillar.PillarHasCharge
struct AWindPillar_PillarHasCharge_Params
{
};

// Function Dungeons.WindPillar.OnRep_PillarState
struct AWindPillar_OnRep_PillarState_Params
{
};

// Function Dungeons.WindPillar.OnRep_CurrentCharge
struct AWindPillar_OnRep_CurrentCharge_Params
{
};

// Function Dungeons.WindPillar.IsPlayerPresent
struct AWindPillar_IsPlayerPresent_Params
{
};

// Function Dungeons.WindPillar.IsMobPresent
struct AWindPillar_IsMobPresent_Params
{
};

// Function Dungeons.WindPillar.GetPillarState
struct AWindPillar_GetPillarState_Params
{
};

// Function Dungeons.WindPillar.GetDebugMode
struct AWindPillar_GetDebugMode_Params
{
};

// Function Dungeons.WindPillar.DisablePillar
struct AWindPillar_DisablePillar_Params
{
};

// Function Dungeons.WindPillar.DepleteCharge
struct AWindPillar_DepleteCharge_Params
{
};

// Function Dungeons.WindPillar.ClearAllTracking
struct AWindPillar_ClearAllTracking_Params
{
};

// Function Dungeons.WindPillar.ApplyAreaPushback
struct AWindPillar_ApplyAreaPushback_Params
{
};

// Function Dungeons.WindPillar.AddCharacterToTracking
struct AWindPillar_AddCharacterToTracking_Params
{
};

// Function Dungeons.WindPillar.ActivatePillar
struct AWindPillar_ActivatePillar_Params
{
};

// Function Dungeons.WindPipeBase.SetRotatationDirecition
struct AWindPipeBase_SetRotatationDirecition_Params
{
};

// Function Dungeons.WindPipeBase.SetAngleSpan
struct AWindPipeBase_SetAngleSpan_Params
{
};

// Function Dungeons.WindPipeBase.Rotate
struct AWindPipeBase_Rotate_Params
{
};

// Function Dungeons.WindPipeBase.OnRep_ReplicatedAngle
struct AWindPipeBase_OnRep_ReplicatedAngle_Params
{
};

// Function Dungeons.WindPipeBase.OnAngleChanged
struct AWindPipeBase_OnAngleChanged_Params
{
};

// Function Dungeons.WindPipeBase.GetAngle
struct AWindPipeBase_GetAngle_Params
{
};

// Function Dungeons.WorldspaceHUDComponent.UpdateDrownCountdown
struct UWorldspaceHUDComponent_UpdateDrownCountdown_Params
{
};

// Function Dungeons.WorldspaceHUDComponent.UpdateContextPrompt
struct UWorldspaceHUDComponent_UpdateContextPrompt_Params
{
};

// Function Dungeons.WorldspaceHUDComponent.RemoveClicky
struct UWorldspaceHUDComponent_RemoveClicky_Params
{
};

// Function Dungeons.WorldspaceHUDComponent.IsPointHiddenByHotbar
struct UWorldspaceHUDComponent_IsPointHiddenByHotbar_Params
{
};

// Function Dungeons.WorldspaceHUDComponent.AddClicky
struct UWorldspaceHUDComponent_AddClicky_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

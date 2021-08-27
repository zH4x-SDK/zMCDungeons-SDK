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

// Class Dungeons.AcceleratingBaseGameplayEffect
// 0x0000
class UAcceleratingBaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcceleratingBaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AcceleratingLevelOneGameplayEffect
// 0x0000
class UAcceleratingLevelOneGameplayEffect : public UAcceleratingBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcceleratingLevelOneGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AcceleratingLevelTwoGameplayEffect
// 0x0000
class UAcceleratingLevelTwoGameplayEffect : public UAcceleratingBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcceleratingLevelTwoGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AcceleratingLevelThreeGameplayEffect
// 0x0000
class UAcceleratingLevelThreeGameplayEffect : public UAcceleratingBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcceleratingLevelThreeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AcceleratingMobGameplayEffect
// 0x0000
class UAcceleratingMobGameplayEffect : public UAcceleratingBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcceleratingMobGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GearUtil
// 0x0000
class UGearUtil : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GearUtil");
		return ptr;
	}



};

// Class Dungeons.Enchantment
// 0x0000
class UEnchantment : public UGearUtil
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Enchantment");
		return ptr;
	}



	void GetUpgradeCostForEnchantmentTypeLevel();
	void GetNameForEnchantmentType();
	void GetLevelEffectDescriptionForEnchantmentType();
	void GetIsRarityForEnchantmentType();
	void GetIconTextureForEnchantmentType();
	void GetIconMaterialInstanceForEnchantmentType();
	void GetHasTagForEnchantmentType();
	void GetEnchantmentTypeRarity();
	void GetEnchantmentTypeCategory();
	void GetDisplayBulletPointsTextForEnchantmentType();
	void GetDescriptionForEnchantmentType();
	void GetCanBeUsedByMobsForEnchantmentType();
	void BroadcastEnchantmentTriggeredEvent();
};

// Class Dungeons.Accelerating
// 0x0000
class UAccelerating : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Accelerating");
		return ptr;
	}



	void GetSpeedLimit();
};

// Class Dungeons.AcrobatGameplayEffect
// 0x0000
class UAcrobatGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AcrobatGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EffectApplyingEnchantment
// 0x0000
class UEffectApplyingEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectApplyingEnchantment");
		return ptr;
	}



};

// Class Dungeons.Acrobat
// 0x0000
class UAcrobat : public UEffectApplyingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Acrobat");
		return ptr;
	}



};

// Class Dungeons.Activatable
// 0x0000
class UActivatable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Activatable");
		return ptr;
	}



	void OnActivated();
};

// Class Dungeons.Actor_RepSpatializeStatic
// 0x0000
class AActor_RepSpatializeStatic : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Actor_RepSpatializeStatic");
		return ptr;
	}



};

// Class Dungeons.PropActor
// 0x0000
class APropActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor");
		return ptr;
	}



	void PlayerLeftVisibleRange();
	void PlayerInVisibleRangeChanged();
	void PlayerEnteredVisibleRange();
	void GetInPlayerVisibleRange();
};

// Class Dungeons.PropActor_RepSpatializeStatic
// 0x0000
class APropActor_RepSpatializeStatic : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor_RepSpatializeStatic");
		return ptr;
	}



};

// Class Dungeons.Actor_RepSpatializeDynamic
// 0x0000
class AActor_RepSpatializeDynamic : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Actor_RepSpatializeDynamic");
		return ptr;
	}



};

// Class Dungeons.PropActor_RepSpatializeDynamic
// 0x0000
class APropActor_RepSpatializeDynamic : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor_RepSpatializeDynamic");
		return ptr;
	}



};

// Class Dungeons.Actor_RepSpatializeDormancy
// 0x0000
class AActor_RepSpatializeDormancy : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Actor_RepSpatializeDormancy");
		return ptr;
	}



};

// Class Dungeons.PropActor_RepSpatializeDormancy
// 0x0000
class APropActor_RepSpatializeDormancy : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor_RepSpatializeDormancy");
		return ptr;
	}



};

// Class Dungeons.Actor_RepAlways
// 0x0000
class AActor_RepAlways : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Actor_RepAlways");
		return ptr;
	}



};

// Class Dungeons.PropActor_RepAlways
// 0x0000
class APropActor_RepAlways : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor_RepAlways");
		return ptr;
	}



};

// Class Dungeons.Actor_RepNotRouted
// 0x0000
class AActor_RepNotRouted : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Actor_RepNotRouted");
		return ptr;
	}



};

// Class Dungeons.PropActor_RepNotRouted
// 0x0000
class APropActor_RepNotRouted : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropActor_RepNotRouted");
		return ptr;
	}



};

// Class Dungeons.DungeonsUserWidget
// 0x0000
class UDungeonsUserWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsUserWidget");
		return ptr;
	}



	void OnSetOwner();
};

// Class Dungeons.CounterWidgetBase
// 0x0000
class UCounterWidgetBase : public UDungeonsUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CounterWidgetBase");
		return ptr;
	}



	void SetEmphasis();
	void OnValueChanged();
	void OnEmphasisChanged();
	void GetValue();
	void GetEmphasis();
};

// Class Dungeons.ActorCounterWidgetBase
// 0x0000
class UActorCounterWidgetBase : public UCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ActorCounterWidgetBase");
		return ptr;
	}



};

// Class Dungeons.ActorQuery
// 0x0000
class UActorQuery : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ActorQuery");
		return ptr;
	}



	void IsLocationRangeOfPlayerCharacter();
	void IsInRangeOfPlayerCharacter();
	void GetPlayerCharactersInRange();
	void GetGameBP();
	void GetFriendlyMobCharactersInRange();
	void GetClosestSocket();
	void GetActorHealthBarPosition();
	void GetActorDistanceSquared();
	void GetActorDistance();
};

// Class Dungeons.AffectorAttributeSet
// 0x0000
class UAffectorAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorAttributeSet");
		return ptr;
	}



	void OnRep_DealDamageMul();
};

// Class Dungeons.AffectorDamageEffect
// 0x0000
class UAffectorDamageEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorDamageEffect");
		return ptr;
	}



};

// Class Dungeons.AffectorHealthEffect
// 0x0000
class UAffectorHealthEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorHealthEffect");
		return ptr;
	}



};

// Class Dungeons.AffectorSpeedEffect
// 0x0000
class UAffectorSpeedEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorSpeedEffect");
		return ptr;
	}



};

// Class Dungeons.AffectorUnderwaterEffect
// 0x0000
class UAffectorUnderwaterEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorUnderwaterEffect");
		return ptr;
	}



};

// Class Dungeons.AffectorMaxHealthModCalculation
// 0x0000
class UAffectorMaxHealthModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorMaxHealthModCalculation");
		return ptr;
	}



};

// Class Dungeons.AffectorFunctionLibrary
// 0x0000
class UAffectorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorFunctionLibrary");
		return ptr;
	}



	void GetNumOfMidGameAffectors();
};

// Class Dungeons.DummyCooldownProvider
// 0x0000
class UDummyCooldownProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DummyCooldownProvider");
		return ptr;
	}



};

// Class Dungeons.ItemInstance
// 0x0000
class AItemInstance : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemInstance");
		return ptr;
	}



	void ServerHandleItemActorRemoval();
	void OnOwnerControllerReplicated();
	void OnActivated();
	void MulticastHandleItemActorSpawn();
	void MulticastHandleItemActorRemoval();
	void GetItemId();
	void GetInventoryDropSoundForItemId();
	void Client_UseItem();
	void CanActivate();
	void ActivateServer();
};

// Class Dungeons.AreaBuffGameplayEffect
// 0x0000
class UAreaBuffGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AreaBuffGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AllyDamageBoostGameplayEffect
// 0x0000
class UAllyDamageBoostGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AllyDamageBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArmorProperty
// 0x0000
class UArmorProperty : public UGearUtil
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorProperty");
		return ptr;
	}



	void GetNameForArmorPropertyType();
	void GetIconTextureForArmorPropertyType();
	void GetIconMaterialInstanceForArmorPropertyType();
	void BroadcastArmorPropertyTriggeredEvent();
};

// Class Dungeons.AllyDamageBoost
// 0x0000
class UAllyDamageBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AllyDamageBoost");
		return ptr;
	}



};

// Class Dungeons.HealOnOverlapActor
// 0x0000
class AHealOnOverlapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealOnOverlapActor");
		return ptr;
	}



	void OnTargetDied();
	void OnHeal();
};

// Class Dungeons.Altruistic
// 0x0000
class UAltruistic : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Altruistic");
		return ptr;
	}



	void MulticastSpawnSoul();
};

// Class Dungeons.AmbienceActor
// 0x0000
class AAmbienceActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceActor");
		return ptr;
	}



	void GetGroupName();
};

// Class Dungeons.AmbienceVisualActor
// 0x0000
class AAmbienceVisualActor : public AAmbienceActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceVisualActor");
		return ptr;
	}



	void SetAsActiveAmbience();
	void GetAmbienceID();
};

// Class Dungeons.AmbienceAudioActor
// 0x0000
class AAmbienceAudioActor : public AAmbienceActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceAudioActor");
		return ptr;
	}



};

// Class Dungeons.AmbienceFinder
// 0x0000
class UAmbienceFinder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceFinder");
		return ptr;
	}



};

// Class Dungeons.AmbienceTriggerActor
// 0x0000
class AAmbienceTriggerActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceTriggerActor");
		return ptr;
	}



	void OnPlayerExitedAmbience();
	void OnPlayerEnteredAmbience();
	void OnAmbienceShow();
	void OnAmbienceHide();
	void OnAmbienceDeactivated();
	void OnAmbienceActivated();
};

// Class Dungeons.AmbienceVolume
// 0x0000
class AAmbienceVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AmbienceVolume");
		return ptr;
	}



};

// Class Dungeons.AncientGuardianBeamGameplayEffect
// 0x0000
class UAncientGuardianBeamGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientGuardianBeamGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AncientGuardianComponent
// 0x0000
class UAncientGuardianComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientGuardianComponent");
		return ptr;
	}



	void SetReturnState();
	void SetAncientGuardianState();
	void OnRep_StateChange();
	void GetAncientGuardianState();
};

// Class Dungeons.Thorns
// 0x0000
class UThorns : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Thorns");
		return ptr;
	}



};

// Class Dungeons.AncientGuardianThorns
// 0x0000
class UAncientGuardianThorns : public UThorns
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientGuardianThorns");
		return ptr;
	}



};

// Class Dungeons.ThornsDamageGameplayEffect
// 0x0000
class UThornsDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThornsDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AncientGuardianThornsDamageGameplayEffect
// 0x0000
class UAncientGuardianThornsDamageGameplayEffect : public UThornsDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientGuardianThornsDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AncientMobAudioComponent
// 0x0000
class UAncientMobAudioComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientMobAudioComponent");
		return ptr;
	}



};

// Class Dungeons.AnimaConduitMelee
// 0x0000
class UAnimaConduitMelee : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnimaConduitMelee");
		return ptr;
	}



};

// Class Dungeons.AnimaConduitRanged
// 0x0000
class UAnimaConduitRanged : public UAnimaConduitMelee
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnimaConduitRanged");
		return ptr;
	}



};

// Class Dungeons.AnimNotify_DungeonsPlaySound
// 0x0000
class UAnimNotify_DungeonsPlaySound : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnimNotify_DungeonsPlaySound");
		return ptr;
	}



};

// Class Dungeons.AnimNotifyState_CustomParticle
// 0x0000
class UAnimNotifyState_CustomParticle : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnimNotifyState_CustomParticle");
		return ptr;
	}



};

// Class Dungeons.AnimNotifyState_TimedSoundEffect
// 0x0000
class UAnimNotifyState_TimedSoundEffect : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnimNotifyState_TimedSoundEffect");
		return ptr;
	}



};

// Class Dungeons.TrialsProvider
// 0x0000
class UTrialsProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TrialsProvider");
		return ptr;
	}



};

// Class Dungeons.AnonymousTrialsProvider
// 0x0000
class UAnonymousTrialsProvider : public UTrialsProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AnonymousTrialsProvider");
		return ptr;
	}



};

// Class Dungeons.AoeTargetProvider
// 0x0000
class UAoeTargetProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeTargetProvider");
		return ptr;
	}



	void RequestTargetForComponent();
	void GetAttackRange();
};

// Class Dungeons.SphereInfrontAoeTargetProvider
// 0x0000
class USphereInfrontAoeTargetProvider : public UAoeTargetProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SphereInfrontAoeTargetProvider");
		return ptr;
	}



};

// Class Dungeons.CubeInfrontAoeTargetProvider
// 0x0000
class UCubeInfrontAoeTargetProvider : public UAoeTargetProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CubeInfrontAoeTargetProvider");
		return ptr;
	}



};

// Class Dungeons.AttackComponent
// 0x0000
class UAttackComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AttackComponent");
		return ptr;
	}



	void GetCoolDownAsScalarValue();
	void CanAttack();
	void AttackServer();
	void AttackLocal();
};

// Class Dungeons.AoeAttackComponent
// 0x0000
class UAoeAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeAttackComponent");
		return ptr;
	}



};

// Class Dungeons.AoeAttackDamageGameplayEffect
// 0x0000
class UAoeAttackDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeAttackDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AoeMarkerComponent
// 0x0000
class UAoeMarkerComponent : public UAoeAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeMarkerComponent");
		return ptr;
	}



	void OnOwnerDeath();
	void IsAttackInProgress();
};

// Class Dungeons.AoeFormationAttackComponent
// 0x0000
class UAoeFormationAttackComponent : public UAoeMarkerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeFormationAttackComponent");
		return ptr;
	}



};

// Class Dungeons.AoeMarkerAttackComponent
// 0x0000
class UAoeMarkerAttackComponent : public UAoeMarkerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AoeMarkerAttackComponent");
		return ptr;
	}



};

// Class Dungeons.EntitlementsRepository
// 0x0000
class UEntitlementsRepository : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EntitlementsRepository");
		return ptr;
	}



};

// Class Dungeons.APIEntitlementRepositoryParent
// 0x0000
class UAPIEntitlementRepositoryParent : public UEntitlementsRepository
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.APIEntitlementRepositoryParent");
		return ptr;
	}



};

// Class Dungeons.AreaBuffComponent
// 0x0000
class UAreaBuffComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AreaBuffComponent");
		return ptr;
	}



	void TryUpdateBuffedCharacter();
	void OnSphereOverlapEnd();
	void OnSphereOverlapBegin();
};

// Class Dungeons.AreaDamageComponent
// 0x0000
class UAreaDamageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AreaDamageComponent");
		return ptr;
	}



	void ApplyDamage();
};

// Class Dungeons.AreaHeal
// 0x0000
class UAreaHeal : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AreaHeal");
		return ptr;
	}



	void OnHealthPotionActivated();
};

// Class Dungeons.GearItemInstance
// 0x0000
class AGearItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GearItemInstance");
		return ptr;
	}



};

// Class Dungeons.ArmorGearItemInstance
// 0x0000
class AArmorGearItemInstance : public AGearItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorGearItemInstance");
		return ptr;
	}



};

// Class Dungeons.GearUtilComponent
// 0x0000
class UGearUtilComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GearUtilComponent");
		return ptr;
	}



};

// Class Dungeons.ArmorPropertiesComponent
// 0x0000
class UArmorPropertiesComponent : public UGearUtilComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorPropertiesComponent");
		return ptr;
	}



	void ServerRemoveAllProperties();
	void ServerDeactivateProperties();
	void ServerAddProperties();
	void ServerActivateProperties();
};

// Class Dungeons.AssetFinder
// 0x0000
class UAssetFinder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AssetFinder");
		return ptr;
	}



};

// Class Dungeons.ArmorPropertyAssetFinder
// 0x0000
class UArmorPropertyAssetFinder : public UAssetFinder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorPropertyAssetFinder");
		return ptr;
	}



};

// Class Dungeons.EquipmentSlotActorAnimNotifyState
// 0x0000
class UEquipmentSlotActorAnimNotifyState : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EquipmentSlotActorAnimNotifyState");
		return ptr;
	}



	void Received_SlotActorNotifyTick();
	void Received_SlotActorNotifyEnd();
	void Received_SlotActorNotifyBegin();
};

// Class Dungeons.ArmorSlotActorAnimNotifyState
// 0x0000
class UArmorSlotActorAnimNotifyState : public UEquipmentSlotActorAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorSlotActorAnimNotifyState");
		return ptr;
	}



};

// Class Dungeons.BaseProjectile
// 0x0000
class ABaseProjectile : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseProjectile");
		return ptr;
	}



	void ToggleMagical();
	void ToggleCharged();
	void ShouldIgnoreCollision();
	void SetDestroyOnHit();
	void ProcessHit();
	void OnProjectileReset();
	void OnProjectileLaunch();
	void OnOverlapEnd();
	void OnOverlapBegin();
	void IsMagical();
	void GetInstigatorHadAuthority();
	void GetHomingTargetLocation();
	void GetDamageFactor();
};

// Class Dungeons.Arrow
// 0x0000
class AArrow : public ABaseProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Arrow");
		return ptr;
	}



	void UpdateProjectileComponent();
};

// Class Dungeons.BaseProjectileProp
// 0x0000
class ABaseProjectileProp : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseProjectileProp");
		return ptr;
	}



	void OnExplode();
	void OnBeginPulse();
	void AttachedToActorHidden();
};

// Class Dungeons.ArrowProp
// 0x0000
class AArrowProp : public ABaseProjectileProp
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowProp");
		return ptr;
	}



	void OnInitializedProp();
	void Initialise();
};

// Class Dungeons.ArrowCraftingGameplayEffect
// 0x0000
class UArrowCraftingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowCraftingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArrowCraftingItemPowerGameplayEffect
// 0x0000
class UArrowCraftingItemPowerGameplayEffect : public UArrowCraftingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowCraftingItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArrowCraftingRangedWeaponPowerGameplayEffect
// 0x0000
class UArrowCraftingRangedWeaponPowerGameplayEffect : public UArrowCraftingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowCraftingRangedWeaponPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArrowCraftingItemInstance
// 0x0000
class AArrowCraftingItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowCraftingItemInstance");
		return ptr;
	}



};

// Class Dungeons.ItemSlot
// 0x0000
class UItemSlot : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemSlot");
		return ptr;
	}



	void Swap();
	void OnRep_ItemMaterialSettingsReplicated();
	void OnRep_ItemInstanceReplicated();
	void OnRep_CountReplicated();
	void OnRep_CooldownReduction();
	void IsOnCooldown();
	void IsBusy();
	void GetWantsToActivate();
	void GetItem();
	void GetDisplayCount();
	void GetCount();
	void GetCooldownSecondsRemaining();
	void GetCooldownSecondsReduction();
	void GetCooldownSecondsDuration();
	void GetCooldownFractionRemaining();
	void EquipItem();
	void ConsumeAmount();
	void Consume();
	void Clear();
	void CanActivateSlot();
};

// Class Dungeons.ArrowItemSlot
// 0x0000
class UArrowItemSlot : public UItemSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowItemSlot");
		return ptr;
	}



	void OnRangedWeaponUpdated();
	void GetAmmoCounterWidgetClass();
	void GetAmmoCounterLiteOverlayWidgetClass();
	void GetAmmoCounterLiteContentWidgetClass();
};

// Class Dungeons.ArrowVobbleComponent
// 0x0000
class UArrowVobbleComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArrowVobbleComponent");
		return ptr;
	}



	void StartVobble();
};

// Class Dungeons.ArtifactChargeGameplayEffect
// 0x0000
class UArtifactChargeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArtifactChargeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArtifactCharge
// 0x0000
class UArtifactCharge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArtifactCharge");
		return ptr;
	}



};

// Class Dungeons.AssetManagerFunctionLibrary
// 0x0000
class UAssetManagerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AssetManagerFunctionLibrary");
		return ptr;
	}



	void GetDefaultInventoryAssetManager();
	void GetDefaultAssetManager();
	void CreateHiddenShadowMeshCopy();
};

// Class Dungeons.Attachable
// 0x0000
class UAttachable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Attachable");
		return ptr;
	}



	void AttachedToActorHidden();
};

// Class Dungeons.AudioCollectionComponent
// 0x0000
class UAudioCollectionComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AudioCollectionComponent");
		return ptr;
	}



	void GetMusicTracksForLevel();
	void GetEncounterMusic();
	void GetBossMusic();
};

// Class Dungeons.AudioManager
// 0x0000
class AAudioManager : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AudioManager");
		return ptr;
	}



	void GetSoundCueFirstSoundWaveDuration();
};

// Class Dungeons.AudioManagerBase
// 0x0000
class AAudioManagerBase : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AudioManagerBase");
		return ptr;
	}



	void PushMusicTrackSoft();
	void PushMusicTrack();
	void Pop();
};

// Class Dungeons.AudioMusicManager
// 0x0000
class AAudioMusicManager : public AAudioManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AudioMusicManager");
		return ptr;
	}



	void Pause();
	void GetEncounterMusicTrack();
	void GetCurrentLevelAudioCollection();
};

// Class Dungeons.AudioSFXManager
// 0x0000
class AAudioSFXManager : public AAudioManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AudioSFXManager");
		return ptr;
	}



};

// Class Dungeons.RangedAttackComponent
// 0x0000
class URangedAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedAttackComponent");
		return ptr;
	}



	void SpawnProjectileMulticast();
	void ServerStopAttackAnimation();
	void ServerEndAttack();
	void ServerBeginAttack();
	void RemoveThrowable();
	void OnWeaponSlotUpdated();
	void OnRep_AttackIndex();
	void HasRangedWeaponEquipped();
	void GetWeaponChargeTime();
	void GetCurrentAmmoSlot();
	void GetAvailableAmmoSlots();
	void GetAndRemoveTopThrowable();
	void CanAddThrowable();
	void AmmoSlotChangedCount();
	void AddThrowable();
};

// Class Dungeons.AutoAimRangedAttackComponent
// 0x0000
class UAutoAimRangedAttackComponent : public URangedAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoAimRangedAttackComponent");
		return ptr;
	}



};

// Class Dungeons.AutoTargetDefaultIdle
// 0x0000
class UAutoTargetDefaultIdle : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetDefaultIdle");
		return ptr;
	}



};

// Class Dungeons.AutoTargetDefaultActive
// 0x0000
class UAutoTargetDefaultActive : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetDefaultActive");
		return ptr;
	}



};

// Class Dungeons.AutoTargetRangedIdle
// 0x0000
class UAutoTargetRangedIdle : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetRangedIdle");
		return ptr;
	}



};

// Class Dungeons.AutoTargetRangedActive
// 0x0000
class UAutoTargetRangedActive : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetRangedActive");
		return ptr;
	}



};

// Class Dungeons.AutoTargetShootingIdle
// 0x0000
class UAutoTargetShootingIdle : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetShootingIdle");
		return ptr;
	}



};

// Class Dungeons.AutoTargetShootingActive
// 0x0000
class UAutoTargetShootingActive : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTargetShootingActive");
		return ptr;
	}



};

// Class Dungeons.AutoTarget
// 0x0000
class AAutoTarget : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AutoTarget");
		return ptr;
	}



};

// Class Dungeons.AvatarInfo
// 0x0000
class AAvatarInfo : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AvatarInfo");
		return ptr;
	}



};

// Class Dungeons.AwardsGeneratorComponent
// 0x0000
class UAwardsGeneratorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AwardsGeneratorComponent");
		return ptr;
	}



};

// Class Dungeons.AwarenessComponent
// 0x0000
class UAwarenessComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AwarenessComponent");
		return ptr;
	}



	void IsTriggered();
	void IsAware();
	void GetFraction();
};

// Class Dungeons.MochilaComponent
// 0x0000
class UMochilaComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MochilaComponent");
		return ptr;
	}



	void OnRep_ActorClass();
	void ApplyDamage();
};

// Class Dungeons.BackstabbersBrewGameplayEffect
// 0x0000
class UBackstabbersBrewGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BackstabbersBrewGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BackstabbersBrewInstance
// 0x0000
class ABackstabbersBrewInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BackstabbersBrewInstance");
		return ptr;
	}



};

// Class Dungeons.BagOfSoulsGameplayEffect
// 0x0000
class UBagOfSoulsGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BagOfSoulsGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BagOfSouls
// 0x0000
class UBagOfSouls : public UEffectApplyingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BagOfSouls");
		return ptr;
	}



};

// Class Dungeons.BaneEnchantment
// 0x0000
class UBaneEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaneEnchantment");
		return ptr;
	}



};

// Class Dungeons.BaneOfIllagers
// 0x0000
class UBaneOfIllagers : public UBaneEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaneOfIllagers");
		return ptr;
	}



};

// Class Dungeons.BarrierModLevelCalculation
// 0x0000
class UBarrierModLevelCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BarrierModLevelCalculation");
		return ptr;
	}



};

// Class Dungeons.BarrierGameplayEffect
// 0x0000
class UBarrierGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BarrierGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Barrier
// 0x0000
class UBarrier : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Barrier");
		return ptr;
	}



	void OnRadiusLeave();
	void OnRadiusEnter();
};

// Class Dungeons.BaseCharacter
// 0x0000
class ABaseCharacter : public ACharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseCharacter");
		return ptr;
	}



	void UpdatePushVolumeMovement();
	void SpawnEffectsAtLocation();
	void SpawnAttachedParticles();
	void SetTargetable();
	void SetPushImmunity();
	void SetModifierSurface();
	void SetAttackState();
	void ServerRemoveInvulnerability();
	void ServerApplyInvulnerability();
	void OnRep_WorldState();
	void OnRep_Master();
	void OnRep_LookAtActor();
	void OnRep_AttackState();
	void OnPushRecieverDeactivated();
	void OnCharacterRevive();
	void OnCharacterHeal();
	void OnCharacterDeath();
	void OnCharacterDamageReceivedWithType();
	void OnCharacterDamageReceivedWithTag();
	void OnCharacterDamageReceived();
	void OnAttackedWhileBubbled();
	void MulticastStopSlotAnimation();
	void MulticastStopMontage();
	void MulticastStopAnimation();
	void MulticastSetPlayrateMontage();
	void MulticastResumeMontage();
	void MulticastPlayMontageSectionWithBlendAtSectionPercentagePacked();
	void MulticastPlayMontagePacked();
	void MulticastPlayMeleeAttackVariantAnimation();
	void MulticastPlayAnimationAsDynamicMontagePacked();
	void MulticastPauseMontage();
	void MulticastJumpToSectionMontageWithPlayratePacked();
	void MulticastJumpToSectionMontage();
	void Kill();
	void IsUnderwater();
	void IsTargetable();
	void IsHostileTowards();
	void IsFrozenSolid();
	void IsFriendlyTowards();
	void IsBlocking();
	void GetStepMaterial();
	void GetRagdollOnDeathComponent();
	void GetPushVolumeReactiveComponent();
	void GetOverlapMaterial();
	void GetOrCreatePushVolumeReactiveComponent();
	void GetMaster();
	void GetAttackState();
	void CanHealTarget();
	void CanDamageTarget();
};

// Class Dungeons.BaseGameplayEffectApplicationRequirement
// 0x0000
class UBaseGameplayEffectApplicationRequirement : public UGameplayEffectCustomApplicationRequirement
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseGameplayEffectApplicationRequirement");
		return ptr;
	}



};

// Class Dungeons.DungeonsGameplayCueNotify_Actor
// 0x0000
class ADungeonsGameplayCueNotify_Actor : public AGameplayCueNotify_Actor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameplayCueNotify_Actor");
		return ptr;
	}



};

// Class Dungeons.BaseGuardianBeamNotify
// 0x0000
class ABaseGuardianBeamNotify : public ADungeonsGameplayCueNotify_Actor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseGuardianBeamNotify");
		return ptr;
	}



};

// Class Dungeons.BaseItemDamageGameplayEffect
// 0x0000
class UBaseItemDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseItemDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PlayerControllerBase
// 0x0000
class APlayerControllerBase : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerControllerBase");
		return ptr;
	}



	void SetGamepadLightColourForDuration();
	void SetCoopGamepadLightColourIndex();
	void SaveCharacterData();
	void OnSelectedSkinId();
	void IsOwnedByInitialLocalPlayer();
	void IsInitialized();
	void HasSaveData();
	void HasEverSelectedSkinId();
	void GetSaveLocalUserNum();
	void GetRecentSaveDataIndex();
	void GetNumProfiles();
	void GetLocalPlayerDisplayText();
	void GetIsCharacterSlotIndexSelectable();
	void GetInputDirectionalPadState();
	void GetInputAnalogStickStateRadialDeadzone();
	void GetGamepadActive();
	void GetFirstAvailableSaveIndex();
	void GetCharacterSlotByIndex();
	void GetAvailableSaveDataByIndex();
	void DeleteCharacterByIndex();
	void CreateNewCharacter();
	void ControllerTypeChanged();
	void CloneCharacter();
	void CanDeleteCharacterByIndex();
	void CanCreateNewCharacter();
	void AssignSaveData();
};

// Class Dungeons.BaseMenuPlayerController
// 0x0000
class ABaseMenuPlayerController : public APlayerControllerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseMenuPlayerController");
		return ptr;
	}



	void StartOnlineGame();
	void StartOfflineGame();
	void BeginPlay();
};

// Class Dungeons.BaseParticleAssetsComponent
// 0x0000
class UBaseParticleAssetsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseParticleAssetsComponent");
		return ptr;
	}



};

// Class Dungeons.BasePlayerController
// 0x0000
class ABasePlayerController : public APlayerControllerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BasePlayerController");
		return ptr;
	}



	void UpdateInitialBlueprintSetup();
	void ShowDebugInfo();
	void SetWantsToActivateSlot();
	void SetTeleportListOpen();
	void SetPlayerIsImmovable();
	void SetInputCapturedByUI();
	void ServerSetNetConnectionSpeed();
	void ServerRequestMoveEveryoneToLobby();
	void ServerRequestAwards();
	void ServerInteract();
	void Server_DeferredConsoleCommand();
	void ResetMouseCursorToLastPosition();
	void ResetAllStates();
	void ReceiveOnPawnPossessed();
	void ReceiveOnObjectiveSettingsChange();
	void ReceiveOnEnchantmentTriggered();
	void ReceiveOnArmorPropertyTriggered();
	void OnStopForceFeedbackEvent();
	void OnSecondaryHighlightTargetChanged();
	void OnRootPlayerGamepadReleased();
	void OnRootPlayerGamepadPressed();
	void OnRootPlayer();
	void OnRangedTargetingModeToggle();
	void OnRangedTargetingModeReleased();
	void OnRangedTargetingModePressed();
	void OnRangedAttackButtonGamepadReleased();
	void OnRangedAttackButtonGamepadPressed();
	void OnRangedAttackButton();
	void OnRangeAttackAxisSecondary();
	void OnRangeAttackAxisPrimary();
	void OnPreSeamlessTravel();
	void OnPostSeamlessTravel();
	void OnPlayForceFeedbackEvent();
	void OnPlayerRespawned();
	void OnPlayerDeath();
	void OnMoveButton();
	void OnMeleeAttackButtonReleased();
	void OnMeleeAttackButtonPressed();
	void OnMeleeAttackButton();
	void OnLocationClicked();
	void OnHotbarItemUsed();
	void OnHighlightTargetChanged();
	void OnFirePerformanceAnalytics();
	void OnDodgeForwardButton();
	void OnDodgeButton();
	void OnDebugState();
	void OnDebugPointer();
	void OnCancelTeleport();
	void OnAnyPlayerDamaged();
	void OnActorClicked();
	void MoveToLocation();
	void MoveToActor();
	void IsTeleportListOpen();
	void IsTeleporting();
	void IsInputTypeAllowed();
	void IsInputCapturedByUI();
	void IsInputCapturedByTeleport();
	void IsInitialSetupDone();
	void IsChatWheelVisible();
	void InitialBlueprintSetupComplete();
	void HasValidLocalPlayer();
	void GetWalletComponent();
	void GetTeleportDependents();
	void GetTeleportCandidates();
	void GetPlayerId();
	void GetPlayerDisplayName();
	void GetPathFollowingComponent();
	void GetLocalPlayerIndex();
	void GetItemStashComponent();
	void GetIsMoving();
	void GetControlledPlayerCharacter();
	void GetAudioListenerLocation();
	void DodgeInDirection();
	void ClientDropItems();
	void ClickyClicked();
	void CenterMouseCursor();
	void CancelCurrentInputActions();
	void AdjustCameraFovBasedOnCharacterSpeed();
};

// Class Dungeons.BasePlayerState
// 0x0000
class ABasePlayerState : public APlayerState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BasePlayerState");
		return ptr;
	}



	void SetRespawnSeconds();
	void SetReady();
	void SetOwnedByHost();
	void ServerAssignSecondaryUniqueId();
	void ServerAssignPlayerPlatform();
	void ServerAssignDisplayName();
	void OnRep_SetReady();
	void OnRep_SecondaryDisplayName();
	void OnRep_PlayerPlatform();
	void OnRep_PlayerNumber();
	void OnRep_OwnedByHost();
	void OnRep_DisplayName();
	void IsReady();
	void GetRespawnSeconds();
	void GetPlayerSecondaryDisplayName();
	void GetPlayerPrimaryDisplayName();
	void GetPlayerPlatform();
	void GetPlayerNumber();
	void GetPlayerDisplayName();
};

// Class Dungeons.BaseProjectileDamageGameplayEffect
// 0x0000
class UBaseProjectileDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseProjectileDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BlindProjectileDamageGameplayEffect
// 0x0000
class UBlindProjectileDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlindProjectileDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.NoOnwerProjectileDamageGameplayEffect
// 0x0000
class UNoOnwerProjectileDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NoOnwerProjectileDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BasePushVolume
// 0x0000
class ABasePushVolume : public APropActor_RepSpatializeDynamic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BasePushVolume");
		return ptr;
	}



	void SetPushVolumeTimerActive();
	void SetPushVolumeExtent();
	void SetPushVolumeActive();
	void OnWindAreaEndOverlap();
	void OnWindAreaBeginOverlap();
	void OnRep_VolumeIsEnabled();
	void IsPushVolumeActive();
	void GetForce();
};

// Class Dungeons.BaseRangedWeaponAnimNotifyState
// 0x0000
class UBaseRangedWeaponAnimNotifyState : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseRangedWeaponAnimNotifyState");
		return ptr;
	}



};

// Class Dungeons.BeaconAttackComponent
// 0x0000
class UBeaconAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeaconAttackComponent");
		return ptr;
	}



	void Start();
	void MulticastStart();
};

// Class Dungeons.BeaconBeam
// 0x0000
class ABeaconBeam : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeaconBeam");
		return ptr;
	}



};

// Class Dungeons.ArchBeamDamageGameplayEffect
// 0x0000
class UArchBeamDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArchBeamDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BeamDamageGameplayEffect
// 0x0000
class UBeamDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeamDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BeamAttackComponent
// 0x0000
class UBeamAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeamAttackComponent");
		return ptr;
	}



	void OnRep_PhaseChange();
	void GetCurrentTargetActor();
	void EndBeam();
	void BeginTargetingBeam();
	void BeginDamagingBeam();
};

// Class Dungeons.BeamTargetUpdaterComponent
// 0x0000
class UBeamTargetUpdaterComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeamTargetUpdaterComponent");
		return ptr;
	}



	void RemoveParticleSystemComponent();
	void AddParticleSystemComponent();
};

// Class Dungeons.ActorBeamTargetUpdaterComponent
// 0x0000
class UActorBeamTargetUpdaterComponent : public UBeamTargetUpdaterComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ActorBeamTargetUpdaterComponent");
		return ptr;
	}



	void SetActorTarget();
	void ForceUpdate();
};

// Class Dungeons.BeastBossDamageBoostGameplayEffect
// 0x0000
class UBeastBossDamageBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastBossDamageBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BeastBoss
// 0x0000
class UBeastBoss : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastBoss");
		return ptr;
	}



};

// Class Dungeons.BeastBurstExplosionGameplayEffect
// 0x0000
class UBeastBurstExplosionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastBurstExplosionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealthPotionSynergy
// 0x0000
class UHealthPotionSynergy : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthPotionSynergy");
		return ptr;
	}



	void OnItemSuccess();
};

// Class Dungeons.BeastBurst
// 0x0000
class UBeastBurst : public UHealthPotionSynergy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastBurst");
		return ptr;
	}



};

// Class Dungeons.BeastSurgeGameplayEffect
// 0x0000
class UBeastSurgeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastSurgeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BeastSurge
// 0x0000
class UBeastSurge : public UHealthPotionSynergy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeastSurge");
		return ptr;
	}



};

// Class Dungeons.BeekeeperGameplayEffect
// 0x0000
class UBeekeeperGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeekeeperGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Beekeeper
// 0x0000
class UBeekeeper : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Beekeeper");
		return ptr;
	}



};

// Class Dungeons.BeeNest
// 0x0000
class ABeeNest : public AActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeeNest");
		return ptr;
	}



	void OnRep_Expired();
	void OnDespawn();
	void OnBeeSpawn();
};

// Class Dungeons.BeeNestItemInstance
// 0x0000
class ABeeNestItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BeeNestItemInstance");
		return ptr;
	}



	void OnRep_BeeNest();
};

// Class Dungeons.BehaviorComponent
// 0x0000
class UBehaviorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BehaviorComponent");
		return ptr;
	}



	void OnStun();
	void OnBubbled();
};

// Class Dungeons.BehaviorOptionsComponent
// 0x0000
class UBehaviorOptionsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BehaviorOptionsComponent");
		return ptr;
	}



};

// Class Dungeons.BehaviorSystemActor
// 0x0000
class ABehaviorSystemActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BehaviorSystemActor");
		return ptr;
	}



};

// Class Dungeons.BiomineSpawnPoint
// 0x0000
class ABiomineSpawnPoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BiomineSpawnPoint");
		return ptr;
	}



};

// Class Dungeons.MerchantBase
// 0x0000
class AMerchantBase : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantBase");
		return ptr;
	}



};

// Class Dungeons.BlacksmithMerchant
// 0x0000
class ABlacksmithMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlacksmithMerchant");
		return ptr;
	}



};

// Class Dungeons.BlazeFire
// 0x0000
class ABlazeFire : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlazeFire");
		return ptr;
	}



};

// Class Dungeons.BlindCloudSpawnHelper
// 0x0000
class UBlindCloudSpawnHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlindCloudSpawnHelper");
		return ptr;
	}



	void SpawnBlindCloud();
};

// Class Dungeons.BlindGameplayEffect
// 0x0000
class UBlindGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlindGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BlindCloud
// 0x0000
class ABlindCloud : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlindCloud");
		return ptr;
	}



	void OnPlayerCharacterLeftNonFriendlyCloud();
	void OnPlayerCharacterEnteredNonFriendlyCloud();
};

// Class Dungeons.BlockingMessage
// 0x0000
class UBlockingMessage : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlockingMessage");
		return ptr;
	}



	void Retry();
	void GetType();
	void Dismiss();
};

// Class Dungeons.BlockingMessageBoard
// 0x0000
class UBlockingMessageBoard : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlockingMessageBoard");
		return ptr;
	}



};

// Class Dungeons.BlockTrigger
// 0x0000
class UBlockTrigger : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlockTrigger");
		return ptr;
	}



};

// Class Dungeons.BlockTriggerComponent
// 0x0000
class UBlockTriggerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlockTriggerComponent");
		return ptr;
	}



};

// Class Dungeons.BonusShot
// 0x0000
class UBonusShot : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BonusShot");
		return ptr;
	}



	void SpawnProjectilesMulticast();
};

// Class Dungeons.BootsOfSwiftnessGameplayEffect
// 0x0000
class UBootsOfSwiftnessGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BootsOfSwiftnessGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BootsOfSwiftnessInstance
// 0x0000
class ABootsOfSwiftnessInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BootsOfSwiftnessInstance");
		return ptr;
	}



};

// Class Dungeons.BowsBoonGameplayEffect
// 0x0000
class UBowsBoonGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BowsBoonGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BowsBoon
// 0x0000
class UBowsBoon : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BowsBoon");
		return ptr;
	}



};

// Class Dungeons.BoxOfHeartsGameplayEffect
// 0x0000
class UBoxOfHeartsGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BoxOfHeartsGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BoxOfHearts
// 0x0000
class ABoxOfHearts : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BoxOfHearts");
		return ptr;
	}



};

// Class Dungeons.BubbleColumn
// 0x0000
class ABubbleColumn : public APropActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BubbleColumn");
		return ptr;
	}



	void SetOxygenEnabled();
	void SetHot();
	void OnRep_IsHot();
	void OnRep_IsEnabled();
};

// Class Dungeons.BubbleColumnBurningEffect
// 0x0000
class UBubbleColumnBurningEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BubbleColumnBurningEffect");
		return ptr;
	}



};

// Class Dungeons.BubbledHelper
// 0x0000
class UBubbledHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BubbledHelper");
		return ptr;
	}



	void DealDamageOnRadius();
	void ApplyBubbleEffect();
};

// Class Dungeons.BubbledGameplayEffect
// 0x0000
class UBubbledGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BubbledGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WorldDamageGameplayEffect
// 0x0000
class UWorldDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WorldDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BubbledDamageGameplayEffect
// 0x0000
class UBubbledDamageGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BubbledDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TotemBaseActor
// 0x0000
class ATotemBaseActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemBaseActor");
		return ptr;
	}



	void OnWeakenedVitalityReached();
	void OnPlayerExit();
	void OnPlayerEnter();
	void OnEndSphereOverlap();
	void OnDestroyCountdownStarted();
	void OnBeginSphereOverlap();
	void GetHealthFraction();
};

// Class Dungeons.BuffGrantTotemActor
// 0x0000
class ABuffGrantTotemActor : public ATotemBaseActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BuffGrantTotemActor");
		return ptr;
	}



};

// Class Dungeons.TotemBaseItemInstance
// 0x0000
class ATotemBaseItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemBaseItemInstance");
		return ptr;
	}



};

// Class Dungeons.BuffGrantTotemInstance
// 0x0000
class ABuffGrantTotemInstance : public ATotemBaseItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BuffGrantTotemInstance");
		return ptr;
	}



};

// Class Dungeons.BumpableComponent
// 0x0000
class UBumpableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BumpableComponent");
		return ptr;
	}



	void OnActorHit();
};

// Class Dungeons.BurningDamageGameplayEffect
// 0x0000
class UBurningDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BurningDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.IntervalExecutionEnchantment
// 0x0000
class UIntervalExecutionEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IntervalExecutionEnchantment");
		return ptr;
	}



	void OnIntervalExecute();
};

// Class Dungeons.Burning
// 0x0000
class UBurning : public UIntervalExecutionEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Burning");
		return ptr;
	}



};

// Class Dungeons.BurningArrow
// 0x0000
class ABurningArrow : public ABaseProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BurningArrow");
		return ptr;
	}



};

// Class Dungeons.BurningOilVialGameplayEffect
// 0x0000
class UBurningOilVialGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BurningOilVialGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BurningOilVialInstance
// 0x0000
class ABurningOilVialInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BurningOilVialInstance");
		return ptr;
	}



};

// Class Dungeons.RollingFortressGameplayEffect
// 0x0000
class URollingFortressGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RollingFortressGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BurstBowstring
// 0x0000
class UBurstBowstring : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BurstBowstring");
		return ptr;
	}



};

// Class Dungeons.MobSummonRandomChanceEnchantment
// 0x0000
class UMobSummonRandomChanceEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSummonRandomChanceEnchantment");
		return ptr;
	}



};

// Class Dungeons.BusyBee
// 0x0000
class UBusyBee : public UMobSummonRandomChanceEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BusyBee");
		return ptr;
	}



};

// Class Dungeons.MerchantSubobjectBase
// 0x0000
class UMerchantSubobjectBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantSubobjectBase");
		return ptr;
	}



};

// Class Dungeons.MerchantSlotBase
// 0x0000
class UMerchantSlotBase : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantSlotBase");
		return ptr;
	}



	void IsUnlocked();
	void HasPrice();
	void GetPrice();
	void GetActiveUnlockQuest();
};

// Class Dungeons.MerchantItemSlotBase
// 0x0000
class UMerchantItemSlotBase : public UMerchantSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantItemSlotBase");
		return ptr;
	}



	void IsReserved();
	void IsItemUnlocked();
	void IsItemReserved();
	void HasItem();
	void GetItem();
	void GetDisplayItemCache();
};

// Class Dungeons.BuyableItemSlot
// 0x0000
class UBuyableItemSlot : public UMerchantItemSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BuyableItemSlot");
		return ptr;
	}



};

// Class Dungeons.MerchantTransactionBase
// 0x0000
class UMerchantTransactionBase : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantTransactionBase");
		return ptr;
	}



	void TryExecute();
	void QueryProblemStatus();
	void HasPrice();
	void GetSuccessStatusReason();
	void GetStatusReason();
	void GetStatusBulletPoints();
	void GetPrice();
	void CanSelectAllRequiredSelections();
	void CanExecute();
};

// Class Dungeons.MerchantSlotTransactionBase
// 0x0000
class UMerchantSlotTransactionBase : public UMerchantTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantSlotTransactionBase");
		return ptr;
	}



};

// Class Dungeons.BuyItem
// 0x0000
class UBuyItem : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BuyItem");
		return ptr;
	}



};

// Class Dungeons.CameraModifier_NightModifier
// 0x0000
class UCameraModifier_NightModifier : public UCameraModifier
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CameraModifier_NightModifier");
		return ptr;
	}



	void OnBecomingNightChanged();
};

// Class Dungeons.CaveSpiderPoisonedGameplayEffect
// 0x0000
class UCaveSpiderPoisonedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CaveSpiderPoisonedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CaveSpiderPoisonEnchantment
// 0x0000
class UCaveSpiderPoisonEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CaveSpiderPoisonEnchantment");
		return ptr;
	}



};

// Class Dungeons.CelerityGameplayEffect
// 0x0000
class UCelerityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CelerityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Celerity
// 0x0000
class UCelerity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Celerity");
		return ptr;
	}



};

// Class Dungeons.ChainLightningDamageGameplayEffect
// 0x0000
class UChainLightningDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChainLightningDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MeleeChainLightningDamageGameplayEffect
// 0x0000
class UMeleeChainLightningDamageGameplayEffect : public UChainLightningDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeChainLightningDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RangedChainLightningDamageGameplayEffect
// 0x0000
class URangedChainLightningDamageGameplayEffect : public UChainLightningDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedChainLightningDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ChainReaction
// 0x0000
class UChainReaction : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChainReaction");
		return ptr;
	}



	void SpawnProjectilesMulticast();
};

// Class Dungeons.ChainsGameplayEffect
// 0x0000
class UChainsGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChainsGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Chains
// 0x0000
class UChains : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Chains");
		return ptr;
	}



};

// Class Dungeons.ChanceInfoIconWidget
// 0x0000
class UChanceInfoIconWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChanceInfoIconWidget");
		return ptr;
	}



};

// Class Dungeons.CharacterAnimInstance
// 0x0000
class UCharacterAnimInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterAnimInstance");
		return ptr;
	}



	void GetPlayerCharacter();
	void GetMobCharacter();
	void GetBaseCharacter();
};

// Class Dungeons.CharacterSerializeComponent
// 0x0000
class UCharacterSerializeComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterSerializeComponent");
		return ptr;
	}



	void SetSkin();
	void SetName();
	void SetLegendaryStatus();
	void ReadSkin();
	void ReadName();
	void HasProfile();
	void GetLegendaryStatus();
	void GetCloudPlayerId();
	void AssignCharacter();
};

// Class Dungeons.CharacterLazySaveComponent
// 0x0000
class UCharacterLazySaveComponent : public UCharacterSerializeComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterLazySaveComponent");
		return ptr;
	}



	void SaveFailed();
};

// Class Dungeons.CharacterLevelUtils
// 0x0000
class UCharacterLevelUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterLevelUtils");
		return ptr;
	}



	void getProgress();
};

// Class Dungeons.CharacterSaveData
// 0x0000
class UCharacterSaveData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterSaveData");
		return ptr;
	}



	void OnConsoleSaveDataFinishedLoad();
	void GetLegendaryStatus();
};

// Class Dungeons.CharacterZAdjustmentComponent
// 0x0000
class UCharacterZAdjustmentComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CharacterZAdjustmentComponent");
		return ptr;
	}



};

// Class Dungeons.ChargedRedstoneMineActor
// 0x0000
class AChargedRedstoneMineActor : public APropActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargedRedstoneMineActor");
		return ptr;
	}



	void OnOverlapBegin();
	void OnExplode();
	void MulticastExplode();
	void Explode();
};

// Class Dungeons.ChargedRedstoneMineDamageGameplayEffect
// 0x0000
class UChargedRedstoneMineDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargedRedstoneMineDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ChargedRedstoneMinesInstance
// 0x0000
class AChargedRedstoneMinesInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargedRedstoneMinesInstance");
		return ptr;
	}



};

// Class Dungeons.ChargingAccelerationChargeGameplayEffect
// 0x0000
class UChargingAccelerationChargeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargingAccelerationChargeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ChargingAccelerationBaseGameplayEffect
// 0x0000
class UChargingAccelerationBaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargingAccelerationBaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ChargingAcceleration
// 0x0000
class UChargingAcceleration : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChargingAcceleration");
		return ptr;
	}



	void OnCharge();
	void OnAttackOver();
};

// Class Dungeons.ChatComponent
// 0x0000
class UChatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChatComponent");
		return ptr;
	}



	void ServerSendPickupItem();
	void ServerSendEmote();
	void ServerSendChatMessage();
	void RecieveChatMessage();
	void RecieveChatEmote();
	void ItemPickedUp();
	void ClientSendPlayerStatus();
	void ClientSendPickupItem();
	void ClientSendEmote();
	void ClientSendChatMessage();
};

// Class Dungeons.ChatWheelComponent
// 0x0000
class UChatWheelComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChatWheelComponent");
		return ptr;
	}



};

// Class Dungeons.ChestActor
// 0x0000
class AChestActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChestActor");
		return ptr;
	}



};

// Class Dungeons.FreezingGameplayEffect
// 0x0000
class UFreezingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FreezingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ChillingGameplayEffect
// 0x0000
class UChillingGameplayEffect : public UFreezingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChillingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Chilling
// 0x0000
class UChilling : public UIntervalExecutionEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Chilling");
		return ptr;
	}



};

// Class Dungeons.CinematicSequence
// 0x0000
class UCinematicSequence : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CinematicSequence");
		return ptr;
	}



	void Stop();
	void OnStopped();
	void IsPlaying();
};

// Class Dungeons.CogCrossBowChargeGameplayEffect
// 0x0000
class UCogCrossBowChargeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CogCrossBowChargeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CogCrossbowEnchantment
// 0x0000
class UCogCrossbowEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CogCrossbowEnchantment");
		return ptr;
	}



	void OnRep_CanAttack();
};

// Class Dungeons.CollectItem
// 0x0000
class UCollectItem : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CollectItem");
		return ptr;
	}



};

// Class Dungeons.Committed
// 0x0000
class UCommitted : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Committed");
		return ptr;
	}



};

// Class Dungeons.CompositeEntitlementsRepository
// 0x0000
class UCompositeEntitlementsRepository : public UEntitlementsRepository
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CompositeEntitlementsRepository");
		return ptr;
	}



};

// Class Dungeons.ConduitButton
// 0x0000
class AConduitButton : public APropActor_RepAlways
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConduitButton");
		return ptr;
	}



	void OnConduitHeld();
	void OnConduitDropped();
	void GiveConduitToCharacter();
	void DropConduitStorable();
	void CompleteDarkConduit();
};

// Class Dungeons.MobDrowningGameplayEffect
// 0x0000
class UMobDrowningGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobDrowningGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ConduitSpeedBoostGameplayEffect
// 0x0000
class UConduitSpeedBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConduitSpeedBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ConduitInstance
// 0x0000
class AConduitInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConduitInstance");
		return ptr;
	}



};

// Class Dungeons.ThrowablePropActor
// 0x0000
class AThrowablePropActor : public APropActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThrowablePropActor");
		return ptr;
	}



	void ThrowServer();
	void ThrowInPlayerForwardDir();
	void ThrowInMouseDir();
	void OnRep_IsActivated();
	void OnEffectExecuted();
	void OnActivated();
};

// Class Dungeons.ConduitItem
// 0x0000
class AConduitItem : public AThrowablePropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConduitItem");
		return ptr;
	}



	void UpdateMaterials();
	void OnRep_IsHeldByPlayer();
	void GiveConduitToCharacter();
	void EnableSound();
};

// Class Dungeons.ConduitProp
// 0x0000
class AConduitProp : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConduitProp");
		return ptr;
	}



};

// Class Dungeons.ConnectionChecker
// 0x0000
class UConnectionChecker : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ConnectionChecker");
		return ptr;
	}



};

// Class Dungeons.ContinousDamageActor
// 0x0000
class AContinousDamageActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ContinousDamageActor");
		return ptr;
	}



	void SetGameplayEffectSpec();
	void OnDamageDisabled();
};

// Class Dungeons.ContinousDamageComponent
// 0x0000
class UContinousDamageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ContinousDamageComponent");
		return ptr;
	}



	void OnComponentEndOverlap();
	void OnComponentBeginOverlap();
};

// Class Dungeons.CooldownProvider
// 0x0000
class UCooldownProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CooldownProvider");
		return ptr;
	}



	void IsOnCooldown();
	void GetCooldownSecondsRemaining();
	void GetCooldownSecondsDuration();
	void GetCooldownFractionRemaining();
};

// Class Dungeons.CooldownShot
// 0x0000
class UCooldownShot : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CooldownShot");
		return ptr;
	}



};

// Class Dungeons.CorpseAttractorHealGameplayEffect
// 0x0000
class UCorpseAttractorHealGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorpseAttractorHealGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CorpseAttractorComponent
// 0x0000
class UCorpseAttractorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorpseAttractorComponent");
		return ptr;
	}



	void OnRep_CurrentlyActiveMobs();
};

// Class Dungeons.CorruptedBeaconGameplayEffect
// 0x0000
class UCorruptedBeaconGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedBeaconGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CorruptedBeaconDamageGameplayEffect
// 0x0000
class UCorruptedBeaconDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedBeaconDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.InterruptableItemInstance
// 0x0000
class AInterruptableItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InterruptableItemInstance");
		return ptr;
	}



};

// Class Dungeons.TogglableItemInstance
// 0x0000
class ATogglableItemInstance : public AInterruptableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TogglableItemInstance");
		return ptr;
	}



	void ServerToggle();
	void OnRep_BackingToggle();
	void ClientToggle();
};

// Class Dungeons.CorruptedBeacon
// 0x0000
class ACorruptedBeacon : public ATogglableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedBeacon");
		return ptr;
	}



};

// Class Dungeons.CorruptedSeedsEntangleEffect
// 0x0000
class UCorruptedSeedsEntangleEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedSeedsEntangleEffect");
		return ptr;
	}



};

// Class Dungeons.CorruptedSeedsPoisonEffect
// 0x0000
class UCorruptedSeedsPoisonEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedSeedsPoisonEffect");
		return ptr;
	}



};

// Class Dungeons.CorruptedSeeds
// 0x0000
class ACorruptedSeeds : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CorruptedSeeds");
		return ptr;
	}



};

// Class Dungeons.CosmeticItemDef
// 0x0000
class UCosmeticItemDef : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticItemDef");
		return ptr;
	}



	void GetEntitlementName();
	void GetCosmeticType();
	void GetCosmeticInventoryRotation();
	void GetCosmeticId();
	void GetCosmeticIconTexture();
	void GetCosmeticEquippedSound();
	void GetCosmeticEquippedAnimation();
	void GetCosmeticDisplayName();
	void GetCosmeticDisplayDescription();
	void GetBlueprintClass();
};

// Class Dungeons.CosmeticItemInfo
// 0x0000
class ACosmeticItemInfo : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticItemInfo");
		return ptr;
	}



	void GetType();
	void GetItemName();
};

// Class Dungeons.CosmeticsComponent
// 0x0000
class UCosmeticsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsComponent");
		return ptr;
	}



	void GetSlots();
	void FindAvailableCosmeticTypeDefinitions();
};

// Class Dungeons.CosmeticsDisplayComponent
// 0x0000
class UCosmeticsDisplayComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsDisplayComponent");
		return ptr;
	}



	void OnStoreItemUpdated();
};

// Class Dungeons.CosmeticsLibrary
// 0x0000
class UCosmeticsLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsLibrary");
		return ptr;
	}



};

// Class Dungeons.CosmeticsPrimaryDataAsset
// 0x0000
class UCosmeticsPrimaryDataAsset : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.CosmeticsSlot
// 0x0000
class UCosmeticsSlot : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsSlot");
		return ptr;
	}



	void UnequipCosmetic();
	void ServerSetCosmetic();
	void OnRep_CosmeticReplicated();
	void OnHighlightedInUi();
	void IsCosmeticNew();
	void IsCosmeticEquipped();
	void GetType();
	void GetItem();
	void GetEquippedCosmetic();
	void GetAvailableCosmetics();
	void EquipCosmetic();
};

// Class Dungeons.CosmeticsUtil
// 0x0000
class UCosmeticsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CosmeticsUtil");
		return ptr;
	}



	void getCostmeticTypeDisplayName();
};

// Class Dungeons.CospawnComponent
// 0x0000
class UCospawnComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CospawnComponent");
		return ptr;
	}



};

// Class Dungeons.CowardiceGameplayEffect
// 0x0000
class UCowardiceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CowardiceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Cowardice
// 0x0000
class UCowardice : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Cowardice");
		return ptr;
	}



};

// Class Dungeons.CreateDungeonsSessionCallbackProxy
// 0x0000
class UCreateDungeonsSessionCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CreateDungeonsSessionCallbackProxy");
		return ptr;
	}



};

// Class Dungeons.CriticalHit
// 0x0000
class UCriticalHit : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CriticalHit");
		return ptr;
	}



};

// Class Dungeons.DungeonsSessionAttributesEntity
// 0x0000
class UDungeonsSessionAttributesEntity : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsSessionAttributesEntity");
		return ptr;
	}



	void GetSessionPlayerInfo();
	void GetOnlineService();
};

// Class Dungeons.PawnCounterWidgetBase
// 0x0000
class UPawnCounterWidgetBase : public UActorCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PawnCounterWidgetBase");
		return ptr;
	}



};

// Class Dungeons.CurrencyCounterWidgetBase
// 0x0000
class UCurrencyCounterWidgetBase : public UPawnCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrencyCounterWidgetBase");
		return ptr;
	}



	void SetCurrencyType();
	void OnCurrencyTypeChanged();
	void IsCurrencyItemId();
	void GetCurrencyItemId();
};

// Class Dungeons.CustomMover
// 0x0000
class UCustomMover : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CustomMover");
		return ptr;
	}



	void ExecuteCustomMove();
};

// Class Dungeons.PushbackCustomMover
// 0x0000
class UPushbackCustomMover : public UCustomMover
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PushbackCustomMover");
		return ptr;
	}



};

// Class Dungeons.CustomMoverItemInstance
// 0x0000
class ACustomMoverItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CustomMoverItemInstance");
		return ptr;
	}



	void OnRep_Slot();
};

// Class Dungeons.DamageAbsorptionGameplayEffect
// 0x0000
class UDamageAbsorptionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageAbsorptionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DamageAbsorption
// 0x0000
class UDamageAbsorption : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageAbsorption");
		return ptr;
	}



};

// Class Dungeons.DamageAttributeSet
// 0x0000
class UDamageAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageAttributeSet");
		return ptr;
	}



	void OnRep_DamageMultiplier();
};

// Class Dungeons.DamageExecutionCalculation
// 0x0000
class UDamageExecutionCalculation : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageExecutionCalculation");
		return ptr;
	}



};

// Class Dungeons.NegativeHealthModCalculation
// 0x0000
class UNegativeHealthModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NegativeHealthModCalculation");
		return ptr;
	}



};

// Class Dungeons.DamageModCalculation
// 0x0000
class UDamageModCalculation : public UNegativeHealthModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.DamageModSourceCalculation
// 0x0000
class UDamageModSourceCalculation : public UDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageModSourceCalculation");
		return ptr;
	}



};

// Class Dungeons.AffectorDamageModCalculation
// 0x0000
class UAffectorDamageModCalculation : public UDamageModSourceCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AffectorDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyDamageModCalculation
// 0x0000
class UDifficultyDamageModCalculation : public UAffectorDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.MeleeModDamageCalculation
// 0x0000
class UMeleeModDamageCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeModDamageCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemDamageModCalculation
// 0x0000
class UItemDamageModCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.RangedDamageModCalculation
// 0x0000
class URangedDamageModCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.MeleeItemPowerOnlyModDamageCalculation
// 0x0000
class UMeleeItemPowerOnlyModDamageCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeItemPowerOnlyModDamageCalculation");
		return ptr;
	}



};

// Class Dungeons.RangedItemPowerOnlyModDamageCalculation
// 0x0000
class URangedItemPowerOnlyModDamageCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedItemPowerOnlyModDamageCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerOnlyAsEffectLevelModDamageCalculation
// 0x0000
class UItemPowerOnlyAsEffectLevelModDamageCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerOnlyAsEffectLevelModDamageCalculation");
		return ptr;
	}



};

// Class Dungeons.ArmorItemPowerOnlyModDamageCalculation
// 0x0000
class UArmorItemPowerOnlyModDamageCalculation : public UDifficultyDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorItemPowerOnlyModDamageCalculation");
		return ptr;
	}



};

// Class Dungeons.WorldDamageModCalculation
// 0x0000
class UWorldDamageModCalculation : public UDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WorldDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.ReflectedDamageModCalculation
// 0x0000
class UReflectedDamageModCalculation : public UDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReflectedDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.DamageNumberBatchingComponent
// 0x0000
class UDamageNumberBatchingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageNumberBatchingComponent");
		return ptr;
	}



	void ClientExecuteDamageNumbers();
};

// Class Dungeons.DamageSelfGameplayEffect
// 0x0000
class UDamageSelfGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageSelfGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DamageSynergyGameplayEffect
// 0x0000
class UDamageSynergyGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageSynergyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Synergy
// 0x0000
class USynergy : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Synergy");
		return ptr;
	}



	void OnItemSuccess();
	void OnItemInstanceChanged();
};

// Class Dungeons.DamageSynergy
// 0x0000
class UDamageSynergy : public USynergy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageSynergy");
		return ptr;
	}



};

// Class Dungeons.DamageWeakeningGameplayEffect
// 0x0000
class UDamageWeakeningGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageWeakeningGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DarkConduitInteraction
// 0x0000
class ADarkConduitInteraction : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DarkConduitInteraction");
		return ptr;
	}



	void OnConduitOutOfRange();
	void OnConduitInRange();
};

// Class Dungeons.WaveSpawner
// 0x0000
class AWaveSpawner : public APropActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaveSpawner");
		return ptr;
	}



	void OnGameReady();
};

// Class Dungeons.DarkSpawner
// 0x0000
class ADarkSpawner : public AWaveSpawner
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DarkSpawner");
		return ptr;
	}



};

// Class Dungeons.DashAttackComponent
// 0x0000
class UDashAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DashAttackComponent");
		return ptr;
	}



};

// Class Dungeons.DeathBarterChargingGameplayEffect
// 0x0000
class UDeathBarterChargingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterChargingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterChargingLevelOneGameplayEffect
// 0x0000
class UDeathBarterChargingLevelOneGameplayEffect : public UDeathBarterChargingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterChargingLevelOneGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterChargingLevelTwoGameplayEffect
// 0x0000
class UDeathBarterChargingLevelTwoGameplayEffect : public UDeathBarterChargingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterChargingLevelTwoGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterChargingLevelThreeGameplayEffect
// 0x0000
class UDeathBarterChargingLevelThreeGameplayEffect : public UDeathBarterChargingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterChargingLevelThreeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterActiveGameplayEffect
// 0x0000
class UDeathBarterActiveGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterActiveGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterReviveGameplayEffect
// 0x0000
class UDeathBarterReviveGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterReviveGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.InvulnerableNoCueGameplayEffect
// 0x0000
class UInvulnerableNoCueGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InvulnerableNoCueGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.InvulnerableGameplayEffect
// 0x0000
class UInvulnerableGameplayEffect : public UInvulnerableNoCueGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InvulnerableGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarterInvulnerabilityGameplayEffect
// 0x0000
class UDeathBarterInvulnerabilityGameplayEffect : public UInvulnerableGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarterInvulnerabilityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathBarter
// 0x0000
class UDeathBarter : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathBarter");
		return ptr;
	}



	void ServerSendCount();
	void Client_OnBeforeDeath();
};

// Class Dungeons.DeathCapMushroomGameplayEffect
// 0x0000
class UDeathCapMushroomGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathCapMushroomGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DeathCapMushroomInstance
// 0x0000
class ADeathCapMushroomInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeathCapMushroomInstance");
		return ptr;
	}



};

// Class Dungeons.DebugComponent
// 0x0000
class UDebugComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DebugComponent");
		return ptr;
	}



};

// Class Dungeons.DecorationAnchor
// 0x0000
class ADecorationAnchor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DecorationAnchor");
		return ptr;
	}



};

// Class Dungeons.DecorationLevelActor
// 0x0000
class ADecorationLevelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DecorationLevelActor");
		return ptr;
	}



};

// Class Dungeons.ItemDropComponent
// 0x0000
class UItemDropComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDropComponent");
		return ptr;
	}



	void TearDownComponent();
	void ServerDropItems();
};

// Class Dungeons.PredefinedItemDropComponent
// 0x0000
class UPredefinedItemDropComponent : public UItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PredefinedItemDropComponent");
		return ptr;
	}



};

// Class Dungeons.DeductingItemDropComponent
// 0x0000
class UDeductingItemDropComponent : public UPredefinedItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeductingItemDropComponent");
		return ptr;
	}



	void ServerDeductItems();
};

// Class Dungeons.DefensePotionGameplayEffect
// 0x0000
class UDefensePotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DefensePotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DefensePotionInstance
// 0x0000
class ADefensePotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DefensePotionInstance");
		return ptr;
	}



};

// Class Dungeons.Deflecting
// 0x0000
class UDeflecting : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Deflecting");
		return ptr;
	}



	void MulticastDeflect();
};

// Class Dungeons.DeflectingGameplayEffect
// 0x0000
class UDeflectingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DeflectingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DemoUtils
// 0x0000
class UDemoUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DemoUtils");
		return ptr;
	}



	void TryStartDemo();
	void SkipSplash();
	void IsDemo();
};

// Class Dungeons.HeavyweightGameplayEffect
// 0x0000
class UHeavyweightGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HeavyweightGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DenseBrewPotionGameplayEffect
// 0x0000
class UDenseBrewPotionGameplayEffect : public UHeavyweightGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DenseBrewPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DenseBrewInstance
// 0x0000
class ADenseBrewInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DenseBrewInstance");
		return ptr;
	}



};

// Class Dungeons.DestroyDungeonsSessionCallbackProxy
// 0x0000
class UDestroyDungeonsSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DestroyDungeonsSessionCallbackProxy");
		return ptr;
	}



};

// Class Dungeons.DifficultyAttributeSet
// 0x0000
class UDifficultyAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyAttributeSet");
		return ptr;
	}



	void OnRep_DifficultyPerformHealingMultiplier();
	void OnRep_DifficultyDealDamageMultiplier();
};

// Class Dungeons.BaseDifficultyGameplayEffect
// 0x0000
class UBaseDifficultyGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseDifficultyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.NormalDifficultyGameplayEffect
// 0x0000
class UNormalDifficultyGameplayEffect : public UBaseDifficultyGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NormalDifficultyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpecialDifficultyGameplayEffect
// 0x0000
class USpecialDifficultyGameplayEffect : public UBaseDifficultyGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpecialDifficultyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PlayerDifficultyGameplayEffect
// 0x0000
class UPlayerDifficultyGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerDifficultyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DifficultyDependantModCalculation
// 0x0000
class UDifficultyDependantModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyDependantModCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobDamageMultiplicationCalculation
// 0x0000
class UDifficultyMobDamageMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobDamageMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobHealingMultiplicationCalculation
// 0x0000
class UDifficultyMobHealingMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobHealingMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobMaxHealthMultiplicationCalculation
// 0x0000
class UDifficultyMobMaxHealthMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobMaxHealthMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultySpecialMobMaxHealthMultiplicationCalculation
// 0x0000
class UDifficultySpecialMobMaxHealthMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultySpecialMobMaxHealthMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobMaxEnduranceMultiplicationCalculation
// 0x0000
class UDifficultyMobMaxEnduranceMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobMaxEnduranceMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobEnduranceRecoveryMultiplicationCalculation
// 0x0000
class UDifficultyMobEnduranceRecoveryMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobEnduranceRecoveryMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobSpeedMultiplicationCalculation
// 0x0000
class UDifficultyMobSpeedMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobSpeedMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyPlayerHealingDivisionCalculation
// 0x0000
class UDifficultyPlayerHealingDivisionCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyPlayerHealingDivisionCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyMobPushbackMultiplicationCalculation
// 0x0000
class UDifficultyMobPushbackMultiplicationCalculation : public UDifficultyDependantModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyMobPushbackMultiplicationCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyTokenInstance
// 0x0000
class ADifficultyTokenInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyTokenInstance");
		return ptr;
	}



};

// Class Dungeons.DifficultyUtil
// 0x0000
class UDifficultyUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyUtil");
		return ptr;
	}



	void GetUnlockText();
	void GetUnlockRequirementText();
	void GetUnlockExplainerText();
	void GetTotalNumThreatLevelsAndEndlessStruggles();
	void GetTotalNumThreatLevels();
	void GetTotalNumEndlessStruggles();
	void getThreatLevelDisplayName();
	void getThreatCompletedRequirementText();
	void GetStartingLivesForDifficulty();
	void GetNumThreatLevelsInDifficulty();
	void GetNumThreatLevelsAndEndlessStrugglesInDifficulty();
	void GetNumEndlessStrugglesInDifficulty();
	void GetExtraChallengeDispalyName();
	void getEndlessStruggleDisplayName();
	void GetEndlessStruggleConfiguration();
	void getDifficultyThreatLevelDisplayName();
	void getDifficultyPlusDisplayName();
	void getDifficultyEndlessStruggleDisplayName();
	void getDifficultyDisplayName();
};

// Class Dungeons.Dimmer
// 0x0000
class ADimmer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Dimmer");
		return ptr;
	}



	void OnRep_Sign();
	void OnRep_DayFraction();
	void GetNightProgress();
};

// Class Dungeons.DistancelimitComponent
// 0x0000
class UDistancelimitComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DistancelimitComponent");
		return ptr;
	}



};

// Class Dungeons.DLCDefs
// 0x0000
class UDLCDefs : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DLCDefs");
		return ptr;
	}



	void OpenExternalStorePageForDlcName();
	void GetDLCUpsellTitleText();
	void GetDLCUpsellDescriptionText();
	void GetDLCUpsellBulletPoints();
	void GetDLCNameText();
	void GetDLCNameReleased();
	void GetDLCLocaleRequiresLogoTranslation();
	void GetDLCInspectorLogoTexture();
	void GetDLCInspectorBackgroundTexture();
};

// Class Dungeons.DLCPrimaryDataAsset
// 0x0000
class UDLCPrimaryDataAsset : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DLCPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.DodgeCooldownIncreaseGameplayEffect
// 0x0000
class UDodgeCooldownIncreaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeCooldownIncreaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeCooldownIncrease
// 0x0000
class UDodgeCooldownIncrease : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeCooldownIncrease");
		return ptr;
	}



};

// Class Dungeons.GhostFormBaseGameplayEffect
// 0x0000
class UGhostFormBaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GhostFormBaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GhostDodgeGameplayEffect
// 0x0000
class UGhostDodgeGameplayEffect : public UGhostFormBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GhostDodgeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeGhostForm
// 0x0000
class UDodgeGhostForm : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeGhostForm");
		return ptr;
	}



};

// Class Dungeons.DodgeInvulnerabilityGameplayEffect
// 0x0000
class UDodgeInvulnerabilityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeInvulnerabilityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeInvulnerability
// 0x0000
class UDodgeInvulnerability : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeInvulnerability");
		return ptr;
	}



};

// Class Dungeons.DodgeRechargingGameplayEffect
// 0x0000
class UDodgeRechargingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeRechargingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeRootVisualGameplayEffect
// 0x0000
class UDodgeRootVisualGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeRootVisualGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeRootGameplayEffect
// 0x0000
class UDodgeRootGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeRootGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeRootPoisonGameplayEffect
// 0x0000
class UDodgeRootPoisonGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeRootPoisonGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeRoot
// 0x0000
class UDodgeRoot : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeRoot");
		return ptr;
	}



};

// Class Dungeons.DodgeSpeedIncreaseGameplayEffect
// 0x0000
class UDodgeSpeedIncreaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeSpeedIncreaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DodgeSpeedIncrease
// 0x0000
class UDodgeSpeedIncrease : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DodgeSpeedIncrease");
		return ptr;
	}



};

// Class Dungeons.DolphinsGraceGameplayEffect
// 0x0000
class UDolphinsGraceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DolphinsGraceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobGroupBehaviorComponent
// 0x0000
class UMobGroupBehaviorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobGroupBehaviorComponent");
		return ptr;
	}



	void ResetState();
	void CheckAttackerHealth();
};

// Class Dungeons.DolphinBehaviorComponent
// 0x0000
class UDolphinBehaviorComponent : public UMobGroupBehaviorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DolphinBehaviorComponent");
		return ptr;
	}



	void DoLootActorQuery();
};

// Class Dungeons.DoorComponent
// 0x0000
class UDoorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DoorComponent");
		return ptr;
	}



	void Open();
	void OnRep_IsOpen();
	void IsDoorOpen();
	void Close();
};

// Class Dungeons.DoubleDamageGameplayEffect
// 0x0000
class UDoubleDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DoubleDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DoubleDamage
// 0x0000
class UDoubleDamage : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DoubleDamage");
		return ptr;
	}



};

// Class Dungeons.DownedEnsureReachableComponent
// 0x0000
class UDownedEnsureReachableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DownedEnsureReachableComponent");
		return ptr;
	}



};

// Class Dungeons.DownedNightModeComponent
// 0x0000
class UDownedNightModeComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DownedNightModeComponent");
		return ptr;
	}



};

// Class Dungeons.DownedRevivePossibleComponent
// 0x0000
class UDownedRevivePossibleComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DownedRevivePossibleComponent");
		return ptr;
	}



};

// Class Dungeons.DragDropUtils
// 0x0000
class UDragDropUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DragDropUtils");
		return ptr;
	}



	void SetDragDropCursorOverride();
};

// Class Dungeons.DropIncreasingEnchantment
// 0x0000
class UDropIncreasingEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DropIncreasingEnchantment");
		return ptr;
	}



};

// Class Dungeons.OxygenLowEffect
// 0x0000
class UOxygenLowEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenLowEffect");
		return ptr;
	}



};

// Class Dungeons.OxygenPartialReplenishEffect
// 0x0000
class UOxygenPartialReplenishEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenPartialReplenishEffect");
		return ptr;
	}



};

// Class Dungeons.OxygenReplenishEffect
// 0x0000
class UOxygenReplenishEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenReplenishEffect");
		return ptr;
	}



};

// Class Dungeons.HoldingBreathGameplayEffect
// 0x0000
class UHoldingBreathGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HoldingBreathGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HoldingBreathExecution
// 0x0000
class UHoldingBreathExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HoldingBreathExecution");
		return ptr;
	}



};

// Class Dungeons.DrowningGameplayEffect
// 0x0000
class UDrowningGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DrowningGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DrowningUIGameplayEffect
// 0x0000
class UDrowningUIGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DrowningUIGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DrowningExecution
// 0x0000
class UDrowningExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DrowningExecution");
		return ptr;
	}



};

// Class Dungeons.DungeonHUD
// 0x0000
class ADungeonHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonHUD");
		return ptr;
	}



	void SetIsVisible();
	void SetHotbarSize();
	void SetHotbarBackgroundVisibility();
	void SetHotbarBackgroundScaling();
	void SetHotbarBackgroundOffset();
	void SetEmote();
	void SetCoopHotbarBackgroundOffset();
};

// Class Dungeons.DungeonsAbilitySystemComponent
// 0x0000
class UDungeonsAbilitySystemComponent : public UAbilitySystemComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsAbilitySystemComponent");
		return ptr;
	}



	void GetActiveEffectsWithUiData();
};

// Class Dungeons.DungeonsAbilitySystemGlobals
// 0x0000
class UDungeonsAbilitySystemGlobals : public UAbilitySystemGlobals
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsAbilitySystemGlobals");
		return ptr;
	}



	void GetPeriod();
};

// Class Dungeons.DungeonsAssetManager
// 0x0000
class UDungeonsAssetManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsAssetManager");
		return ptr;
	}



	void UnloadAllObjects();
	void OnInventoryOpen();
	void OnInventoryClosed();
	void LoadSyncAssetFromPath();
	void IsEditor();
	void GetTextureFromString();
	void GetSoundFromString();
};

// Class Dungeons.DungeonsAudioUtils
// 0x0000
class UDungeonsAudioUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsAudioUtils");
		return ptr;
	}



	void GetLevelName();
	void GetCurrentLevelAudioCollection();
	void CinematicPlaying();
};

// Class Dungeons.DungeonsBorder
// 0x0000
class UDungeonsBorder : public UContentWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsBorder");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
	void SetDesiredSizeScale();
	void SetContentColorAndOpacity();
	void SetBrushFromTexture();
	void SetBrushFromMaterial();
	void SetBrushFromAsset();
	void SetBrushColor();
	void SetBrush();
	void GetDynamicMaterial();
};

// Class Dungeons.DungeonsBorderSlot
// 0x0000
class UDungeonsBorderSlot : public UPanelSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsBorderSlot");
		return ptr;
	}



	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};

// Class Dungeons.DungeonsCheatManager
// 0x0000
class UDungeonsCheatManager : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsCheatManager");
		return ptr;
	}



	void Suicide();
	void ShowDebugInfo();
	void EndGame();
};

// Class Dungeons.DungeonsChildActorComponent
// 0x0000
class UDungeonsChildActorComponent : public UChildActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsChildActorComponent");
		return ptr;
	}



};

// Class Dungeons.DungeonsCloudSaveBPProxy
// 0x0000
class UDungeonsCloudSaveBPProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsCloudSaveBPProxy");
		return ptr;
	}



	void SetCloudCharacters();
	void GetCloudCharacters();
	void DownloadCloudCharacter();
	void CloudSaveExit();
};

// Class Dungeons.ControllerTypeManager
// 0x0000
class UControllerTypeManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ControllerTypeManager");
		return ptr;
	}



	void ShutdownGameStreaming();
	void ShowTouchControl();
	void RawInputKeyPressed();
	void InitializeGameStreaming();
	void HideTouchControl();
	void GetIsTouchInputEnabled();
	void GetIsStreaming();
	void GetGamepadCount();
	void GetControllerType();
};

// Class Dungeons.DungeonsEffectLibrary
// 0x0000
class UDungeonsEffectLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsEffectLibrary");
		return ptr;
	}



	void PushBackOnActorInDirection();
	void PushBackOnActor();
	void JumpPadLaunchActorInDirection();
	void HitFlashOnMesh();
	void HitFlashOnCharacter();
	void HitFlashOnActor();
	void GetMaterialInstanceDynamicFromMesh();
	void GetAllMaterialInstanceDynamicFromMesh();
	void FindFeetOffsetForActor();
	void FindCurrentGroundOffset();
	void DissolveActor();
	void AlignEffectToCurrentGround();
	void AlignEffectAtActorFeet();
	void AddTagToSceneComponents();
};

// Class Dungeons.DungeonsFriendsInterface
// 0x0000
class UDungeonsFriendsInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsFriendsInterface");
		return ptr;
	}



	void UpdateFriendsList();
	void SupportsAddFriend();
	void ShowSessionPlayerProfile();
	void ShowProfileOfName();
	void ShowPlayerProfile();
	void ShowLocalPlayerProfile();
	void ShouldDisplayFriend();
	void SetPrivateGame();
	void SetPresenceStatus();
	void RemoveFriend();
	void JoinSessionOfFriend();
	void IsValidFriend();
	void IsSessionOpenForInvites();
	void IsPrivateGame();
	void IsPlayingMultiplayer();
	void GetOnlineFriends();
	void GetFriendsInDungeons();
	void GetFriendInvitableStatus();
	void GetAllFriends();
	void DoesPlayerHaveValidNetID();
	void CanDisplayProfileOfName();
	void AddPlayerAsFriend();
	void AddFriendByListName();
};

// Class Dungeons.PlayerInfoUtil
// 0x0000
class UPlayerInfoUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerInfoUtil");
		return ptr;
	}



	void JoinSession();
	void IsPlayerHost();
	void GetInviteSenderName();
	void GetHostDisplayName();
};

// Class Dungeons.DungeonsFriendUtil
// 0x0000
class UDungeonsFriendUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsFriendUtil");
		return ptr;
	}



	void GetFriendOnlineStatus();
};

// Class Dungeons.PoppingEffect
// 0x0000
class UPoppingEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoppingEffect");
		return ptr;
	}



};

// Class Dungeons.DungeonsGameInstance
// 0x0000
class UDungeonsGameInstance : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameInstance");
		return ptr;
	}



	void UpdateUsingMultiplayerFeatures();
	void UpdateLocalCoopScreenStates();
	void UpdateLocalCoopCamera();
	void UpdateControllerLocalPlayerDisplayIndex();
	void TitleScreenKickback();
	void StartOnlinePrivilegeCheck();
	void ShouldDisableOnlineGame();
	void SetupInputKeyReleasedDelegate();
	void SetupInputKeyPressedDelegate();
	void SetSelectedGameMode();
	void SetPlayerWasKicked();
	void SetPlayerTitle();
	void SetInitialBootFlowComplete();
	void SetCachedUIWidget();
	void SessionInviteReceived();
	void SaveGlobalState();
	void ResetPoppingData();
	void PushGlobalErrorMessage();
	void ProcessAcceptedInvite();
	void PopLocalPlayersToCheckpoint();
	void OnUserAdded();
	void OnSessionInviteAcceptedBP();
	void OnReadyToSignIntoEGS();
	void OnPreLoadMap();
	void OnPostLoadMap();
	void OnNonInitialUserAcceptedInvite();
	void OnNetworkError();
	void OnInviteAcceptedOnLocalPlay();
	void OnInGameJoin();
	void OnGlobalSaveDataLoaded();
	void OnFireHeartBeatAnalytics();
	void OnDebugPromptMessage();
	void OnClientKicked();
	void MessageBoxButtonPressed();
	void LookForInvites();
	void LoadSaveData();
	void JoinSessionFailed();
	void IsLocalCoop();
	void IsLoadingScreenShown();
	void IsInMenu();
	void IsInitialBoot();
	void IsHost();
	void IsControllerIdInGracePeriod();
	void IsConsoleCurrentlySaving();
	void IsConnected();
	void IsAnyPlayerInWorld();
	void IsAnyPlayerAliveAndInWorld();
	void HasBaseGameEntitlement();
	void HandlePlayerPopping();
	void HandleLocalPlayerRequest();
	void HandleLocalPlayerLeave();
	void HandleControllerConnectionChange();
	void GoOnline();
	void GetUserManager();
	void GetTimeUntilTeleportCooldown();
	void GetSwitchOperationMode();
	void GetSoundMixManager();
	void GetSelectedGameMode();
	void GetPlayerWasKicked();
	void GetPlayerTitle();
	void GetPlayerControllerFromControllerID();
	void GetNextProgressTarget();
	void GetNextObjectiveBasedLeader();
	void GetLoginFlow();
	void GetLocalPlayerUserCount();
	void GetLoadingScreenInitializer();
	void GetKeyboardManager();
	void GetHintManager();
	void GetFriendsInterface();
	void GetDungeonsInventoryAssetManager();
	void GetDungeonsAssetManager();
	void GetControllerTypeManager();
	void GetCachedUIWidget();
	void GetBlockingMessages();
	void GetAudioSFXManager();
	void GetAudioMusicManager();
	void GetAlivePlayerCharacter();
	void ForceLeaveRecentlyLeftControllers();
	void EndLoadingScreen();
	void DeclineInvite();
	void CreateMessage();
	void createCharacterLevel();
	void ClearOnlineEvents();
	void ClearCachedUIWidgets();
	void CheckMultiplayerFeatures();
	void CheckConnectionStatus();
	void CanTeleportToCheckpoint();
	void CanGoOnline();
	void BeginLoadingScreenWithTravel();
	void BeginLoadingScreen();
	void AssignOnlineEvents();
	void AcceptInvite();
};

// Class Dungeons.DungeonsGameMode
// 0x0000
class ADungeonsGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameMode");
		return ptr;
	}



	void PostLogin();
	void OnSecretFound();
	void OnOpenLootChest();
	void OnJoinedPlayerNameChanged();
	void KickPlayer();
	void GetOrFindGame();
	void ApplyDifficultyEffects();
};

// Class Dungeons.DungeonsGameplayCueManager
// 0x0000
class UDungeonsGameplayCueManager : public UGameplayCueManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameplayCueManager");
		return ptr;
	}



	void GetFullNormalFromCueParameters();
};

// Class Dungeons.DungeonsGameplayCueNotify_Static
// 0x0000
class UDungeonsGameplayCueNotify_Static : public UGameplayCueNotify_Static
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameplayCueNotify_Static");
		return ptr;
	}



};

// Class Dungeons.DungeonsGameplayEffectUIData
// 0x0000
class UDungeonsGameplayEffectUIData : public UGameplayEffectUIData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameplayEffectUIData");
		return ptr;
	}



};

// Class Dungeons.DungeonsGameSession
// 0x0000
class ADungeonsGameSession : public AGameSession
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameSession");
		return ptr;
	}



};

// Class Dungeons.DungeonsGameStateBase
// 0x0000
class ADungeonsGameStateBase : public AGameStateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameStateBase");
		return ptr;
	}



	void IsLobby();
	void GetPlayerStates();
	void GetPlayersCount();
};

// Class Dungeons.DungeonsGameState
// 0x0000
class ADungeonsGameState : public ADungeonsGameStateBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameState");
		return ptr;
	}



	void SetIsGameOver();
	void RefreshAverageTeamPower();
	void OnRep_ShowLives();
	void OnRep_ReviveEnabled();
	void OnRep_PartsDiscovered();
	void OnRep_OnIsGameOver();
	void OnRep_LivesLostThisSession();
	void OnRep_Lives();
	void OnRep_AverageTeamPower();
	void IsAnyPlayerMatchingAliveState();
	void GetShowLives();
	void GetReviveEnabled();
	void GetPlayersMatchingAliveStateCount();
	void GetLives();
	void GetIsGameOver();
	void GetCinematic();
	void GetAverageTeamPower();
};

// Class Dungeons.DungeonsGameViewportClient
// 0x0000
class UDungeonsGameViewportClient : public UGameViewportClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsGameViewportClient");
		return ptr;
	}



};

// Class Dungeons.DungeonsImage
// 0x0000
class UDungeonsImage : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsImage");
		return ptr;
	}



	void SetOpacity();
	void SetColorAndOpacity();
	void SetBrushTintColor();
	void SetBrushSize();
	void SetBrushFromTextureDynamic();
	void SetBrushFromTexture();
	void SetBrushFromSoftTextureBlockingHighLow();
	void SetBrushFromSoftTextureBlocking();
	void SetBrushFromSoftTexture();
	void SetBrushFromSoftSprite();
	void SetBrushFromMaterial();
	void SetBrushFromAtlasInterface();
	void SetBrushFromAsset();
	void SetBrush();
	void OnRootWidgetVisibilityChanged();
	void GetDynamicMaterial();
	void CheckForHardReferencedImage();
};

// Class Dungeons.DungeonsInventoryAssetManager
// 0x0000
class UDungeonsInventoryAssetManager : public UDungeonsAssetManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsInventoryAssetManager");
		return ptr;
	}



};

// Class Dungeons.DungeonsLevelScriptActor
// 0x0000
class ADungeonsLevelScriptActor : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLevelScriptActor");
		return ptr;
	}



};

// Class Dungeons.DungeonsLevelStreamingDynamic
// 0x0000
class UDungeonsLevelStreamingDynamic : public ULevelStreamingDynamic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLevelStreamingDynamic");
		return ptr;
	}



	void OnLevelLoadedCall();
};

// Class Dungeons.DungeonsLocalPlayer
// 0x0000
class UDungeonsLocalPlayer : public ULocalPlayer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLocalPlayer");
		return ptr;
	}



};

// Class Dungeons.DungeonsLoginFlow
// 0x0000
class UDungeonsLoginFlow : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlow");
		return ptr;
	}



	void OnLoadSaveDataCompleted();
	void Login();
	void DoPostLoginAction();
};

// Class Dungeons.DungeonsLoginFlowCrossPlay
// 0x0000
class UDungeonsLoginFlowCrossPlay : public UDungeonsLoginFlow
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlowCrossPlay");
		return ptr;
	}



	void OnLoadSaveDataComplete();
	void HasLinkingSucceeded();
	void CrossPlayLogin();
	void CancelMsaLoginUI();
};

// Class Dungeons.DungeonsLoginFlowNull
// 0x0000
class UDungeonsLoginFlowNull : public UDungeonsLoginFlow
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlowNull");
		return ptr;
	}



};

// Class Dungeons.DungeonsLoginFlowPS4
// 0x0000
class UDungeonsLoginFlowPS4 : public UDungeonsLoginFlowCrossPlay
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlowPS4");
		return ptr;
	}



};

// Class Dungeons.DungeonsLoginFlowSwitch
// 0x0000
class UDungeonsLoginFlowSwitch : public UDungeonsLoginFlowCrossPlay
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlowSwitch");
		return ptr;
	}



};

// Class Dungeons.DungeonsLoginFlowWin
// 0x0000
class UDungeonsLoginFlowWin : public UDungeonsLoginFlow
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsLoginFlowWin");
		return ptr;
	}



	void UpdateURL();
};

// Class Dungeons.DungeonsNavMeshUtil
// 0x0000
class UDungeonsNavMeshUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsNavMeshUtil");
		return ptr;
	}



	void UpdateSceneComponentNavMesh();
};

// Class Dungeons.DungeonsNavModifierComponent
// 0x0000
class UDungeonsNavModifierComponent : public UNavModifierComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsNavModifierComponent");
		return ptr;
	}



	void RecalculateBounds();
};

// Class Dungeons.DungeonsPlatformUtils
// 0x0000
class UDungeonsPlatformUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsPlatformUtils");
		return ptr;
	}



	void GetPlatformUsesRightForAccept();
	void GetPlatformSupportsTitleNewsNavigation();
};

// Class Dungeons.DungeonsPlayerCameraManager
// 0x0000
class ADungeonsPlayerCameraManager : public APlayerCameraManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsPlayerCameraManager");
		return ptr;
	}



	void PlayWorldCameraShakeAtPawn();
};

// Class Dungeons.DungeonsProjectileMovementComp
// 0x0000
class UDungeonsProjectileMovementComp : public UProjectileMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsProjectileMovementComp");
		return ptr;
	}



	void ResetComponent();
	void OnProjectileStartsSinking__DelegateSignature();
	void IsSinking();
};

// Class Dungeons.DungeonsPropGameMode
// 0x0000
class ADungeonsPropGameMode : public ADungeonsGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsPropGameMode");
		return ptr;
	}



};

// Class Dungeons.DungeonsReplicationGraph
// 0x0000
class UDungeonsReplicationGraph : public UReplicationGraph
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsReplicationGraph");
		return ptr;
	}



};

// Class Dungeons.DungeonsReplicationGraphDebug
// 0x0000
class ADungeonsReplicationGraphDebug : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsReplicationGraphDebug");
		return ptr;
	}



};

// Class Dungeons.DungeonsReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0000
class UDungeonsReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}



};

// Class Dungeons.DungeonsScrollBox
// 0x0000
class UDungeonsScrollBox : public UScrollBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsScrollBox");
		return ptr;
	}



	void ScrollWidgetIntoViewWithPadding();
};

// Class Dungeons.DungeonsSoftImage
// 0x0000
class UDungeonsSoftImage : public UDungeonsImage
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsSoftImage");
		return ptr;
	}



};

// Class Dungeons.DungeonsTargetMarker
// 0x0000
class ADungeonsTargetMarker : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsTargetMarker");
		return ptr;
	}



	void SetupTargetLockedParticles();
	void SetupAttackBeganParticles();
	void ResetLockedClient();
	void OnTargetLockedClient();
	void OnTargetLockedBP();
	void OnTargetLocked();
	void OnAttackEndedBP();
	void OnAttackBeganBP();
};

// Class Dungeons.DungeonsUserManager
// 0x0000
class UDungeonsUserManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsUserManager");
		return ptr;
	}



	void TryPlayerControllerPlatformLogin();
	void RemovePlayer();
	void RemoveExtraLocalPlayers();
	void Print();
	void OnLoginRequestEnded();
	void Logout();
	void GetSwitchOfflineUserName();
	void GetServiceInitialUserLocalIndex();
	void GetPlayerControllerFromControllerID();
	void GetLocalUserSystemIdFromControllerID();
	void GetLocalUserNumFromControllerID();
	void GetLocalUserName();
	void GetLocalPlayers();
	void GetLocalPlayerIndexFromPlayerController();
	void GetLocalPlayerIndex();
	void GetLocalPlayerControllers();
	void GetLocalMenuPlayerControllers();
	void GetInitialUserSystemId();
	void GetInitialUser();
	void GetInitialPlayerController();
	void GetAllLocalPlayerControllers();
	void CreatePlayer();
};

// Class Dungeons.DungeonsVisiblityRootWidget
// 0x0000
class UDungeonsVisiblityRootWidget : public UDungeonsUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsVisiblityRootWidget");
		return ptr;
	}



	void OnRecursivelyShown();
	void OnRecursivelyHidden();
	void OnChangedVisibility();
	void GetVisibleRecursive();
};

// Class Dungeons.DungeonsWebBrowser
// 0x0000
class UDungeonsWebBrowser : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsWebBrowser");
		return ptr;
	}



	void OnUrlChanged__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void OnHandleError__DelegateSignature();
	void OnBeforePopup__DelegateSignature();
	void LoadURL();
	void LoadString();
	void GetUrl();
	void GetTitleText();
	void ExecuteJavascript();
};

// Class Dungeons.DungeonsWidgetSwitcher
// 0x0000
class UDungeonsWidgetSwitcher : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsWidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex();
	void SetActiveWidget();
	void GetWidgetAtIndex();
	void GetNumWidgets();
	void GetActiveWidgetIndex();
	void GetActiveWidget();
};

// Class Dungeons.DungeonsWorldSettings
// 0x0000
class ADungeonsWorldSettings : public AWorldSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsWorldSettings");
		return ptr;
	}



};

// Class Dungeons.DynamicBeam
// 0x0000
class ADynamicBeam : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamicBeam");
		return ptr;
	}



	void Spawn();
	void OnSpawn();
	void Despawn();
};

// Class Dungeons.MerchantQuestBase
// 0x0000
class UMerchantQuestBase : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantQuestBase");
		return ptr;
	}



	void IsCompleted();
	void GetProgressText();
	void GetProgressFraction();
	void GetExplainerText();
	void GetCountText();
	void GetCompletedCount();
};

// Class Dungeons.MerchantCountQuestBase
// 0x0000
class UMerchantCountQuestBase : public UMerchantQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantCountQuestBase");
		return ptr;
	}



};

// Class Dungeons.ProgressStatQuest
// 0x0000
class UProgressStatQuest : public UMerchantCountQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProgressStatQuest");
		return ptr;
	}



};

// Class Dungeons.DynamicProgressStatQuest
// 0x0000
class UDynamicProgressStatQuest : public UProgressStatQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamicProgressStatQuest");
		return ptr;
	}



};

// Class Dungeons.DynamoGameplayEffect
// 0x0000
class UDynamoGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DynamoMeleeGameplayEffect
// 0x0000
class UDynamoMeleeGameplayEffect : public UDynamoGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoMeleeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.DynamoRangedGameplayEffect
// 0x0000
class UDynamoRangedGameplayEffect : public UDynamoGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoRangedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Dynamo
// 0x0000
class UDynamo : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Dynamo");
		return ptr;
	}



};

// Class Dungeons.DynamoMelee
// 0x0000
class UDynamoMelee : public UDynamo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoMelee");
		return ptr;
	}



};

// Class Dungeons.DynamoRanged
// 0x0000
class UDynamoRanged : public UDynamo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoRanged");
		return ptr;
	}



};

// Class Dungeons.DynamoRangedCueExecution
// 0x0000
class UDynamoRangedCueExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DynamoRangedCueExecution");
		return ptr;
	}



};

// Class Dungeons.Echo
// 0x0000
class UEcho : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Echo");
		return ptr;
	}



};

// Class Dungeons.EffectGroup
// 0x0000
class UEffectGroup : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectGroup");
		return ptr;
	}



	void SpawnEffect();
	void SetParams();
};

// Class Dungeons.EffectsGroupContainerActor
// 0x0000
class AEffectsGroupContainerActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectsGroupContainerActor");
		return ptr;
	}



};

// Class Dungeons.EffectGroupContainer
// 0x0000
class UEffectGroupContainer : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectGroupContainer");
		return ptr;
	}



	void SpawnEffectInGroup();
};

// Class Dungeons.EffectsActor
// 0x0000
class AEffectsActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectsActor");
		return ptr;
	}



	void SpawnEffectsInRadius();
	void SpawnEffectsAtLocation();
	void ServerSpawnEffectsAtLocation();
	void MulticastSpawnEffectsAtLocation();
};

// Class Dungeons.Electrified
// 0x0000
class UElectrified : public UIntervalExecutionEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Electrified");
		return ptr;
	}



};

// Class Dungeons.ElectrifiedDamageGameplayEffect
// 0x0000
class UElectrifiedDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ElectrifiedDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ElementalDamageIncreaseGameplayEffect
// 0x0000
class UElementalDamageIncreaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ElementalDamageIncreaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.LightningTouchedGameplayEffect
// 0x0000
class ULightningTouchedGameplayEffect : public UElementalDamageIncreaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LightningTouchedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FireTouchedGameplayEffect
// 0x0000
class UFireTouchedGameplayEffect : public UElementalDamageIncreaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireTouchedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulTouchedGameplayEffect
// 0x0000
class USoulTouchedGameplayEffect : public UElementalDamageIncreaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulTouchedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PoisonTouchedGameplayEffect
// 0x0000
class UPoisonTouchedGameplayEffect : public UElementalDamageIncreaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonTouchedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ElementalDamageIncreaseEnchant
// 0x0000
class UElementalDamageIncreaseEnchant : public UEffectApplyingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ElementalDamageIncreaseEnchant");
		return ptr;
	}



};

// Class Dungeons.EmeraldDivinationGameplayEffect
// 0x0000
class UEmeraldDivinationGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldDivinationGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EmeraldDivination
// 0x0000
class UEmeraldDivination : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldDivination");
		return ptr;
	}



};

// Class Dungeons.MerchantCurrencyComponent
// 0x0000
class UMerchantCurrencyComponent : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantCurrencyComponent");
		return ptr;
	}



	void GetCurrencyItemId();
	void GetCurrencyBalance();
};

// Class Dungeons.EmeraldsCurrency
// 0x0000
class UEmeraldsCurrency : public UMerchantCurrencyComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldsCurrency");
		return ptr;
	}



};

// Class Dungeons.EmeraldShieldGameplayEffect
// 0x0000
class UEmeraldShieldGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldShieldGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EmeraldShield
// 0x0000
class UEmeraldShield : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldShield");
		return ptr;
	}



	void OnEmeraldsCollected();
};

// Class Dungeons.StorableItem
// 0x0000
class AStorableItem : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StorableItem");
		return ptr;
	}



	void ReInitialiseItemBP();
	void ReceiveOnPickupDenied();
	void ReceiveOnPickup();
	void OnPickupDenied();
	void OnPickup();
	void OnLanded();
	void MulticastApplyDropEffect();
	void HandleInteraction();
	void GetStorablePickupSoundForItemId();
	void GetStorableDropSoundForItemId();
};

// Class Dungeons.EmeraldStorableItem
// 0x0000
class AEmeraldStorableItem : public AStorableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmeraldStorableItem");
		return ptr;
	}



};

// Class Dungeons.EmoteDefs
// 0x0000
class UEmoteDefs : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EmoteDefs");
		return ptr;
	}



	void GetEmoteText();
	void GetEmoteIconTexture();
	void GetEmoteIconSoftTexture();
};

// Class Dungeons.EnchantersTome
// 0x0000
class AEnchantersTome : public ATogglableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantersTome");
		return ptr;
	}



};

// Class Dungeons.EnchantmentAssetFinder
// 0x0000
class UEnchantmentAssetFinder : public UAssetFinder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantmentAssetFinder");
		return ptr;
	}



};

// Class Dungeons.EnchantmentComponent
// 0x0000
class UEnchantmentComponent : public UGearUtilComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantmentComponent");
		return ptr;
	}



	void OnRep_Enchantments();
	void HighestIndex();
	void HighestAvailableIndex();
	void GetEnchantmentsWithRarity();
	void GetEnchantments();
	void GetEnchantment();
};

// Class Dungeons.EnchantmentPointsCounterWidget
// 0x0000
class UEnchantmentPointsCounterWidget : public UPawnCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantmentPointsCounterWidget");
		return ptr;
	}



};

// Class Dungeons.ThrowableItemInstance
// 0x0000
class AThrowableItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThrowableItemInstance");
		return ptr;
	}



	void SetTargetServer();
	void CalculateVelocityAmountToLoc();
};

// Class Dungeons.EnderPearlInstance
// 0x0000
class AEnderPearlInstance : public AThrowableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnderPearlInstance");
		return ptr;
	}



};

// Class Dungeons.ThrownItem
// 0x0000
class AThrownItem : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThrownItem");
		return ptr;
	}



	void OnOverlapBegin();
	void OnHitObject();
};

// Class Dungeons.EnderPearlItem
// 0x0000
class AEnderPearlItem : public AThrownItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnderPearlItem");
		return ptr;
	}



};

// Class Dungeons.EndlessStruggleLibrary
// 0x0000
class UEndlessStruggleLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EndlessStruggleLibrary");
		return ptr;
	}



};

// Class Dungeons.RecoverEndurancePerSecondModCalculation
// 0x0000
class URecoverEndurancePerSecondModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RecoverEndurancePerSecondModCalculation");
		return ptr;
	}



};

// Class Dungeons.EndVideoDefinition
// 0x0000
class UEndVideoDefinition : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EndVideoDefinition");
		return ptr;
	}



};

// Class Dungeons.ObsidianPinnacleOutroVideo
// 0x0000
class UObsidianPinnacleOutroVideo : public UEndVideoDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObsidianPinnacleOutroVideo");
		return ptr;
	}



};

// Class Dungeons.EnigmaResonatorMelee
// 0x0000
class UEnigmaResonatorMelee : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnigmaResonatorMelee");
		return ptr;
	}



};

// Class Dungeons.EnigmaResonatorRanged
// 0x0000
class UEnigmaResonatorRanged : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnigmaResonatorRanged");
		return ptr;
	}



};

// Class Dungeons.EntitlementsValidator
// 0x0000
class UEntitlementsValidator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EntitlementsValidator");
		return ptr;
	}



};

// Class Dungeons.MissionPrimaryDataAssetBase
// 0x0000
class UMissionPrimaryDataAssetBase : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionPrimaryDataAssetBase");
		return ptr;
	}



};

// Class Dungeons.EnumMissionPrimaryDataAsset
// 0x0000
class UEnumMissionPrimaryDataAsset : public UMissionPrimaryDataAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnumMissionPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.MissionPrimaryDataAssetBase2
// 0x0000
class UMissionPrimaryDataAssetBase2 : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionPrimaryDataAssetBase2");
		return ptr;
	}



};

// Class Dungeons.EnumMissionPrimaryDataAsset2
// 0x0000
class UEnumMissionPrimaryDataAsset2 : public UMissionPrimaryDataAssetBase2
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnumMissionPrimaryDataAsset2");
		return ptr;
	}



};

// Class Dungeons.EnvironmentalProtectionGameplayEffect
// 0x0000
class UEnvironmentalProtectionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnvironmentalProtectionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EnvironmentalProtection
// 0x0000
class UEnvironmentalProtection : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnvironmentalProtection");
		return ptr;
	}



};

// Class Dungeons.EpicStoreEntitlementsRepository
// 0x0000
class UEpicStoreEntitlementsRepository : public UEntitlementsRepository
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EpicStoreEntitlementsRepository");
		return ptr;
	}



};

// Class Dungeons.EquipmentComponent
// 0x0000
class UEquipmentComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EquipmentComponent");
		return ptr;
	}



	void OnRespawn();
	void OnEquippableItemSlotUpdated();
	void GetTotalEquippedDisplayItemPower();
	void GetSlotsOfType();
};

// Class Dungeons.EquipmentDisplayComponent
// 0x0000
class UEquipmentDisplayComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EquipmentDisplayComponent");
		return ptr;
	}



	void OnRespawn();
	void OnGearItemSlotUpdated();
};

// Class Dungeons.EverbrewInstance
// 0x0000
class AEverbrewInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EverbrewInstance");
		return ptr;
	}



};

// Class Dungeons.Exploding
// 0x0000
class UExploding : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Exploding");
		return ptr;
	}



};

// Class Dungeons.ExplodingDamageGameplayEffect
// 0x0000
class UExplodingDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ExplodingDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ExplorerGameplayEffect
// 0x0000
class UExplorerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ExplorerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Explorer
// 0x0000
class UExplorer : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Explorer");
		return ptr;
	}



};

// Class Dungeons.ExplosionImpactGameplayEffect
// 0x0000
class UExplosionImpactGameplayEffect : public UBaseProjectileDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ExplosionImpactGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FallDamageEffect
// 0x0000
class UFallDamageEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FallDamageEffect");
		return ptr;
	}



};

// Class Dungeons.FallGameplayEffect
// 0x0000
class UFallGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FallGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FallingIceDamageGameplayEffect
// 0x0000
class UFallingIceDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FallingIceDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FallingIceActor
// 0x0000
class AFallingIceActor : public AActor_RepSpatializeDynamic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FallingIceActor");
		return ptr;
	}



	void SetScaledExplosionDamage();
	void OnSummonPlayed();
	void OnHitboxOverlap();
	void OnExplode();
	void DropIceblock();
};

// Class Dungeons.FastAttackGameplayEffect
// 0x0000
class UFastAttackGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FastAttackGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FastAttack
// 0x0000
class UFastAttack : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FastAttack");
		return ptr;
	}



};

// Class Dungeons.FetchTileNewsCallProxyBase
// 0x0000
class UFetchTileNewsCallProxyBase : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FetchTileNewsCallProxyBase");
		return ptr;
	}



};

// Class Dungeons.FetchTitleNewsCallbackProxy
// 0x0000
class UFetchTitleNewsCallbackProxy : public UFetchTileNewsCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FetchTitleNewsCallbackProxy");
		return ptr;
	}



	void FetchTitleNews();
};

// Class Dungeons.FetchTitleNewsMapPopupCallbackProxy
// 0x0000
class UFetchTitleNewsMapPopupCallbackProxy : public UFetchTileNewsCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FetchTitleNewsMapPopupCallbackProxy");
		return ptr;
	}



	void FetchTitleNewsPopups();
};

// Class Dungeons.FilenameMissionPrimaryDataAsset
// 0x0000
class UFilenameMissionPrimaryDataAsset : public UMissionPrimaryDataAssetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FilenameMissionPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.FilenameMissionPrimaryDataAsset2
// 0x0000
class UFilenameMissionPrimaryDataAsset2 : public UMissionPrimaryDataAssetBase2
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FilenameMissionPrimaryDataAsset2");
		return ptr;
	}



};

// Class Dungeons.FinalShoutGameplayEffect
// 0x0000
class UFinalShoutGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FinalShoutGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FinalShout
// 0x0000
class UFinalShout : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FinalShout");
		return ptr;
	}



};

// Class Dungeons.FindDungeonsSessionCallbackProxy
// 0x0000
class UFindDungeonsSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FindDungeonsSessionCallbackProxy");
		return ptr;
	}



	void FindDungeonsSessions();
};

// Class Dungeons.FindSessionHandler
// 0x0000
class UFindSessionHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FindSessionHandler");
		return ptr;
	}



};

// Class Dungeons.FireAspectGameplayEffect
// 0x0000
class UFireAspectGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireAspectGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FireAspect
// 0x0000
class UFireAspect : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireAspect");
		return ptr;
	}



};

// Class Dungeons.FireTrailDamageGameplayEffect
// 0x0000
class UFireTrailDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireTrailDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FireTrailSpeedGameplayEffect
// 0x0000
class UFireTrailSpeedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireTrailSpeedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FireBlock
// 0x0000
class AFireBlock : public AContinousDamageActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireBlock");
		return ptr;
	}



};

// Class Dungeons.FireTrail
// 0x0000
class UFireTrail : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireTrail");
		return ptr;
	}



};

// Class Dungeons.FireworkArrow
// 0x0000
class AFireworkArrow : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworkArrow");
		return ptr;
	}



	void OnArrowFired();
};

// Class Dungeons.FireworkBombGameplayEffect
// 0x0000
class UFireworkBombGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworkBombGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FireworkBombProjectile
// 0x0000
class AFireworkBombProjectile : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworkBombProjectile");
		return ptr;
	}



	void OnPreDestroy();
	void OnOverlapBegin();
};

// Class Dungeons.FireworkBombActor
// 0x0000
class AFireworkBombActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworkBombActor");
		return ptr;
	}



	void OnPreDestroy();
	void OnOverlapBegin();
};

// Class Dungeons.FireworkBombInstance
// 0x0000
class AFireworkBombInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworkBombInstance");
		return ptr;
	}



	void MulticastSpawnBomb();
};

// Class Dungeons.FireworksArrowInstance
// 0x0000
class AFireworksArrowInstance : public AArrowCraftingItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FireworksArrowInstance");
		return ptr;
	}



};

// Class Dungeons.FishHookItem
// 0x0000
class AFishHookItem : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FishHookItem");
		return ptr;
	}



	void OnHitObject();
};

// Class Dungeons.FishingRodItemInstance
// 0x0000
class AFishingRodItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FishingRodItemInstance");
		return ptr;
	}



	void SpawnHook();
	void OnRep_FishingRodVisible();
	void OnHookThrow();
	void OnHookonDenied();
	void OnHookHitTarget();
	void OnHookHitPlayer();
	void OnHookedMob();
	void MulticastSpawnHook();
	void Client_OnHookedMob();
};

// Class Dungeons.FlamingQuiver
// 0x0000
class AFlamingQuiver : public AArrowCraftingItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FlamingQuiver");
		return ptr;
	}



};

// Class Dungeons.FlashlightComponent
// 0x0000
class UFlashlightComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FlashlightComponent");
		return ptr;
	}



};

// Class Dungeons.FleeGameplayEffect
// 0x0000
class UFleeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FleeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Flee
// 0x0000
class UFlee : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Flee");
		return ptr;
	}



};

// Class Dungeons.FlickeringLightComponent
// 0x0000
class UFlickeringLightComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FlickeringLightComponent");
		return ptr;
	}



	void SetIntensityCoarse();
};

// Class Dungeons.FoodHealingGameplayEffect
// 0x0000
class UFoodHealingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FoodHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.BreadHealingGameplayEffect
// 0x0000
class UBreadHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BreadHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AppleHealingGameplayEffect
// 0x0000
class UAppleHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AppleHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PorkHealingGameplayEffect
// 0x0000
class UPorkHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PorkHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SalmonHealingGameplayEffect
// 0x0000
class USalmonHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SalmonHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SweetBerryHealingGameplayEffect
// 0x0000
class USweetBerryHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SweetBerryHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SweetBerrySwiftnessGameplayEffect
// 0x0000
class USweetBerrySwiftnessGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SweetBerrySwiftnessGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TropicalFishHealingGameplayEffect
// 0x0000
class UTropicalFishHealingGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TropicalFishHealingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TropicalFishOxygenGameplayEffect
// 0x0000
class UTropicalFishOxygenGameplayEffect : public UFoodHealingGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TropicalFishOxygenGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FoodInstance
// 0x0000
class AFoodInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FoodInstance");
		return ptr;
	}



};

// Class Dungeons.StorableDropBaseEnchantment
// 0x0000
class UStorableDropBaseEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StorableDropBaseEnchantment");
		return ptr;
	}



	void OnHealthPotionActivated();
};

// Class Dungeons.FoodReserves
// 0x0000
class UFoodReserves : public UStorableDropBaseEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FoodReserves");
		return ptr;
	}



};

// Class Dungeons.FreezingEnchantmentBase
// 0x0000
class UFreezingEnchantmentBase : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FreezingEnchantmentBase");
		return ptr;
	}



};

// Class Dungeons.Freezing
// 0x0000
class UFreezing : public UFreezingEnchantmentBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Freezing");
		return ptr;
	}



};

// Class Dungeons.FreezingRanged
// 0x0000
class UFreezingRanged : public UFreezingEnchantmentBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FreezingRanged");
		return ptr;
	}



};

// Class Dungeons.FreezingAoe
// 0x0000
class UFreezingAoe : public UFreezingEnchantmentBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FreezingAoe");
		return ptr;
	}



};

// Class Dungeons.FrenziedGameplayEffect
// 0x0000
class UFrenziedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FrenziedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Frenzied
// 0x0000
class UFrenzied : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Frenzied");
		return ptr;
	}



};

// Class Dungeons.FrozenSolidGameplayEffect
// 0x0000
class UFrozenSolidGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FrozenSolidGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FrozenSolidIceCubeActor
// 0x0000
class AFrozenSolidIceCubeActor : public AActor_RepSpatializeStatic
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FrozenSolidIceCubeActor");
		return ptr;
	}



	void GetCurrentInteractCount();
	void EnableBounce();
	void ApplyBounceToOwner();
};

// Class Dungeons.FrozenSolidIceCubeAttributeSet
// 0x0000
class UFrozenSolidIceCubeAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FrozenSolidIceCubeAttributeSet");
		return ptr;
	}



	void OnRep_OwnerInteractionMagnitude();
	void OnRep_OtherInteractionMagnitude();
};

// Class Dungeons.FuseShot
// 0x0000
class UFuseShot : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FuseShot");
		return ptr;
	}



};

// Class Dungeons.MeshFadeBaseComponent
// 0x0000
class UMeshFadeBaseComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeshFadeBaseComponent");
		return ptr;
	}



	void SetMeshHidden();
};

// Class Dungeons.GameBP
// 0x0000
class AGameBP : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameBP");
		return ptr;
	}



	void RingAtObjective();
	void OnRep_TrialDefs();
	void OnRep_ObjectiveLocations();
	void OnRep_LevelSettings();
	void OnRep_IncrementedEmergentDifficulty();
	void OnRep_ChallengeRewardLocations();
	void OnRep_AffectorsChanged();
	void IsPlayerInRangeOfObjective();
	void GetTriggerRegionCenter();
	void GetPreviousTileDoor();
	void GetPreviousDoor();
	void GetPresentationHandler();
	void GetObjectiveLocations();
	void GetNextTileDoor();
	void GetNextDoor();
	void GetChallengeRewardLocations();
	void GetActiveAffectorInfo();
};

// Class Dungeons.GameplayBlueprintFunctionLibrary
// 0x0000
class UGameplayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayBlueprintFunctionLibrary");
		return ptr;
	}



	void Filter();
};

// Class Dungeons.GameplayEffectDamageComponent
// 0x0000
class UGameplayEffectDamageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectDamageComponent");
		return ptr;
	}



	void AttackLocal();
};

// Class Dungeons.WindPushVolumeGameplayEffect
// 0x0000
class UWindPushVolumeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindPushVolumeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CurrentPushVolumeGameplayEffect
// 0x0000
class UCurrentPushVolumeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrentPushVolumeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GameplayEffectPushVolume
// 0x0000
class AGameplayEffectPushVolume : public ABasePushVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectPushVolume");
		return ptr;
	}



};

// Class Dungeons.GameplayEffectTriggerBoxComponent
// 0x0000
class UGameplayEffectTriggerBoxComponent : public UBoxComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectTriggerBoxComponent");
		return ptr;
	}



	void OnOverlapEnd();
	void OnOverlapBegin();
};

// Class Dungeons.GameplayEffectTriggerSphereComponent
// 0x0000
class UGameplayEffectTriggerSphereComponent : public USphereComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectTriggerSphereComponent");
		return ptr;
	}



	void OnOverlapEnd();
	void OnOverlapBegin();
	void BP_RemoveGameplayEffectFromActor();
	void BP_ApplyGameplayEffectToActor();
};

// Class Dungeons.GameplayEffectUtil
// 0x0000
class UGameplayEffectUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectUtil");
		return ptr;
	}



	void CreateEffectSpec();
};

// Class Dungeons.GameSettingsFunctionLibrary
// 0x0000
class UGameSettingsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameSettingsFunctionLibrary");
		return ptr;
	}



	void SetTutorialHintsEnabled();
	void SetRightDeadzone();
	void SetMouseLockMode();
	void SetLeftDeadzone();
	void SetGraphicsPreset();
	void SetDefaultXblActiveState();
	void SetDefaultCrossplayState();
	void SetBackgroundAutoMute();
	void IsResolutionValid();
	void GetPS4LightbarEffectsEnabled();
	void GetPlayerColours();
	void GetPathfinderEnabled();
	void GetChatEnabled();
	void ExecuteShadowQualityCommand();
	void ExecuteResolutionCommand();
	void ExecuteParticleQualityCommand();
	void ExecuteBrightnessCommand();
	void ExecuteBloomQualityCommand();
	void ExecuteAntiAliasQualityCommand();
	void ExecuteAmbientOcclusionQualityCommand();
	void EnableSubtitles();
	void EnableScreenShake();
	void AreSubtitlesForceDisabled();
};

// Class Dungeons.GameVersion
// 0x0000
class UGameVersion : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameVersion");
		return ptr;
	}



	void SubPlatformCheckMatch();
	void PlatformCheckMatch();
	void GetVersionNumber();
	void GetSubPlatformMatch();
	void GetSubPlatformEnum();
	void GetPlatformMatch();
	void GetPlatformEnum();
	void GetMenuVersionString();
	void GetConfigurationMatch();
	void GetBuildNumber();
	void GetBuildConfiguration();
	void DungeonsPrintText();
	void DungeonsPrintString();
	void BuildVersion();
};

// Class Dungeons.GearActor
// 0x0000
class AGearActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GearActor");
		return ptr;
	}



	void OnDetachedComponentCreated();
};

// Class Dungeons.ItemActor
// 0x0000
class AItemActor : public AGearActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemActor");
		return ptr;
	}



};

// Class Dungeons.GearPowerCounterWidget
// 0x0000
class UGearPowerCounterWidget : public UPawnCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GearPowerCounterWidget");
		return ptr;
	}



};

// Class Dungeons.GhostCloakGameplayEffect
// 0x0000
class UGhostCloakGameplayEffect : public UGhostFormBaseGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GhostCloakGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GhostFormItemInstance
// 0x0000
class AGhostFormItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GhostFormItemInstance");
		return ptr;
	}



};

// Class Dungeons.InventoryItemSlotTransactionBase
// 0x0000
class UInventoryItemSlotTransactionBase : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemSlotTransactionBase");
		return ptr;
	}



};

// Class Dungeons.GiftWrapItem
// 0x0000
class UGiftWrapItem : public UInventoryItemSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GiftWrapItem");
		return ptr;
	}



};

// Class Dungeons.GiftWrapperMerchant
// 0x0000
class AGiftWrapperMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GiftWrapperMerchant");
		return ptr;
	}



};

// Class Dungeons.GiftWrappingItemSlot
// 0x0000
class UGiftWrappingItemSlot : public UMerchantItemSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GiftWrappingItemSlot");
		return ptr;
	}



};

// Class Dungeons.GlobalHealthBarComponent
// 0x0000
class UGlobalHealthBarComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GlobalHealthBarComponent");
		return ptr;
	}



	void OnDeath_Internal();
	void OnDeath();
	void OnAlive();
};

// Class Dungeons.GlobalStateData
// 0x0000
class UGlobalStateData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GlobalStateData");
		return ptr;
	}



	void OnCharacterLoadFinished();
	void GetTitle();
	void ChangeTitle();
	void AfterConsoleSaveDataLoaded();
};

// Class Dungeons.GoldCurrency
// 0x0000
class UGoldCurrency : public UMerchantCurrencyComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GoldCurrency");
		return ptr;
	}



};

// Class Dungeons.GongOfWeakeningInstance
// 0x0000
class AGongOfWeakeningInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GongOfWeakeningInstance");
		return ptr;
	}



};

// Class Dungeons.Gravity
// 0x0000
class UGravity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Gravity");
		return ptr;
	}



	void OnStopPull();
};

// Class Dungeons.GravityMelee
// 0x0000
class UGravityMelee : public UGravity
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GravityMelee");
		return ptr;
	}



};

// Class Dungeons.GravityPulse
// 0x0000
class UGravityPulse : public UIntervalExecutionEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GravityPulse");
		return ptr;
	}



};

// Class Dungeons.GrowAttackBuffGameplayEffect
// 0x0000
class UGrowAttackBuffGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GrowAttackBuffGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GrowAttackComponent
// 0x0000
class UGrowAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GrowAttackComponent");
		return ptr;
	}



	void HandleDamage();
	void Disenchant();
};

// Class Dungeons.GrowComponent
// 0x0000
class UGrowComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GrowComponent");
		return ptr;
	}



	void OnRep_Sign();
};

// Class Dungeons.Growing
// 0x0000
class UGrowing : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Growing");
		return ptr;
	}



};

// Class Dungeons.GrowingArrowComponent
// 0x0000
class UGrowingArrowComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GrowingArrowComponent");
		return ptr;
	}



};

// Class Dungeons.GuardianBeamGameplayEffect
// 0x0000
class UGuardianBeamGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardianBeamGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ElderGuardianBeamGameplayEffect
// 0x0000
class UElderGuardianBeamGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ElderGuardianBeamGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GuardianEyeGameplayEffect
// 0x0000
class UGuardianEyeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardianEyeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GuardianEyeDamageGameplayEffect
// 0x0000
class UGuardianEyeDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardianEyeDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GuardianEyeChargeGameplayEffect
// 0x0000
class UGuardianEyeChargeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardianEyeChargeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GuardianEyeInstance
// 0x0000
class AGuardianEyeInstance : public AInterruptableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardianEyeInstance");
		return ptr;
	}



	void InterruptServer();
	void InterruptLocal();
	void EndBeam();
	void BeginCharge();
	void BeginBeam();
};

// Class Dungeons.GuardingStrikeGameplayEffect
// 0x0000
class UGuardingStrikeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardingStrikeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GuardingStrike
// 0x0000
class UGuardingStrike : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GuardingStrike");
		return ptr;
	}



};

// Class Dungeons.HarvesterInstance
// 0x0000
class AHarvesterInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HarvesterInstance");
		return ptr;
	}



};

// Class Dungeons.Harvester_Unique1
// 0x0000
class AHarvester_Unique1 : public AHarvesterInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Harvester_Unique1");
		return ptr;
	}



};

// Class Dungeons.HarvesterDamageGameplayEffect
// 0x0000
class UHarvesterDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HarvesterDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealingAuraGameplayEffect
// 0x0000
class UHealingAuraGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealingAuraGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealingAura
// 0x0000
class UHealingAura : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealingAura");
		return ptr;
	}



};

// Class Dungeons.PositiveHealthModCalculation
// 0x0000
class UPositiveHealthModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PositiveHealthModCalculation");
		return ptr;
	}



};

// Class Dungeons.HealingModCalculation
// 0x0000
class UHealingModCalculation : public UPositiveHealthModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.DifficultyHealingModCalculation
// 0x0000
class UDifficultyHealingModCalculation : public UHealingModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DifficultyHealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.MaxHealthHealingModCalculation
// 0x0000
class UMaxHealthHealingModCalculation : public UHealingModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MaxHealthHealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.MeleeItemPowerOnlyModHealingCalculation
// 0x0000
class UMeleeItemPowerOnlyModHealingCalculation : public UDifficultyHealingModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeItemPowerOnlyModHealingCalculation");
		return ptr;
	}



};

// Class Dungeons.RangedItemPowerOnlyModHealingCalculation
// 0x0000
class URangedItemPowerOnlyModHealingCalculation : public UDifficultyHealingModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedItemPowerOnlyModHealingCalculation");
		return ptr;
	}



};

// Class Dungeons.ArmorItemPowerOnlyModHealingCalculation
// 0x0000
class UArmorItemPowerOnlyModHealingCalculation : public UDifficultyHealingModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorItemPowerOnlyModHealingCalculation");
		return ptr;
	}



};

// Class Dungeons.HealthAttributeSet
// 0x0000
class UHealthAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthAttributeSet");
		return ptr;
	}



	void OnRep_TakeMeleeDamageMultiplier();
	void OnRep_TakeDamageMultiplier();
	void OnRep_Shield();
	void OnRep_ResistDeath();
	void OnRep_ReceiveHealingMultiplier();
	void OnRep_MaxHealth();
	void OnRep_HealthThreshold();
	void OnRep_Health();
	void OnRep_ArmorHealingItemPowerFactor();
	void OnRep_ArmorAttackItemPowerFactor();
};

// Class Dungeons.HealthBarComponent
// 0x0000
class UHealthBarComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthBarComponent");
		return ptr;
	}



	void GetSmoothHealthPercentage();
	void GetScale();
	void GetOpacity();
	void GetHealthPercentage();
};

// Class Dungeons.HealthBars
// 0x0000
class UHealthBars : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthBars");
		return ptr;
	}



};

// Class Dungeons.HealSelfGameplayEffect
// 0x0000
class UHealSelfGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealSelfGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ReviveGameplayEffect
// 0x0000
class UReviveGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReviveGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.KillGameplayEffect
// 0x0000
class UKillGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.KillGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RespawnGameplayEffect
// 0x0000
class URespawnGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RespawnGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.FreezeRespawnGameplayEffect
// 0x0000
class UFreezeRespawnGameplayEffect : public URespawnGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FreezeRespawnGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SetHealthThresholdGameplayEffect
// 0x0000
class USetHealthThresholdGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SetHealthThresholdGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealthComponent
// 0x0000
class UHealthComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthComponent");
		return ptr;
	}



	void ShouldImpactProjectile();
	void ServerApplyHeal();
	void OnResurrection();
	void Kill();
	void IsAlive();
	void GetShield();
	void GetMaximumHealth();
	void GetHealthAsDisplayAmount();
	void GetDamageMultiplier();
	void GetCurrentHealth();
};

// Class Dungeons.HealthDisplayComponent
// 0x0000
class UHealthDisplayComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthDisplayComponent");
		return ptr;
	}



};

// Class Dungeons.HealthPotionGameplayEffect
// 0x0000
class UHealthPotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealthPotionInstance
// 0x0000
class AHealthPotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthPotionInstance");
		return ptr;
	}



};

// Class Dungeons.HealthSynergy
// 0x0000
class UHealthSynergy : public USynergy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthSynergy");
		return ptr;
	}



};

// Class Dungeons.HeavyHarpoon
// 0x0000
class AHeavyHarpoon : public ABaseProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HeavyHarpoon");
		return ptr;
	}



};

// Class Dungeons.HeavyHarpoonQuiver
// 0x0000
class AHeavyHarpoonQuiver : public AArrowCraftingItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HeavyHarpoonQuiver");
		return ptr;
	}



};

// Class Dungeons.Heavyweight
// 0x0000
class UHeavyweight : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Heavyweight");
		return ptr;
	}



};

// Class Dungeons.EnchantmentHeavyweight
// 0x0000
class UEnchantmentHeavyweight : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantmentHeavyweight");
		return ptr;
	}



};

// Class Dungeons.HighlightController
// 0x0000
class AHighlightController : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HighlightController");
		return ptr;
	}



};

// Class Dungeons.HintManager
// 0x0000
class UHintManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HintManager");
		return ptr;
	}



	void OnTeleportPressed();
	void OnSlotActivated();
	void OnObjectiveUpdated();
	void OnMissionSelectOpened();
	void OnMapToggled();
	void OnLevelUp();
	void OnInventoryOpened();
	void OnInventoryFilterChanged();
	void OnInventoryClosed();
	void OnEnchantmentSelected();
	void OnChatWheelVisibilityChanged();
	void OnChatWheelOptionSelected();
	void OnChatWheelMessageSent();
	void OnAvailableEnchantmentPointsChanged();
};

// Class Dungeons.HorsemenTargetProvider
// 0x0000
class AHorsemenTargetProvider : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HorsemenTargetProvider");
		return ptr;
	}



	void ApplyDamage();
};

// Class Dungeons.HotBarBackground
// 0x0000
class UHotBarBackground : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HotBarBackground");
		return ptr;
	}



};

// Class Dungeons.HugeGameplayEffect
// 0x0000
class UHugeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HugeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Huge
// 0x0000
class UHuge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Huge");
		return ptr;
	}



};

// Class Dungeons.HuntingBowEnchantment
// 0x0000
class UHuntingBowEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HuntingBowEnchantment");
		return ptr;
	}



};

// Class Dungeons.TaggedGameplayEffect
// 0x0000
class UTaggedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TaggedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HuntingBowTaggedEnchantment
// 0x0000
class UHuntingBowTaggedEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HuntingBowTaggedEnchantment");
		return ptr;
	}



};

// Class Dungeons.HyperMissionMerchant
// 0x0000
class AHyperMissionMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HyperMissionMerchant");
		return ptr;
	}



};

// Class Dungeons.IcePotionGameplayEffect
// 0x0000
class UIcePotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IcePotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.IcePotionInstance
// 0x0000
class AIcePotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IcePotionInstance");
		return ptr;
	}



};

// Class Dungeons.IceWandInstance
// 0x0000
class AIceWandInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IceWandInstance");
		return ptr;
	}



};

// Class Dungeons.ImpactAction
// 0x0000
class UImpactAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ImpactAction");
		return ptr;
	}



};

// Class Dungeons.GameplayEffectImpactAction
// 0x0000
class UGameplayEffectImpactAction : public UImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GameplayEffectImpactAction");
		return ptr;
	}



};

// Class Dungeons.ExplosionAction
// 0x0000
class UExplosionAction : public UGameplayEffectImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ExplosionAction");
		return ptr;
	}



};

// Class Dungeons.DelayedExplosionAction
// 0x0000
class UDelayedExplosionAction : public UGameplayEffectImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DelayedExplosionAction");
		return ptr;
	}



};

// Class Dungeons.MobSpawnAction
// 0x0000
class UMobSpawnAction : public UImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSpawnAction");
		return ptr;
	}



};

// Class Dungeons.ChainLightningAction
// 0x0000
class UChainLightningAction : public UGameplayEffectImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChainLightningAction");
		return ptr;
	}



};

// Class Dungeons.SpawnActorAction
// 0x0000
class USpawnActorAction : public UImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpawnActorAction");
		return ptr;
	}



};

// Class Dungeons.EffectToRandomTargetsAction
// 0x0000
class UEffectToRandomTargetsAction : public UGameplayEffectImpactAction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectToRandomTargetsAction");
		return ptr;
	}



};

// Class Dungeons.ImpactActionHandler
// 0x0000
class UImpactActionHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ImpactActionHandler");
		return ptr;
	}



};

// Class Dungeons.ImpactSoundProvider
// 0x0000
class UImpactSoundProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ImpactSoundProvider");
		return ptr;
	}



	void GetImpactSound();
};

// Class Dungeons.IncreasedArrowBundleSize
// 0x0000
class UIncreasedArrowBundleSize : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IncreasedArrowBundleSize");
		return ptr;
	}



	void OnArrowsPickedUp();
};

// Class Dungeons.IncreasedMobTargeting
// 0x0000
class UIncreasedMobTargeting : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IncreasedMobTargeting");
		return ptr;
	}



};

// Class Dungeons.Infinity
// 0x0000
class UInfinity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Infinity");
		return ptr;
	}



};

// Class Dungeons.InstancedLeavesActor
// 0x0000
class AInstancedLeavesActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InstancedLeavesActor");
		return ptr;
	}



};

// Class Dungeons.InstancedMeshBase
// 0x0000
class AInstancedMeshBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InstancedMeshBase");
		return ptr;
	}



	void Place();
};

// Class Dungeons.InstancedMeshesActor
// 0x0000
class AInstancedMeshesActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InstancedMeshesActor");
		return ptr;
	}



};

// Class Dungeons.InstantTravelActor
// 0x0000
class AInstantTravelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InstantTravelActor");
		return ptr;
	}



	void OnInstantTravel();
	void InstantTravelToDestination();
};

// Class Dungeons.InteractableComponent
// 0x0000
class UInteractableComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InteractableComponent");
		return ptr;
	}



	void SetTextDesc();
	void SetText();
	void SetContextSensitiveAction();
	void SetContextPromptOffset();
	void SetBalloontipBehavior();
	void RemoveWorldHud();
	void PurgeAllInteractors();
	void OnInteractingPlayerDestroyed();
	void IsInteractionEnalbed();
	void IsHighlighted();
	void HasBeenUsedBy();
	void GetType();
	void GetRadiusGamepadModifier();
	void GetRadius();
	void GetInteractingPlayers();
	void GetContextSensitiveAction();
	void GetContextPromptOffset();
	void GetBalloontipText();
	void GetBalloonTipDescription();
	void GetBalloontipBehavior();
	void GetBalloonItemDescriptionBehavior();
	void GetBalloonItemData();
	void EnsureWorldHud();
	void EndHighlight();
	void EnableInteraction();
	void DisableInteraction();
	void BeginHighlight();
};

// Class Dungeons.InventoryItem
// 0x0000
class UInventoryItem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItem");
		return ptr;
	}



	void TryUpgradeItem();
	void IsNetherite();
	void IsMarkedNew();
	void IsInventoryOnly();
	void IsGifted();
	void IsGear();
	void IsEnchantIndexMaxed();
	void IsEnchantIndexLocked();
	void IsEnchantIndexHidden();
	void IsEnchantIndexEnchanted();
	void IsEnchantIndexDisabled();
	void IsEnchantIndexAffordable();
	void IsCloned();
	void IsBeingOffered();
	void HasTag();
	void GetTotalInvestedEnchantmentPoints();
	void GetTotalEnchantmentRows();
	void GetTag();
	void GetIsUpgraded();
	void GetDisplayNameText();
	void GetDisplayItemPowerText();
	void GetDisplayItemPowerInt();
	void GetDisplayFlavourText();
	void GetDisplayDescriptionText();
	void GetDisplayCharacteristicsText();
	void GetDisplayBulletPointsText();
	void EnchantIndex();
	void Enchantable();
	void ClearMarkedNew();
	void CanSalvage();
	void CanEnchantIndex();
	void CanEnchant();
	void CanBeUpgraded();
};

// Class Dungeons.InventoryItemDataFunctionLibrary
// 0x0000
class UInventoryItemDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemDataFunctionLibrary");
		return ptr;
	}



	void GetStoreCount();
};

// Class Dungeons.InventoryItemDataHolder
// 0x0000
class UInventoryItemDataHolder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemDataHolder");
		return ptr;
	}



};

// Class Dungeons.MerchantSelectionSlotBase
// 0x0000
class UMerchantSelectionSlotBase : public UMerchantSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantSelectionSlotBase");
		return ptr;
	}



	void GetSelectionClass();
	void GetSelection();
};

// Class Dungeons.InventoryItemMerchantSlotBase
// 0x0000
class UInventoryItemMerchantSlotBase : public UMerchantSelectionSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemMerchantSlotBase");
		return ptr;
	}



	void GetInventoryItem();
};

// Class Dungeons.InventoryItemUtil
// 0x0000
class UInventoryItemUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemUtil");
		return ptr;
	}



	void NotEqual_InventoryItemDataArray();
	void GetTotalInvestedEnchantmentPoints();
	void GetShouldDisplayRarity();
	void GetShouldDisplayPower();
	void GetNumberOfEnchantmentSlots();
	void GetNumberOfEnchantmentsInSlot();
	void GetItemsArchetypeCounts();
	void GetItemEventType();
	void GetItemArchetypes();
	void GetIsNetherite();
	void GetIsEventItem();
	void GetDisplayRarity();
	void GetDisplayNameText();
	void GetDisplayItemPowerText();
	void GetDisplayItemPowerInt();
	void GetDisplayItemNameAndPowerText();
	void GetDisplayFlavourText();
	void GetDisplayDescriptionText();
	void GetDisplayCharacteristicsText();
	void GetDisplayBulletPointsText();
	void DoesEnchantmentSlotContainAnyOfRarity();
};

// Class Dungeons.InvisibilityGameplayEffect
// 0x0000
class UInvisibilityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InvisibilityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.InvisibilityFadeGameplayEffect
// 0x0000
class UInvisibilityFadeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InvisibilityFadeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Invisible
// 0x0000
class UInvisible : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Invisible");
		return ptr;
	}



};

// Class Dungeons.InviteDungeonsSessionCallbackProxy
// 0x0000
class UInviteDungeonsSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InviteDungeonsSessionCallbackProxy");
		return ptr;
	}



	void InviteDungeonsFriend();
};

// Class Dungeons.DefenceGameplayEffect
// 0x0000
class UDefenceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DefenceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.IronHideAmuletInstance
// 0x0000
class AIronHideAmuletInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.IronHideAmuletInstance");
		return ptr;
	}



};

// Class Dungeons.MerchantAnnouncementUtil
// 0x0000
class UMerchantAnnouncementUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantAnnouncementUtil");
		return ptr;
	}



	void GetAnnouncementText();
};

// Class Dungeons.ItemAssetFinder
// 0x0000
class UItemAssetFinder : public UAssetFinder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemAssetFinder");
		return ptr;
	}



};

// Class Dungeons.ItemAttributeSet
// 0x0000
class UItemAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemAttributeSet");
		return ptr;
	}



	void OnRep_Souls();
	void OnRep_SoulGatheringMultiplier();
	void OnRep_SoulGathering();
	void OnRep_PotionCooldownMultiplier();
	void OnRep_MaxSouls();
	void OnRep_ItemLifeStealAmount();
	void OnRep_ItemDamageMultiplier();
	void OnRep_ItemCooldownMultiplier();
};

// Class Dungeons.ItemCooldownDecreaseGameplayEffect
// 0x0000
class UItemCooldownDecreaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemCooldownDecreaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ItemCooldownDecrease
// 0x0000
class UItemCooldownDecrease : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemCooldownDecrease");
		return ptr;
	}



};

// Class Dungeons.ItemCooldownReset
// 0x0000
class UItemCooldownReset : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemCooldownReset");
		return ptr;
	}



	void OnHealthPotionActivated();
};

// Class Dungeons.ItemDamageBoostGameplayEffect
// 0x0000
class UItemDamageBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDamageBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ItemDamageBoost
// 0x0000
class UItemDamageBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDamageBoost");
		return ptr;
	}



};

// Class Dungeons.ItemDropActor
// 0x0000
class AItemDropActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDropActor");
		return ptr;
	}



	void DropItems();
};

// Class Dungeons.ItemDropChanceActor
// 0x0000
class AItemDropChanceActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDropChanceActor");
		return ptr;
	}



	void OnSlotCountChanged();
	void OnPlayerHealthChanged();
};

// Class Dungeons.ItemDropEffectComponent
// 0x0000
class UItemDropEffectComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDropEffectComponent");
		return ptr;
	}



	void Apply();
};

// Class Dungeons.ItemEmitterActor
// 0x0000
class AItemEmitterActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemEmitterActor");
		return ptr;
	}



};

// Class Dungeons.ItemFunctionLibrary
// 0x0000
class UItemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemFunctionLibrary");
		return ptr;
	}



	void StreamIconTextureForItemIdHigh();
	void NotEqual_ItemTypeID();
	void MakeItemId();
	void IsItemIdValid();
	void GetTagForItemType();
	void GetSlotTypeForItemType();
	void GetNameForItemType();
	void GetIsUniqueForItemType();
	void GetIsSoulUseForItemType();
	void GetIsSoulGatherForItemType();
	void GetIsPassiveForItemType();
	void GetIsInventoryOnlyForItemType();
	void GetIsGearForItemType();
	void GetIconTextureForItemTypeHigh();
	void GetIconTextureForItemType();
	void GetHasCooldownForItemType();
	void GetGearIconTextureForItemType();
	void GetDescriptionForItemType();
	void GetDefaultDurationForItemType();
	void GetDefaultCooldownForItemType();
	void GetAmmoIconSmallTextureForItemType();
	void EqualEqual_ItemTypeID();
	void DoesSlotTypeAcceptItemType();
	void Conv_ItemTypeIDToString();
	void BreakItemId();
};

// Class Dungeons.ItemInstanceInventoryDataLookup
// 0x0000
class UItemInstanceInventoryDataLookup : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemInstanceInventoryDataLookup");
		return ptr;
	}



};

// Class Dungeons.ItemPowerEffect
// 0x0000
class UItemPowerEffect : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerEffect");
		return ptr;
	}



};

// Class Dungeons.DamageIncrease
// 0x0000
class UDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageIncrease");
		return ptr;
	}



};

// Class Dungeons.MeleeDamageIncrease
// 0x0000
class UMeleeDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.RangedDamageIncrease
// 0x0000
class URangedDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemRangedDamageIncrease
// 0x0000
class UItemRangedDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemRangedDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemArtifactDamageIncrease
// 0x0000
class UItemArtifactDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemArtifactDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemDamagePerSecondIncrease
// 0x0000
class UItemDamagePerSecondIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemDamagePerSecondIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemRangedDamagePerSecondIncrease
// 0x0000
class UItemRangedDamagePerSecondIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemRangedDamagePerSecondIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemArtifactDamagePerSecondIncrease
// 0x0000
class UItemArtifactDamagePerSecondIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemArtifactDamagePerSecondIncrease");
		return ptr;
	}



};

// Class Dungeons.DamageReduction
// 0x0000
class UDamageReduction : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageReduction");
		return ptr;
	}



};

// Class Dungeons.MaxHealthIncrease
// 0x0000
class UMaxHealthIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MaxHealthIncrease");
		return ptr;
	}



};

// Class Dungeons.ArmorDamageIncrease
// 0x0000
class UArmorDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.DurationIncrease
// 0x0000
class UDurationIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DurationIncrease");
		return ptr;
	}



};

// Class Dungeons.DamageBoosted
// 0x0000
class UDamageBoosted : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DamageBoosted");
		return ptr;
	}



};

// Class Dungeons.HealingIncrease
// 0x0000
class UHealingIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealingIncrease");
		return ptr;
	}



};

// Class Dungeons.MeleeHealingIncrease
// 0x0000
class UMeleeHealingIncrease : public UHealingIncrease
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeHealingIncrease");
		return ptr;
	}



};

// Class Dungeons.RangedHealingIncrease
// 0x0000
class URangedHealingIncrease : public UHealingIncrease
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedHealingIncrease");
		return ptr;
	}



};

// Class Dungeons.ArmorHealingIncrease
// 0x0000
class UArmorHealingIncrease : public UHealingIncrease
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorHealingIncrease");
		return ptr;
	}



};

// Class Dungeons.StunDurationIncrease
// 0x0000
class UStunDurationIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StunDurationIncrease");
		return ptr;
	}



};

// Class Dungeons.PushForceIncrease
// 0x0000
class UPushForceIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PushForceIncrease");
		return ptr;
	}



};

// Class Dungeons.SummonDamageIncrease
// 0x0000
class USummonDamageIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SummonDamageIncrease");
		return ptr;
	}



};

// Class Dungeons.CooldownReduction
// 0x0000
class UCooldownReduction : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CooldownReduction");
		return ptr;
	}



};

// Class Dungeons.ItemHealthIncrease
// 0x0000
class UItemHealthIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemHealthIncrease");
		return ptr;
	}



};

// Class Dungeons.SpeedIncrease
// 0x0000
class USpeedIncrease : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpeedIncrease");
		return ptr;
	}



};

// Class Dungeons.ItemPowerAsFlatDamageBoost
// 0x0000
class UItemPowerAsFlatDamageBoost : public UItemPowerEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerAsFlatDamageBoost");
		return ptr;
	}



};

// Class Dungeons.MeleeDamageItemPowerGameplayEffect
// 0x0000
class UMeleeDamageItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeDamageItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MeleeHealingItemPowerGameplayEffect
// 0x0000
class UMeleeHealingItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeHealingItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RangedDamageItemPowerGameplayEffect
// 0x0000
class URangedDamageItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedDamageItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RangedHealingItemPowerGameplayEffect
// 0x0000
class URangedHealingItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedHealingItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MaxHealthItemPowerGameplayEffect
// 0x0000
class UMaxHealthItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MaxHealthItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArmorDamageItemPowerGameplayEffect
// 0x0000
class UArmorDamageItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorDamageItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ArmorHealingItemPowerGameplayEffect
// 0x0000
class UArmorHealingItemPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArmorHealingItemPowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ItemPowerMeleeDamageModCalculation
// 0x0000
class UItemPowerMeleeDamageModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerMeleeDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerMeleeHealingModCalculation
// 0x0000
class UItemPowerMeleeHealingModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerMeleeHealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerRangedDamageModCalculation
// 0x0000
class UItemPowerRangedDamageModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerRangedDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerRangedHealingModCalculation
// 0x0000
class UItemPowerRangedHealingModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerRangedHealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerHealthModCalculation
// 0x0000
class UItemPowerHealthModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerHealthModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerArmorDamageModCalculation
// 0x0000
class UItemPowerArmorDamageModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerArmorDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerArmorHealingModCalculation
// 0x0000
class UItemPowerArmorHealingModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerArmorHealingModCalculation");
		return ptr;
	}



};

// Class Dungeons.ItemPowerUtil
// 0x0000
class UItemPowerUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPowerUtil");
		return ptr;
	}



	void GetItemPowerDisplayText();
	void GetItemPowerDisplayInt();
};

// Class Dungeons.ItemPrimaryDataAsset
// 0x0000
class UItemPrimaryDataAsset : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.ItemSalvageUtil
// 0x0000
class UItemSalvageUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemSalvageUtil");
		return ptr;
	}



};

// Class Dungeons.ItemslotCooldownEffect
// 0x0000
class UItemslotCooldownEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemslotCooldownEffect");
		return ptr;
	}



};

// Class Dungeons.InventoryItemSlot
// 0x0000
class UInventoryItemSlot : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryItemSlot");
		return ptr;
	}



	void WasSelectedInUI();
	void Swap();
	void IsLocked();
	void HasSlotChanged();
	void GetTagIconsStillLoading();
	void GetTagForSlotType();
	void GetIconTexturesStillLoading();
	void GetIconTextureForItemTag();
	void GetIconTextureForItemId();
	void GetChangeIndex();
	void FinishedSlotChanged();
	void CanSwapWith();
	void AcceptsItem();
};

// Class Dungeons.InventoryEquipmentItemSlot
// 0x0000
class UInventoryEquipmentItemSlot : public UInventoryItemSlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.InventoryEquipmentItemSlot");
		return ptr;
	}



	void OnCooldownChanged();
};

// Class Dungeons.ItemStashComponent
// 0x0000
class UItemStashComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemStashComponent");
		return ptr;
	}



	void ShuffleItemsToFillHoles();
	void ServerVendorGiftItemTo();
	void SerializeSaveState();
	void SalvageItemUndo();
	void SalvageItemInSlot();
	void RemoveItem();
	void OnLevelUp();
	void IsInventoryFull();
	void InventoryUIRequiresRefresh();
	void InventorySize();
	void HasPreviouslyFoundItem();
	void HasPreviouslyFoundCurrency();
	void HasMissionOfferings();
	void HasDeferredItems();
	void GetSalvageInfo();
	void GetNumNewItems();
	void GetNumItemsInInventory();
	void GetMissionOfferings();
	void GetMaxInventoryCount();
	void GetLowestPoweredItem();
	void GetInventorySlots();
	void GetEquippedItemsOfSlotType();
	void GetEquipmentSlots();
	void GetChangeIndex();
	void GetCanOpenWithKeyCommand();
	void Expand();
	void ExitInventoryUI();
	void EnterInventoryUI();
	void CompareItemPowerWithEquipped();
	void ClientVendorGiftItem();
	void ClientPickupItem();
	void ClientGiftItem();
	void ClientAddItem();
	void AvailableEnchantmentPoints();
};

// Class Dungeons.ItemStatsUtil
// 0x0000
class UItemStatsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemStatsUtil");
		return ptr;
	}



	void GetItemStats();
};

// Class Dungeons.JoinDungeonsSessionCallbackProxy
// 0x0000
class UJoinDungeonsSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.JoinDungeonsSessionCallbackProxy");
		return ptr;
	}



	void JoinDungeonsSession();
};

// Class Dungeons.JungleAbominationInvulnerabilityGameplayEffect
// 0x0000
class UJungleAbominationInvulnerabilityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.JungleAbominationInvulnerabilityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.JunglePoisonGameplayEffect
// 0x0000
class UJunglePoisonGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.JunglePoisonGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.JunglePoisonMelee
// 0x0000
class UJunglePoisonMelee : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.JunglePoisonMelee");
		return ptr;
	}



};

// Class Dungeons.JunglePoisonRanged
// 0x0000
class UJunglePoisonRanged : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.JunglePoisonRanged");
		return ptr;
	}



};

// Class Dungeons.KeybindHelper
// 0x0000
class UKeybindHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.KeybindHelper");
		return ptr;
	}



	void SetSavedKeybinds();
	void KeyToString();
	void GetSavedKeybinds();
	void GetLeftConfig();
	void GetDefaultConfig();
};

// Class Dungeons.KillTrackerComponent
// 0x0000
class UKillTrackerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.KillTrackerComponent");
		return ptr;
	}



	void HandleMobKill();
	void Client_RegisterKill();
};

// Class Dungeons.Knockback
// 0x0000
class UKnockback : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Knockback");
		return ptr;
	}



};

// Class Dungeons.LavaBlockTrigger
// 0x0000
class ULavaBlockTrigger : public UBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LavaBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.LavaBurningGamePlayEffect
// 0x0000
class ULavaBurningGamePlayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LavaBurningGamePlayEffect");
		return ptr;
	}



};

// Class Dungeons.LavaGameplayEffect
// 0x0000
class ULavaGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LavaGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.GhostLeapGameplayEffect
// 0x0000
class UGhostLeapGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GhostLeapGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.LeapComponent
// 0x0000
class ULeapComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LeapComponent");
		return ptr;
	}



	void HandleLanded();
};

// Class Dungeons.LeechingGameplayEffect
// 0x0000
class ULeechingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LeechingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Leeching
// 0x0000
class ULeeching : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Leeching");
		return ptr;
	}



};

// Class Dungeons.LevelCounterWidget
// 0x0000
class ULevelCounterWidget : public UPawnCounterWidgetBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LevelCounterWidget");
		return ptr;
	}



};

// Class Dungeons.LevelSettingsUtil
// 0x0000
class ULevelSettingsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LevelSettingsUtil");
		return ptr;
	}



	void IsLobby();
	void getThreatLevel();
	void GetLevelName();
	void GetLevelDisplayName();
	void getEndlessStruggle();
	void getDifficulty();
	void CreateUnlockKeyForLevel();
};

// Class Dungeons.LifeStealAuraGameplayEffect
// 0x0000
class ULifeStealAuraGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LifeStealAuraGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.LifeStealAura
// 0x0000
class ULifeStealAura : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LifeStealAura");
		return ptr;
	}



};

// Class Dungeons.BaseLifestealExecution
// 0x0000
class UBaseLifestealExecution : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BaseLifestealExecution");
		return ptr;
	}



};

// Class Dungeons.MeleeLifestealExecution
// 0x0000
class UMeleeLifestealExecution : public UBaseLifestealExecution
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeLifestealExecution");
		return ptr;
	}



};

// Class Dungeons.RangedLifestealExecution
// 0x0000
class URangedLifestealExecution : public UBaseLifestealExecution
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedLifestealExecution");
		return ptr;
	}



};

// Class Dungeons.ItemLifestealExecution
// 0x0000
class UItemLifestealExecution : public UBaseLifestealExecution
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ItemLifestealExecution");
		return ptr;
	}



};

// Class Dungeons.LifestealGameplayEffect
// 0x0000
class ULifestealGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LifestealGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.LightFeatherInstance
// 0x0000
class ALightFeatherInstance : public ACustomMoverItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LightFeatherInstance");
		return ptr;
	}



	void OnPlayerLanded();
};

// Class Dungeons.LiveOpsKillComponent
// 0x0000
class ULiveOpsKillComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LiveOpsKillComponent");
		return ptr;
	}



	void ServerAssignClientFilter();
	void HandleMobKilled();
	void ClientKillTriggered();
};

// Class Dungeons.LoadingScreenInitializer
// 0x0000
class ULoadingScreenInitializer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LoadingScreenInitializer");
		return ptr;
	}



	void IsCurrentlyShown();
};

// Class Dungeons.LobbyActor
// 0x0000
class ALobbyActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LobbyActor");
		return ptr;
	}



	void OnRep_RequestChanged();
	void OnRep_IsRequestingLevelChanged();
	void IsRequestingLevel();
	void GetTimeout();
	void GetRequest();
};

// Class Dungeons.LobbyBP
// 0x0000
class ALobbyBP : public AGameBP
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LobbyBP");
		return ptr;
	}



	void QuitToMenuAfterRewardScreen();
};

// Class Dungeons.LobbyChest
// 0x0000
class ALobbyChest : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LobbyChest");
		return ptr;
	}



	void HandleInteraction();
};

// Class Dungeons.LobbyGameMode
// 0x0000
class ALobbyGameMode : public ADungeonsGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LobbyGameMode");
		return ptr;
	}



};

// Class Dungeons.LobbyGameState
// 0x0000
class ALobbyGameState : public ADungeonsGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LobbyGameState");
		return ptr;
	}



};

// Class Dungeons.LocalizationUtils
// 0x0000
class ULocalizationUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LocalizationUtils");
		return ptr;
	}



	void VoiceOverLocalizationChanged();
	void LocStringForWeb();
	void GetLocaleString();
	void GetEULAPage();
	void GetDefaultLanguageEnum();
	void GetAccessibilityURL();
	void CurrentLocale();
	void CompareLanguageISO();
	void ChangeLocalizationByString();
	void ChangeLocalization();
};

// Class Dungeons.LoginFlowBpFunctionsLib
// 0x0000
class ULoginFlowBpFunctionsLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LoginFlowBpFunctionsLib");
		return ptr;
	}



	void UnlinkXBLAccount();
	void SignOutXBL();
	void ShouldDisplayCloudServicesFeature();
	void SetDebugConsoleOpen();
	void SetCrossplayState();
	void IsSignedInToPSN();
	void IsProfileTextToSpeechEnabled();
	void IsDebugConsoleOpen();
	void IsCrossplayEnabled();
	void GetXBLPictureUri();
	void GetXBLNameTag();
	void GetXBLGamerscore();
	void GetLinkErrorGamertagHint();
	void AreCloudServicesEnabled();
	void ActivateDungeonsOSS();
};

// Class Dungeons.LootActor
// 0x0000
class ALootActor : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LootActor");
		return ptr;
	}



	void Open();
	void OnRep_ActivatedLoot();
};

// Class Dungeons.Looting
// 0x0000
class ULooting : public UDropIncreasingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Looting");
		return ptr;
	}



};

// Class Dungeons.LootTableItemDropComponent
// 0x0000
class ULootTableItemDropComponent : public UItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LootTableItemDropComponent");
		return ptr;
	}



};

// Class Dungeons.LootUnlockerComponent
// 0x0000
class ULootUnlockerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LootUnlockerComponent");
		return ptr;
	}



	void ServerRequestOpen();
	void RequestUnlock();
	void Reject();
	void GetNumMobKills();
	void GetNumCompletedMissionsAtDifficulty();
	void GetHasCompletedMissionAtDifficulty();
	void GetEmeraldCount();
	void GetCharacterLevel();
	void Client_UnlockChest();
	void Accept();
};

// Class Dungeons.LovikaBaseBuilder
// 0x0000
class ULovikaBaseBuilder : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaBaseBuilder");
		return ptr;
	}



};

// Class Dungeons.LovikaGeneratorBuilder
// 0x0000
class ULovikaGeneratorBuilder : public ULovikaBaseBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaGeneratorBuilder");
		return ptr;
	}



};

// Class Dungeons.LovikaLevelActor
// 0x0000
class ALovikaLevelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaLevelActor");
		return ptr;
	}



	void levelTrace();
	void getGeneratedLevelSettingsOrEmpty();
};

// Class Dungeons.LovikaLobbyActor
// 0x0000
class ALovikaLobbyActor : public ALovikaLevelActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaLobbyActor");
		return ptr;
	}



};

// Class Dungeons.LovikaObjectgroupBuilder
// 0x0000
class ULovikaObjectgroupBuilder : public ULovikaBaseBuilder
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaObjectgroupBuilder");
		return ptr;
	}



};

// Class Dungeons.LovikaObjectgroupLevelActor
// 0x0000
class ALovikaObjectgroupLevelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaObjectgroupLevelActor");
		return ptr;
	}



	void levelTrace();
};

// Class Dungeons.LovikaRecastNavMesh
// 0x0000
class ALovikaRecastNavMesh : public ARecastNavMesh
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaRecastNavMesh");
		return ptr;
	}



};

// Class Dungeons.LovikaSpringArmComponent
// 0x0000
class ULovikaSpringArmComponent : public USpringArmComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LovikaSpringArmComponent");
		return ptr;
	}



	void SetDesiredArmLegnth();
	void ResetDesiredArmLength();
	void Reinitialize();
};

// Class Dungeons.LuckOfTheSea
// 0x0000
class ULuckOfTheSea : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LuckOfTheSea");
		return ptr;
	}



};

// Class Dungeons.LuxuryMerchant
// 0x0000
class ALuxuryMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LuxuryMerchant");
		return ptr;
	}



};

// Class Dungeons.MagmaBlockTrigger
// 0x0000
class UMagmaBlockTrigger : public UBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MagmaBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.MapUtils
// 0x0000
class UMapUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MapUtils");
		return ptr;
	}



	void createMapTexture2D();
};

// Class Dungeons.MapPinComponent
// 0x0000
class UMapPinComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MapPinComponent");
		return ptr;
	}



	void Update();
	void SetMapPin();
	void Initialize();
	void getMapPinClass();
	void GetMapPin();
	void Get2DPosition();
	void CheckRetNull();
};

// Class Dungeons.MapPinWidget
// 0x0000
class UMapPinWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MapPinWidget");
		return ptr;
	}



	void IsLocalPlayer();
	void DoUpdatePinRarity();
	void DoUpdateDownedState();
	void DoUpdateDirection();
	void DoSetPlayerCharacter();
	void DoSetPinColor();
	void DoSetAspectScale();
};

// Class Dungeons.MapStatActor
// 0x0000
class AMapStatActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MapStatActor");
		return ptr;
	}



	void OnRep_TrackedCounts();
	void GetTrackingTypeCount();
};

// Class Dungeons.MapTexture2D
// 0x0000
class UMapTexture2D : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MapTexture2D");
		return ptr;
	}



	void worldToMap();
	void UpdateTerrain();
	void SetDisplayedMaterialInstance();
	void getTexture();
	void getLocationUV();
	void getAllMapPinActors();
};

// Class Dungeons.MassComponent
// 0x0000
class UMassComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MassComponent");
		return ptr;
	}



};

// Class Dungeons.MasterAssetFinder
// 0x0000
class UMasterAssetFinder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MasterAssetFinder");
		return ptr;
	}



};

// Class Dungeons.MasterTeleportComponent
// 0x0000
class UMasterTeleportComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MasterTeleportComponent");
		return ptr;
	}



};

// Class Dungeons.MaterialLerpNotify
// 0x0000
class UMaterialLerpNotify : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MaterialLerpNotify");
		return ptr;
	}



};

// Class Dungeons.MaterialNotify
// 0x0000
class UMaterialNotify : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MaterialNotify");
		return ptr;
	}



};

// Class Dungeons.MeleeAttackComponent
// 0x0000
class UMeleeAttackComponent : public UAttackComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeAttackComponent");
		return ptr;
	}



	void ServerSetHoldingAttack();
	void OnWeaponSlotUpdated();
	void OnVariantCooldownDone();
	void OnDeath();
	void OnAttackVariantEnd();
	void CancelActions();
	void AttackWithVariantIndexServer();
};

// Class Dungeons.MeleeDamageGameplayEffect
// 0x0000
class UMeleeDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MeleeAttackSpeedBoostGameplayEffect
// 0x0000
class UMeleeAttackSpeedBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeAttackSpeedBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MeleeAttackSpeedBoost
// 0x0000
class UMeleeAttackSpeedBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeAttackSpeedBoost");
		return ptr;
	}



};

// Class Dungeons.MeleeAttributeSet
// 0x0000
class UMeleeAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeAttributeSet");
		return ptr;
	}



	void OnRep_MeleeHealItemPowerFactor();
	void OnRep_MeleeAttackSpeedMultiplier();
	void OnRep_MeleeAttackRangeMultiplier();
	void OnRep_MeleeAttackPushbackMultiplier();
	void OnRep_MeleeAttackLifeStealAmount();
	void OnRep_MeleeAttackItemPowerFactor();
	void OnRep_MeleeAttackHitChanceMultiplier();
	void OnRep_MeleeAttackDamageMultiplier();
	void OnRep_MeleeAttackDamageIncrease();
	void OnRep_MeleeAttackAngleMultiplier();
};

// Class Dungeons.MeleeDamageBoostGameplayEffect
// 0x0000
class UMeleeDamageBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeDamageBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MeleeDamageBoost
// 0x0000
class UMeleeDamageBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeDamageBoost");
		return ptr;
	}



};

// Class Dungeons.MeleeSlotActorAnimNotifyState
// 0x0000
class UMeleeSlotActorAnimNotifyState : public UEquipmentSlotActorAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeSlotActorAnimNotifyState");
		return ptr;
	}



};

// Class Dungeons.MeleeTicketProvider
// 0x0000
class AMeleeTicketProvider : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeTicketProvider");
		return ptr;
	}



};

// Class Dungeons.MeleeWeaponGearItemInstance
// 0x0000
class AMeleeWeaponGearItemInstance : public AGearItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MeleeWeaponGearItemInstance");
		return ptr;
	}



	void GetEditableAttackVariants();
	void GetAttackVariants();
};

// Class Dungeons.MenuGameMode
// 0x0000
class AMenuGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MenuGameMode");
		return ptr;
	}



};

// Class Dungeons.MerchantActor
// 0x0000
class AMerchantActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantActor");
		return ptr;
	}



	void SimulateInteraction();
	void SetCapture3DView();
	void HandleInteraction();
};

// Class Dungeons.MerchantActorUtil
// 0x0000
class UMerchantActorUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantActorUtil");
		return ptr;
	}



	void GetFirstSelectMissionOfferingsMerchant();
};

// Class Dungeons.MerchantDef
// 0x0000
class UMerchantDef : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantDef");
		return ptr;
	}



	void GetDisplayName();
};

// Class Dungeons.MerchantDefComponent
// 0x0000
class UMerchantDefComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantDefComponent");
		return ptr;
	}



	void OnPlayerCharacterRemoving();
	void OnPlayerCharacterAdding();
	void GetMerchantDisplayName();
};

// Class Dungeons.VillageMerchantDef
// 0x0000
class UVillageMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VillageMerchantDef");
		return ptr;
	}



};

// Class Dungeons.LuxuryMerchantDef
// 0x0000
class ULuxuryMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LuxuryMerchantDef");
		return ptr;
	}



};

// Class Dungeons.MysteryMerchantDef
// 0x0000
class UMysteryMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MysteryMerchantDef");
		return ptr;
	}



};

// Class Dungeons.BlacksmithMerchantDef
// 0x0000
class UBlacksmithMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlacksmithMerchantDef");
		return ptr;
	}



};

// Class Dungeons.GiftWrapperMerchantDef
// 0x0000
class UGiftWrapperMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GiftWrapperMerchantDef");
		return ptr;
	}



};

// Class Dungeons.PiglinMerchantDef
// 0x0000
class UPiglinMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PiglinMerchantDef");
		return ptr;
	}



};

// Class Dungeons.QuestGiverMerchantDef
// 0x0000
class UQuestGiverMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.QuestGiverMerchantDef");
		return ptr;
	}



};

// Class Dungeons.HyperMissionMerchantDef
// 0x0000
class UHyperMissionMerchantDef : public UMerchantDef
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HyperMissionMerchantDef");
		return ptr;
	}



};

// Class Dungeons.MerchantItemGeneratorBase
// 0x0000
class UMerchantItemGeneratorBase : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantItemGeneratorBase");
		return ptr;
	}



};

// Class Dungeons.MerchantPredicateRarityGenerator
// 0x0000
class UMerchantPredicateRarityGenerator : public UMerchantItemGeneratorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantPredicateRarityGenerator");
		return ptr;
	}



};

// Class Dungeons.MerchantPricingComponent
// 0x0000
class UMerchantPricingComponent : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantPricingComponent");
		return ptr;
	}



};

// Class Dungeons.MerchantSelectionBase
// 0x0000
class UMerchantSelectionBase : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantSelectionBase");
		return ptr;
	}



	void TryConfirmSelection();
	void TryCancelSelection();
	void IsFocused();
	void HasSelectedAny();
	void CanSelectAny();
	void CanConfirmSelection();
	void CanCancelSelection();
};

// Class Dungeons.MerchantsUtil
// 0x0000
class UMerchantsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantsUtil");
		return ptr;
	}



	void UnlockMerchantForAllLocalPlayers();
	void IsMerchantUnlocked();
	void IsMerchantLockedForLevel();
	void GetUnlockedMerchantsCount();
	void GetTotalMerchantsCount();
	void GetMerchantName();
};

// Class Dungeons.MerchantTransactionUtil
// 0x0000
class UMerchantTransactionUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantTransactionUtil");
		return ptr;
	}



	void GetTransactionReasonText();
};

// Class Dungeons.MerchantWidgetBase
// 0x0000
class UMerchantWidgetBase : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MerchantWidgetBase");
		return ptr;
	}



	void UpdateTransactions();
	void UpdateSlots();
	void UpdateSelections();
	void UpdateSelectionFocus();
	void ShouldShowEnchantmentPoints();
	void OnUnboundMerchant();
	void OnTransactionExecuted();
	void OnItemAnnouncement();
	void OnBoundMerchant();
	void OnBindChanged();
	void IsTransactionClassAvailable();
	void IsSelectionClassRequired();
	void IsSelectionClassFocused();
	void HasAnyLockedSlot();
	void GetTransactionByClass();
	void GetSlotsByClass();
	void GetSlots();
	void GetSelectionFocus();
	void GetSelectionByClass();
	void GetRestockMethodsBulletPoints();
	void GetMerchantActorOwner();
	void GetLockedSlotsHint();
	void GetDisplayName();
	void GetDisplayDescription();
	void GetDisplayBulletPoints();
	void GetCurrencyComponent();
};

// Class Dungeons.MinecraftAPI
// 0x0000
class UMinecraftAPI : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MinecraftAPI");
		return ptr;
	}



};

// Class Dungeons.MinecraftAPIEntitlementsRepository
// 0x0000
class UMinecraftAPIEntitlementsRepository : public UAPIEntitlementRepositoryParent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MinecraftAPIEntitlementsRepository");
		return ptr;
	}



};

// Class Dungeons.MinecraftAPIEntitlementsValidator
// 0x0000
class UMinecraftAPIEntitlementsValidator : public UEntitlementsValidator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MinecraftAPIEntitlementsValidator");
		return ptr;
	}



};

// Class Dungeons.MissChance
// 0x0000
class UMissChance : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissChance");
		return ptr;
	}



};

// Class Dungeons.MissionChancesUtil
// 0x0000
class UMissionChancesUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionChancesUtil");
		return ptr;
	}



	void GetMobStatus();
	void GetMobChanceText();
	void GetMobChanceIconClass();
	void GetMobChanceDLCText();
	void GetMissionProbabilities();
	void GetMissionChancesTypeText();
	void GetMissionChancesTypesFiltered();
	void GetMissionChancesTypes();
	void GetMissionChancesText();
	void GetMissionChances();
	void GetMapRewardItemTypeChances();
	void GetMapRewardItemTagChances();
	void GetMapRewardItemRarityChances();
	void GetMapLootItemTypeChances();
	void GetMapArtifactItemTypeChances();
	void GetCanShowItemType();
};

// Class Dungeons.MissionDefs
// 0x0000
class UMissionDefs : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionDefs");
		return ptr;
	}



	void IsTutorial();
	void IsTrial();
	void IsSecret();
	void IsSalvageEnabled();
	void IsMissionThreatLevelUnlockedByDefault();
	void IsMissionThreatLevelSelectorHidden();
	void IsHyperMission();
	void GetThreatLevelFraction();
	void GetSecretUnlockInMissionAsRequirementText();
	void GetRequiredMissions();
	void GetRecommendedTotalGearItemPower();
	void GetMissionVariationType();
	void GetMissionUITheme();
	void GetMissionTrialText();
	void GetMissionRequiresStartConfirmation();
	void GetMissionRequiresOfferings();
	void GetMissionNightModeType();
	void GetMissionLockedText();
	void GetMissionLockedDescription();
	void GetMissionLoadingScreenTexture();
	void GetMissionLoadingScreenSoftTexture();
	void GetMissionExtraChallenge();
	void GetMissionDisplayStoryTitle();
	void GetMissionDisplayStoryContents();
	void GetMissionDisplayName();
	void GetMissionConfirmStartWarning();
	void GetMissionConfirmStartTitle();
	void GetMissionAsRequirementToolTipText();
	void GetMissionAsRequirementText();
	void GetMapThreatLevelDescriptions();
	void GetLastSelectableThreatLevel();
	void GetGearPowerDifficultyRecommendation();
	void GetFirstSelectableThreatLevel();
	void GetDisplayGearPowerGlobalThreatFraction();
	void GetDifficultyThreatGlobalThreatFraction();
	void GetAllNonDisabledMissions();
	void GetAffectorInfo();
};

// Class Dungeons.MissionDifficultyUtil
// 0x0000
class UMissionDifficultyUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionDifficultyUtil");
		return ptr;
	}



	void IsMissionDifficultyValid();
};

// Class Dungeons.MissionInterestUtil
// 0x0000
class UMissionInterestUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionInterestUtil");
		return ptr;
	}



	void GetMissionInterestText();
	void GetMissionInterestIsNew();
	void GetMissionInterestCarouselText();
};

// Class Dungeons.MissionLootCameraActor
// 0x0000
class AMissionLootCameraActor : public ACameraActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionLootCameraActor");
		return ptr;
	}



};

// Class Dungeons.MissionOfferingsTransactionBase
// 0x0000
class UMissionOfferingsTransactionBase : public UMerchantTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionOfferingsTransactionBase");
		return ptr;
	}



	void GetMissionOfferings();
	void GetMission();
	void GetIsItemBeingOffered();
};

// Class Dungeons.MissionOfferingsUtil
// 0x0000
class UMissionOfferingsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionOfferingsUtil");
		return ptr;
	}



	void NotEqual_MissionOfferings();
	void GetOfferingsArchetypeCounts();
	void EqualEqual_MissionOfferings();
};

// Class Dungeons.MissionPresentationHandler
// 0x0000
class UMissionPresentationHandler : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionPresentationHandler");
		return ptr;
	}



	void OnRep_SetMissionBoundingBox();
	void OnRep_PresentationData();
	void EndCurrentObjective();
};

// Class Dungeons.MissionProgressComponent
// 0x0000
class UMissionProgressComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionProgressComponent");
		return ptr;
	}



	void UnlockBonusMissionForAllPlayers();
	void UnlockBonusMissionForAllLocalPlayers();
	void UnlockBonusMission();
	void SetThreatLevelAnnounced();
	void SetMapUIState();
	void SetHasDisplayedCompletionNotification();
	void SetDifficultyAnnounced();
	void SetContentAnnounced();
	void SetCompletedMission();
	void QueryStartMissionStatus();
	void QueryMissionRequestIsStartable();
	void PreviewMissionSelectionRequest();
	void OnDifficultySelected();
	void IsUnlockedAndNotTutorial();
	void IsThreatLevelUnlocked();
	void IsThreatLevelAnnounced();
	void IsRealmUnlocked();
	void IsMissionUnlocked();
	void IsMissionThreatLevelValid();
	void IsMissionThreatLevelTooLow();
	void IsMissionThreatLevelTooHigh();
	void IsMissionRevealed();
	void IsMissionOfInterest();
	void IsMissionNew();
	void IsMissionEndlessStruggleUnlocked();
	void IsMissionDone();
	void IsMissionDifficultyAndThreatLevelCompleted();
	void IsMissionCompleted();
	void IsLevelUnlockedForAllLocalPlayers();
	void IsDLCPlayable();
	void IsDLCOwned();
	void IsDifficultyUnlocked();
	void IsDifficultyCompleted();
	void IsDifficultyAnnounced();
	void IsAnyEndlessStruggleUnlocked();
	void HasNeverSelectedDifficulty();
	void GetUnannouncedUnlockedThreatLevel();
	void GetUnannouncedUnlockedDifficulty();
	void GetUnannouncedEndGameContent();
	void GetTotalMissionsInDifficultyOfVariationType();
	void GetNumCompletedMissionsAtDifficulty();
	void GetMissionValidThreatLevel();
	void GetMissionValidEndlessStruggle();
	void GetMissionUnlockRequirements();
	void GetMissionThreatLevelCompleted();
	void GetMissionNamesOfInterestInDifficulty();
	void GetMissionMarkerInterestTypes();
	void GetMissionFilteredInterestTypes();
	void GetMissionDifficultyCompleted();
	void GetMapUIState();
	void GetHighestUnlockedEndlessStruggle();
	void GetHighestCompletedEndlessStruggle();
	void GetHasCompletedMissionAtDifficulty();
	void GetCompletedMissionsInDifficultyOfVariationType();
	void GetCompletedMissions();
	void GetBestMissionInterestCarouselInDifficulty();
	void DoesMissionHaveNewSecretLocations();
	void DoesMissionHaveNewRewards();
	void DoesMissionHaveNewCapturedMerchants();
	void CountMissionsOfInterestInDifficulty();
	void ClearMissionState();
	void AreAllAvailableMissionDifficultiesCompleted();
};

// Class Dungeons.MissionProgressHandler
// 0x0000
class AMissionProgressHandler : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionProgressHandler");
		return ptr;
	}



	void PlayMissionEndVideo();
	void OnShowMissionVictory();
	void OnRep_UpdateUI();
	void OnRep_MissionUpdated();
	void OnRep_MissionDetails();
	void OnMissionFinished();
	void OnEndVideoFinished();
	void MulticastObjectiveEventLocation();
	void MulticastMissionFinished();
	void MulticastInstantMoveToLobby();
	void MulticastGameOver();
	void MoveToLobby();
	void MissionCancelledTravelToLobby();
	void GetMissionProgressionCount();
	void FinishedObjectiveTag();
};

// Class Dungeons.MissionQuery
// 0x0000
class UMissionQuery : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionQuery");
		return ptr;
	}



	void GetPropNamesForTile();
	void GetLevelName();
};

// Class Dungeons.MissionRequestUtil
// 0x0000
class UMissionRequestUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionRequestUtil");
		return ptr;
	}



	void GetMissionState();
	void GetMissionRequestDesiredEditor();
	void CreateMissionRequest();
};

// Class Dungeons.MissionSelectorComponent
// 0x0000
class UMissionSelectorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionSelectorComponent");
		return ptr;
	}



	void TryStartMissionSelection();
	void TryContinueMission();
	void TravelToMission();
	void ServerRequestLevel();
	void ServerReject();
	void ServerAccept();
	void HandleLogout();
	void ClientRequestFinished();
	void ClientLevelStarting();
	void ClientLevelRequested();
};

// Class Dungeons.MissionStateUtil
// 0x0000
class UMissionStateUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionStateUtil");
		return ptr;
	}



	void GetTotalDisplayItemPower();
	void getThreatLevel();
	void getMissionDifficulty();
	void GetLevelName();
	void getEndlessStruggle();
	void getDifficulty();
	void GetBulletPoints();
};

// Class Dungeons.MissionThemeDefs
// 0x0000
class UMissionThemeDefs : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionThemeDefs");
		return ptr;
	}



	void unloadThemeTextures();
	void preloadThemeTextures();
	void getRowName();
	void getLockedDisplayText();
	void getLockedDescriptionText();
	void GetDisplayText();
};

// Class Dungeons.MissionThemeLibrary
// 0x0000
class UMissionThemeLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MissionThemeLibrary");
		return ptr;
	}



};

// Class Dungeons.MobActivationComponent
// 0x0000
class UMobActivationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobActivationComponent");
		return ptr;
	}



	void IsMobActive();
	void DeactivateMob();
	void ActivateMob();
};

// Class Dungeons.MobAnimationsComponent
// 0x0000
class UMobAnimationsComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobAnimationsComponent");
		return ptr;
	}



};

// Class Dungeons.MobBtController
// 0x0000
class AMobBtController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobBtController");
		return ptr;
	}



	void OnDeath();
};

// Class Dungeons.MobCharacter
// 0x0000
class AMobCharacter : public ABaseCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobCharacter");
		return ptr;
	}



	void TrySpawnXPOrbs();
	void PlayerLeftVisibleRange();
	void PlayerInVisibleRangeChanged();
	void PlayerEnteredVisibleRange();
	void OnUnderwaterTagChange();
	void MobAtExtremePlayerRangeChanged();
	void IsEventMob();
	void HasTag();
	void GetMusicSequenceState();
	void GetDisplayName();
	void AIController();
};

// Class Dungeons.MobCharacterMovementComponent
// 0x0000
class UMobCharacterMovementComponent : public UCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobCharacterMovementComponent");
		return ptr;
	}



};

// Class Dungeons.MobEnchantmentComponent
// 0x0000
class UMobEnchantmentComponent : public UEnchantmentComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobEnchantmentComponent");
		return ptr;
	}



	void GetEnchantmentsNonInherent();
};

// Class Dungeons.EnchantedGameplayEffect
// 0x0000
class UEnchantedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.AncientEnchantedGameplayEffect
// 0x0000
class UAncientEnchantedGameplayEffect : public UEnchantedGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AncientEnchantedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EnchantedHpBoostGameplayEffect
// 0x0000
class UEnchantedHpBoostGameplayEffect : public UEnchantedGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantedHpBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobGroupDropComponent
// 0x0000
class UMobGroupDropComponent : public UPredefinedItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobGroupDropComponent");
		return ptr;
	}



};

// Class Dungeons.MobIconLibrary
// 0x0000
class UMobIconLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobIconLibrary");
		return ptr;
	}



};

// Class Dungeons.MobLoaderComponent
// 0x0000
class UMobLoaderComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobLoaderComponent");
		return ptr;
	}



};

// Class Dungeons.MobMashGameplayEffect
// 0x0000
class UMobMashGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobMashGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobMashShockwaveDamageGameplayEffect
// 0x0000
class UMobMashShockwaveDamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobMashShockwaveDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobMashShockWave
// 0x0000
class AMobMashShockWave : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobMashShockWave");
		return ptr;
	}



	void OnOverlapBegin();
};

// Class Dungeons.MobMasherInstance
// 0x0000
class AMobMasherInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobMasherInstance");
		return ptr;
	}



	void MulticastSpawnShockwave();
};

// Class Dungeons.MobPrimaryDataAsset
// 0x0000
class UMobPrimaryDataAsset : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.MobSummonGameplayEffect
// 0x0000
class UMobSummonGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSummonGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobSummonHelper
// 0x0000
class UMobSummonHelper : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSummonHelper");
		return ptr;
	}



};

// Class Dungeons.MobSummonItemGameplayEffect
// 0x0000
class UMobSummonItemGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSummonItemGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobSummonItem
// 0x0000
class AMobSummonItem : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobSummonItem");
		return ptr;
	}



	void OnPlayerDeath();
	void OnPetDied();
};

// Class Dungeons.WindResistanceGameplayEffect
// 0x0000
class UWindResistanceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindResistanceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MountaineerWindResistanceGameplayEffect
// 0x0000
class UMountaineerWindResistanceGameplayEffect : public UWindResistanceGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MountaineerWindResistanceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WindImmunityGameplayEffect
// 0x0000
class UWindImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MountaineerWindImmunityGameplayEffect
// 0x0000
class UMountaineerWindImmunityGameplayEffect : public UWindImmunityGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MountaineerWindImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MovementAttributeSet
// 0x0000
class UMovementAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MovementAttributeSet");
		return ptr;
	}



	void OnRep_SpeedMultiplier();
	void OnRep_RotationMultiplier();
	void OnRep_MaxDodgeCharges();
	void OnRep_Gravity();
	void OnRep_FrictionMultiplier();
	void OnRep_DodgeSpeed();
	void OnRep_DodgeCooldown();
	void OnRep_DodgeCharges();
};

// Class Dungeons.MoveSpeedAuraGameplayEffect
// 0x0000
class UMoveSpeedAuraGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MoveSpeedAuraGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MoveSpeedAura
// 0x0000
class UMoveSpeedAura : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MoveSpeedAura");
		return ptr;
	}



};

// Class Dungeons.MoveSpeedReductionGameplayEffect
// 0x0000
class UMoveSpeedReductionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MoveSpeedReductionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MoveSpeedReduction
// 0x0000
class UMoveSpeedReduction : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MoveSpeedReduction");
		return ptr;
	}



};

// Class Dungeons.ArcMovement
// 0x0000
class UArcMovement : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ArcMovement");
		return ptr;
	}



};

// Class Dungeons.MoveToTargetMovementComponent
// 0x0000
class UMoveToTargetMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MoveToTargetMovementComponent");
		return ptr;
	}



	void SetTarget();
	void Reset();
};

// Class Dungeons.MultiChargeChargedEffect
// 0x0000
class UMultiChargeChargedEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeChargedEffect");
		return ptr;
	}



};

// Class Dungeons.MultiChargeChargedEffectOne
// 0x0000
class UMultiChargeChargedEffectOne : public UMultiChargeChargedEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeChargedEffectOne");
		return ptr;
	}



};

// Class Dungeons.MultiChargeChargedEffectTwo
// 0x0000
class UMultiChargeChargedEffectTwo : public UMultiChargeChargedEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeChargedEffectTwo");
		return ptr;
	}



};

// Class Dungeons.MultiChargeChargedEffectThree
// 0x0000
class UMultiChargeChargedEffectThree : public UMultiChargeChargedEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeChargedEffectThree");
		return ptr;
	}



};

// Class Dungeons.MultiChargeChargingEffect
// 0x0000
class UMultiChargeChargingEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeChargingEffect");
		return ptr;
	}



};

// Class Dungeons.MultiChargeDamageEffect
// 0x0000
class UMultiChargeDamageEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiChargeDamageEffect");
		return ptr;
	}



};

// Class Dungeons.MultiCharge
// 0x0000
class UMultiCharge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiCharge");
		return ptr;
	}



};

// Class Dungeons.MultiDodgeMaxDodgesGameplayEffect
// 0x0000
class UMultiDodgeMaxDodgesGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiDodgeMaxDodgesGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MultiDodgeIncreamentDodgeGameplayEffect
// 0x0000
class UMultiDodgeIncreamentDodgeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiDodgeIncreamentDodgeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MultiDodge
// 0x0000
class UMultiDodge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiDodge");
		return ptr;
	}



	void OnDodgeCounterIncreased();
	void OnDodgeCounterDecreased();
	void OnCooldownChanged();
	void AfterDodgeCooldown();
};

// Class Dungeons.MultiShot
// 0x0000
class UMultiShot : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MultiShot");
		return ptr;
	}



	void SpawnProjectilesMulticast();
};

// Class Dungeons.MusicOverrideComponent
// 0x0000
class UMusicOverrideComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MusicOverrideComponent");
		return ptr;
	}



	void GetEventMobMusicTracks();
};

// Class Dungeons.MysteryBoxInstance
// 0x0000
class AMysteryBoxInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MysteryBoxInstance");
		return ptr;
	}



};

// Class Dungeons.MysteryMerchant
// 0x0000
class AMysteryMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MysteryMerchant");
		return ptr;
	}



};

// Class Dungeons.MysteryTokenInstance
// 0x0000
class AMysteryTokenInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MysteryTokenInstance");
		return ptr;
	}



};

// Class Dungeons.NavAreaLava
// 0x0000
class UNavAreaLava : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NavAreaLava");
		return ptr;
	}



};

// Class Dungeons.NavBoundsVolume
// 0x0000
class ANavBoundsVolume : public ANavMeshBoundsVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NavBoundsVolume");
		return ptr;
	}



};

// Class Dungeons.SporeGrenadeGameplayEffect
// 0x0000
class USporeGrenadeGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SporeGrenadeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SporeGrenade
// 0x0000
class ASporeGrenade : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SporeGrenade");
		return ptr;
	}



	void OnPreDestroy();
	void OnOverlapBegin();
};

// Class Dungeons.NetherWartSporeGrenadeInstance
// 0x0000
class ANetherWartSporeGrenadeInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NetherWartSporeGrenadeInstance");
		return ptr;
	}



	void MulticastSpawnGrenades();
};

// Class Dungeons.NotificationBroadcastActor
// 0x0000
class ANotificationBroadcastActor : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.NotificationBroadcastActor");
		return ptr;
	}



	void OnItemPickup();
	void MulticastPlayerLeftNotification();
	void MulticastPlayerJoinedNotification();
};

// Class Dungeons.ObjectDistanceNotifier
// 0x0000
class UObjectDistanceNotifier : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectDistanceNotifier");
		return ptr;
	}



};

// Class Dungeons.ObjectiveHintTargetComponent
// 0x0000
class UObjectiveHintTargetComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectiveHintTargetComponent");
		return ptr;
	}



};

// Class Dungeons.ObjectiveIndicators
// 0x0000
class UObjectiveIndicators : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectiveIndicators");
		return ptr;
	}



	void IsInsideCoopHotbar();
};

// Class Dungeons.ObjectiveInterestPoint
// 0x0000
class AObjectiveInterestPoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectiveInterestPoint");
		return ptr;
	}



};

// Class Dungeons.ObjectiveRing
// 0x0000
class AObjectiveRing : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectiveRing");
		return ptr;
	}



};

// Class Dungeons.ObjectiveTagQuest
// 0x0000
class UObjectiveTagQuest : public UMerchantCountQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ObjectiveTagQuest");
		return ptr;
	}



};

// Class Dungeons.OfferedItemSlot
// 0x0000
class UOfferedItemSlot : public UInventoryItemMerchantSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OfferedItemSlot");
		return ptr;
	}



};

// Class Dungeons.OfferEnchantmentPoints
// 0x0000
class UOfferEnchantmentPoints : public UMerchantSelectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OfferEnchantmentPoints");
		return ptr;
	}



	void SetOfferedEnchantmentPoints();
	void GetOfferedEnchantmentPoints();
	void GetMaxOfferableEnchantmentPoints();
};

// Class Dungeons.OfferHyperMissionOfferings
// 0x0000
class UOfferHyperMissionOfferings : public UMissionOfferingsTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OfferHyperMissionOfferings");
		return ptr;
	}



};

// Class Dungeons.SelectedInventoryItemTransactionBase
// 0x0000
class USelectedInventoryItemTransactionBase : public UInventoryItemSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectedInventoryItemTransactionBase");
		return ptr;
	}



};

// Class Dungeons.OfferItem
// 0x0000
class UOfferItem : public USelectedInventoryItemTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OfferItem");
		return ptr;
	}



};

// Class Dungeons.OneYearEventTracker
// 0x0000
class UOneYearEventTracker : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OneYearEventTracker");
		return ptr;
	}



	void OnRequestUpdate();
};

// Class Dungeons.OnFireComponent
// 0x0000
class UOnFireComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OnFireComponent");
		return ptr;
	}



};

// Class Dungeons.OnLandingExecutionEnchantment
// 0x0000
class UOnLandingExecutionEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OnLandingExecutionEnchantment");
		return ptr;
	}



};

// Class Dungeons.OnlineFunctionLib
// 0x0000
class UOnlineFunctionLib : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OnlineFunctionLib");
		return ptr;
	}



	void AllowToggleFriendsSidebar();
};

// Class Dungeons.OnlineTextLabels
// 0x0000
class UOnlineTextLabels : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OnlineTextLabels");
		return ptr;
	}



	void GetSignInError();
	void GetPrivilegeError();
	void GetLinkAccountError();
	void GetAuthenticationErrorTitle();
	void GetAuthenticationErrorMessage();
};

// Class Dungeons.OnlineUtil
// 0x0000
class UOnlineUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OnlineUtil");
		return ptr;
	}



	void IsOnlineSession();
	void GetSessionType();
	void GetSessionEnumType();
};

// Class Dungeons.OpenChatDungeonsSessionCallbackProxy
// 0x0000
class UOpenChatDungeonsSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OpenChatDungeonsSessionCallbackProxy");
		return ptr;
	}



	void OpenChatDungeonsFriend();
};

// Class Dungeons.OverlapListener
// 0x0000
class AOverlapListener : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OverlapListener");
		return ptr;
	}



	void OnBeginOverlap();
};

// Class Dungeons.OxygenAttributeSet
// 0x0000
class UOxygenAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenAttributeSet");
		return ptr;
	}



	void OnRep_Oxygen();
	void OnRep_MaxOxygen();
};

// Class Dungeons.OxygenBubbleActor
// 0x0000
class AOxygenBubbleActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenBubbleActor");
		return ptr;
	}



};

// Class Dungeons.OxygenComponent
// 0x0000
class UOxygenComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenComponent");
		return ptr;
	}



	void SetIsUnderwater();
	void OnWaterBreathingTagChange();
	void OnUnderwaterTagChange();
	void OnNotifyOxygenLow();
	void OnDrowning();
	void GetMaximumOxygen();
	void GetIsUnderwater();
	void GetIsOxygenLow();
	void GetCurrentOxygenPercentage();
	void GetCurrentOxygen();
	void FillOxygen();
	void EnableWaterBreathing();
	void Client_OnDrowning();
	void BroadcastUnderwaterDelegate();
	void BeginPlay();
};

// Class Dungeons.OxygenSourceComponent
// 0x0000
class AOxygenSourceComponent : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.OxygenSourceComponent");
		return ptr;
	}



	void GetIsEnabled();
	void EnableSound();
	void EnableMapPin();
	void Enable();
};

// Class Dungeons.PainCycleHealthDrainModCalculation
// 0x0000
class UPainCycleHealthDrainModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PainCycleHealthDrainModCalculation");
		return ptr;
	}



};

// Class Dungeons.PainCycleStackerGameplayEffect
// 0x0000
class UPainCycleStackerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PainCycleStackerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PainCycleDrainGameplayEffect
// 0x0000
class UPainCycleDrainGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PainCycleDrainGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PainCycleBuffGameplayEffect
// 0x0000
class UPainCycleBuffGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PainCycleBuffGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PainCycle
// 0x0000
class UPainCycle : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PainCycle");
		return ptr;
	}



};

// Class Dungeons.PaperdollComponent
// 0x0000
class UPaperdollComponent : public USkeletalMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PaperdollComponent");
		return ptr;
	}



};

// Class Dungeons.PermanentInvisibilityEffect
// 0x0000
class UPermanentInvisibilityEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PermanentInvisibilityEffect");
		return ptr;
	}



};

// Class Dungeons.PetGameplayEffect
// 0x0000
class UPetGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PetGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PetBat
// 0x0000
class UPetBat : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PetBat");
		return ptr;
	}



};

// Class Dungeons.PetCosmeticInfo
// 0x0000
class APetCosmeticInfo : public ACosmeticItemInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PetCosmeticInfo");
		return ptr;
	}



};

// Class Dungeons.PickupComponent
// 0x0000
class UPickupComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PickupComponent");
		return ptr;
	}



};

// Class Dungeons.PickupItemComponent
// 0x0000
class UPickupItemComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PickupItemComponent");
		return ptr;
	}



	void HandleActivateInstantItemServer();
	void CanPickup();
};

// Class Dungeons.PickupStorableComponent
// 0x0000
class UPickupStorableComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PickupStorableComponent");
		return ptr;
	}



	void ServerStore();
	void ServerSendPickupCounts();
};

// Class Dungeons.Piercing
// 0x0000
class UPiercing : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Piercing");
		return ptr;
	}



};

// Class Dungeons.PiglinMerchant
// 0x0000
class APiglinMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PiglinMerchant");
		return ptr;
	}



};

// Class Dungeons.PileOfBones
// 0x0000
class APileOfBones : public AMobSummonItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PileOfBones");
		return ptr;
	}



};

// Class Dungeons.PlayerAvatarComponent
// 0x0000
class UPlayerAvatarComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerAvatarComponent");
		return ptr;
	}



	void ServerSelectSkin();
	void OnRep_SelectedSkin();
	void OnRep_Color();
};

// Class Dungeons.PlayerCharacter
// 0x0000
class APlayerCharacter : public ABaseCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCharacter");
		return ptr;
	}



	void TeleportToFriend();
	void TeleportPlayerToActor();
	void SetReadyToPlayInternal();
	void SetReadyToPlay();
	void SetIsInInventory();
	void ServerlaunchPlayer();
	void SalvagePendingRewardItem();
	void RestartAtCheckpoint();
	void RespawnPlayerMulticast();
	void PopToPlayer();
	void OnRep_TridentKillCount();
	void OnRep_TNTKillCount();
	void OnRep_SpinBladeHitCount();
	void OnRep_OpenedChestRarity();
	void OnRep_OcelotArmourTracking();
	void OnRep_LoadedType();
	void OnRep_IceWeaponTracking();
	void OnRep_IceWandKillCount();
	void OnRep_EmeraldArmourTracking();
	void OnPlayerTeleported();
	void OnPlayerNumberUpdated();
	void OnPlayerAction();
	void OnOtherPlayerLeft();
	void OnOtherPlayerJoined();
	void OnLostConduit();
	void OnLocalPlayerTeleported();
	void OnLlamaOffering();
	void OnIceWandGlowSquid();
	void OnFootstep();
	void OnEnterBubbleColumn();
	void OnCharacterDown();
	void OnCapsuleEndOverlap();
	void OnCapsuleBeginOverlap();
	void OnBubbledEnemy();
	void NumPendingRewards();
	void LaunchCharacterToPos();
	void IsOwnedByHostChanged();
	void IsOwnedByHost();
	void IsOnGround();
	void IsLoadedInLevel();
	void IsInInventory();
	void IsIcyBreath();
	void IsDodgeRolling();
	void IsDodgeOnCooldown();
	void IsAllowedToPerformAction();
	void InWorldAndAlive();
	void HasPendingRewardItem();
	void HasDodgesLeft();
	void HasBeenInCombat();
	void HandleInteraction();
	void GetTeleportState();
	void GetTeleportDependents();
	void GetTeleportCandidates();
	void GetStatTracker();
	void GetPlayerNumber();
	void GetPlayerColor();
	void GetPlayerAvatarData();
	void GetPendingRewardItemRewardType();
	void GetPendingRewardItem();
	void GetLocalPlayerDisplayText();
	void GetItemSlotOfType();
	void GetDodgeCooldownProvider();
	void GetDodgeCooldownFraction();
	void GetCharacterLevel();
	void GetBasePlayerDisplayName();
	void GetAliveState();
	void GameplayCue_Damage_Weak();
	void GameplayCue_Damage();
	void ClientUnlockMerchant();
	void ClientUnlockBonusMission();
	void Client_OnLostConduit();
	void Client_OnLlamaOffering();
	void Client_OnIceWandGlowSquid();
	void Client_OnEnterBubbleColumn();
	void Client_OnBubbledEnemy();
	void ClaimPendingRewardItem();
	void CanPop();
	void CanDodge();
	void ApplyMaterialToMesh();
	void ActivateSupplies();
};

// Class Dungeons.PlayerCharacterDataProvider
// 0x0000
class UPlayerCharacterDataProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCharacterDataProvider");
		return ptr;
	}



	void GetTotalEquippedGearPower();
	void GetOwnedGold();
	void GetOwnedEmeralds();
	void GetLevel();
	void GetCharacterSkinId();
	void GetCharacterName();
};

// Class Dungeons.PlayerCharacterFunctionLibrary
// 0x0000
class UPlayerCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCharacterFunctionLibrary");
		return ptr;
	}



	void GetPlayerCharacterByPlayerId();
	void CountRemotePlayerCharacters();
	void CountLocalPlayerCharacters();
};

// Class Dungeons.PlayerCharacterMovementComponent
// 0x0000
class UPlayerCharacterMovementComponent : public UCharacterMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCharacterMovementComponent");
		return ptr;
	}



	void ServerBeginDodgePrediction();
	void ReplenishGravity();
	void OnDodgeAnimationEndedTimer();
	void OnDodgeAnimationEnded();
	void MulticastOnDodgeBegun();
};

// Class Dungeons.PlayerCharacterSaveSlot
// 0x0000
class APlayerCharacterSaveSlot : public ABaseCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCharacterSaveSlot");
		return ptr;
	}



	void UpdateDateTimeToNow();
	void IsDLCRequired();
	void IsDLCEntitled();
	void GetPlayerAvatarComponent();
	void GetLegendaryStatus();
	void GetItemStashComponent();
	void GetEquipmentComponent();
	void GetDateTime();
	void GetCosmeticsComponent();
	void GetCloudUploadeDateTime();
	void GetCloudPlayerId();
	void ChangeSkinId();
	void ChangeName();
	void ChangeLegendaryStatus();
};

// Class Dungeons.PlayerControllerBaseFunctionLibrary
// 0x0000
class UPlayerControllerBaseFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerControllerBaseFunctionLibrary");
		return ptr;
	}



	void GetMaxControllerIndex();
	void GetFirstDungeonsPlayerController();
	void CountControllers();
};

// Class Dungeons.PlayerCoopCamera
// 0x0000
class APlayerCoopCamera : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerCoopCamera");
		return ptr;
	}



	void UnblockPopping();
	void CanPop();
	void BlockPopping();
};

// Class Dungeons.ChatMapActor
// 0x0000
class AChatMapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ChatMapActor");
		return ptr;
	}



};

// Class Dungeons.PlayerEmoticons
// 0x0000
class UPlayerEmoticons : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerEmoticons");
		return ptr;
	}



};

// Class Dungeons.PlayerExperienceComponent
// 0x0000
class UPlayerExperienceComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerExperienceComponent");
		return ptr;
	}



	void ServerSetXp();
	void OnRep_XpChanged();
	void MulticastOnLevelUp();
	void LevelProgress();
	void CurrentXp();
	void CurrentLevel();
	void ClientRequestXp();
};

// Class Dungeons.PlayerIndicators
// 0x0000
class UPlayerIndicators : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerIndicators");
		return ptr;
	}



};

// Class Dungeons.PlayerPathFollowingComponent
// 0x0000
class UPlayerPathFollowingComponent : public UPathFollowingComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerPathFollowingComponent");
		return ptr;
	}



};

// Class Dungeons.PlayerView
// 0x0000
class APlayerView : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlayerView");
		return ptr;
	}



	void ToggleActive();
	void SpinCharacter();
	void SetPreferredCharacterRotation();
	void SetPlayerCharacterSaveSlot();
	void SetPlayerCharacter();
	void RefreshSlotItemTypeCounts();
	void RefreshSlotCosmeticCounts();
	void ReEquipCape();
	void OnWasDamaged();
	void OnPlayerHealthFractionChanged();
	void OnOtherWasDamaged();
	void OnOtherPlayerHealthFractionChanged();
	void OnItemTypeSlotSelected();
	void OnItemTypeCountChanged();
	void OnGearItemSlotChanged();
	void OnEquippableItemSlotSelected();
	void OnEquippableItemSlotChanged();
	void OnCosmeticSlotUpdated();
	void OnCosmeticSlotItemHighlightChanged();
	void OnCosmeticSlotHighlightChanged();
	void OnCosmeticSlotEquipped();
	void OnCosmeticItemEquipped();
	void OnCosmeticCountChanged();
	void EquipCapeAfterDelay();
	void ApplyMaterialToMesh();
};

// Class Dungeons.PlentifulQuiverInstance
// 0x0000
class APlentifulQuiverInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PlentifulQuiverInstance");
		return ptr;
	}



	void OnSetCanAddArrow();
};

// Class Dungeons.PoisonCloudSpawnHelper
// 0x0000
class UPoisonCloudSpawnHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonCloudSpawnHelper");
		return ptr;
	}



	void SpawnPoisonCloud();
};

// Class Dungeons.PoisonCloud
// 0x0000
class APoisonCloud : public ABaseProjectileProp
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonCloud");
		return ptr;
	}



	void OnDamageDisabled();
	void OnCloudStarted();
};

// Class Dungeons.Poisoned
// 0x0000
class UPoisoned : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Poisoned");
		return ptr;
	}



	void PreCachePoisonClass();
	void MulticastSpawnCloudEffect();
};

// Class Dungeons.PoisonedMelee
// 0x0000
class UPoisonedMelee : public UPoisoned
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonedMelee");
		return ptr;
	}



};

// Class Dungeons.PoisonedRanged
// 0x0000
class UPoisonedRanged : public UPoisoned
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonedRanged");
		return ptr;
	}



};

// Class Dungeons.PoisonCloudDamageGameplayEffect
// 0x0000
class UPoisonCloudDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonCloudDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PoisonRangedCloudDamageGameplayEffect
// 0x0000
class UPoisonRangedCloudDamageGameplayEffect : public UPoisonCloudDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonRangedCloudDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PoisonMeleeCloudDamageGameplayEffect
// 0x0000
class UPoisonMeleeCloudDamageGameplayEffect : public UPoisonCloudDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonMeleeCloudDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PoisonItemCloudDamageGameplayEffect
// 0x0000
class UPoisonItemCloudDamageGameplayEffect : public UPoisonCloudDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PoisonItemCloudDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PostGameWidget
// 0x0000
class UPostGameWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PostGameWidget");
		return ptr;
	}



	void Reset();
	void HasInfoToShow();
	void GetMissionFinishedSummary();
};

// Class Dungeons.PotionCooldownDecreaseGameplayEffect
// 0x0000
class UPotionCooldownDecreaseGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionCooldownDecreaseGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PotionCooldownDecrease
// 0x0000
class UPotionCooldownDecrease : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionCooldownDecrease");
		return ptr;
	}



};

// Class Dungeons.PotionFortificationGameplayEffect
// 0x0000
class UPotionFortificationGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionFortificationGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PotionFortification
// 0x0000
class UPotionFortification : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionFortification");
		return ptr;
	}



	void OnHealthPotionActivated();
};

// Class Dungeons.PotionThirstMelee
// 0x0000
class UPotionThirstMelee : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionThirstMelee");
		return ptr;
	}



};

// Class Dungeons.PotionThirstRanged
// 0x0000
class UPotionThirstRanged : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PotionThirstRanged");
		return ptr;
	}



};

// Class Dungeons.PowerGameplayEffect
// 0x0000
class UPowerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PowerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Power
// 0x0000
class UPower : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Power");
		return ptr;
	}



};

// Class Dungeons.ProgressPowerRarityPricing
// 0x0000
class UProgressPowerRarityPricing : public UMerchantPricingComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProgressPowerRarityPricing");
		return ptr;
	}



};

// Class Dungeons.ProgressStatUtil
// 0x0000
class UProgressStatUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProgressStatUtil");
		return ptr;
	}



	void GetProgressStatText();
	void GetProgressStatExplainerText();
};

// Class Dungeons.ProjectileFunctionLibrary
// 0x0000
class UProjectileFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProjectileFunctionLibrary");
		return ptr;
	}



	void SpawnXPOrbs();
	void SpawnProjectileProp();
	void SpawnOxygenBubble();
	void SpawnHitParticleEffect();
	void SpawnAttachedArrowProp();
	void PreCacheProjectileProp();
	void DeSpawnAttachedArrowProp();
};

// Class Dungeons.ProjectileActorManager
// 0x0000
class AProjectileActorManager : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProjectileActorManager");
		return ptr;
	}



	void OnPoolItemDestroyed();
	void OnHitParticleSystemFinished();
};

// Class Dungeons.ProjectileSpawnComponent
// 0x0000
class UProjectileSpawnComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProjectileSpawnComponent");
		return ptr;
	}



	void SpawnProjectiles();
	void MulticastSpawnProjectiles();
};

// Class Dungeons.PropertyPrimaryDataAsset
// 0x0000
class UPropertyPrimaryDataAsset : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PropertyPrimaryDataAsset");
		return ptr;
	}



};

// Class Dungeons.Prospector
// 0x0000
class UProspector : public UDropIncreasingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Prospector");
		return ptr;
	}



};

// Class Dungeons.ProtectingGameplayEffect
// 0x0000
class UProtectingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ProtectingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Protecting
// 0x0000
class UProtecting : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Protecting");
		return ptr;
	}



};

// Class Dungeons.PufferfishAnimInstance
// 0x0000
class UPufferfishAnimInstance : public UCharacterAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PufferfishAnimInstance");
		return ptr;
	}



};

// Class Dungeons.PunchGameplayEffect
// 0x0000
class UPunchGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PunchGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Punch
// 0x0000
class UPunch : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Punch");
		return ptr;
	}



};

// Class Dungeons.PushVolumeReactiveComponent
// 0x0000
class UPushVolumeReactiveComponent : public UBoxComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PushVolumeReactiveComponent");
		return ptr;
	}



	void NumberOfPushVolumeInfluences();
	void IsBeingEffectedByPushVolumes();
	void GetResistanceIgnoredCumulativePushForce();
	void GetResistanceIgnoredCumulativePushDirection();
	void GetCumulativePushForce();
	void GetCumulativePushDirection();
	void CanVolumeInstanceBeAppliedToActor();
};

// Class Dungeons.PushVolumeImmunityGameplayEffect
// 0x0000
class UPushVolumeImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PushVolumeImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CurrentImmunityGameplayEffect
// 0x0000
class UCurrentImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrentImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.CurrentResistanceGameplayEffect
// 0x0000
class UCurrentResistanceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrentResistanceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.PushVolumeImmunity
// 0x0000
class UPushVolumeImmunity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.PushVolumeImmunity");
		return ptr;
	}



};

// Class Dungeons.WindImmunity
// 0x0000
class UWindImmunity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindImmunity");
		return ptr;
	}



};

// Class Dungeons.WindResistance
// 0x0000
class UWindResistance : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindResistance");
		return ptr;
	}



};

// Class Dungeons.CurrentImmunity
// 0x0000
class UCurrentImmunity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrentImmunity");
		return ptr;
	}



};

// Class Dungeons.CurrentResistance
// 0x0000
class UCurrentResistance : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CurrentResistance");
		return ptr;
	}



};

// Class Dungeons.QuestGiverMerchant
// 0x0000
class AQuestGiverMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.QuestGiverMerchant");
		return ptr;
	}



};

// Class Dungeons.QuickGameplayEffect
// 0x0000
class UQuickGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.QuickGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Quick
// 0x0000
class UQuick : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Quick");
		return ptr;
	}



};

// Class Dungeons.RadianceGameplayEffect
// 0x0000
class URadianceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RadianceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RadianceRangedGameplayEffect
// 0x0000
class URadianceRangedGameplayEffect : public URadianceGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RadianceRangedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RadianceMeleeGameplayEffect
// 0x0000
class URadianceMeleeGameplayEffect : public URadianceGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RadianceMeleeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealArea
// 0x0000
class AHealArea : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealArea");
		return ptr;
	}



};

// Class Dungeons.Radiance
// 0x0000
class URadiance : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Radiance");
		return ptr;
	}



};

// Class Dungeons.RadianceMelee
// 0x0000
class URadianceMelee : public URadiance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RadianceMelee");
		return ptr;
	}



};

// Class Dungeons.RadianceRanged
// 0x0000
class URadianceRanged : public URadiance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RadianceRanged");
		return ptr;
	}



};

// Class Dungeons.RagdollOnDeathComponent
// 0x0000
class URagdollOnDeathComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RagdollOnDeathComponent");
		return ptr;
	}



	void UnRagdoll();
	void LaunchOrStoreRagdollImpulse();
	void ApplyPhysicsBlendWithRadialImpulse();
};

// Class Dungeons.RaidCaptainItemDropComponent
// 0x0000
class URaidCaptainItemDropComponent : public UItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RaidCaptainItemDropComponent");
		return ptr;
	}



};

// Class Dungeons.RampagingGameplayEffect
// 0x0000
class URampagingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RampagingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Rampaging
// 0x0000
class URampaging : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Rampaging");
		return ptr;
	}



};

// Class Dungeons.RandomMaterialComponent
// 0x0000
class URandomMaterialComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RandomMaterialComponent");
		return ptr;
	}



};

// Class Dungeons.RandomMobSummonItem
// 0x0000
class ARandomMobSummonItem : public AMobSummonItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RandomMobSummonItem");
		return ptr;
	}



};

// Class Dungeons.RangedAttributeSet
// 0x0000
class URangedAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedAttributeSet");
		return ptr;
	}



	void OnRep_RangedHealItemPowerFactor();
	void OnRep_RangedAttackSpeedMultiplier();
	void OnRep_RangedAttackPushbackMultiplier();
	void OnRep_RangedAttackLifeStealAmount();
	void OnRep_RangedAttackItemPowerFactor();
	void OnRep_RangedAttackHitChanceMultiplier();
	void OnRep_RangedAttackDamageMultipler();
	void OnRep_RangedAttackDamageIncrease();
};

// Class Dungeons.RangedDamageBoostGameplayEffect
// 0x0000
class URangedDamageBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedDamageBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RangedDamageBoost
// 0x0000
class URangedDamageBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedDamageBoost");
		return ptr;
	}



};

// Class Dungeons.RangedSlotActorAnimNotifyState
// 0x0000
class URangedSlotActorAnimNotifyState : public UEquipmentSlotActorAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedSlotActorAnimNotifyState");
		return ptr;
	}



};

// Class Dungeons.RangedWeaponGearItemInstance
// 0x0000
class ARangedWeaponGearItemInstance : public AGearItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RangedWeaponGearItemInstance");
		return ptr;
	}



	void GetRangedWeaponType();
	void GetAnimNotifyStateSound();
};

// Class Dungeons.RapidFireGameplayEffect
// 0x0000
class URapidFireGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RapidFireGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RapidFire
// 0x0000
class URapidFire : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RapidFire");
		return ptr;
	}



};

// Class Dungeons.ReactsToHitFlash
// 0x0000
class UReactsToHitFlash : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReactsToHitFlash");
		return ptr;
	}



};

// Class Dungeons.ReactsToHurt
// 0x0000
class UReactsToHurt : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReactsToHurt");
		return ptr;
	}



	void ReactToHurt();
};

// Class Dungeons.RealmDefs
// 0x0000
class URealmDefs : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RealmDefs");
		return ptr;
	}



	void IsRealmLocked();
	void GetRealmTravelText();
	void GetRealmNameText();
	void GetRealmLockedTravelText();
	void GetRealmLockedDescriptionText();
	void GetEnabledRealmNames();
};

// Class Dungeons.RecklessGameplayEffect
// 0x0000
class URecklessGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RecklessGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Reckless
// 0x0000
class UReckless : public UEffectApplyingEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Reckless");
		return ptr;
	}



};

// Class Dungeons.ReconnectComponent
// 0x0000
class UReconnectComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReconnectComponent");
		return ptr;
	}



	void Reconnect();
	void OnSaveStateLoaded();
	void IsCrossplaySession();
	void ClearReconnect();
	void CanReconnect();
};

// Class Dungeons.Recycler
// 0x0000
class URecycler : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Recycler");
		return ptr;
	}



};

// Class Dungeons.RecyclerQuiverInstance
// 0x0000
class ARecyclerQuiverInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RecyclerQuiverInstance");
		return ptr;
	}



	void OnSetAddArrow();
};

// Class Dungeons.RefreshSuppliesComponent
// 0x0000
class URefreshSuppliesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RefreshSuppliesComponent");
		return ptr;
	}



	void OnRep_UsedByChanged();
};

// Class Dungeons.RegenerationGameplayEffect
// 0x0000
class URegenerationGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RegenerationGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.HealthPerSecondCalculation
// 0x0000
class UHealthPerSecondCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.HealthPerSecondCalculation");
		return ptr;
	}



};

// Class Dungeons.Regeneration
// 0x0000
class URegeneration : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Regeneration");
		return ptr;
	}



};

// Class Dungeons.Ricochet
// 0x0000
class URicochet : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Ricochet");
		return ptr;
	}



	void MulticastRetargetArrow();
};

// Class Dungeons.ReliableRicochet
// 0x0000
class UReliableRicochet : public URicochet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReliableRicochet");
		return ptr;
	}



};

// Class Dungeons.RelocateComponent
// 0x0000
class URelocateComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RelocateComponent");
		return ptr;
	}



};

// Class Dungeons.ReplicatedInteractableComponent
// 0x0000
class UReplicatedInteractableComponent : public UInteractableComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReplicatedInteractableComponent");
		return ptr;
	}



	void ServerMakeNonActive();
	void OnRep_IsActivated();
	void OnRep_ActivatableInitialized();
	void MulicastOnFail();
};

// Class Dungeons.ReplicatedInteractInParentComponent
// 0x0000
class UReplicatedInteractInParentComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReplicatedInteractInParentComponent");
		return ptr;
	}



	void InteractInParentActor();
};

// Class Dungeons.ReplicatedRandomSeedComponent
// 0x0000
class UReplicatedRandomSeedComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReplicatedRandomSeedComponent");
		return ptr;
	}



	void OnRep_Seed();
};

// Class Dungeons.ReplicateLongDistanceComponent
// 0x0000
class UReplicateLongDistanceComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReplicateLongDistanceComponent");
		return ptr;
	}



};

// Class Dungeons.ReserveItem
// 0x0000
class UReserveItem : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReserveItem");
		return ptr;
	}



};

// Class Dungeons.ResistanceAttributeSet
// 0x0000
class UResistanceAttributeSet : public UAttributeSet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ResistanceAttributeSet");
		return ptr;
	}



	void OnRep_WindResistanceMagnitude();
	void OnRep_SlowResistanceMagnitude();
	void OnRep_PushbackZClampMagnitude();
	void OnRep_PushbackResistanceMagnitude();
	void OnRep_EnvironmentalProtectionMagnitude();
	void OnRep_CurrentResistanceMagnitude();
};

// Class Dungeons.ResistanceModCalculation
// 0x0000
class UResistanceModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ResistanceModCalculation");
		return ptr;
	}



};

// Class Dungeons.SlowResistanceModCalculation
// 0x0000
class USlowResistanceModCalculation : public UResistanceModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowResistanceModCalculation");
		return ptr;
	}



};

// Class Dungeons.SlowMultiplicativeResistanceModCalculation
// 0x0000
class USlowMultiplicativeResistanceModCalculation : public USlowResistanceModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowMultiplicativeResistanceModCalculation");
		return ptr;
	}



};

// Class Dungeons.EnvironmentalProtectionModCalculation
// 0x0000
class UEnvironmentalProtectionModCalculation : public UWorldDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnvironmentalProtectionModCalculation");
		return ptr;
	}



};

// Class Dungeons.RespawnAsTeamUsingLivesComponent
// 0x0000
class URespawnAsTeamUsingLivesComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RespawnAsTeamUsingLivesComponent");
		return ptr;
	}



	void OnAffectorsChanged();
};

// Class Dungeons.RespawnExecutionCalculation
// 0x0000
class URespawnExecutionCalculation : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RespawnExecutionCalculation");
		return ptr;
	}



};

// Class Dungeons.RespawnFreelyComponent
// 0x0000
class URespawnFreelyComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RespawnFreelyComponent");
		return ptr;
	}



};

// Class Dungeons.RestockCountQuest
// 0x0000
class URestockCountQuest : public UMerchantCountQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RestockCountQuest");
		return ptr;
	}



};

// Class Dungeons.RestockSlots
// 0x0000
class URestockSlots : public UMerchantTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RestockSlots");
		return ptr;
	}



};

// Class Dungeons.ResurrectionSurgeGameplayEffect
// 0x0000
class UResurrectionSurgeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ResurrectionSurgeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ResurrectionSurge
// 0x0000
class UResurrectionSurge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ResurrectionSurge");
		return ptr;
	}



};

// Class Dungeons.ResurrectSurroundingMobs
// 0x0000
class UResurrectSurroundingMobs : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ResurrectSurroundingMobs");
		return ptr;
	}



	void OnAreaOverlapEnd();
	void OnAreaOverlapBegin();
};

// Class Dungeons.ReusedEffectActor
// 0x0000
class AReusedEffectActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReusedEffectActor");
		return ptr;
	}



	void OnEffectReset();
};

// Class Dungeons.ReviveFriendGameplayEffect
// 0x0000
class UReviveFriendGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReviveFriendGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ReviveComponent
// 0x0000
class UReviveComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReviveComponent");
		return ptr;
	}



	void ServerStartRevive();
	void ServerCancelRevive();
	void getProgress();
	void ClientEndRevive();
};

// Class Dungeons.RewardDataFunctionLibrary
// 0x0000
class URewardDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RewardDataFunctionLibrary");
		return ptr;
	}



	void GetInventoryItemDataFromRewardData();
};

// Class Dungeons.RollChargeGameplayEffect
// 0x0000
class URollChargeGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RollChargeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.RollCharge
// 0x0000
class URollCharge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RollCharge");
		return ptr;
	}



};

// Class Dungeons.RollingDropComponent
// 0x0000
class URollingDropComponent : public UItemDropComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RollingDropComponent");
		return ptr;
	}



};

// Class Dungeons.RushdownGameplayEffect
// 0x0000
class URushdownGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RushdownGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Rushdown
// 0x0000
class URushdown : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Rushdown");
		return ptr;
	}



};

// Class Dungeons.StorableDropBaseItemInstance
// 0x0000
class AStorableDropBaseItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StorableDropBaseItemInstance");
		return ptr;
	}



};

// Class Dungeons.SatchelOfNeedInstance
// 0x0000
class ASatchelOfNeedInstance : public AStorableDropBaseItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SatchelOfNeedInstance");
		return ptr;
	}



};

// Class Dungeons.SatchelOfNourishmentInstance
// 0x0000
class ASatchelOfNourishmentInstance : public AStorableDropBaseItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SatchelOfNourishmentInstance");
		return ptr;
	}



};

// Class Dungeons.SatchelOfTheElementsInstance
// 0x0000
class ASatchelOfTheElementsInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SatchelOfTheElementsInstance");
		return ptr;
	}



};

// Class Dungeons.TargetingStrikeDamageItemGameplayEffect
// 0x0000
class UTargetingStrikeDamageItemGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TargetingStrikeDamageItemGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SatchelOfTheElementsLightningStrikeGameplayEffect
// 0x0000
class USatchelOfTheElementsLightningStrikeGameplayEffect : public UTargetingStrikeDamageItemGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SatchelOfTheElementsLightningStrikeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SatchelOfTheElementsBurningGameplayEffect
// 0x0000
class USatchelOfTheElementsBurningGameplayEffect : public UFireAspectGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SatchelOfTheElementsBurningGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SaveSpinnerInterface
// 0x0000
class USaveSpinnerInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SaveSpinnerInterface");
		return ptr;
	}



	void GetIsSpinnerVisible();
};

// Class Dungeons.ScreenFader
// 0x0000
class AScreenFader : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ScreenFader");
		return ptr;
	}



	void OnCompletedFade();
};

// Class Dungeons.SecretComponent
// 0x0000
class USecretComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SecretComponent");
		return ptr;
	}



	void SecretFound();
	void ExecuteSecretFound();
};

// Class Dungeons.SelectInventorySlot
// 0x0000
class USelectInventorySlot : public UMerchantSelectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlot");
		return ptr;
	}



	void SelectInventorySlot();
	void PollHasSelectablesChanged();
	void GetUISlotTypeIcon();
	void GetSelectableInventorySlots();
	void GetInventorySlot();
};

// Class Dungeons.SelectInventorySlotItem
// 0x0000
class USelectInventorySlotItem : public USelectInventorySlot
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlotItem");
		return ptr;
	}



};

// Class Dungeons.SelectInventorySlotItemArmor
// 0x0000
class USelectInventorySlotItemArmor : public USelectInventorySlotItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlotItemArmor");
		return ptr;
	}



};

// Class Dungeons.SelectInventorySlotItemArtifact
// 0x0000
class USelectInventorySlotItemArtifact : public USelectInventorySlotItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlotItemArtifact");
		return ptr;
	}



};

// Class Dungeons.SelectInventorySlotItemMelee
// 0x0000
class USelectInventorySlotItemMelee : public USelectInventorySlotItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlotItemMelee");
		return ptr;
	}



};

// Class Dungeons.SelectInventorySlotItemRanged
// 0x0000
class USelectInventorySlotItemRanged : public USelectInventorySlotItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectInventorySlotItemRanged");
		return ptr;
	}



};

// Class Dungeons.SelectionChain
// 0x0000
class USelectionChain : public UMerchantSubobjectBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectionChain");
		return ptr;
	}



	void NavigatePrevious();
	void NavigateNext();
	void GetSelectionClass();
	void CanNavigatePrevious();
	void CanNavigateNext();
};

// Class Dungeons.SelectMerchantSlot
// 0x0000
class USelectMerchantSlot : public UMerchantSelectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectMerchantSlot");
		return ptr;
	}



	void SelectMerchantSlot();
	void GetSelectableMerchantSlots();
	void GetMerchantSlot();
};

// Class Dungeons.SelectPlayerCharacter
// 0x0000
class USelectPlayerCharacter : public UMerchantSelectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectPlayerCharacter");
		return ptr;
	}



	void SelectPlayerCharacter();
	void GetSelectablePlayerCharacters();
	void GetPlayerCharacter();
};

// Class Dungeons.SelectOtherPlayerCharacter
// 0x0000
class USelectOtherPlayerCharacter : public USelectPlayerCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SelectOtherPlayerCharacter");
		return ptr;
	}



};

// Class Dungeons.ServerTimeSmoothingComponent
// 0x0000
class UServerTimeSmoothingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ServerTimeSmoothingComponent");
		return ptr;
	}



	void GetSmoothedServerTimeSeconds();
};

// Class Dungeons.DungeonsSessionDisplayEntity
// 0x0000
class UDungeonsSessionDisplayEntity : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.DungeonsSessionDisplayEntity");
		return ptr;
	}



	void getThreatLevel();
	void GetServerName();
	void GetPlayerName();
	void GetPingInMs();
	void GetMaxPlayers();
	void GetMapName();
	void getDifficulty();
	void GetCurrentPlayers();
};

// Class Dungeons.SettingsBlueprintFunctionLibrary
// 0x0000
class USettingsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SettingsBlueprintFunctionLibrary");
		return ptr;
	}



	void SetXblActive();
	void SetSettingByNameInt64();
	void SetSettingByName();
	void SetSeenNews();
	void SetSeenMapNews();
	void SetIntByName();
	void SaveGame();
	void LoadGame();
	void IsSignedInToXBL();
	void HasSeenNews();
	void HasSeenMapNews();
	void GetXblActive();
	void GetTrackedStatByName();
	void GetSettingFromSaveInt64();
	void GetSettingFromSave();
	void GetIsAccountLinked();
	void GetIntByName();
	void GetCrossplay();
};

// Class Dungeons.SharpnessGameplayEffect
// 0x0000
class USharpnessGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SharpnessGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Sharpness
// 0x0000
class USharpness : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Sharpness");
		return ptr;
	}



};

// Class Dungeons.ShieldingGameplayEffect
// 0x0000
class UShieldingGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShieldingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Shielding
// 0x0000
class UShielding : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Shielding");
		return ptr;
	}



};

// Class Dungeons.ShockPowderInstance
// 0x0000
class AShockPowderInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockPowderInstance");
		return ptr;
	}



};

// Class Dungeons.ShockWaveProjectile
// 0x0000
class AShockWaveProjectile : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockWaveProjectile");
		return ptr;
	}



};

// Class Dungeons.Shockwave
// 0x0000
class UShockwave : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Shockwave");
		return ptr;
	}



	void MulticastSpawnShockwave();
};

// Class Dungeons.ShockwaveDamageGameplayEffect
// 0x0000
class UShockwaveDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockwaveDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ShockWebGameplayEffect
// 0x0000
class UShockWebGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockWebGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ShockWebNodeActor
// 0x0000
class AShockWebNodeActor : public AContinousDamageActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockWebNodeActor");
		return ptr;
	}



	void OnWillDestroy();
	void OnRep_Target();
	void OnRep_IsFading();
	void OnRep_IsActive();
	void OnDetached();
	void OnBeamEnabled();
	void OnBeamDisabled();
};

// Class Dungeons.ShockWeb
// 0x0000
class UShockWeb : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShockWeb");
		return ptr;
	}



};

// Class Dungeons.ShopperComponent
// 0x0000
class UShopperComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ShopperComponent");
		return ptr;
	}



	void OnShowWidget();
	void CreateWidgetOfClass();
};

// Class Dungeons.SimpleMovementComponent
// 0x0000
class USimpleMovementComponent : public UMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SimpleMovementComponent");
		return ptr;
	}



	void StopSimulating();
	void SetRotationSpeed();
	void OnRep_ServerPosition();
	void OnProjectileStopDelegate__DelegateSignature();
	void IsComponentMoving();
};

// Class Dungeons.SimplePlayerDistanceCheckPropActor
// 0x0000
class ASimplePlayerDistanceCheckPropActor : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SimplePlayerDistanceCheckPropActor");
		return ptr;
	}



	void PlayersInRangeChangedEvent();
};

// Class Dungeons.SineFlickerComponent
// 0x0000
class USineFlickerComponent : public UFlickeringLightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SineFlickerComponent");
		return ptr;
	}



};

// Class Dungeons.SkinDef
// 0x0000
class USkinDef : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SkinDef");
		return ptr;
	}



	void ShouldConsiderForDefault();
	void GetSkinId();
	void GetPortraitMaterialSoftObject();
	void GetPortraitMaterial();
	void GetOrder();
	void GetEntitlementName();
	void GetAvatarMaterialSoftObject();
	void GetAvatarMaterial();
};

// Class Dungeons.SkinsLibrary
// 0x0000
class USkinsLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SkinsLibrary");
		return ptr;
	}



};

// Class Dungeons.SkinsUtil
// 0x0000
class USkinsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SkinsUtil");
		return ptr;
	}



	void IsSkinValid();
	void IsSkinEntitled();
	void IsEntitlementRequired();
	void GetSkinPortraitMaterialSoft();
	void GetSkinPortraitMaterialInstance();
	void GetSkinIds();
	void GetSkinAvatarMaterialSoft();
	void GetSkinAvatarMaterialInstance();
	void GetPlayerColor();
	void GetDefaultSkinIds();
};

// Class Dungeons.SlippyBlockTrigger
// 0x0000
class USlippyBlockTrigger : public UBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlippyBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.FrozenFjordSlippyBlockTrigger
// 0x0000
class UFrozenFjordSlippyBlockTrigger : public USlippyBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.FrozenFjordSlippyBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.LonelyFortressSlippyBlockTrigger
// 0x0000
class ULonelyFortressSlippyBlockTrigger : public USlippyBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LonelyFortressSlippyBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.LostSettlementSlippyBlockTrigger
// 0x0000
class ULostSettlementSlippyBlockTrigger : public USlippyBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LostSettlementSlippyBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.WindsweptPeaksSlippyBlockTrigger
// 0x0000
class UWindsweptPeaksSlippyBlockTrigger : public USlippyBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindsweptPeaksSlippyBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.SlotActorManager
// 0x0000
class USlotActorManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlotActorManager");
		return ptr;
	}



};

// Class Dungeons.SlowBowEnchantment
// 0x0000
class USlowBowEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowBowEnchantment");
		return ptr;
	}



};

// Class Dungeons.SlowImmunityGameplayEffect
// 0x0000
class USlowImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SlowImmunity
// 0x0000
class USlowImmunity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowImmunity");
		return ptr;
	}



};

// Class Dungeons.SlowResistanceGameplayEffect
// 0x0000
class USlowResistanceGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowResistanceGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SlowResistance
// 0x0000
class USlowResistance : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SlowResistance");
		return ptr;
	}



};

// Class Dungeons.EnchantmentSlowResistance
// 0x0000
class UEnchantmentSlowResistance : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnchantmentSlowResistance");
		return ptr;
	}



};

// Class Dungeons.Smiting
// 0x0000
class USmiting : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Smiting");
		return ptr;
	}



};

// Class Dungeons.SnowBall
// 0x0000
class ASnowBall : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SnowBall");
		return ptr;
	}



	void OnOverlapBegin();
};

// Class Dungeons.SnowBallThrower
// 0x0000
class ASnowBallThrower : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SnowBallThrower");
		return ptr;
	}



};

// Class Dungeons.Snowing
// 0x0000
class USnowing : public UIntervalExecutionEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Snowing");
		return ptr;
	}



};

// Class Dungeons.Soul
// 0x0000
class ASoul : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Soul");
		return ptr;
	}



	void OnStopSoul();
	void OnShouldAbsorb();
	void OnLaunchSoul();
};

// Class Dungeons.AddSoulModCalculation
// 0x0000
class UAddSoulModCalculation : public UGameplayModMagnitudeCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.AddSoulModCalculation");
		return ptr;
	}



};

// Class Dungeons.GenerateSoulsGameplayEffect
// 0x0000
class UGenerateSoulsGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.GenerateSoulsGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ModifySoulsGameplayEffect
// 0x0000
class UModifySoulsGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ModifySoulsGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulComponent
// 0x0000
class USoulComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulComponent");
		return ptr;
	}



	void ServerAddSouls();
	void OnAnyPlayerKilledMob();
	void IsCollecting();
	void GetSoulPercentage();
	void GetSoulCount();
	void GetMaxSoulCount();
	void ClientSpawnSoul();
};

// Class Dungeons.SoulGatheringBoostGameplayEffect
// 0x0000
class USoulGatheringBoostGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulGatheringBoostGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulGatheringBoost
// 0x0000
class USoulGatheringBoost : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulGatheringBoost");
		return ptr;
	}



};

// Class Dungeons.SoulGatheringGameplayEffect
// 0x0000
class USoulGatheringGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulGatheringGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulHealGameplayEffect
// 0x0000
class USoulHealGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulHealGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulHealer
// 0x0000
class ASoulHealer : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulHealer");
		return ptr;
	}



	void MulticastSpawnSoul();
};

// Class Dungeons.SoulLanterenTeleportGameplayEffect
// 0x0000
class USoulLanterenTeleportGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulLanterenTeleportGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SoulLanternInstance
// 0x0000
class ASoulLanternInstance : public AMobSummonItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulLanternInstance");
		return ptr;
	}



};

// Class Dungeons.SoulSiphon
// 0x0000
class USoulSiphon : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoulSiphon");
		return ptr;
	}



};

// Class Dungeons.SoundMixManager
// 0x0000
class USoundMixManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SoundMixManager");
		return ptr;
	}



	void PushSoundMix();
	void PushReverb();
	void PopSoundMix();
	void PopReverb();
	void PopAllSoundMixes();
	void GetReverbAt();
	void EnableSoundMixes();
	void DisableSoundMixes();
};

// Class Dungeons.SpawnActorIntervalComponent
// 0x0000
class USpawnActorIntervalComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpawnActorIntervalComponent");
		return ptr;
	}



	void SetInstigator();
};

// Class Dungeons.SpeedSynergyGameplayEffect
// 0x0000
class USpeedSynergyGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpeedSynergyGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpeedSynergy
// 0x0000
class USpeedSynergy : public USynergy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpeedSynergy");
		return ptr;
	}



};

// Class Dungeons.SpinWheelGameplayEffect
// 0x0000
class USpinWheelGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpinWheelGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpinWheelActor
// 0x0000
class ASpinWheelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpinWheelActor");
		return ptr;
	}



	void OnReturnedToPlayer();
	void OnOverlapBegin();
};

// Class Dungeons.SpinWheelInstance
// 0x0000
class ASpinWheelInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpinWheelInstance");
		return ptr;
	}



	void ServerSpawnWheel();
	void MulticastSpawnWheel();
};

// Class Dungeons.SpiritSpeedGameplayEffect
// 0x0000
class USpiritSpeedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpiritSpeedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpiritSpeed
// 0x0000
class USpiritSpeed : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpiritSpeed");
		return ptr;
	}



	void OnGatheredSoul();
};

// Class Dungeons.SplashSlowingPotionInstance
// 0x0000
class ASplashSlowingPotionInstance : public AThrowableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SplashSlowingPotionInstance");
		return ptr;
	}



};

// Class Dungeons.SPlashSlowingPotionGameplayEffect
// 0x0000
class USPlashSlowingPotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SPlashSlowingPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SplashSlowingPotion
// 0x0000
class ASplashSlowingPotion : public AThrownItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SplashSlowingPotion");
		return ptr;
	}



};

// Class Dungeons.SplitComponent
// 0x0000
class USplitComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SplitComponent");
		return ptr;
	}



};

// Class Dungeons.SpongeStrikeDamageGameplayEffect
// 0x0000
class USpongeStrikeDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpongeStrikeDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpongeStrike
// 0x0000
class USpongeStrike : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpongeStrike");
		return ptr;
	}



};

// Class Dungeons.SquidRollQuick
// 0x0000
class USquidRollQuick : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SquidRollQuick");
		return ptr;
	}



	void OnCloudDestroyed();
};

// Class Dungeons.SquidRollLimited
// 0x0000
class USquidRollLimited : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SquidRollLimited");
		return ptr;
	}



	void OnCloudDestroyed();
};

// Class Dungeons.StaggerComponent
// 0x0000
class UStaggerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StaggerComponent");
		return ptr;
	}



};

// Class Dungeons.StaggerGameplayEffect
// 0x0000
class UStaggerGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StaggerGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EnduranceRecoveryGameplayEffect
// 0x0000
class UEnduranceRecoveryGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EnduranceRecoveryGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.StunImmunityGameplayEffect
// 0x0000
class UStunImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StunImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TemporaryStunimmunityGameplayEffect
// 0x0000
class UTemporaryStunimmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TemporaryStunimmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.StartMissionStatusUtil
// 0x0000
class UStartMissionStatusUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StartMissionStatusUtil");
		return ptr;
	}



	void IsStartable();
	void HasSuccess();
	void HasProblem();
	void GetSuccess();
	void GetProblem();
};

// Class Dungeons.StaticMeshCollection
// 0x0000
class AStaticMeshCollection : public AInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StaticMeshCollection");
		return ptr;
	}



};

// Class Dungeons.StatTrackerComponent
// 0x0000
class UStatTrackerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StatTrackerComponent");
		return ptr;
	}



	void OnGameOver();
};

// Class Dungeons.StatTrackerQuest
// 0x0000
class UStatTrackerQuest : public UMerchantCountQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StatTrackerQuest");
		return ptr;
	}



};

// Class Dungeons.StreamingLayoutTrigger
// 0x0000
class AStreamingLayoutTrigger : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StreamingLayoutTrigger");
		return ptr;
	}



	void ShowTouchControl();
	void OnOverlapBegin();
	void HideTouchControl();
};

// Class Dungeons.StrengthPotionGameplayEffect
// 0x0000
class UStrengthPotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StrengthPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.StrengthPotionInstance
// 0x0000
class AStrengthPotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.StrengthPotionInstance");
		return ptr;
	}



};

// Class Dungeons.Stunning
// 0x0000
class UStunning : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Stunning");
		return ptr;
	}



};

// Class Dungeons.SubtitleOverlayWidget
// 0x0000
class USubtitleOverlayWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SubtitleOverlayWidget");
		return ptr;
	}



	void OnSubtitlesText();
};

// Class Dungeons.SuddenDeath
// 0x0000
class ASuddenDeath : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SuddenDeath");
		return ptr;
	}



	void IsSuddenDeathCountingDown();
	void IsSuddenDeathActive();
	void GetTimeSecondsUntilSuddenDeath();
};

// Class Dungeons.SuddenDeathDamageGameplayEffect
// 0x0000
class USuddenDeathDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SuddenDeathDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SuddenDeathOceansDamageGameplayEffect
// 0x0000
class USuddenDeathOceansDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SuddenDeathOceansDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SummonedMobGameplayEffect
// 0x0000
class USummonedMobGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SummonedMobGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SuperbDamageAbsorptionGameplayEffect
// 0x0000
class USuperbDamageAbsorptionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SuperbDamageAbsorptionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SuperbDamageAbsorption
// 0x0000
class USuperbDamageAbsorption : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SuperbDamageAbsorption");
		return ptr;
	}



};

// Class Dungeons.Supercharge
// 0x0000
class USupercharge : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Supercharge");
		return ptr;
	}



};

// Class Dungeons.SurpriseGift
// 0x0000
class USurpriseGift : public UStorableDropBaseEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SurpriseGift");
		return ptr;
	}



};

// Class Dungeons.SwiftfootedGameplayEffect
// 0x0000
class USwiftfootedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SwiftfootedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Swiftfooted
// 0x0000
class USwiftfooted : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Swiftfooted");
		return ptr;
	}



};

// Class Dungeons.SwiftnessPotionGameplayEffect
// 0x0000
class USwiftnessPotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SwiftnessPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SwiftnessPotionInstance
// 0x0000
class ASwiftnessPotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SwiftnessPotionInstance");
		return ptr;
	}



};

// Class Dungeons.Swirling
// 0x0000
class USwirling : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Swirling");
		return ptr;
	}



};

// Class Dungeons.SwirlingDamageGameplayEffect
// 0x0000
class USwirlingDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SwirlingDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TargetingActor
// 0x0000
class ATargetingActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TargetingActor");
		return ptr;
	}



	void TargetSelected();
	void TargetingCanceled();
};

// Class Dungeons.TargetingStrikeItemGameplayEffect
// 0x0000
class UTargetingStrikeItemGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TargetingStrikeItemGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.LightingRodReticule
// 0x0000
class ALightingRodReticule : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.LightingRodReticule");
		return ptr;
	}



	void OnCharged();
};

// Class Dungeons.TargetingStrikeItem
// 0x0000
class ATargetingStrikeItem : public ATogglableItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TargetingStrikeItem");
		return ptr;
	}



	void ServerStartStrike();
};

// Class Dungeons.TelemetryEventComponent
// 0x0000
class UTelemetryEventComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TelemetryEventComponent");
		return ptr;
	}



	void ClientLogTelemetryEvent();
};

// Class Dungeons.TelemetryUploadWidget
// 0x0000
class UTelemetryUploadWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TelemetryUploadWidget");
		return ptr;
	}



	void LogGameSessionUserGrade();
};

// Class Dungeons.TeleportChance
// 0x0000
class UTeleportChance : public UArmorProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TeleportChance");
		return ptr;
	}



};

// Class Dungeons.TeleportComponent
// 0x0000
class UTeleportComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TeleportComponent");
		return ptr;
	}



	void Server_TeleportToFriend();
	void Server_TeleportToCheckpoint();
	void Server_AbortTeleportTo();
	void OnRep_TeleportState();
	void IsTeleportTarget();
	void GetTeleportDependents();
	void GetTeleportCandidates();
	void GetClosestDownedCandidate();
	void Client_IssueTeleportMovement();
};

// Class Dungeons.TeleportToOwnerComponent
// 0x0000
class UTeleportToOwnerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TeleportToOwnerComponent");
		return ptr;
	}



	void TeleportIfFarAway();
	void OnCharacterDied();
};

// Class Dungeons.TempestGolemComponent
// 0x0000
class UTempestGolemComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TempestGolemComponent");
		return ptr;
	}



	void SetTempestStatus();
	void SetAttackSpeed();
	void SetArmStatus();
	void RemoveDamageReduction();
	void OnTrackingDone();
	void OnRep_TempestStatus();
	void OnRep_TempestShieldArmsStatus();
	void OnRep_TempestRightArmStatus();
	void OnRep_TempestLeftArmStatus();
	void IsTempestActive();
	void IsArmTracking();
	void HandleDamageReceived();
	void GetTempestStatus();
	void GetRightArmWeight();
	void GetLeftArmWeight();
	void GetAttackSpeed();
	void GetArmStatus();
	void DealDamage();
	void CheckTempestStun();
	void CanArmAttack();
	void ArmAttack();
	void ApplyDamageReduction();
};

// Class Dungeons.TemporalUtils
// 0x0000
class UTemporalUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TemporalUtils");
		return ptr;
	}



	void DilateTime();
};

// Class Dungeons.TemporalDilationNormalizer
// 0x0000
class ATemporalDilationNormalizer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TemporalDilationNormalizer");
		return ptr;
	}



	void Unaffect();
	void Affect();
};

// Class Dungeons.TempoTheftBoostEffect
// 0x0000
class UTempoTheftBoostEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TempoTheftBoostEffect");
		return ptr;
	}



};

// Class Dungeons.TempoTheftGameplayEffect
// 0x0000
class UTempoTheftGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TempoTheftGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.SpeedBoostOnOverlapActor
// 0x0000
class ASpeedBoostOnOverlapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.SpeedBoostOnOverlapActor");
		return ptr;
	}



	void OnGrantSpeed();
};

// Class Dungeons.TempoTheft
// 0x0000
class UTempoTheft : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TempoTheft");
		return ptr;
	}



	void MulticastSpawnSoul();
};

// Class Dungeons.TextFormatFunctionLibrary
// 0x0000
class UTextFormatFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TextFormatFunctionLibrary");
		return ptr;
	}



	void TimeSpanAsPaddedCountdownSeconds();
	void DoublePaddedCountdown();
};

// Class Dungeons.TextureCache
// 0x0000
class UTextureCache : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TextureCache");
		return ptr;
	}



};

// Class Dungeons.Thundering
// 0x0000
class UThundering : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Thundering");
		return ptr;
	}



};

// Class Dungeons.ThunderingAoeDamageGameplayEffect
// 0x0000
class UThunderingAoeDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThunderingAoeDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ThunderingAoeRangedDamageGameplayEffect
// 0x0000
class UThunderingAoeRangedDamageGameplayEffect : public UThunderingAoeDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThunderingAoeRangedDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ThunderingQuiver
// 0x0000
class AThunderingQuiver : public AArrowCraftingItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ThunderingQuiver");
		return ptr;
	}



};

// Class Dungeons.TargetingTickStageComponent
// 0x0000
class UTargetingTickStageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TargetingTickStageComponent");
		return ptr;
	}



};

// Class Dungeons.TileQuery
// 0x0000
class UTileQuery : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TileQuery");
		return ptr;
	}



	void GetTileDegreesAtLocation();
	void GetTileDegrees();
	void GetResourcePackAtLocation();
	void GetResourcePack();
	void GetMyTileResourcePack();
	void GetMyTileDegrees();
	void GetMyTileAmbienceGroupName();
};

// Class Dungeons.TimelineFlickerComponent
// 0x0000
class UTimelineFlickerComponent : public UFlickeringLightComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TimelineFlickerComponent");
		return ptr;
	}



};

// Class Dungeons.TitlesBlueprintLibrary
// 0x0000
class UTitlesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TitlesBlueprintLibrary");
		return ptr;
	}



	void GetTitle();
	void GetDescription();
	void GetAllTitles();
};

// Class Dungeons.TitleImageFetcher
// 0x0000
class UTitleImageFetcher : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TitleImageFetcher");
		return ptr;
	}



	void DownloadImageSuccessCallback();
	void DownloadImageFailureCallback();
};

// Class Dungeons.TitleNewsUtil
// 0x0000
class UTitleNewsUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TitleNewsUtil");
		return ptr;
	}



	void getTitleNewsItemAutoNextDelay();
};

// Class Dungeons.TNT_Cart
// 0x0000
class UTNT_Cart : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TNT_Cart");
		return ptr;
	}



	void Explode();
};

// Class Dungeons.TNTBoxInstance
// 0x0000
class ATNTBoxInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TNTBoxInstance");
		return ptr;
	}



};

// Class Dungeons.TNTBoxItem
// 0x0000
class ATNTBoxItem : public AThrowablePropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TNTBoxItem");
		return ptr;
	}



};

// Class Dungeons.TNTBoxDamageGameplayEffect
// 0x0000
class UTNTBoxDamageGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TNTBoxDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TormentProjectile
// 0x0000
class ATormentProjectile : public AArrow
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TormentProjectile");
		return ptr;
	}



	void OnLifetimeThresholdReached();
};

// Class Dungeons.TormentProjectileGameplayEffect
// 0x0000
class UTormentProjectileGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TormentProjectileGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TormentQuiver
// 0x0000
class ATormentQuiver : public AArrowCraftingItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TormentQuiver");
		return ptr;
	}



};

// Class Dungeons.TotemOfRegenerationGameplayEffect
// 0x0000
class UTotemOfRegenerationGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfRegenerationGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TotemOfRegenerationActor
// 0x0000
class ATotemOfRegenerationActor : public ABuffGrantTotemActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfRegenerationActor");
		return ptr;
	}



};

// Class Dungeons.TotemOfRegenerationInstance
// 0x0000
class ATotemOfRegenerationInstance : public ABuffGrantTotemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfRegenerationInstance");
		return ptr;
	}



};

// Class Dungeons.TotemOfShielding
// 0x0000
class ATotemOfShielding : public ATotemBaseActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfShielding");
		return ptr;
	}



	void OnProjectileImpact();
	void OnBeginTorusOverlap();
};

// Class Dungeons.TotemOfShieldingInstance
// 0x0000
class ATotemOfShieldingInstance : public ATotemBaseItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfShieldingInstance");
		return ptr;
	}



};

// Class Dungeons.TotemOfShielding_Unique1DamageGameplayEffect
// 0x0000
class UTotemOfShielding_Unique1DamageGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfShielding_Unique1DamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TotemOfShieldingActor_Unique1
// 0x0000
class ATotemOfShieldingActor_Unique1 : public ATotemOfShielding
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfShieldingActor_Unique1");
		return ptr;
	}



};

// Class Dungeons.TotemOfShieldingInstance_Unique1
// 0x0000
class ATotemOfShieldingInstance_Unique1 : public ATotemOfShieldingInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfShieldingInstance_Unique1");
		return ptr;
	}



};

// Class Dungeons.TotemOfSpiritProtectionGameplayEffect
// 0x0000
class UTotemOfSpiritProtectionGameplayEffect : public UAreaBuffGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfSpiritProtectionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TotemOfSpiritProtectionReviveGameplayEffect
// 0x0000
class UTotemOfSpiritProtectionReviveGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfSpiritProtectionReviveGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.ReviveOnOverlapActor
// 0x0000
class AReviveOnOverlapActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ReviveOnOverlapActor");
		return ptr;
	}



	void OnRevive();
};

// Class Dungeons.TotemOfSpiritProtectionActor
// 0x0000
class ATotemOfSpiritProtectionActor : public ABuffGrantTotemActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfSpiritProtectionActor");
		return ptr;
	}



	void OnPlayerRevived();
	void OnPlayerDown();
	void MulticastSpawnReviveActor();
};

// Class Dungeons.TotemOfSpiritProtectionInstance
// 0x0000
class ATotemOfSpiritProtectionInstance : public ABuffGrantTotemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TotemOfSpiritProtectionInstance");
		return ptr;
	}



};

// Class Dungeons.ToxicWaterDamageGameplayEffect
// 0x0000
class UToxicWaterDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.ToxicWaterDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TrackingFallingIceActor
// 0x0000
class ATrackingFallingIceActor : public AFallingIceActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TrackingFallingIceActor");
		return ptr;
	}



	void SetTarget();
	void OnTrackingComplete();
};

// Class Dungeons.TrapDamageGameplayEffect
// 0x0000
class UTrapDamageGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TrapDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TrapDamageModCalculation
// 0x0000
class UTrapDamageModCalculation : public UWorldDamageModCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TrapDamageModCalculation");
		return ptr;
	}



};

// Class Dungeons.TridentInstance
// 0x0000
class ATridentInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TridentInstance");
		return ptr;
	}



};

// Class Dungeons.TridentItem
// 0x0000
class ATridentItem : public AThrowablePropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TridentItem");
		return ptr;
	}



	void SetThrowVariablesServer();
	void SetActorRotationServer();
	void OnTridentStoppedMulticast();
	void OnTridentHit();
};

// Class Dungeons.TridentDamageGameplayEffect
// 0x0000
class UTridentDamageGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TridentDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TumbleBee
// 0x0000
class UTumbleBee : public UMobSummonRandomChanceEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TumbleBee");
		return ptr;
	}



};

// Class Dungeons.TurnComponent
// 0x0000
class UTurnComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TurnComponent");
		return ptr;
	}



};

// Class Dungeons.TwistingVineDamageGameplayEffect
// 0x0000
class UTwistingVineDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TwistingVineDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.TwistingVineUniqueDamageGameplayEffect
// 0x0000
class UTwistingVineUniqueDamageGameplayEffect : public UTwistingVineDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.TwistingVineUniqueDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.EffectBasedCooldownProvider
// 0x0000
class UEffectBasedCooldownProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.EffectBasedCooldownProvider");
		return ptr;
	}



	void GetCooldownSecondsRemaining();
	void GetCooldownSecondsDuration();
	void GetCooldownFractionRemaining();
};

// Class Dungeons.CooldownGameplayEffect
// 0x0000
class UCooldownGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.CooldownGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Unchanting
// 0x0000
class UUnchanting : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Unchanting");
		return ptr;
	}



};

// Class Dungeons.UnderwaterImmunityGameplayEffect
// 0x0000
class UUnderwaterImmunityGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnderwaterImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UnderwaterImmunity
// 0x0000
class UUnderwaterImmunity : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnderwaterImmunity");
		return ptr;
	}



};

// Class Dungeons.UnderWaterSubDungeonTriggerBox
// 0x0000
class AUnderWaterSubDungeonTriggerBox : public ATriggerBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnderWaterSubDungeonTriggerBox");
		return ptr;
	}



};

// Class Dungeons.UnlockDifficultyQuest
// 0x0000
class UUnlockDifficultyQuest : public UMerchantQuestBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnlockDifficultyQuest");
		return ptr;
	}



};

// Class Dungeons.UnlockKeyUtils
// 0x0000
class UUnlockKeyUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnlockKeyUtils");
		return ptr;
	}



	void IsUnlocked();
	void GiveUnlockKeyToLocalPlayer();
	void GiveUnlockKeyToAllLocalPlayers();
};

// Class Dungeons.RespawnCandidateComponent
// 0x0000
class URespawnCandidateComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.RespawnCandidateComponent");
		return ptr;
	}



	void SetIsRespawnActive();
	void GetIsRespawnActive();
};

// Class Dungeons.UnreserveItem
// 0x0000
class UUnreserveItem : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UnreserveItem");
		return ptr;
	}



};

// Class Dungeons.BlastGameplayEffect
// 0x0000
class UBlastGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.BlastGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UpdraftGameplayEffect
// 0x0000
class UUpdraftGameplayEffect : public UWorldDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpdraftGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UpdraftImmunityGameplayEffect
// 0x0000
class UUpdraftImmunityGameplayEffect : public UUpdraftGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpdraftImmunityGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UpdraftTomeGameplayEffect
// 0x0000
class UUpdraftTomeGameplayEffect : public UBaseItemDamageGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpdraftTomeGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UpdraftTomeTargetGameplayEffect
// 0x0000
class UUpdraftTomeTargetGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpdraftTomeTargetGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.UpdraftTomeInstance
// 0x0000
class AUpdraftTomeInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpdraftTomeInstance");
		return ptr;
	}



	void ApplyUpdraft();
};

// Class Dungeons.UpgradeCollectItem
// 0x0000
class UUpgradeCollectItem : public UMerchantSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpgradeCollectItem");
		return ptr;
	}



};

// Class Dungeons.UpgradeInsertItem
// 0x0000
class UUpgradeInsertItem : public UInventoryItemSlotTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpgradeInsertItem");
		return ptr;
	}



};

// Class Dungeons.UpgradeItem
// 0x0000
class AUpgradeItem : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpgradeItem");
		return ptr;
	}



};

// Class Dungeons.UpgraderItemSlot
// 0x0000
class UUpgraderItemSlot : public UMerchantItemSlotBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UpgraderItemSlot");
		return ptr;
	}



	void GetCompletedUpgradeQuest();
	void GetActiveUpgradeQuest();
};

// Class Dungeons.UserFeedbackTextLabels
// 0x0000
class UUserFeedbackTextLabels : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.UserFeedbackTextLabels");
		return ptr;
	}



	void GetControllerDisconnectedMessage();
};

// Class Dungeons.VesselTrailDamageGameplayEffect
// 0x0000
class UVesselTrailDamageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VesselTrailDamageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.VesselTrailSpeedGameplayEffect
// 0x0000
class UVesselTrailSpeedGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VesselTrailSpeedGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.VesselBlock
// 0x0000
class AVesselBlock : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VesselBlock");
		return ptr;
	}



	void OnKill();
	void OnComponentEndOverlap();
	void OnComponentBeginOverlap();
};

// Class Dungeons.VesselTrail
// 0x0000
class UVesselTrail : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VesselTrail");
		return ptr;
	}



};

// Class Dungeons.VillageMerchant
// 0x0000
class AVillageMerchant : public AMerchantBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VillageMerchant");
		return ptr;
	}



};

// Class Dungeons.VillagersWhistle
// 0x0000
class AVillagersWhistle : public AMobSummonItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VillagersWhistle");
		return ptr;
	}



};

// Class Dungeons.VirtualKeyboardManager
// 0x0000
class UVirtualKeyboardManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.VirtualKeyboardManager");
		return ptr;
	}



	void ShowVirtualKeyboard();
};

// Class Dungeons.WalkPickupComponent
// 0x0000
class UWalkPickupComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WalkPickupComponent");
		return ptr;
	}



	void ResetPickup();
	void ReplicateState();
	void OnRep_ServerComponentVelocity();
	void OnRep_ServerComponentSpeed();
	void NetSetPhysicsEnabled();
};

// Class Dungeons.WalletComponent
// 0x0000
class UWalletComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WalletComponent");
		return ptr;
	}



	void Deduct();
	void ClientAdd();
	void Balance();
};

// Class Dungeons.WaterBlockTrigger
// 0x0000
class UWaterBlockTrigger : public UBlockTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaterBlockTrigger");
		return ptr;
	}



};

// Class Dungeons.WaterBreathingGameplayEffect
// 0x0000
class UWaterBreathingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaterBreathingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.MobWaterBreathingGameplayEffect
// 0x0000
class UMobWaterBreathingGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.MobWaterBreathingGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WaterBreathingPotionInstance
// 0x0000
class AWaterBreathingPotionInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaterBreathingPotionInstance");
		return ptr;
	}



};

// Class Dungeons.WaterBreathingPotionGameplayEffect
// 0x0000
class UWaterBreathingPotionGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaterBreathingPotionGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WaterGameplayEffect
// 0x0000
class UWaterGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WaterGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WeakenGameplayEffect
// 0x0000
class UWeakenGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WeakenGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.Weakening
// 0x0000
class UWeakening : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.Weakening");
		return ptr;
	}



};

// Class Dungeons.WearableCosmetic
// 0x0000
class AWearableCosmetic : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WearableCosmetic");
		return ptr;
	}



	void OnDetachedComponentCreated();
};

// Class Dungeons.WearableCosmeticInfo
// 0x0000
class AWearableCosmeticInfo : public ACosmeticItemInfo
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WearableCosmeticInfo");
		return ptr;
	}



};

// Class Dungeons.WickedWraithWaypoint
// 0x0000
class AWickedWraithWaypoint : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WickedWraithWaypoint");
		return ptr;
	}



};

// Class Dungeons.WickedWraithVulnerableGameplayEffect
// 0x0000
class UWickedWraithVulnerableGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WickedWraithVulnerableGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WidgetHelper
// 0x0000
class UWidgetHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WidgetHelper");
		return ptr;
	}



	void SetOwnerRecursive();
	void LoadClassAsset_Blocking();
	void IsVisibleRecursive();
	void IsVisible();
	void IsChildVisible();
	void GetUserWidgetBeforeRoot();
	void GetFirstUserWidgetListeningForInputAction();
	void GetFirstUserWidgetDescendentListeningForInputAction();
	void GetFirstParentWidgetWithInterface();
	void GetFirstFocusableUserWidgetDescendent();
	void GetAllVisibleDescendentWidgetsWithInterface();
	void GetAllDescendentWidgetsWithInterface();
	void GetAllDescendentWidgetsOfClass();
};

// Class Dungeons.WildRageGameplayEffect
// 0x0000
class UWildRageGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WildRageGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WildRage
// 0x0000
class UWildRage : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WildRage");
		return ptr;
	}



	void HandleMobKillMob();
};

// Class Dungeons.WindBowGameplayEffect
// 0x0000
class UWindBowGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindBowGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WindBowEnchantment
// 0x0000
class UWindBowEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindBowEnchantment");
		return ptr;
	}



};

// Class Dungeons.WindHornSlowGameplayEffect
// 0x0000
class UWindHornSlowGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindHornSlowGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WindItemInstance
// 0x0000
class AWindItemInstance : public AItemInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindItemInstance");
		return ptr;
	}



};

// Class Dungeons.WindowsStoreEntitlementsRepository
// 0x0000
class UWindowsStoreEntitlementsRepository : public UAPIEntitlementRepositoryParent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindowsStoreEntitlementsRepository");
		return ptr;
	}



};

// Class Dungeons.WindPillar
// 0x0000
class AWindPillar : public AWaveSpawner
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindPillar");
		return ptr;
	}



	void StartRecharge();
	void SetPillarState();
	void SetChargeValue();
	void ResetTimerDelay();
	void RemoveCharacterFromTracking();
	void PillarHasCharge();
	void OnRep_PillarState();
	void OnRep_CurrentCharge();
	void IsPlayerPresent();
	void IsMobPresent();
	void GetPillarState();
	void GetDebugMode();
	void DisablePillar();
	void DepleteCharge();
	void ClearAllTracking();
	void ApplyAreaPushback();
	void AddCharacterToTracking();
	void ActivatePillar();
};

// Class Dungeons.WindPipeBase
// 0x0000
class AWindPipeBase : public APropActor_RepAlways
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WindPipeBase");
		return ptr;
	}



	void SetRotatationDirecition();
	void SetAngleSpan();
	void Rotate();
	void OnRep_ReplicatedAngle();
	void OnAngleChanged();
	void GetAngle();
};

// Class Dungeons.WithdrawItem
// 0x0000
class UWithdrawItem : public USelectedInventoryItemTransactionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WithdrawItem");
		return ptr;
	}



};

// Class Dungeons.WitherEnchantment
// 0x0000
class UWitherEnchantment : public UEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherEnchantment");
		return ptr;
	}



};

// Class Dungeons.WitherEnchantmentMelee
// 0x0000
class UWitherEnchantmentMelee : public UWitherEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherEnchantmentMelee");
		return ptr;
	}



};

// Class Dungeons.WitherEnchantmentRanged
// 0x0000
class UWitherEnchantmentRanged : public UWitherEnchantment
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherEnchantmentRanged");
		return ptr;
	}



};

// Class Dungeons.WitherApplierExecutionCalculation
// 0x0000
class UWitherApplierExecutionCalculation : public UGameplayEffectExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherApplierExecutionCalculation");
		return ptr;
	}



};

// Class Dungeons.WitherDamageExecutionCalculation
// 0x0000
class UWitherDamageExecutionCalculation : public UDamageExecutionCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherDamageExecutionCalculation");
		return ptr;
	}



};

// Class Dungeons.WitherApplierGameplayEffect
// 0x0000
class UWitherApplierGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherApplierGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WitherGameplayEffect
// 0x0000
class UWitherGameplayEffect : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherGameplayEffect");
		return ptr;
	}



};

// Class Dungeons.WitherPoisonVisualizationComponent
// 0x0000
class UWitherPoisonVisualizationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WitherPoisonVisualizationComponent");
		return ptr;
	}



};

// Class Dungeons.WonderfulWheat
// 0x0000
class AWonderfulWheat : public AMobSummonItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WonderfulWheat");
		return ptr;
	}



};

// Class Dungeons.WorldspaceHUDComponent
// 0x0000
class UWorldspaceHUDComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.WorldspaceHUDComponent");
		return ptr;
	}



	void UpdateDrownCountdown();
	void UpdateContextPrompt();
	void RemoveClicky();
	void IsPointHiddenByHotbar();
	void AddClicky();
};

// Class Dungeons.XPOrb
// 0x0000
class AXPOrb : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Dungeons.XPOrb");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

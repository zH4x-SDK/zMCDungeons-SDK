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
// Enums
//---------------------------------------------------------------------------

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class GameplayAbilities_EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal = 0,
	EGameplayEffectReplicationMode__Mixed = 1,
	EGameplayEffectReplicationMode__Full = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX = 3,

};

// Enum GameplayAbilities.EAbilityTaskWaitState
enum class GameplayAbilities_EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3,

};

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class GameplayAbilities_ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3,

};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class GameplayAbilities_EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3,

};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class GameplayAbilities_EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,

};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class GameplayAbilities_EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9,

};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class GameplayAbilities_ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class GameplayAbilities_EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class GameplayAbilities_EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class GameplayAbilities_EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class GameplayAbilities_EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class GameplayAbilities_EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class GameplayAbilities_EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class GameplayAbilities_EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class GameplayAbilities_EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class GameplayAbilities_EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class GameplayAbilities_EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class GameplayAbilities_EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3,

};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class GameplayAbilities_EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class GameplayAbilities_EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayTagEventType
enum class GameplayAbilities_EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2,

};

// Enum GameplayAbilities.EGameplayCueEvent
enum class GameplayAbilities_EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class GameplayAbilities_EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayModOp
enum class GameplayAbilities_EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,

};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class GameplayAbilities_EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11,

};

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class GameplayAbilities_EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class GameplayAbilities_EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5,

};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class GameplayAbilities_EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0000
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0000
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{

};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0000
struct FAttributeDefaults
{

};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0000
struct FAttributeMetaData : public FTableRowBase
{

};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0000
struct FGameplayAttributeData
{

};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x0000
struct FAbilityTriggerData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0000
struct FGameplayAbilityBindInfo
{

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0000
struct FGameplayTargetDataFilterHandle
{

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0000
struct FGameplayTargetDataFilter
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0000
struct FGameplayAbilityTargetData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0000
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0000
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0000
struct FGameplayAbilityTargetingLocationInfo
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x0000
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0000
struct FGameplayAbilitySpecHandleAndPredictionKey
{

};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0000
struct FAbilityTaskDebugMessage
{

};

// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0000
struct FAbilityEndedData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0000
struct FGameplayAbilityActorInfo
{

};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x0000
struct FWorldReticleParameters
{

};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0000
struct FPreallocationInfo
{

};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0000
struct FGameplayCuePendingExecute
{

};

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// 0x0000
struct FMinimalGameplayCueReplicationProxy
{

};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0000
struct FGameplayCueTag
{

};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x0000
struct FGameplayCueObjectLibrary
{

};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0000
struct FGameplayCueNotifyData
{

};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0000
struct FGameplayCueTranslationManager
{

};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0000
struct FGameplayCueTranslatorNodeIndex
{

};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0000
struct FGameplayCueTranslatorNode
{

};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0000
struct FGameplayCueTranslationLink
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0000
struct FActiveGameplayEffectQuery
{

};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0000
struct FInheritedTagContainer
{

};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0000
struct FGameplayEffectCue
{

};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0000
struct FGameplayModifierInfo
{

};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0000
struct FGameplayTagRequirements
{

};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0000
struct FGameplayModEvaluationChannelSettings
{

};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0000
struct FGameplayEffectModifierMagnitude
{

};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0000
struct FSetByCallerFloat
{

};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0000
struct FCustomCalculationBasedFloat
{

};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x0000
struct FAttributeBasedFloat
{

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0000
struct FGameplayEffectExecutionDefinition
{

};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0000
struct FConditionalGameplayEffect
{

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0000
struct FGameplayEffectExecutionScopedModifierInfo
{

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0000
struct FGameplayEffectCustomExecutionOutput
{

};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0000
struct FGameplayModifierEvaluatedData
{

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x0000
struct FGameplayEffectCustomExecutionParameters
{

};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0000
struct FGameplayEffectContext
{

};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0000
struct FGameplayTagResponseTableEntry
{

};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0000
struct FGameplayTagReponsePair
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0000
struct FActiveGameplayEffect : public FFastArraySerializerItem
{

};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0000
struct FPredictionKey
{

};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0000
struct FGameplayEffectSpec
{

};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0000
struct FGameplayEffectContextHandle
{

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0000
struct FGameplayAbilitySpecDef
{

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0000
struct FGameplayAbilitySpecHandle
{

};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0000
struct FScalableFloat
{

};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0000
struct FModifierSpec
{

};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0000
struct FTagContainerAggregator
{

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0000
struct FGameplayEffectAttributeCaptureSpecContainer
{

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0000
struct FGameplayEffectAttributeCaptureSpec
{

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0000
struct FGameplayEffectAttributeCaptureDefinition
{

};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0000
struct FGameplayAttribute
{

};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0000
struct FGameplayEffectModifiedAttribute
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0000
struct FActiveGameplayEffectHandle
{

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0000
struct FGameplayEffectSpecHandle
{

};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0000
struct FGameplayEffectRemovalInfo
{

};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x0000
struct FGameplayEventData
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0000
struct FGameplayAbilityTargetDataHandle
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0000
struct FGameplayAbilityActivationInfo
{

};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0000
struct FGameplayEffectQuery
{

};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0000
struct FGameplayCueParameters
{

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0000
struct FGameplayEffectSpecForRPC
{

};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0000
struct FGameplayAbilities_FServerAbilityRPCBatch
{

};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0000
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{

};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x0000
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{

};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0000
struct FMinimalReplicationTagCountMap
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0000
struct FActiveGameplayCueContainer : public FFastArraySerializer
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0000
struct FActiveGameplayCue : public FFastArraySerializerItem
{

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0000
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0000
struct FGameplayAbilityLocalAnimMontage
{

};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0000
struct FGameplayAbilityRepAnimMontage
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

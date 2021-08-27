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

// WidgetBlueprintGeneratedClass UMG_HealthbarHeart.UMG_HealthbarHeart_C
// 0x0000
class UUMG_HealthbarHeart_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HealthbarHeart.UMG_HealthbarHeart_C");
		return ptr;
	}



	void InstantFillOxygen();
	void SetVisualOxygenPercentage();
	void OnBubbleMovementFinished();
	void OnOxygenFractionChanged();
	void SetOxygenPercentage();
	void UpdateOxygenGraphics();
	void UpdateOxygenMaterial();
	void DisableOxygenHeart();
	void EnableOxygenHeart();
	void OnIsUnderwaterChanged();
	void OnNormalDamage();
	void OnWeakDamage();
	void UpdatePoisonGraphics();
	void SetPoisonPercentage();
	void UpdatePoisonMaterial();
	void OnLevelUp();
	void OnHealthChanged();
	void UpdateHeartMaterial();
	void SetHeartMaterialInstance();
	void SetHeartColourFromCharacter();
	void UpdateDamageHealAnim();
	void StartHealPopAnim();
	void StartDamagePopAnim();
	void setHeartTextPosition();
	void Reset_Prioritized_damage();
	void OnHealed();
	void OnDamageRecieved();
	void UpdateGraphics();
	void GetLerpSpeed();
	void SetVisualHealthPercentage();
	void SetHealthPercentage();
	void CheckHealthBlink();
	void SetPlayerCharacterInternal();
	void CheckHeartbeatSound();
	void Construct();
	void UpdateHealth();
	void Tick();
	void PreConstruct();
	void BndEvt__HoverSurface_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HoverSurface_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void SetPlayerCharacter();
	void WidgetAnimationEvt_healthDamage_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_healthLowPulse_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_healthHeal_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_healthDamage_K2Node_WidgetAnimationEvent_4();
	void WidgetAnimationEvt_healthLowPulse_K2Node_WidgetAnimationEvent_5();
	void WidgetAnimationEvt_healthHeal_K2Node_WidgetAnimationEvent_6();
	void WidgetAnimationEvt_HealingPop_K2Node_WidgetAnimationEvent_7();
	void WidgetAnimationEvt_DamagePop_K2Node_WidgetAnimationEvent_8();
	void LocalPlayerLeft();
	void ExecuteUbergraph_UMG_HealthbarHeart();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_GameplayEffectStatusNotification.UMG_GameplayEffectStatusNotification_C
// 0x0000
class UUMG_GameplayEffectStatusNotification_C : public UUMG_StatusNotification_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GameplayEffectStatusNotification.UMG_GameplayEffectStatusNotification_C");
		return ptr;
	}



	void ApplyHorizontalLayout();
	void GetComboCounter();
	void SetStackCountDisplayPreference();
	void SetStackCountMax();
	void UpdateStackCountMax();
	void SetTimerVisibility();
	void HasActiveHandle();
	void UpdateStackCount();
	void SetTimer();
	void UpdateTimer();
	void SetAnyHandles();
	void RefreshAnyHandles();
	void RemoveActiveHandle();
	void AddActiveHandle();
	void IsFree();
	void IsSameStackAs();
	void SetStackCount();
	void SetItemStatusEffectUiData();
	void OnHide();
	void OnShow();
	void Construct();
	void OnVisibleChanged();
	void Tick();
	void OnActivationExpired();
	void BndEvt__UMG_GameplayEffectIcon_K2Node_ComponentBoundEvent_1_OnHoveredChanged__DelegateSignature();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void PreConstruct();
	void SetHorizontalLayout();
	void ExecuteUbergraph_UMG_GameplayEffectStatusNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

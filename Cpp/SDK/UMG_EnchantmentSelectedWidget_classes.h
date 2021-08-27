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

// WidgetBlueprintGeneratedClass UMG_EnchantmentSelectedWidget.UMG_EnchantmentSelectedWidget_C
// 0x0000
class UUMG_EnchantmentSelectedWidget_C : public UUMG_EnchantmentWidgetBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentSelectedWidget.UMG_EnchantmentSelectedWidget_C");
		return ptr;
	}



	void GetButtonRef();
	void UpdateLockedScalarParameters();
	void ForceApplyAllStates();
	void UpdateGraphics();
	void GetDesiredButtonBgTexture();
	void RefreshButtonState();
	void DelayedUnlockAnimation();
	void OnRefreshButtonState();
	void OnUpdateGraphics();
	void OnForceApplyAllStates();
	void Tick();
	void WidgetAnimationEvt_BecomeInvested_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_BecomeDisabled_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_BecomeUnlocked_K2Node_WidgetAnimationEvent_3();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void OnInteractiveChanged();
	void ExecuteUbergraph_UMG_EnchantmentSelectedWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

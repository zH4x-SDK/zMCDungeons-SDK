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

// WidgetBlueprintGeneratedClass UMG_EnchantmentOptionWidget.UMG_EnchantmentOptionWidget_C
// 0x0000
class UUMG_EnchantmentOptionWidget_C : public UUMG_EnchantmentWidgetBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentOptionWidget.UMG_EnchantmentOptionWidget_C");
		return ptr;
	}



	void GetButtonRef();
	void ForceApplyAllStates();
	void UpdateGraphics();
	void OnUpdateGraphics();
	void OnSelectedChanged();
	void OnOtherSelectedChanged();
	void OnForceApplyAllStates();
	void Tick();
	void WidgetAnimationEvt_BecomeDisabled_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_BecomeUnlocked_K2Node_WidgetAnimationEvent_3();
	void BndEvt__UMG_IconButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void OnInteractiveChanged();
	void ExecuteUbergraph_UMG_EnchantmentOptionWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

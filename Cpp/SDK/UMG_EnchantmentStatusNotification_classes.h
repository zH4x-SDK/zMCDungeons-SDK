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

// WidgetBlueprintGeneratedClass UMG_EnchantmentStatusNotification.UMG_EnchantmentStatusNotification_C
// 0x0000
class UUMG_EnchantmentStatusNotification_C : public UUMG_StatusNotification_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentStatusNotification.UMG_EnchantmentStatusNotification_C");
		return ptr;
	}



	void IsFree();
	void CanContinueComboOf();
	void IncreaseCombo();
	void SetCombo();
	void SetEnchantmentType();
	void OnHide();
	void OnShow();
	void Construct();
	void OnVisibleChanged();
	void OnActivationExpired();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void PreConstruct();
	void ExecuteUbergraph_UMG_EnchantmentStatusNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_ArmorPropertyStatusNotification.UMG_ArmorPropertyStatusNotification_C
// 0x0000
class UUMG_ArmorPropertyStatusNotification_C : public UUMG_StatusNotification_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ArmorPropertyStatusNotification.UMG_ArmorPropertyStatusNotification_C");
		return ptr;
	}



	void IsFree();
	void CanContinueComboOf();
	void IncreaseCombo();
	void SetCombo();
	void SetArmorPropertyType();
	void OnHide();
	void OnShow();
	void Construct();
	void OnVisibleChanged();
	void OnActivationExpired();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ArmorPropertyStatusNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

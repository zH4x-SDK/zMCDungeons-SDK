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

// WidgetBlueprintGeneratedClass UMG_HotbarMapButton.UMG_HotbarMapButton_C
// 0x0000
class UUMG_HotbarMapButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarMapButton.UMG_HotbarMapButton_C");
		return ptr;
	}



	void BndEvt__UMG_HotbarSlotAction_K2Node_ComponentBoundEvent_0_OnActionClicked__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_1_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_2_OnSpecificHintDeactivated__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarMapButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

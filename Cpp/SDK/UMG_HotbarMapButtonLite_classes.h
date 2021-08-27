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

// WidgetBlueprintGeneratedClass UMG_HotbarMapButtonLite.UMG_HotbarMapButtonLite_C
// 0x0000
class UUMG_HotbarMapButtonLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarMapButtonLite.UMG_HotbarMapButtonLite_C");
		return ptr;
	}



	void DoHintHighlight();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_1_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_2_OnSpecificHintDeactivated__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_3_OnShortcutHeld__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbarLite_K2Node_ComponentBoundEvent_4_OnShortcutReleased__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarMapButtonLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

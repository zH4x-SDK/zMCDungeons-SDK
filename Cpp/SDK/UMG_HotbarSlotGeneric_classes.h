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

// WidgetBlueprintGeneratedClass UMG_HotbarSlotGeneric.UMG_HotbarSlotGeneric_C
// 0x0000
class UUMG_HotbarSlotGeneric_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarSlotGeneric.UMG_HotbarSlotGeneric_C");
		return ptr;
	}



	void OnItemInstanceChanged();
	void getInputKeyReference();
	void SetActionHeld();
	void SetSimulatePressed();
	void SetSelected();
	void SetDisabled();
	void GetButtonReference();
	void SetHintHighlight();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbar_K2Node_ComponentBoundEvent_1_OnShortcutHeld__DelegateSignature();
	void BndEvt__UMG_InputActionKeyHotbar_K2Node_ComponentBoundEvent_2_OnShortcutReleased__DelegateSignature();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarSlotGeneric();
	void OnButtonStateWasChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

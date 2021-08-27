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

// WidgetBlueprintGeneratedClass UMG_InventoryGearSlotWidget.UMG_InventoryGearSlotWidget_C
// 0x0000
class UUMG_InventoryGearSlotWidget_C : public UUMG_InventorySlotBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryGearSlotWidget.UMG_InventoryGearSlotWidget_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void SetLocked();
	void RefreshLocked();
	void OnSlotLockedChanged();
	void SetEquipmentSlot();
	void PlayTTS();
	void GetGenericSlotRef();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_0_OnDragEntered__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_1_OnDragLeft__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_3_OnHighlightChanged__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_0_OnInventorySlotChanged__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_0_OnSwitchFrameTextures__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_2_OnInventorySlotSelected__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_6_OnHoveredChanged__DelegateSignature();
	void PlayTextToSpeech();
	void ReadItem();
	void Should_Not_Play_TTS();
	void OnSetInventorySlot();
	void PreConstruct();
	void ExecuteUbergraph_UMG_InventoryGearSlotWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

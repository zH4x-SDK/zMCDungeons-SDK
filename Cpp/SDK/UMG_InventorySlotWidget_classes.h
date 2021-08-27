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

// WidgetBlueprintGeneratedClass UMG_InventorySlotWidget.UMG_InventorySlotWidget_C
// 0x0000
class UUMG_InventorySlotWidget_C : public UUMG_InventorySlotBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventorySlotWidget.UMG_InventorySlotWidget_C");
		return ptr;
	}



	void PlayTTS();
	void GetGenericSlotRef();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_2_OnSwitchFrameTextures__DelegateSignature();
	void BndEvt__UMG_InventoryGenericSlot_K2Node_ComponentBoundEvent_6_OnHoveredChanged__DelegateSignature();
	void PlayTextToSpeech();
	void ReadItem();
	void Should_Not_Play_TTS();
	void ExecuteUbergraph_UMG_InventorySlotWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

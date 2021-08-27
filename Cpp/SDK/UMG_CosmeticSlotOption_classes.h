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

// WidgetBlueprintGeneratedClass UMG_CosmeticSlotOption.UMG_CosmeticSlotOption_C
// 0x0000
class UUMG_CosmeticSlotOption_C : public UUMG_SlotBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CosmeticSlotOption.UMG_CosmeticSlotOption_C");
		return ptr;
	}



	void PerformUnequip();
	void PerformEquip();
	void SetShowEquipButtons();
	void GetShouldEquip();
	void RefreshGraphics();
	void SetCosmeticDef();
	void GetGenericSlotRef();
	void GetCosmeticDef();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_1_OnHoveredChanged__DelegateSignature();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void Construct();
	void BndEvt__UMG_CosmeticButtonEquip_K2Node_ComponentBoundEvent_2_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_CosmeticButtonRemove_K2Node_ComponentBoundEvent_3_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_GenericSlotWidget_K2Node_ComponentBoundEvent_4_OnSlotSelected__DelegateSignature();
	void GamepadClick();
	void ExecuteUbergraph_UMG_CosmeticSlotOption();
	void OnCosmeticHighlight__DelegateSignature();
	void OnCosmeticUnequipped__DelegateSignature();
	void OnCosmeticEquipped__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

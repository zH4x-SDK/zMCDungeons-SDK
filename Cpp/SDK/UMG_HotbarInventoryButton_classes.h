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

// WidgetBlueprintGeneratedClass UMG_HotbarInventoryButton.UMG_HotbarInventoryButton_C
// 0x0000
class UUMG_HotbarInventoryButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarInventoryButton.UMG_HotbarInventoryButton_C");
		return ptr;
	}



	void OnInventoryFull();
	void GetNumNewItems();
	void RefreshNewMarker();
	void OnNumNewItemsChanged();
	void SetShowEnchantmentFrame();
	void GetEnchantmentPoints();
	void RefreshEnchantmentPoints();
	void OnAvailableEnchantmentPointsChanged();
	void SetItemStashComponent();
	void BndEvt__UMG_HotbarSlotAction_K2Node_ComponentBoundEvent_0_OnActionClicked__DelegateSignature();
	void SetPlayerCharacter();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_1_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_K2Node_ComponentBoundEvent_2_OnSpecificHintDeactivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_Enchanting_K2Node_ComponentBoundEvent_3_OnSpecificHintActivated__DelegateSignature();
	void BndEvt__UMG_HintEventHelper_Enchanting_K2Node_ComponentBoundEvent_4_OnSpecificHintDeactivated__DelegateSignature();
	void ExecuteUbergraph_UMG_HotbarInventoryButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

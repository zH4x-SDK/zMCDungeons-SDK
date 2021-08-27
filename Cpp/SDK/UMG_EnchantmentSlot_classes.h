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

// WidgetBlueprintGeneratedClass UMG_EnchantmentSlot.UMG_EnchantmentSlot_C
// 0x0000
class UUMG_EnchantmentSlot_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentSlot.UMG_EnchantmentSlot_C");
		return ptr;
	}



	void RefreshGroupTouch();
	void SetInteractive();
	void HasAnySelected();
	void SetGroupTouch();
	void GetIsAnyEnchanted();
	void GetIsLocked();
	void SetExpanded();
	void SetLocked();
	void UpdateGraphics();
	void SetOptionTooltipWidget();
	void RefreshHovered();
	void RefreshTooltip();
	void SlotContainsEnchantmentIndex();
	void InspectItemEnchantmentIndex();
	void HasAnyVisibleEnchantment();
	void SetAnyEnchanted();
	void UpdateItemState();
	void ItemEnchantmentSelected();
	void SetItem();
	void Construct();
	void BndEvt__TouchTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_EnchantmentSlot();
	void OnGroupSelected__DelegateSignature();
	void OnItemEnchantmentSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

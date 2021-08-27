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

// WidgetBlueprintGeneratedClass UMG_EnchantmentSlotsWidget.UMG_EnchantmentSlotsWidget_C
// 0x0000
class UUMG_EnchantmentSlotsWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentSlotsWidget.UMG_EnchantmentSlotsWidget_C");
		return ptr;
	}



	void UpdateSlotScales();
	void SetCurrentNormalScale();
	void GetIndexDesiredScaleAndOpacity();
	void GetSizeAdaptedSlotScale();
	void SetInteractive();
	void SetExpanded();
	void SetIsInspecting();
	void InspectItemEnchantmentIndex();
	void UpdateState();
	void OnItemEnchanted();
	void SetItem();
	void Construct();
	void selected();
	void PreConstruct();
	void ExpandEnchant();
	void UpdateExpandScale();
	void Tick();
	void ExecuteUbergraph_UMG_EnchantmentSlotsWidget();
	void EnchantExpand__DelegateSignature();
	void OnItemEnchantmentSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

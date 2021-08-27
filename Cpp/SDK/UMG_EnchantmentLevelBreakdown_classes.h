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

// WidgetBlueprintGeneratedClass UMG_EnchantmentLevelBreakdown.UMG_EnchantmentLevelBreakdown_C
// 0x0000
class UUMG_EnchantmentLevelBreakdown_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentLevelBreakdown.UMG_EnchantmentLevelBreakdown_C");
		return ptr;
	}



	void UpdateHighlight();
	void GetCurrentLevel();
	void setHighlighted();
	void UpdateGraphics();
	void UpdateData();
	void OnItemChanged();
	void SetItemAndEnchantmentIndex();
	void RecreateCounterWidgets();
	void Construct();
	void ExecuteUbergraph_UMG_EnchantmentLevelBreakdown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

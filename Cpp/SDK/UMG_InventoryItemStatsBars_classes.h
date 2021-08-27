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

// WidgetBlueprintGeneratedClass UMG_InventoryItemStatsBars.UMG_InventoryItemStatsBars_C
// 0x0000
class UUMG_InventoryItemStatsBars_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InventoryItemStatsBars.UMG_InventoryItemStatsBars_C");
		return ptr;
	}



	void RefreshComparison();
	void SetIsComparing();
	void SetFadeTimer();
	void ClearCompare();
	void RefreshGraphics();
	void SetCompareScore();
	void SetScore();
	void Construct();
	void Tick();
	void ExecuteUbergraph_UMG_InventoryItemStatsBars();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

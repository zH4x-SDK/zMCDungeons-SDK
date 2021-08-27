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

// WidgetBlueprintGeneratedClass UMG_ItemRarityBlock.UMG_ItemRarityBlock_C
// 0x0000
class UUMG_ItemRarityBlock_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemRarityBlock.UMG_ItemRarityBlock_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetDisplayRarity();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ItemRarityBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

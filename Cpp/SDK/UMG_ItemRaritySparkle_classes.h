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

// WidgetBlueprintGeneratedClass UMG_ItemRaritySparkle.UMG_ItemRaritySparkle_C
// 0x0000
class UUMG_ItemRaritySparkle_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ItemRaritySparkle.UMG_ItemRaritySparkle_C");
		return ptr;
	}



	void SetItemTexture();
	void SetColor();
	void UpdateGraphics();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ItemRaritySparkle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

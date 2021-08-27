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

// WidgetBlueprintGeneratedClass UMG_LevelProgress_Hexagon.UMG_LevelProgress_Hexagon_C
// 0x0000
class UUMG_LevelProgress_Hexagon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LevelProgress_Hexagon.UMG_LevelProgress_Hexagon_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetProgress();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_UMG_LevelProgress_Hexagon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

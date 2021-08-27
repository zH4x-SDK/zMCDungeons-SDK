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

// WidgetBlueprintGeneratedClass UMG_DifficultyIconBadge.UMG_DifficultyIconBadge_C
// 0x0000
class UUMG_DifficultyIconBadge_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DifficultyIconBadge.UMG_DifficultyIconBadge_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetDifficulty();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_DifficultyIconBadge();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_ArrowCounter_5ProjectilesLite.UMG_ArrowCounter_5ProjectilesLite_C
// 0x0000
class UUMG_ArrowCounter_5ProjectilesLite_C : public UUMG_ItemSlotCounter_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ArrowCounter_5ProjectilesLite.UMG_ArrowCounter_5ProjectilesLite_C");
		return ptr;
	}



	void HideArrow();
	void ShowArrow();
	void PreConstruct();
	void SetVisualCount();
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_UMG_ArrowCounter_5ProjectilesLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_HotbarLifeCounter.UMG_HotbarLifeCounter_C
// 0x0000
class UUMG_HotbarLifeCounter_C : public UUMG_LivesCounterBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarLifeCounter.UMG_HotbarLifeCounter_C");
		return ptr;
	}



	void OnSetVisualLives();
	void OnSetVisibility();
	void ExecuteUbergraph_UMG_HotbarLifeCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

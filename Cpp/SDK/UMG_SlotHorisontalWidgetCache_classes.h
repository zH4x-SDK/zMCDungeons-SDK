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

// WidgetBlueprintGeneratedClass UMG_SlotHorisontalWidgetCache.UMG_SlotHorisontalWidgetCache_C
// 0x0000
class UUMG_SlotHorisontalWidgetCache_C : public UUMG_WidgetCacheBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SlotHorisontalWidgetCache.UMG_SlotHorisontalWidgetCache_C");
		return ptr;
	}



	void OnSlotsCacheCleared();
	void OnWidgetCreatedAtIndex();
	void PreConstruct();
	void ExecuteUbergraph_UMG_SlotHorisontalWidgetCache();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

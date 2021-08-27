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

// WidgetBlueprintGeneratedClass UMG_SlotVerticalWidgetCache.UMG_SlotVerticalWidgetCache_C
// 0x0000
class UUMG_SlotVerticalWidgetCache_C : public UUMG_WidgetCacheBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SlotVerticalWidgetCache.UMG_SlotVerticalWidgetCache_C");
		return ptr;
	}



	void OnSlotsCacheCleared();
	void OnWidgetCreatedAtIndex();
	void ExecuteUbergraph_UMG_SlotVerticalWidgetCache();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

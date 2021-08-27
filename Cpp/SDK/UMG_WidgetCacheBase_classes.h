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

// WidgetBlueprintGeneratedClass UMG_WidgetCacheBase.UMG_WidgetCacheBase_C
// 0x0000
class UUMG_WidgetCacheBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_WidgetCacheBase.UMG_WidgetCacheBase_C");
		return ptr;
	}



	void OnWidgetCreatedAtIndex();
	void OnSlotsCacheCleared();
	void GetSlots();
	void ClearAllSlots();
	void HasAnySlots();
	void SetSlotWidgetClass();
	void GetOrCreateSlot();
	void CollapseAllSlots();
	void OnSlotsCleared__DelegateSignature();
	void OnWidgetCreated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

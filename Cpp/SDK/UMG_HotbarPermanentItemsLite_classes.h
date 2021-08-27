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

// WidgetBlueprintGeneratedClass UMG_HotbarPermanentItemsLite.UMG_HotbarPermanentItemsLite_C
// 0x0000
class UUMG_HotbarPermanentItemsLite_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarPermanentItemsLite.UMG_HotbarPermanentItemsLite_C");
		return ptr;
	}



	void GetAllSlots();
	void SetPlayerCharacter();
	void Construct();
	void ExecuteUbergraph_UMG_HotbarPermanentItemsLite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

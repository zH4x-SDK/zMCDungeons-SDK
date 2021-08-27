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

// WidgetBlueprintGeneratedClass UMG_LootChestMapPin_Fancy.UMG_LootChestMapPin_Fancy_C
// 0x0000
class UUMG_LootChestMapPin_Fancy_C : public UUMG_MapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LootChestMapPin_Fancy.UMG_LootChestMapPin_Fancy_C");
		return ptr;
	}



	void Toggle_outside_map();
	void Changed_OOB();
	void PreConstruct();
	void ExecuteUbergraph_UMG_LootChestMapPin_Fancy();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿#pragma once

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

// WidgetBlueprintGeneratedClass UMG_LootChest_Content.UMG_LootChest_Content_C
// 0x0000
class UUMG_LootChest_Content_C : public UUMG_MapPin_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LootChest_Content.UMG_LootChest_Content_C");
		return ptr;
	}



	void Toggle_outside_map();
	void Changed_OOB();
	void Construct();
	void ExecuteUbergraph_UMG_LootChest_Content();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

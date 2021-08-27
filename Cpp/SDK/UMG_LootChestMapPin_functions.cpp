// Name: DBZKakarot, Version: 1.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.Toggle outside map
// ()
void UUMG_LootChestMapPin_C::Toggle_outside_map()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.Toggle outside map");

	UUMG_LootChestMapPin_C_Toggle_outside_map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.Changed OOB
// ()
void UUMG_LootChestMapPin_C::Changed_OOB()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.Changed OOB");

	UUMG_LootChestMapPin_C_Changed_OOB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.ExecuteUbergraph_UMG_LootChestMapPin
// ()
void UUMG_LootChestMapPin_C::ExecuteUbergraph_UMG_LootChestMapPin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_LootChestMapPin.UMG_LootChestMapPin_C.ExecuteUbergraph_UMG_LootChestMapPin");

	UUMG_LootChestMapPin_C_ExecuteUbergraph_UMG_LootChestMapPin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

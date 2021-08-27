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

// Function BPL_Inventory.BPL_Inventory_C.GetItemTagDisplayName
// ()
void UBPL_Inventory_C::GetItemTagDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Inventory.BPL_Inventory_C.GetItemTagDisplayName");

	UBPL_Inventory_C_GetItemTagDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_Inventory.BPL_Inventory_C.GetInventoryFilter
// ()
void UBPL_Inventory_C::GetInventoryFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Inventory.BPL_Inventory_C.GetInventoryFilter");

	UBPL_Inventory_C_GetInventoryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

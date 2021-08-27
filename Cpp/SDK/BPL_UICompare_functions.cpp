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

// Function BPL_UICompare.BPL_UICompare_C.GetItemStatsIndexEntry
// ()
void UBPL_UICompare_C::GetItemStatsIndexEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UICompare.BPL_UICompare_C.GetItemStatsIndexEntry");

	UBPL_UICompare_C_GetItemStatsIndexEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UICompare.BPL_UICompare_C.GetItemPowerComparisonColor
// ()
void UBPL_UICompare_C::GetItemPowerComparisonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UICompare.BPL_UICompare_C.GetItemPowerComparisonColor");

	UBPL_UICompare_C_GetItemPowerComparisonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

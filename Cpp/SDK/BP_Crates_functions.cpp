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

// Function BP_Crates.BP_Crates_C.SetOnOff
// ()
void ABP_Crates_C::SetOnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crates.BP_Crates_C.SetOnOff");

	ABP_Crates_C_SetOnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crates.BP_Crates_C.PlayerEnteredVisibleRange
// ()
void ABP_Crates_C::PlayerEnteredVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crates.BP_Crates_C.PlayerEnteredVisibleRange");

	ABP_Crates_C_PlayerEnteredVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crates.BP_Crates_C.PlayerLeftVisibleRange
// ()
void ABP_Crates_C::PlayerLeftVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crates.BP_Crates_C.PlayerLeftVisibleRange");

	ABP_Crates_C_PlayerLeftVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Crates.BP_Crates_C.ExecuteUbergraph_BP_Crates
// ()
void ABP_Crates_C::ExecuteUbergraph_BP_Crates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Crates.BP_Crates_C.ExecuteUbergraph_BP_Crates");

	ABP_Crates_C_ExecuteUbergraph_BP_Crates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

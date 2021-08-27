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

// Function BP_Tent.BP_Tent_C.SetOnOff
// ()
void ABP_Tent_C::SetOnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tent.BP_Tent_C.SetOnOff");

	ABP_Tent_C_SetOnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tent.BP_Tent_C.PlayerEnteredVisibleRange
// ()
void ABP_Tent_C::PlayerEnteredVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tent.BP_Tent_C.PlayerEnteredVisibleRange");

	ABP_Tent_C_PlayerEnteredVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tent.BP_Tent_C.PlayerLeftVisibleRange
// ()
void ABP_Tent_C::PlayerLeftVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tent.BP_Tent_C.PlayerLeftVisibleRange");

	ABP_Tent_C_PlayerLeftVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Tent.BP_Tent_C.ExecuteUbergraph_BP_Tent
// ()
void ABP_Tent_C::ExecuteUbergraph_BP_Tent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tent.BP_Tent_C.ExecuteUbergraph_BP_Tent");

	ABP_Tent_C_ExecuteUbergraph_BP_Tent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

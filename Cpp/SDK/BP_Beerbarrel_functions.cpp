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

// Function BP_Beerbarrel.BP_Beerbarrel_C.SetOnOff
// ()
void ABP_Beerbarrel_C::SetOnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beerbarrel.BP_Beerbarrel_C.SetOnOff");

	ABP_Beerbarrel_C_SetOnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Beerbarrel.BP_Beerbarrel_C.PlayerEnteredVisibleRange
// ()
void ABP_Beerbarrel_C::PlayerEnteredVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beerbarrel.BP_Beerbarrel_C.PlayerEnteredVisibleRange");

	ABP_Beerbarrel_C_PlayerEnteredVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Beerbarrel.BP_Beerbarrel_C.PlayerLeftVisibleRange
// ()
void ABP_Beerbarrel_C::PlayerLeftVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beerbarrel.BP_Beerbarrel_C.PlayerLeftVisibleRange");

	ABP_Beerbarrel_C_PlayerLeftVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Beerbarrel.BP_Beerbarrel_C.ExecuteUbergraph_BP_Beerbarrel
// ()
void ABP_Beerbarrel_C::ExecuteUbergraph_BP_Beerbarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beerbarrel.BP_Beerbarrel_C.ExecuteUbergraph_BP_Beerbarrel");

	ABP_Beerbarrel_C_ExecuteUbergraph_BP_Beerbarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

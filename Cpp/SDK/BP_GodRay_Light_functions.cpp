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

// Function BP_GodRay_Light.BP_GodRay_Light_C.PlayerEnteredVisibleRange
// ()
void ABP_GodRay_Light_C::PlayerEnteredVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GodRay_Light.BP_GodRay_Light_C.PlayerEnteredVisibleRange");

	ABP_GodRay_Light_C_PlayerEnteredVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GodRay_Light.BP_GodRay_Light_C.PlayerLeftVisibleRange
// ()
void ABP_GodRay_Light_C::PlayerLeftVisibleRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GodRay_Light.BP_GodRay_Light_C.PlayerLeftVisibleRange");

	ABP_GodRay_Light_C_PlayerLeftVisibleRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GodRay_Light.BP_GodRay_Light_C.ExecuteUbergraph_BP_GodRay_Light
// ()
void ABP_GodRay_Light_C::ExecuteUbergraph_BP_GodRay_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GodRay_Light.BP_GodRay_Light_C.ExecuteUbergraph_BP_GodRay_Light");

	ABP_GodRay_Light_C_ExecuteUbergraph_BP_GodRay_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

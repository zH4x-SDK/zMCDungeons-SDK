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

// Function BP_ArrowProp.BP_ArrowProp_C.OnBeginPulse
// ()
void ABP_ArrowProp_C::OnBeginPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArrowProp.BP_ArrowProp_C.OnBeginPulse");

	ABP_ArrowProp_C_OnBeginPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ArrowProp.BP_ArrowProp_C.OnExplode
// ()
void ABP_ArrowProp_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArrowProp.BP_ArrowProp_C.OnExplode");

	ABP_ArrowProp_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ArrowProp.BP_ArrowProp_C.IncreaseTempo
// ()
void ABP_ArrowProp_C::IncreaseTempo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArrowProp.BP_ArrowProp_C.IncreaseTempo");

	ABP_ArrowProp_C_IncreaseTempo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ArrowProp.BP_ArrowProp_C.ExecuteUbergraph_BP_ArrowProp
// ()
void ABP_ArrowProp_C::ExecuteUbergraph_BP_ArrowProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ArrowProp.BP_ArrowProp_C.ExecuteUbergraph_BP_ArrowProp");

	ABP_ArrowProp_C_ExecuteUbergraph_BP_ArrowProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

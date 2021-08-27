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

// Function BP_Fire.BP_Fire_C.Flicker
// ()
void ABP_Fire_C::Flicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.Flicker");

	ABP_Fire_C_Flicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Fire.BP_Fire_C.ReceiveTick
// ()
void ABP_Fire_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.ReceiveTick");

	ABP_Fire_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Fire.BP_Fire_C.ReceiveBeginPlay
// ()
void ABP_Fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.ReceiveBeginPlay");

	ABP_Fire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire
// ()
void ABP_Fire_C::ExecuteUbergraph_BP_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire");

	ABP_Fire_C_ExecuteUbergraph_BP_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

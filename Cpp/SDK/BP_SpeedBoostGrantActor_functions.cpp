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

// Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ReceiveBeginPlay
// ()
void ABP_SpeedBoostGrantActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ReceiveBeginPlay");

	ABP_SpeedBoostGrantActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ReceiveTick
// ()
void ABP_SpeedBoostGrantActor_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ReceiveTick");

	ABP_SpeedBoostGrantActor_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ExecuteUbergraph_BP_SpeedBoostGrantActor
// ()
void ABP_SpeedBoostGrantActor_C::ExecuteUbergraph_BP_SpeedBoostGrantActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedBoostGrantActor.BP_SpeedBoostGrantActor_C.ExecuteUbergraph_BP_SpeedBoostGrantActor");

	ABP_SpeedBoostGrantActor_C_ExecuteUbergraph_BP_SpeedBoostGrantActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

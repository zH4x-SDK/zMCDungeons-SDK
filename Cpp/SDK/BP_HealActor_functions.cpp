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

// Function BP_HealActor.BP_HealActor_C.ReceiveBeginPlay
// ()
void ABP_HealActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealActor.BP_HealActor_C.ReceiveBeginPlay");

	ABP_HealActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealActor.BP_HealActor_C.ExecuteUbergraph_BP_HealActor
// ()
void ABP_HealActor_C::ExecuteUbergraph_BP_HealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealActor.BP_HealActor_C.ExecuteUbergraph_BP_HealActor");

	ABP_HealActor_C_ExecuteUbergraph_BP_HealActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

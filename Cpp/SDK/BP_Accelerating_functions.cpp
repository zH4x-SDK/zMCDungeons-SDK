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

// Function BP_Accelerating.BP_Accelerating_C.ReceiveBeginPlay
// ()
void UBP_Accelerating_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Accelerating.BP_Accelerating_C.ReceiveBeginPlay");

	UBP_Accelerating_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Accelerating.BP_Accelerating_C.ExecuteUbergraph_BP_Accelerating
// ()
void UBP_Accelerating_C::ExecuteUbergraph_BP_Accelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Accelerating.BP_Accelerating_C.ExecuteUbergraph_BP_Accelerating");

	UBP_Accelerating_C_ExecuteUbergraph_BP_Accelerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

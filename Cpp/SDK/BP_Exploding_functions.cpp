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

// Function BP_Exploding.BP_Exploding_C.ReceiveBeginPlay
// ()
void UBP_Exploding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Exploding.BP_Exploding_C.ReceiveBeginPlay");

	UBP_Exploding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Exploding.BP_Exploding_C.ExecuteUbergraph_BP_Exploding
// ()
void UBP_Exploding_C::ExecuteUbergraph_BP_Exploding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Exploding.BP_Exploding_C.ExecuteUbergraph_BP_Exploding");

	UBP_Exploding_C_ExecuteUbergraph_BP_Exploding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

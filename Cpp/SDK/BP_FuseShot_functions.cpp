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

// Function BP_FuseShot.BP_FuseShot_C.ReceiveBeginPlay
// ()
void UBP_FuseShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FuseShot.BP_FuseShot_C.ReceiveBeginPlay");

	UBP_FuseShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FuseShot.BP_FuseShot_C.ExecuteUbergraph_BP_FuseShot
// ()
void UBP_FuseShot_C::ExecuteUbergraph_BP_FuseShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FuseShot.BP_FuseShot_C.ExecuteUbergraph_BP_FuseShot");

	UBP_FuseShot_C_ExecuteUbergraph_BP_FuseShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

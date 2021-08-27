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

// Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyBegin
// ()
void UAnimNS_BabyGhast_ShyOut_C::Received_NotifyBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyBegin");

	UAnimNS_BabyGhast_ShyOut_C_Received_NotifyBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyEnd
// ()
void UAnimNS_BabyGhast_ShyOut_C::Received_NotifyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyEnd");

	UAnimNS_BabyGhast_ShyOut_C_Received_NotifyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyTick
// ()
void UAnimNS_BabyGhast_ShyOut_C::Received_NotifyTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C.Received_NotifyTick");

	UAnimNS_BabyGhast_ShyOut_C_Received_NotifyTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

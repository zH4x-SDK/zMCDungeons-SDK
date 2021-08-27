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

// Function BPL_UIMobs.BPL_UIMobs_C.IsMobAncient
// ()
void UBPL_UIMobs_C::IsMobAncient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIMobs.BPL_UIMobs_C.IsMobAncient");

	UBPL_UIMobs_C_IsMobAncient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIMobs.BPL_UIMobs_C.IsMobEnchanted
// ()
void UBPL_UIMobs_C::IsMobEnchanted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIMobs.BPL_UIMobs_C.IsMobEnchanted");

	UBPL_UIMobs_C_IsMobEnchanted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIMobs.BPL_UIMobs_C.IsMobAlive
// ()
void UBPL_UIMobs_C::IsMobAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIMobs.BPL_UIMobs_C.IsMobAlive");

	UBPL_UIMobs_C_IsMobAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIMobs.BPL_UIMobs_C.GetMobDisplayName
// ()
void UBPL_UIMobs_C::GetMobDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIMobs.BPL_UIMobs_C.GetMobDisplayName");

	UBPL_UIMobs_C_GetMobDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIMobs.BPL_UIMobs_C.GetBossDisplayName
// ()
void UBPL_UIMobs_C::GetBossDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIMobs.BPL_UIMobs_C.GetBossDisplayName");

	UBPL_UIMobs_C_GetBossDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

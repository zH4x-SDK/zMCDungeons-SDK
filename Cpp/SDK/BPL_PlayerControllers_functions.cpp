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

// Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetFirstPlayerControllerBP_Interface
// ()
void UBPL_PlayerControllers_C::GetFirstPlayerControllerBP_Interface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetFirstPlayerControllerBP_Interface");

	UBPL_PlayerControllers_C_GetFirstPlayerControllerBP_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetFirstPlayerControllerBP
// ()
void UBPL_PlayerControllers_C::GetFirstPlayerControllerBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetFirstPlayerControllerBP");

	UBPL_PlayerControllers_C_GetFirstPlayerControllerBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_PlayerControllers.BPL_PlayerControllers_C.CountControllers
// ()
void UBPL_PlayerControllers_C::CountControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerControllers.BPL_PlayerControllers_C.CountControllers");

	UBPL_PlayerControllers_C_CountControllers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetMaxControllerIndex
// ()
void UBPL_PlayerControllers_C::GetMaxControllerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerControllers.BPL_PlayerControllers_C.GetMaxControllerIndex");

	UBPL_PlayerControllers_C_GetMaxControllerIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

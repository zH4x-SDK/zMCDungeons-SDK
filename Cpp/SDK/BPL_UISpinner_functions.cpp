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

// Function BPL_UISpinner.BPL_UISpinner_C.RemoveSaveSpinner
// ()
void UBPL_UISpinner_C::RemoveSaveSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UISpinner.BPL_UISpinner_C.RemoveSaveSpinner");

	UBPL_UISpinner_C_RemoveSaveSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UISpinner.BPL_UISpinner_C.ToggleSpinner
// ()
void UBPL_UISpinner_C::ToggleSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UISpinner.BPL_UISpinner_C.ToggleSpinner");

	UBPL_UISpinner_C_ToggleSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

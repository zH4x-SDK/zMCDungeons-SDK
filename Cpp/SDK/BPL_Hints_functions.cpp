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

// Function BPL_Hints.BPL_Hints_C.GetHintManager
// ()
void UBPL_Hints_C::GetHintManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Hints.BPL_Hints_C.GetHintManager");

	UBPL_Hints_C_GetHintManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

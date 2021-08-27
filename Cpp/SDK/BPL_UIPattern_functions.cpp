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

// Function BPL_UIPattern.BPL_UIPattern_C.GetPatternSetTextures
// ()
void UBPL_UIPattern_C::GetPatternSetTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIPattern.BPL_UIPattern_C.GetPatternSetTextures");

	UBPL_UIPattern_C_GetPatternSetTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BPL_UILovikaLevel.BPL_UILovikaLevel_C.GetCurrentLevelName
// ()
void UBPL_UILovikaLevel_C::GetCurrentLevelName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UILovikaLevel.BPL_UILovikaLevel_C.GetCurrentLevelName");

	UBPL_UILovikaLevel_C_GetCurrentLevelName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

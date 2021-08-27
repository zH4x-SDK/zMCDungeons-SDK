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

// Function BPL_Utils.BPL_Utils_C.IsInOnlineGame
// ()
void UBPL_Utils_C::IsInOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Utils.BPL_Utils_C.IsInOnlineGame");

	UBPL_Utils_C_IsInOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_Utils.BPL_Utils_C.CalculateTimelineOffset
// ()
void UBPL_Utils_C::CalculateTimelineOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Utils.BPL_Utils_C.CalculateTimelineOffset");

	UBPL_Utils_C_CalculateTimelineOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.SetTitle
// ()
void UUMG_AcceptRequestTimer_C::SetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.SetTitle");

	UUMG_AcceptRequestTimer_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.GetTime
// ()
void UUMG_AcceptRequestTimer_C::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.GetTime");

	UUMG_AcceptRequestTimer_C_GetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.SetTime
// ()
void UUMG_AcceptRequestTimer_C::SetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AcceptRequestTimer.UMG_AcceptRequestTimer_C.SetTime");

	UUMG_AcceptRequestTimer_C_SetTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

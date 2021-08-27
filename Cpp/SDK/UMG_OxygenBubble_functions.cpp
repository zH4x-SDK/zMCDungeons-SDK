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

// Function UMG_OxygenBubble.UMG_OxygenBubble_C.OnPop
// ()
void UUMG_OxygenBubble_C::OnPop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_OxygenBubble.UMG_OxygenBubble_C.OnPop");

	UUMG_OxygenBubble_C_OnPop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_OxygenBubble.UMG_OxygenBubble_C.SetPopTimer
// ()
void UUMG_OxygenBubble_C::SetPopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_OxygenBubble.UMG_OxygenBubble_C.SetPopTimer");

	UUMG_OxygenBubble_C_SetPopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

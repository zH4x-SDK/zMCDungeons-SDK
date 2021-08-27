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

// Function BPL_UIItemPower.BPL_UIItemPower_C.GetItemDataPowerDisplayText
// ()
void UBPL_UIItemPower_C::GetItemDataPowerDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIItemPower.BPL_UIItemPower_C.GetItemDataPowerDisplayText");

	UBPL_UIItemPower_C_GetItemDataPowerDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIItemPower.BPL_UIItemPower_C.GetItemPowerDisplayText
// ()
void UBPL_UIItemPower_C::GetItemPowerDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIItemPower.BPL_UIItemPower_C.GetItemPowerDisplayText");

	UBPL_UIItemPower_C_GetItemPowerDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BPL_IconUtils.BPL_IconUtils_C.GetIconText
// ()
void UBPL_IconUtils_C::GetIconText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_IconUtils.BPL_IconUtils_C.GetIconText");

	UBPL_IconUtils_C_GetIconText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_IconUtils.BPL_IconUtils_C.ConvertGamepadKeyToPcKey
// ()
void UBPL_IconUtils_C::ConvertGamepadKeyToPcKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_IconUtils.BPL_IconUtils_C.ConvertGamepadKeyToPcKey");

	UBPL_IconUtils_C_ConvertGamepadKeyToPcKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_IconUtils.BPL_IconUtils_C.GamepadKeysEnumToKey
// ()
void UBPL_IconUtils_C::GamepadKeysEnumToKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_IconUtils.BPL_IconUtils_C.GamepadKeysEnumToKey");

	UBPL_IconUtils_C_GamepadKeysEnumToKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

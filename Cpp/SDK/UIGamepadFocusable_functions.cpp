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

// Function UIGamepadFocusable.UIGamepadFocusable_C.GetGamepadFocusable
// ()
void UUIGamepadFocusable_C::GetGamepadFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIGamepadFocusable.UIGamepadFocusable_C.GetGamepadFocusable");

	UUIGamepadFocusable_C_GetGamepadFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

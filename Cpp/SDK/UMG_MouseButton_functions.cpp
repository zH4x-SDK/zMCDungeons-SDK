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

// Function UMG_MouseButton.UMG_MouseButton_C.SetShouldAnimate
// ()
void UUMG_MouseButton_C::SetShouldAnimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MouseButton.UMG_MouseButton_C.SetShouldAnimate");

	UUMG_MouseButton_C_SetShouldAnimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MouseButton.UMG_MouseButton_C.SetKey
// ()
void UUMG_MouseButton_C::SetKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MouseButton.UMG_MouseButton_C.SetKey");

	UUMG_MouseButton_C_SetKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

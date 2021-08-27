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

// Function UMG_ErrorText.UMG_ErrorText_C.GetText
// ()
void UUMG_ErrorText_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ErrorText.UMG_ErrorText_C.GetText");

	UUMG_ErrorText_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ErrorText.UMG_ErrorText_C.SetText
// ()
void UUMG_ErrorText_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ErrorText.UMG_ErrorText_C.SetText");

	UUMG_ErrorText_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

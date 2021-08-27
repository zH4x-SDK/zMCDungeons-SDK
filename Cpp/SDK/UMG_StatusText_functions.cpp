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

// Function UMG_StatusText.UMG_StatusText_C.OnShow
// ()
void UUMG_StatusText_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatusText.UMG_StatusText_C.OnShow");

	UUMG_StatusText_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StatusText.UMG_StatusText_C.SetVisible
// ()
void UUMG_StatusText_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatusText.UMG_StatusText_C.SetVisible");

	UUMG_StatusText_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StatusText.UMG_StatusText_C.OnHide
// ()
void UUMG_StatusText_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatusText.UMG_StatusText_C.OnHide");

	UUMG_StatusText_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StatusText.UMG_StatusText_C.SetText
// ()
void UUMG_StatusText_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatusText.UMG_StatusText_C.SetText");

	UUMG_StatusText_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

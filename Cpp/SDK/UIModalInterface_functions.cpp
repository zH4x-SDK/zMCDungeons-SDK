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

// Function UIModalInterface.UIModalInterface_C.RefreshFocus
// ()
void UUIModalInterface_C::RefreshFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIModalInterface.UIModalInterface_C.RefreshFocus");

	UUIModalInterface_C_RefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIModalInterface.UIModalInterface_C.IsOverridable
// ()
void UUIModalInterface_C::IsOverridable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIModalInterface.UIModalInterface_C.IsOverridable");

	UUIModalInterface_C_IsOverridable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIModalInterface.UIModalInterface_C.GetBlocksCharacterInput
// ()
void UUIModalInterface_C::GetBlocksCharacterInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIModalInterface.UIModalInterface_C.GetBlocksCharacterInput");

	UUIModalInterface_C_GetBlocksCharacterInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIModalInterface.UIModalInterface_C.GetModalMask
// ()
void UUIModalInterface_C::GetModalMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIModalInterface.UIModalInterface_C.GetModalMask");

	UUIModalInterface_C_GetModalMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIModalInterface.UIModalInterface_C.OpenClose
// ()
void UUIModalInterface_C::OpenClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIModalInterface.UIModalInterface_C.OpenClose");

	UUIModalInterface_C_OpenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

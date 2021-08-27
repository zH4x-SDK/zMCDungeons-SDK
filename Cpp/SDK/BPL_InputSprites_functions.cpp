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

// Function BPL_InputSprites.BPL_InputSprites_C.keySubstitutions
// ()
void UBPL_InputSprites_C::keySubstitutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_InputSprites.BPL_InputSprites_C.keySubstitutions");

	UBPL_InputSprites_C_keySubstitutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_InputSprites.BPL_InputSprites_C.GetKeyDataRowName
// ()
void UBPL_InputSprites_C::GetKeyDataRowName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_InputSprites.BPL_InputSprites_C.GetKeyDataRowName");

	UBPL_InputSprites_C_GetKeyDataRowName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_InputSprites.BPL_InputSprites_C.GetPcKeySprite
// ()
void UBPL_InputSprites_C::GetPcKeySprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_InputSprites.BPL_InputSprites_C.GetPcKeySprite");

	UBPL_InputSprites_C_GetPcKeySprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_InputSprites.BPL_InputSprites_C.GetGamepadKeySprite
// ()
void UBPL_InputSprites_C::GetGamepadKeySprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_InputSprites.BPL_InputSprites_C.GetGamepadKeySprite");

	UBPL_InputSprites_C_GetGamepadKeySprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

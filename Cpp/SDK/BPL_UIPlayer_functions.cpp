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

// Function BPL_UIPlayer.BPL_UIPlayer_C.GetControllerDisplayName
// ()
void UBPL_UIPlayer_C::GetControllerDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIPlayer.BPL_UIPlayer_C.GetControllerDisplayName");

	UBPL_UIPlayer_C_GetControllerDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIPlayer.BPL_UIPlayer_C.GetPlayerDisplayName
// ()
void UBPL_UIPlayer_C::GetPlayerDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIPlayer.BPL_UIPlayer_C.GetPlayerDisplayName");

	UBPL_UIPlayer_C_GetPlayerDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIPlayer.BPL_UIPlayer_C.GetMaxPlayers
// ()
void UBPL_UIPlayer_C::GetMaxPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIPlayer.BPL_UIPlayer_C.GetMaxPlayers");

	UBPL_UIPlayer_C_GetMaxPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIPlayer.BPL_UIPlayer_C.IsWidgetOwnerPlayerId
// ()
void UBPL_UIPlayer_C::IsWidgetOwnerPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIPlayer.BPL_UIPlayer_C.IsWidgetOwnerPlayerId");

	UBPL_UIPlayer_C_IsWidgetOwnerPlayerId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

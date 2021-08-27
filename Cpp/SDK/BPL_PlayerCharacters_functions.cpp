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

// Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.CountLocalPlayerCharacters
// ()
void UBPL_PlayerCharacters_C::CountLocalPlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.CountLocalPlayerCharacters");

	UBPL_PlayerCharacters_C_CountLocalPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.GetPlayerCharacterByPlayerId
// ()
void UBPL_PlayerCharacters_C::GetPlayerCharacterByPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.GetPlayerCharacterByPlayerId");

	UBPL_PlayerCharacters_C_GetPlayerCharacterByPlayerId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.CountRemotePlayerCharacters
// ()
void UBPL_PlayerCharacters_C::CountRemotePlayerCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_PlayerCharacters.BPL_PlayerCharacters_C.CountRemotePlayerCharacters");

	UBPL_PlayerCharacters_C_CountRemotePlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

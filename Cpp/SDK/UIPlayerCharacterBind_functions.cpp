﻿// Name: DBZKakarot, Version: 1.0.3

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

// Function UIPlayerCharacterBind.UIPlayerCharacterBind_C.SetPlayerCharacter
// ()
void UUIPlayerCharacterBind_C::SetPlayerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPlayerCharacterBind.UIPlayerCharacterBind_C.SetPlayerCharacter");

	UUIPlayerCharacterBind_C_SetPlayerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

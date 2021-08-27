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

// Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.SetGold
// ()
void UUMG_CharacterGoldCounter_C::SetGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.SetGold");

	UUMG_CharacterGoldCounter_C_SetGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.SetCharacterData
// ()
void UUMG_CharacterGoldCounter_C::SetCharacterData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.SetCharacterData");

	UUMG_CharacterGoldCounter_C_SetCharacterData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.ExecuteUbergraph_UMG_CharacterGoldCounter
// ()
void UUMG_CharacterGoldCounter_C::ExecuteUbergraph_UMG_CharacterGoldCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_CharacterGoldCounter.UMG_CharacterGoldCounter_C.ExecuteUbergraph_UMG_CharacterGoldCounter");

	UUMG_CharacterGoldCounter_C_ExecuteUbergraph_UMG_CharacterGoldCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

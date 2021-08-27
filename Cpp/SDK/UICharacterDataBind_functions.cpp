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

// Function UICharacterDataBind.UICharacterDataBind_C.SetCharacterData
// ()
void UUICharacterDataBind_C::SetCharacterData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UICharacterDataBind.UICharacterDataBind_C.SetCharacterData");

	UUICharacterDataBind_C_SetCharacterData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

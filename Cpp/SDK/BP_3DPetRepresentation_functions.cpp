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

// Function BP_3DPetRepresentation.BP_3DPetRepresentation_C.GetPetName
// ()
void UBP_3DPetRepresentation_C::GetPetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_3DPetRepresentation.BP_3DPetRepresentation_C.GetPetName");

	UBP_3DPetRepresentation_C_GetPetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UMG_PowerDiff.UMG_PowerDiff_C.SetArrowTypeFromItemPowers
// ()
void UUMG_PowerDiff_C::SetArrowTypeFromItemPowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PowerDiff.UMG_PowerDiff_C.SetArrowTypeFromItemPowers");

	UUMG_PowerDiff_C_SetArrowTypeFromItemPowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_PowerDiff.UMG_PowerDiff_C.SetArrowType
// ()
void UUMG_PowerDiff_C::SetArrowType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PowerDiff.UMG_PowerDiff_C.SetArrowType");

	UUMG_PowerDiff_C_SetArrowType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

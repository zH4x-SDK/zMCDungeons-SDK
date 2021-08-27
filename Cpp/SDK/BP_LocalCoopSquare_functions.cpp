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

// Function BP_LocalCoopSquare.BP_LocalCoopSquare_C.SetPlayerColor
// ()
void ABP_LocalCoopSquare_C::SetPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalCoopSquare.BP_LocalCoopSquare_C.SetPlayerColor");

	ABP_LocalCoopSquare_C_SetPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UMG_HintsOnHUDLeftSide.UMG_HintsOnHUDLeftSide_C.EnableHints
// ()
void UUMG_HintsOnHUDLeftSide_C::EnableHints()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_HintsOnHUDLeftSide.UMG_HintsOnHUDLeftSide_C.EnableHints");

	UUMG_HintsOnHUDLeftSide_C_EnableHints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

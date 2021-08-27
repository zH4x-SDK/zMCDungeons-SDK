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

// Function UMG_Intro_Interface.UMG_Intro_Interface_C.Skip
// ()
void UUMG_Intro_Interface_C::Skip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Intro_Interface.UMG_Intro_Interface_C.Skip");

	UUMG_Intro_Interface_C_Skip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

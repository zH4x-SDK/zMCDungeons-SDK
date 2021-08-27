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

// Function UMG_TitleNewsIcon.UMG_TitleNewsIcon_C.TriggerFadeIn
// ()
void UUMG_TitleNewsIcon_C::TriggerFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TitleNewsIcon.UMG_TitleNewsIcon_C.TriggerFadeIn");

	UUMG_TitleNewsIcon_C_TriggerFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

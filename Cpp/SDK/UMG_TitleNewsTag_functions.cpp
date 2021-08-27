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

// Function UMG_TitleNewsTag.UMG_TitleNewsTag_C.SetTagText
// ()
void UUMG_TitleNewsTag_C::SetTagText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_TitleNewsTag.UMG_TitleNewsTag_C.SetTagText");

	UUMG_TitleNewsTag_C_SetTagText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

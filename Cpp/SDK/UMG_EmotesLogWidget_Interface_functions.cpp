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

// Function UMG_EmotesLogWidget_Interface.UMG_EmotesLogWidget_Interface_C.AddPlayerEmoteByID
// ()
void UUMG_EmotesLogWidget_Interface_C::AddPlayerEmoteByID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EmotesLogWidget_Interface.UMG_EmotesLogWidget_Interface_C.AddPlayerEmoteByID");

	UUMG_EmotesLogWidget_Interface_C_AddPlayerEmoteByID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

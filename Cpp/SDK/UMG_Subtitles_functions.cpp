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

// Function UMG_Subtitles.UMG_Subtitles_C.Construct
// ()
void UUMG_Subtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.Construct");

	UUMG_Subtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Subtitles.UMG_Subtitles_C.OnSubtitlesText
// ()
void UUMG_Subtitles_C::OnSubtitlesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.OnSubtitlesText");

	UUMG_Subtitles_C_OnSubtitlesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_Subtitles.UMG_Subtitles_C.ExecuteUbergraph_UMG_Subtitles
// ()
void UUMG_Subtitles_C::ExecuteUbergraph_UMG_Subtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_Subtitles.UMG_Subtitles_C.ExecuteUbergraph_UMG_Subtitles");

	UUMG_Subtitles_C_ExecuteUbergraph_UMG_Subtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

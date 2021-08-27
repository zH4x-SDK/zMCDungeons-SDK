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

// Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetHoveredText
// ()
void UBPI_TextToSpeech_C::GetHoveredText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetHoveredText");

	UBPI_TextToSpeech_C_GetHoveredText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetClosedText
// ()
void UBPI_TextToSpeech_C::GetClosedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetClosedText");

	UBPI_TextToSpeech_C_GetClosedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetOpenedText
// ()
void UBPI_TextToSpeech_C::GetOpenedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TextToSpeech.BPI_TextToSpeech_C.GetOpenedText");

	UBPI_TextToSpeech_C_GetOpenedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

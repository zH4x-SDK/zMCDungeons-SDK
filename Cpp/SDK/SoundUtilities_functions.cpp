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

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// ()
void USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// ()
void USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");

	USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// ()
void USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");

	USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// ()
void USoundUtilitiesBPFunctionLibrary::GetBeatTempo()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");

	USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

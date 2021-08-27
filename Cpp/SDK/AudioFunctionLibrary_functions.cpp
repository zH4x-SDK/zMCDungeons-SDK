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

// Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetSFXManager
// ()
void UAudioFunctionLibrary_C::GetSFXManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetSFXManager");

	UAudioFunctionLibrary_C_GetSFXManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetSoundMixManager
// ()
void UAudioFunctionLibrary_C::GetSoundMixManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetSoundMixManager");

	UAudioFunctionLibrary_C_GetSoundMixManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetBackgroundMusicManager
// ()
void UAudioFunctionLibrary_C::GetBackgroundMusicManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetBackgroundMusicManager");

	UAudioFunctionLibrary_C_GetBackgroundMusicManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetAudioManager
// ()
void UAudioFunctionLibrary_C::GetAudioManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioFunctionLibrary.AudioFunctionLibrary_C.GetAudioManager");

	UAudioFunctionLibrary_C_GetAudioManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

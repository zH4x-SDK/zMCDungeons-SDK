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

// Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.SpawnForceFeedbackEffectAttached
// ()
void UForceFeedbackFunctionLibrary_C::SpawnForceFeedbackEffectAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.SpawnForceFeedbackEffectAttached");

	UForceFeedbackFunctionLibrary_C_SpawnForceFeedbackEffectAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.SpawnForceFeedbackEffectAtLocation
// ()
void UForceFeedbackFunctionLibrary_C::SpawnForceFeedbackEffectAtLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.SpawnForceFeedbackEffectAtLocation");

	UForceFeedbackFunctionLibrary_C_SpawnForceFeedbackEffectAtLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.StopForceFeedbackEffect
// ()
void UForceFeedbackFunctionLibrary_C::StopForceFeedbackEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.StopForceFeedbackEffect");

	UForceFeedbackFunctionLibrary_C_StopForceFeedbackEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.PlayForceFeedbackEffect
// ()
void UForceFeedbackFunctionLibrary_C::PlayForceFeedbackEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C.PlayForceFeedbackEffect");

	UForceFeedbackFunctionLibrary_C_PlayForceFeedbackEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

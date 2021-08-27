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

// Function BP_FadeOutEffect.BP_FadeOutEffect_C.ResetTimer
// ()
void ABP_FadeOutEffect_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FadeOutEffect.BP_FadeOutEffect_C.ResetTimer");

	ABP_FadeOutEffect_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FadeOutEffect.BP_FadeOutEffect_C.OnLifeSpanEnd
// ()
void ABP_FadeOutEffect_C::OnLifeSpanEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FadeOutEffect.BP_FadeOutEffect_C.OnLifeSpanEnd");

	ABP_FadeOutEffect_C_OnLifeSpanEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

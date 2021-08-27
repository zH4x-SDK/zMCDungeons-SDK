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

// Function CreeperWoodsMissionIntro.SequenceDirector_C.Stop SFX
// ()
void USequenceDirector_C::Stop_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreeperWoodsMissionIntro.SequenceDirector_C.Stop SFX");

	USequenceDirector_C_Stop_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreeperWoodsMissionIntro.SequenceDirector_C.Start VO
// ()
void USequenceDirector_C::Start_VO()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreeperWoodsMissionIntro.SequenceDirector_C.Start VO");

	USequenceDirector_C_Start_VO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreeperWoodsMissionIntro.SequenceDirector_C.Start SFX
// ()
void USequenceDirector_C::Start_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreeperWoodsMissionIntro.SequenceDirector_C.Start SFX");

	USequenceDirector_C_Start_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreeperWoodsMissionIntro.SequenceDirector_C.Start Music
// ()
void USequenceDirector_C::Start_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreeperWoodsMissionIntro.SequenceDirector_C.Start Music");

	USequenceDirector_C_Start_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

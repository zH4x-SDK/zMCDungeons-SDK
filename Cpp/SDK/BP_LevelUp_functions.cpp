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

// Function BP_LevelUp.BP_LevelUp_C.ReceiveBeginPlay
// ()
void ABP_LevelUp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LevelUp.BP_LevelUp_C.ReceiveBeginPlay");

	ABP_LevelUp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LevelUp.BP_LevelUp_C.ReceiveTick
// ()
void ABP_LevelUp_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LevelUp.BP_LevelUp_C.ReceiveTick");

	ABP_LevelUp_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LevelUp.BP_LevelUp_C.ExecuteUbergraph_BP_LevelUp
// ()
void ABP_LevelUp_C::ExecuteUbergraph_BP_LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LevelUp.BP_LevelUp_C.ExecuteUbergraph_BP_LevelUp");

	ABP_LevelUp_C_ExecuteUbergraph_BP_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

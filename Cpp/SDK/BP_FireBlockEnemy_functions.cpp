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

// Function BP_FireBlockEnemy.BP_FireBlockEnemy_C.ReceiveBeginPlay
// ()
void ABP_FireBlockEnemy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlockEnemy.BP_FireBlockEnemy_C.ReceiveBeginPlay");

	ABP_FireBlockEnemy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FireBlockEnemy.BP_FireBlockEnemy_C.ExecuteUbergraph_BP_FireBlockEnemy
// ()
void ABP_FireBlockEnemy_C::ExecuteUbergraph_BP_FireBlockEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlockEnemy.BP_FireBlockEnemy_C.ExecuteUbergraph_BP_FireBlockEnemy");

	ABP_FireBlockEnemy_C_ExecuteUbergraph_BP_FireBlockEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_WoodenChest_Reward.BP_WoodenChest_Reward_C.ReceiveBeginPlay
// ()
void ABP_WoodenChest_Reward_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodenChest_Reward.BP_WoodenChest_Reward_C.ReceiveBeginPlay");

	ABP_WoodenChest_Reward_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WoodenChest_Reward.BP_WoodenChest_Reward_C.ExecuteUbergraph_BP_WoodenChest_Reward
// ()
void ABP_WoodenChest_Reward_C::ExecuteUbergraph_BP_WoodenChest_Reward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodenChest_Reward.BP_WoodenChest_Reward_C.ExecuteUbergraph_BP_WoodenChest_Reward");

	ABP_WoodenChest_Reward_C_ExecuteUbergraph_BP_WoodenChest_Reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

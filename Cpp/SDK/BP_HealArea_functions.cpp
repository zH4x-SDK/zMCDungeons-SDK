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

// Function BP_HealArea.BP_HealArea_C.ReceiveBeginPlay
// ()
void ABP_HealArea_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealArea.BP_HealArea_C.ReceiveBeginPlay");

	ABP_HealArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HealArea.BP_HealArea_C.ExecuteUbergraph_BP_HealArea
// ()
void ABP_HealArea_C::ExecuteUbergraph_BP_HealArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HealArea.BP_HealArea_C.ExecuteUbergraph_BP_HealArea");

	ABP_HealArea_C_ExecuteUbergraph_BP_HealArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

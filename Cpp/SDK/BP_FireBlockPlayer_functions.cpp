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

// Function BP_FireBlockPlayer.BP_FireBlockPlayer_C.ReceiveBeginPlay
// ()
void ABP_FireBlockPlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlockPlayer.BP_FireBlockPlayer_C.ReceiveBeginPlay");

	ABP_FireBlockPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FireBlockPlayer.BP_FireBlockPlayer_C.ExecuteUbergraph_BP_FireBlockPlayer
// ()
void ABP_FireBlockPlayer_C::ExecuteUbergraph_BP_FireBlockPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBlockPlayer.BP_FireBlockPlayer_C.ExecuteUbergraph_BP_FireBlockPlayer");

	ABP_FireBlockPlayer_C_ExecuteUbergraph_BP_FireBlockPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

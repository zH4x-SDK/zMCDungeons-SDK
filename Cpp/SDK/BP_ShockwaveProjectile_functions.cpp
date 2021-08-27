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

// Function BP_ShockwaveProjectile.BP_ShockwaveProjectile_C.ReceiveBeginPlay
// ()
void ABP_ShockwaveProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShockwaveProjectile.BP_ShockwaveProjectile_C.ReceiveBeginPlay");

	ABP_ShockwaveProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ShockwaveProjectile.BP_ShockwaveProjectile_C.ExecuteUbergraph_BP_ShockwaveProjectile
// ()
void ABP_ShockwaveProjectile_C::ExecuteUbergraph_BP_ShockwaveProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShockwaveProjectile.BP_ShockwaveProjectile_C.ExecuteUbergraph_BP_ShockwaveProjectile");

	ABP_ShockwaveProjectile_C_ExecuteUbergraph_BP_ShockwaveProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_TormentProjectile.BP_TormentProjectile_C.OnLifetimeThresholdReached
// ()
void ABP_TormentProjectile_C::OnLifetimeThresholdReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TormentProjectile.BP_TormentProjectile_C.OnLifetimeThresholdReached");

	ABP_TormentProjectile_C_OnLifetimeThresholdReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TormentProjectile.BP_TormentProjectile_C.ProcessHit
// ()
void ABP_TormentProjectile_C::ProcessHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TormentProjectile.BP_TormentProjectile_C.ProcessHit");

	ABP_TormentProjectile_C_ProcessHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TormentProjectile.BP_TormentProjectile_C.OnProjectileReset
// ()
void ABP_TormentProjectile_C::OnProjectileReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TormentProjectile.BP_TormentProjectile_C.OnProjectileReset");

	ABP_TormentProjectile_C_OnProjectileReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TormentProjectile.BP_TormentProjectile_C.OnProjectileLaunch
// ()
void ABP_TormentProjectile_C::OnProjectileLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TormentProjectile.BP_TormentProjectile_C.OnProjectileLaunch");

	ABP_TormentProjectile_C_OnProjectileLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TormentProjectile.BP_TormentProjectile_C.ExecuteUbergraph_BP_TormentProjectile
// ()
void ABP_TormentProjectile_C::ExecuteUbergraph_BP_TormentProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TormentProjectile.BP_TormentProjectile_C.ExecuteUbergraph_BP_TormentProjectile");

	ABP_TormentProjectile_C_ExecuteUbergraph_BP_TormentProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

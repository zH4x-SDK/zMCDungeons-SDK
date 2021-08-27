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

// Function BP_Projectile.BP_Projectile_C.GetHitEffectParticleSystem
// ()
void ABP_Projectile_C::GetHitEffectParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile.BP_Projectile_C.GetHitEffectParticleSystem");

	ABP_Projectile_C_GetHitEffectParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile.BP_Projectile_C.SpawnHitEffect
// ()
void ABP_Projectile_C::SpawnHitEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile.BP_Projectile_C.SpawnHitEffect");

	ABP_Projectile_C_SpawnHitEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile.BP_Projectile_C.ReceiveBeginPlay
// ()
void ABP_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile.BP_Projectile_C.ReceiveBeginPlay");

	ABP_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile.BP_Projectile_C.ProcessHit
// ()
void ABP_Projectile_C::ProcessHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile.BP_Projectile_C.ProcessHit");

	ABP_Projectile_C_ProcessHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Projectile.BP_Projectile_C.ExecuteUbergraph_BP_Projectile
// ()
void ABP_Projectile_C::ExecuteUbergraph_BP_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile.BP_Projectile_C.ExecuteUbergraph_BP_Projectile");

	ABP_Projectile_C_ExecuteUbergraph_BP_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

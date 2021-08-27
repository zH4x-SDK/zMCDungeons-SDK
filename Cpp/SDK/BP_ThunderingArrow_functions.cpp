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

// Function BP_ThunderingArrow.BP_ThunderingArrow_C.OnProjectileReset
// ()
void ABP_ThunderingArrow_C::OnProjectileReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThunderingArrow.BP_ThunderingArrow_C.OnProjectileReset");

	ABP_ThunderingArrow_C_OnProjectileReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ThunderingArrow.BP_ThunderingArrow_C.OnProjectileLaunch
// ()
void ABP_ThunderingArrow_C::OnProjectileLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThunderingArrow.BP_ThunderingArrow_C.OnProjectileLaunch");

	ABP_ThunderingArrow_C_OnProjectileLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ThunderingArrow.BP_ThunderingArrow_C.ExecuteUbergraph_BP_ThunderingArrow
// ()
void ABP_ThunderingArrow_C::ExecuteUbergraph_BP_ThunderingArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThunderingArrow.BP_ThunderingArrow_C.ExecuteUbergraph_BP_ThunderingArrow");

	ABP_ThunderingArrow_C_ExecuteUbergraph_BP_ThunderingArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

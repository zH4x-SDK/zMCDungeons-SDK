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

// Function BP_Soul.BP_Soul_C.OnShouldAbsorb
// ()
void ABP_Soul_C::OnShouldAbsorb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Soul.BP_Soul_C.OnShouldAbsorb");

	ABP_Soul_C_OnShouldAbsorb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Soul.BP_Soul_C.OnLaunchSoul
// ()
void ABP_Soul_C::OnLaunchSoul()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Soul.BP_Soul_C.OnLaunchSoul");

	ABP_Soul_C_OnLaunchSoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Soul.BP_Soul_C.OnStopSoul
// ()
void ABP_Soul_C::OnStopSoul()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Soul.BP_Soul_C.OnStopSoul");

	ABP_Soul_C_OnStopSoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Soul.BP_Soul_C.ExecuteUbergraph_BP_Soul
// ()
void ABP_Soul_C::ExecuteUbergraph_BP_Soul()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Soul.BP_Soul_C.ExecuteUbergraph_BP_Soul");

	ABP_Soul_C_ExecuteUbergraph_BP_Soul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

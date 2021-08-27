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

// Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.SetPlayerHud
// ()
void UBP_GlobalHealthBar_C::SetPlayerHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.SetPlayerHud");

	UBP_GlobalHealthBar_C_SetPlayerHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.OnDeath
// ()
void UBP_GlobalHealthBar_C::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.OnDeath");

	UBP_GlobalHealthBar_C_OnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.ReceiveEndPlay
// ()
void UBP_GlobalHealthBar_C::ReceiveEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.ReceiveEndPlay");

	UBP_GlobalHealthBar_C_ReceiveEndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.OnAlive
// ()
void UBP_GlobalHealthBar_C::OnAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.OnAlive");

	UBP_GlobalHealthBar_C_OnAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.ExecuteUbergraph_BP_GlobalHealthBar
// ()
void UBP_GlobalHealthBar_C::ExecuteUbergraph_BP_GlobalHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalHealthBar.BP_GlobalHealthBar_C.ExecuteUbergraph_BP_GlobalHealthBar");

	UBP_GlobalHealthBar_C_ExecuteUbergraph_BP_GlobalHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

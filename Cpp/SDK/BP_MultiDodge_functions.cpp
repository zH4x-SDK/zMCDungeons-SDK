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

// Function BP_MultiDodge.BP_MultiDodge_C.OnDodgeCounterIncreased
// ()
void UBP_MultiDodge_C::OnDodgeCounterIncreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiDodge.BP_MultiDodge_C.OnDodgeCounterIncreased");

	UBP_MultiDodge_C_OnDodgeCounterIncreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MultiDodge.BP_MultiDodge_C.OnDodgeCounterDecreased
// ()
void UBP_MultiDodge_C::OnDodgeCounterDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiDodge.BP_MultiDodge_C.OnDodgeCounterDecreased");

	UBP_MultiDodge_C_OnDodgeCounterDecreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MultiDodge.BP_MultiDodge_C.ExecuteUbergraph_BP_MultiDodge
// ()
void UBP_MultiDodge_C::ExecuteUbergraph_BP_MultiDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MultiDodge.BP_MultiDodge_C.ExecuteUbergraph_BP_MultiDodge");

	UBP_MultiDodge_C_ExecuteUbergraph_BP_MultiDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

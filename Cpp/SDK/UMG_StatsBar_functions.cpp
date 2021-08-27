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

// Function UMG_StatsBar.UMG_StatsBar_C.SetProgress
// ()
void UUMG_StatsBar_C::SetProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatsBar.UMG_StatsBar_C.SetProgress");

	UUMG_StatsBar_C_SetProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StatsBar.UMG_StatsBar_C.PreConstruct
// ()
void UUMG_StatsBar_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatsBar.UMG_StatsBar_C.PreConstruct");

	UUMG_StatsBar_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_StatsBar.UMG_StatsBar_C.ExecuteUbergraph_UMG_StatsBar
// ()
void UUMG_StatsBar_C::ExecuteUbergraph_UMG_StatsBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_StatsBar.UMG_StatsBar_C.ExecuteUbergraph_UMG_StatsBar");

	UUMG_StatsBar_C_ExecuteUbergraph_UMG_StatsBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

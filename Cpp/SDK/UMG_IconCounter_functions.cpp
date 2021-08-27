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

// Function UMG_IconCounter.UMG_IconCounter_C.SetCounter
// ()
void UUMG_IconCounter_C::SetCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_IconCounter.UMG_IconCounter_C.SetCounter");

	UUMG_IconCounter_C_SetCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IconCounter.UMG_IconCounter_C.PreConstruct
// ()
void UUMG_IconCounter_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_IconCounter.UMG_IconCounter_C.PreConstruct");

	UUMG_IconCounter_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_IconCounter.UMG_IconCounter_C.ExecuteUbergraph_UMG_IconCounter
// ()
void UUMG_IconCounter_C::ExecuteUbergraph_UMG_IconCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_IconCounter.UMG_IconCounter_C.ExecuteUbergraph_UMG_IconCounter");

	UUMG_IconCounter_C_ExecuteUbergraph_UMG_IconCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

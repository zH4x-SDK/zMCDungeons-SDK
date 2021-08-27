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

// Function UMG_BorderGradient.UMG_BorderGradient_C.PreConstruct
// ()
void UUMG_BorderGradient_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BorderGradient.UMG_BorderGradient_C.PreConstruct");

	UUMG_BorderGradient_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_BorderGradient.UMG_BorderGradient_C.ExecuteUbergraph_UMG_BorderGradient
// ()
void UUMG_BorderGradient_C::ExecuteUbergraph_UMG_BorderGradient()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_BorderGradient.UMG_BorderGradient_C.ExecuteUbergraph_UMG_BorderGradient");

	UUMG_BorderGradient_C_ExecuteUbergraph_UMG_BorderGradient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UMG_RotatableGradient.UMG_RotatableGradient_C.PreConstruct
// ()
void UUMG_RotatableGradient_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RotatableGradient.UMG_RotatableGradient_C.PreConstruct");

	UUMG_RotatableGradient_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_RotatableGradient.UMG_RotatableGradient_C.ExecuteUbergraph_UMG_RotatableGradient
// ()
void UUMG_RotatableGradient_C::ExecuteUbergraph_UMG_RotatableGradient()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RotatableGradient.UMG_RotatableGradient_C.ExecuteUbergraph_UMG_RotatableGradient");

	UUMG_RotatableGradient_C_ExecuteUbergraph_UMG_RotatableGradient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

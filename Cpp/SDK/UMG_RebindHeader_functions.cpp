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

// Function UMG_RebindHeader.UMG_RebindHeader_C.PreConstruct
// ()
void UUMG_RebindHeader_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RebindHeader.UMG_RebindHeader_C.PreConstruct");

	UUMG_RebindHeader_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_RebindHeader.UMG_RebindHeader_C.ExecuteUbergraph_UMG_RebindHeader
// ()
void UUMG_RebindHeader_C::ExecuteUbergraph_UMG_RebindHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_RebindHeader.UMG_RebindHeader_C.ExecuteUbergraph_UMG_RebindHeader");

	UUMG_RebindHeader_C_ExecuteUbergraph_UMG_RebindHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

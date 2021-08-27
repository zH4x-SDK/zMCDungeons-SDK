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

// Function UMG_SlotSelectedBlock.UMG_SlotSelectedBlock_C.PreConstruct
// ()
void UUMG_SlotSelectedBlock_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SlotSelectedBlock.UMG_SlotSelectedBlock_C.PreConstruct");

	UUMG_SlotSelectedBlock_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_SlotSelectedBlock.UMG_SlotSelectedBlock_C.ExecuteUbergraph_UMG_SlotSelectedBlock
// ()
void UUMG_SlotSelectedBlock_C::ExecuteUbergraph_UMG_SlotSelectedBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SlotSelectedBlock.UMG_SlotSelectedBlock_C.ExecuteUbergraph_UMG_SlotSelectedBlock");

	UUMG_SlotSelectedBlock_C_ExecuteUbergraph_UMG_SlotSelectedBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

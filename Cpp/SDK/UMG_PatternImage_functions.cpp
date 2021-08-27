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

// Function UMG_PatternImage.UMG_PatternImage_C.PreConstruct
// ()
void UUMG_PatternImage_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PatternImage.UMG_PatternImage_C.PreConstruct");

	UUMG_PatternImage_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_PatternImage.UMG_PatternImage_C.ExecuteUbergraph_UMG_PatternImage
// ()
void UUMG_PatternImage_C::ExecuteUbergraph_UMG_PatternImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PatternImage.UMG_PatternImage_C.ExecuteUbergraph_UMG_PatternImage");

	UUMG_PatternImage_C_ExecuteUbergraph_UMG_PatternImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

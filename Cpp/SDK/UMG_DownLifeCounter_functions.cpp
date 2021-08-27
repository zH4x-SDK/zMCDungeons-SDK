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

// Function UMG_DownLifeCounter.UMG_DownLifeCounter_C.OnSetVisualLives
// ()
void UUMG_DownLifeCounter_C::OnSetVisualLives()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DownLifeCounter.UMG_DownLifeCounter_C.OnSetVisualLives");

	UUMG_DownLifeCounter_C_OnSetVisualLives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DownLifeCounter.UMG_DownLifeCounter_C.ExecuteUbergraph_UMG_DownLifeCounter
// ()
void UUMG_DownLifeCounter_C::ExecuteUbergraph_UMG_DownLifeCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DownLifeCounter.UMG_DownLifeCounter_C.ExecuteUbergraph_UMG_DownLifeCounter");

	UUMG_DownLifeCounter_C_ExecuteUbergraph_UMG_DownLifeCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

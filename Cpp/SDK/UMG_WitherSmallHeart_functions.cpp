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

// Function UMG_WitherSmallHeart.UMG_WitherSmallHeart_C.ApplyDamagePop
// ()
void UUMG_WitherSmallHeart_C::ApplyDamagePop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WitherSmallHeart.UMG_WitherSmallHeart_C.ApplyDamagePop");

	UUMG_WitherSmallHeart_C_ApplyDamagePop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_WitherSmallHeart.UMG_WitherSmallHeart_C.OnWitherFractionChanged
// ()
void UUMG_WitherSmallHeart_C::OnWitherFractionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WitherSmallHeart.UMG_WitherSmallHeart_C.OnWitherFractionChanged");

	UUMG_WitherSmallHeart_C_OnWitherFractionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

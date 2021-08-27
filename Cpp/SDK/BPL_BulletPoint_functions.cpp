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

// Function BPL_BulletPoint.BPL_BulletPoint_C.ShouldBulletPointShowEnchantment
// ()
void UBPL_BulletPoint_C::ShouldBulletPointShowEnchantment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_BulletPoint.BPL_BulletPoint_C.ShouldBulletPointShowEnchantment");

	UBPL_BulletPoint_C_ShouldBulletPointShowEnchantment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_BulletPoint.BPL_BulletPoint_C.ShouldBulletPointShowLevel
// ()
void UBPL_BulletPoint_C::ShouldBulletPointShowLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_BulletPoint.BPL_BulletPoint_C.ShouldBulletPointShowLevel");

	UBPL_BulletPoint_C_ShouldBulletPointShowLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_BulletPoint.BPL_BulletPoint_C.GetBulletIconTexture
// ()
void UBPL_BulletPoint_C::GetBulletIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_BulletPoint.BPL_BulletPoint_C.GetBulletIconTexture");

	UBPL_BulletPoint_C_GetBulletIconTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

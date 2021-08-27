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

// Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetLevelNumeral
// ()
void UBPL_UIEnchantments_C::GetLevelNumeral()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetLevelNumeral");

	UBPL_UIEnchantments_C_GetLevelNumeral_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetEnchantmentRarityName
// ()
void UBPL_UIEnchantments_C::GetEnchantmentRarityName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetEnchantmentRarityName");

	UBPL_UIEnchantments_C_GetEnchantmentRarityName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetEnchantmentRarityDarkTextShadowColor
// ()
void UBPL_UIEnchantments_C::GetEnchantmentRarityDarkTextShadowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIEnchantments.BPL_UIEnchantments_C.GetEnchantmentRarityDarkTextShadowColor");

	UBPL_UIEnchantments_C_GetEnchantmentRarityDarkTextShadowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

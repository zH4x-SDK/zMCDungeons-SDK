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

// Function UMG_MobEnchantment.UMG_MobEnchantment_C.UpdateGraphics
// ()
void UUMG_MobEnchantment_C::UpdateGraphics()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MobEnchantment.UMG_MobEnchantment_C.UpdateGraphics");

	UUMG_MobEnchantment_C_UpdateGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MobEnchantment.UMG_MobEnchantment_C.SetEnchantmentType
// ()
void UUMG_MobEnchantment_C::SetEnchantmentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MobEnchantment.UMG_MobEnchantment_C.SetEnchantmentType");

	UUMG_MobEnchantment_C_SetEnchantmentType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

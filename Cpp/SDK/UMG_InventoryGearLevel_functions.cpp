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

// Function UMG_InventoryGearLevel.UMG_InventoryGearLevel_C.SetYourValue
// ()
void UUMG_InventoryGearLevel_C::SetYourValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGearLevel.UMG_InventoryGearLevel_C.SetYourValue");

	UUMG_InventoryGearLevel_C_SetYourValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryGearLevel.UMG_InventoryGearLevel_C.SetComparedValue
// ()
void UUMG_InventoryGearLevel_C::SetComparedValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryGearLevel.UMG_InventoryGearLevel_C.SetComparedValue");

	UUMG_InventoryGearLevel_C_SetComparedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

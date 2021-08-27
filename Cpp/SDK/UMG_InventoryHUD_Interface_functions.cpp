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

// Function UMG_InventoryHUD_Interface.UMG_InventoryHUD_Interface_C.IsInventoryOpenCall
// ()
void UUMG_InventoryHUD_Interface_C::IsInventoryOpenCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryHUD_Interface.UMG_InventoryHUD_Interface_C.IsInventoryOpenCall");

	UUMG_InventoryHUD_Interface_C_IsInventoryOpenCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_InventoryHUD_Interface.UMG_InventoryHUD_Interface_C.ChangePlayerCall
// ()
void UUMG_InventoryHUD_Interface_C::ChangePlayerCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_InventoryHUD_Interface.UMG_InventoryHUD_Interface_C.ChangePlayerCall");

	UUMG_InventoryHUD_Interface_C_ChangePlayerCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

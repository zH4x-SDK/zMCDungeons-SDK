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

// Function UMG_SmallGearNotificationText.UMG_SmallGearNotificationText_C.SetPickupText
// ()
void UUMG_SmallGearNotificationText_C::SetPickupText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_SmallGearNotificationText.UMG_SmallGearNotificationText_C.SetPickupText");

	UUMG_SmallGearNotificationText_C_SetPickupText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

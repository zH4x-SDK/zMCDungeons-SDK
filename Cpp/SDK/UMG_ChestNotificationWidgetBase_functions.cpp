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

// Function UMG_ChestNotificationWidgetBase.UMG_ChestNotificationWidgetBase_C.RebindLootUnlocker
// ()
void UUMG_ChestNotificationWidgetBase_C::RebindLootUnlocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ChestNotificationWidgetBase.UMG_ChestNotificationWidgetBase_C.RebindLootUnlocker");

	UUMG_ChestNotificationWidgetBase_C_RebindLootUnlocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

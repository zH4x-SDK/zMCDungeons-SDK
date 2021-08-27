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

// Function UMG_MissionNotificationWidgetBase.UMG_MissionNotificationWidgetBase_C.SetPlayerController
// ()
void UUMG_MissionNotificationWidgetBase_C::SetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MissionNotificationWidgetBase.UMG_MissionNotificationWidgetBase_C.SetPlayerController");

	UUMG_MissionNotificationWidgetBase_C_SetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MissionNotificationWidgetBase.UMG_MissionNotificationWidgetBase_C.SetOverrideVisible
// ()
void UUMG_MissionNotificationWidgetBase_C::SetOverrideVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MissionNotificationWidgetBase.UMG_MissionNotificationWidgetBase_C.SetOverrideVisible");

	UUMG_MissionNotificationWidgetBase_C_SetOverrideVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.FindFreeArmorPropertyNotification
// ()
void UUMG_ArmorPropertyNotificationList_C::FindFreeArmorPropertyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.FindFreeArmorPropertyNotification");

	UUMG_ArmorPropertyNotificationList_C_FindFreeArmorPropertyNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.FindComboArmorPropertyNotificationWidget
// ()
void UUMG_ArmorPropertyNotificationList_C::FindComboArmorPropertyNotificationWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.FindComboArmorPropertyNotificationWidget");

	UUMG_ArmorPropertyNotificationList_C_FindComboArmorPropertyNotificationWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.TriggerArmorPropertyTypeNotification
// ()
void UUMG_ArmorPropertyNotificationList_C::TriggerArmorPropertyTypeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C.TriggerArmorPropertyTypeNotification");

	UUMG_ArmorPropertyNotificationList_C_TriggerArmorPropertyTypeNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

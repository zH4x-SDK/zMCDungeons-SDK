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

// Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.FindFreeEnchantmentNotification
// ()
void UUMG_EnchantmentNotificationList_C::FindFreeEnchantmentNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.FindFreeEnchantmentNotification");

	UUMG_EnchantmentNotificationList_C_FindFreeEnchantmentNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.FindComboEnchantmentNotificationWidget
// ()
void UUMG_EnchantmentNotificationList_C::FindComboEnchantmentNotificationWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.FindComboEnchantmentNotificationWidget");

	UUMG_EnchantmentNotificationList_C_FindComboEnchantmentNotificationWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.TriggerEnchantmentTypeNotification
// ()
void UUMG_EnchantmentNotificationList_C::TriggerEnchantmentTypeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C.TriggerEnchantmentTypeNotification");

	UUMG_EnchantmentNotificationList_C_TriggerEnchantmentTypeNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Name: DBZKakarot, Version: 1.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C
// 0x0000
class UUMG_EnchantmentNotificationList_C : public UUMG_NotificationList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentNotificationList.UMG_EnchantmentNotificationList_C");
		return ptr;
	}



	void FindFreeEnchantmentNotification();
	void FindComboEnchantmentNotificationWidget();
	void TriggerEnchantmentTypeNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

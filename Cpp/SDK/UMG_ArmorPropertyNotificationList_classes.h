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

// WidgetBlueprintGeneratedClass UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C
// 0x0000
class UUMG_ArmorPropertyNotificationList_C : public UUMG_NotificationList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ArmorPropertyNotificationList.UMG_ArmorPropertyNotificationList_C");
		return ptr;
	}



	void FindFreeArmorPropertyNotification();
	void FindComboArmorPropertyNotificationWidget();
	void TriggerArmorPropertyTypeNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

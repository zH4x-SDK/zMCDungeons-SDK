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

// WidgetBlueprintGeneratedClass UMG_NotificationList.UMG_NotificationList_C
// 0x0000
class UUMG_NotificationList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NotificationList.UMG_NotificationList_C");
		return ptr;
	}



	void SetHorizontalLayout();
	void CreateStatusWidget();
	void GetNotificationWidgets();
	void FindAvailableNotificationWidget();
	void PreConstruct();
	void ConstructStatusWidgetEvent();
	void ExecuteUbergraph_UMG_NotificationList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

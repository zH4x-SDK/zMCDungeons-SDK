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

// WidgetBlueprintGeneratedClass UMG_PickedUpGearEventNotificationWidget.UMG_PickedUpGearEventNotificationWidget_C
// 0x0000
class UUMG_PickedUpGearEventNotificationWidget_C : public UUMG_NotificationWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PickedUpGearEventNotificationWidget.UMG_PickedUpGearEventNotificationWidget_C");
		return ptr;
	}



	void SetItemInfo();
	void Construct();
	void OnInitialized();
	void ResetAnimation();
	void ExecuteUbergraph_UMG_PickedUpGearEventNotificationWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

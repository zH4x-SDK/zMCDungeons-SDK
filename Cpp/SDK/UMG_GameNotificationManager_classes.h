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

// WidgetBlueprintGeneratedClass UMG_GameNotificationManager.UMG_GameNotificationManager_C
// 0x0000
class UUMG_GameNotificationManager_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GameNotificationManager.UMG_GameNotificationManager_C");
		return ptr;
	}



	void GetOrAddNotification();
	void GetNotification();
	void AddOtherGearPickupNotification();
	void AddSelfGearPickupNotification();
	void AddPlayerNotification();
	void AddEventNotification();
	void RemoveNotification();
	void AddNotificationToVerticalBox();
	void Construct();
	void PlayerJoin();
	void PlayerLeft();
	void ExecuteUbergraph_UMG_GameNotificationManager();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

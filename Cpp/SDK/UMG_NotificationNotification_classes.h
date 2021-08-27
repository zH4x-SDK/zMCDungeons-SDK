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

// WidgetBlueprintGeneratedClass UMG_NotificationNotification.UMG_NotificationNotification_C
// 0x0000
class UUMG_NotificationNotification_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NotificationNotification.UMG_NotificationNotification_C");
		return ptr;
	}



	void SetCountdown();
	void OnRequestingLevelChanged();
	void SetLobbyActor();
	void SetShowNotification();
	void Construct();
	void Tick();
	void ExecuteUbergraph_UMG_NotificationNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

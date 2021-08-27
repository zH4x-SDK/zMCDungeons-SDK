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

// WidgetBlueprintGeneratedClass UMG_GameplayEffectNotificationList.UMG_GameplayEffectNotificationList_C
// 0x0000
class UUMG_GameplayEffectNotificationList_C : public UUMG_NotificationList_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GameplayEffectNotificationList.UMG_GameplayEffectNotificationList_C");
		return ptr;
	}



	void UpdateEffectStatusNotification();
	void OnGameplayEffectUIStackCountChanged();
	void OnGameplayEffectUIRemoved();
	void OnGameplayEffectUIAdded();
	void DeactivateEffectStatusNotification();
	void SetPlayerCharacterInternal();
	void FindFreeEffectNotification();
	void FindGameplayEffectNotificationWidget();
	void ActivateEffectStatusNotification();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_GameplayEffectNotificationList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

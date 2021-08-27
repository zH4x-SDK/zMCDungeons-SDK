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

// WidgetBlueprintGeneratedClass UMG_LocalNotifications.UMG_LocalNotifications_C
// 0x0000
class UUMG_LocalNotifications_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocalNotifications.UMG_LocalNotifications_C");
		return ptr;
	}



	void OnPawnPossessed();
	void OnArmorPropertyTriggered();
	void SetPlayerController();
	void OnItemPickedUp();
	void OnEnchantmentTriggered();
	void SetPlayerCharacter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_LocalNotifications();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

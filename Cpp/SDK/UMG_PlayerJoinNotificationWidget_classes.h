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

// WidgetBlueprintGeneratedClass UMG_PlayerJoinNotificationWidget.UMG_PlayerJoinNotificationWidget_C
// 0x0000
class UUMG_PlayerJoinNotificationWidget_C : public UUMG_NotificationWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerJoinNotificationWidget.UMG_PlayerJoinNotificationWidget_C");
		return ptr;
	}



	void SetPortraitID();
	void GetOpenedText();
	void SetPortrait();
	void OnLoaded_5E570D71459058104904ADBB9764BE15();
	void Construct();
	void ResetAnimation();
	void StartNotification();
	void ExecuteUbergraph_UMG_PlayerJoinNotificationWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

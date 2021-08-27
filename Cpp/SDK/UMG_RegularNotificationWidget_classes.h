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

// WidgetBlueprintGeneratedClass UMG_RegularNotificationWidget.UMG_RegularNotificationWidget_C
// 0x0000
class UUMG_RegularNotificationWidget_C : public UUMG_NotificationWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RegularNotificationWidget.UMG_RegularNotificationWidget_C");
		return ptr;
	}



	void Construct();
	void ResetAnimation();
	void ExecuteUbergraph_UMG_RegularNotificationWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

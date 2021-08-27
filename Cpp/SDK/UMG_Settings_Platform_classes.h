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

// WidgetBlueprintGeneratedClass UMG_Settings_Platform.UMG_Settings_Platform_C
// 0x0000
class UUMG_Settings_Platform_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Settings_Platform.UMG_Settings_Platform_C");
		return ptr;
	}



	void GetHintText();
	void GetPlatformHintText();
	void UsePlatformSpecificText();
	void GetPlatformDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

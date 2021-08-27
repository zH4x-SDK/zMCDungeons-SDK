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

// WidgetBlueprintGeneratedClass UMG_GearNotificationIcon.UMG_GearNotificationIcon_C
// 0x0000
class UUMG_GearNotificationIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GearNotificationIcon.UMG_GearNotificationIcon_C");
		return ptr;
	}



	void SetGilded();
	void SetIcon();
	void SetRarity();
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_UMG_GearNotificationIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

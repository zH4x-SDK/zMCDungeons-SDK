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

// WidgetBlueprintGeneratedClass UMG_NotificationWidget.UMG_NotificationWidget_C
// 0x0000
class UUMG_NotificationWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NotificationWidget.UMG_NotificationWidget_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void ResetAnimation();
	void Set_Timer();
	void RemoveWidget();
	void OnInitialized();
	void ExecuteUbergraph_UMG_NotificationWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

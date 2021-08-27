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

// WidgetBlueprintGeneratedClass UMG_StatusNotification.UMG_StatusNotification_C
// 0x0000
class UUMG_StatusNotification_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_StatusNotification.UMG_StatusNotification_C");
		return ptr;
	}



	void SetHorizontalLayout();
	void IsNotificationOpen();
	void OnVisibleChanged();
	void GetActivationTime();
	void OnActivationExpired();
	void OnShow();
	void SetOpened();
	void IsFree();
	void UpdateActivationTime();
	void OnHide();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

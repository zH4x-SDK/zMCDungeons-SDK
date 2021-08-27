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

// WidgetBlueprintGeneratedClass UMG_PlayerDownSkullAnnouncement.UMG_PlayerDownSkullAnnouncement_C
// 0x0000
class UUMG_PlayerDownSkullAnnouncement_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerDownSkullAnnouncement.UMG_PlayerDownSkullAnnouncement_C");
		return ptr;
	}



	void IsAnnouncing();
	void SetPlayerCharacterInternal();
	void SetPlayerCharacter();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_4();
	void ExecuteUbergraph_UMG_PlayerDownSkullAnnouncement();
	void OnAnnouncingChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

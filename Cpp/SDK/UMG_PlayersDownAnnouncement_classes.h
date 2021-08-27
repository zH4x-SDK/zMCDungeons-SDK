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

// WidgetBlueprintGeneratedClass UMG_PlayersDownAnnouncement.UMG_PlayersDownAnnouncement_C
// 0x0000
class UUMG_PlayersDownAnnouncement_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayersDownAnnouncement.UMG_PlayersDownAnnouncement_C");
		return ptr;
	}



	void OnAnnouncePlayerDown();
	void RefreshAnyVisible();
	void SetAnyVisible();
	void GetOrCreateSkullAnnouncement();
	void AnnouncePlayerDown();
	void Construct();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UMG_PlayersDownAnnouncement();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

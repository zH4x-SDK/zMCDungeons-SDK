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

// WidgetBlueprintGeneratedClass UMG_DownStatusWidget.UMG_DownStatusWidget_C
// 0x0000
class UUMG_DownStatusWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DownStatusWidget.UMG_DownStatusWidget_C");
		return ptr;
	}



	void DoFadeIn();
	void SetCountingDown();
	void UpdateShowNightWarning();
	void CountLivingLocalPlayers();
	void UpdateGraphics();
	void SetFlipped();
	void FetchCountingDownStatus();
	void UpdateCountingDownStatus();
	void SetSuddenDeathActor();
	void PreConstruct();
	void Construct();
	void SetPlayerCharacter();
	void BndEvt__UMG_NightHurtsIn_K2Node_ComponentBoundEvent_0_OnSuddenDeathChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_DownStatusWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

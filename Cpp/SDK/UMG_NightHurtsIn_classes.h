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

// WidgetBlueprintGeneratedClass UMG_NightHurtsIn.UMG_NightHurtsIn_C
// 0x0000
class UUMG_NightHurtsIn_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NightHurtsIn.UMG_NightHurtsIn_C");
		return ptr;
	}



	void SetCompact();
	void SuddenDeathCountingDownStopped();
	void IsSuddenDeathActive();
	void SetSecondsUntilSuddenDeath();
	void SuddenDeathStarted();
	void SuddenDeathCountingDown();
	void SuddenDeathEnded();
	void RefreshCounter();
	void SetRemainingTime();
	void SetSuddenDeath();
	void RefreshGraphics();
	void PreConstruct();
	void Construct();
	void Tick();
	void WidgetAnimationEvt_PhantomsStarted_K2Node_WidgetAnimationEvent_1();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_NightHurtsIn();
	void OnSuddenDeathChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

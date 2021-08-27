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

// WidgetBlueprintGeneratedClass UMG_MissionSelectMapWidgetBase.UMG_MissionSelectMapWidgetBase_C
// 0x0000
class UUMG_MissionSelectMapWidgetBase_C : public UDungeonsVisiblityRootWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MissionSelectMapWidgetBase.UMG_MissionSelectMapWidgetBase_C");
		return ptr;
	}



	void CallSelectedDifficultyChangedDelegate();
	void GetSelectedDifficulty();
	void GetPlayerController();
	void SetPlayerController();
	void SetSelectedMission();
	void OnSelectedDifficultyChanged_base__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

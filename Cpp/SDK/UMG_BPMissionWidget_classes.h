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

// WidgetBlueprintGeneratedClass UMG_BPMissionWidget.UMG_BPMissionWidget_C
// 0x0000
class UUMG_BPMissionWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_BPMissionWidget.UMG_BPMissionWidget_C");
		return ptr;
	}



	void RefreshObjectiveCount();
	void TriggerNewMissionAnimation();
	void PlayTextToSpeech();
	void Get_Presentation_Handler();
	void Trigger_Objective_Intro_Music();
	void Switch_to_Next_Mission();
	void On_Objective_Completed_Audio();
	void Play_New_Objective_Audio();
	void Update_Mission_Objective();
	void Get_Objective_Animation();
	void Play_New_Objective_Animation();
	void SetNewMissionObjective();
	void Get_MissionCount_Text();
	void Get_Mission_Progress_Handler();
	void On_New_Objective_Started();
	void Destruct();
	void On_Objective_Updated();
	void trigger_intro_music();
	void start_objective_music();
	void trigger_outro_music();
	void Construct();
	void ExecuteUbergraph_UMG_BPMissionWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

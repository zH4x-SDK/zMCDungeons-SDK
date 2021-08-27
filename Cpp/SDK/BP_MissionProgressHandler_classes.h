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

// BlueprintGeneratedClass BP_MissionProgressHandler.BP_MissionProgressHandler_C
// 0x0000
class ABP_MissionProgressHandler_C : public AMissionProgressHandler
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionProgressHandler.BP_MissionProgressHandler_C");
		return ptr;
	}



	void OnRep_UpdateUI();
	void ReceiveBeginPlay();
	void OnMissionFinished();
	void PlayMissionEndVideo();
	void OnVideoEnd();
	void OnShowMissionVictory();
	void RequestMoveToLobby();
	void ExecuteUbergraph_BP_MissionProgressHandler();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

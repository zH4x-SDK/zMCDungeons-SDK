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

// BlueprintGeneratedClass BP_AudioMusicManager.BP_AudioMusicManager_C
// 0x0000
class ABP_AudioMusicManager_C : public AAudioMusicManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioMusicManager.BP_AudioMusicManager_C");
		return ptr;
	}



	void Play_Music();
	void OnDoorExitVisible();
	void OnLevelIntroEnd();
	void Start_VO();
	void PopAmbienceMusic();
	void Stop_VO();
	void PlayLevelMusicTrack();
	void Stop_Ambience_SFX();
	void Trigger_Ambience_SFX();
	void Set_Sound_Mix();
	void Trigger_Sound_Cue();
	void PlayMusicTrack();
	void ReceiveInitialize_2();
	void ExecuteUbergraph_BP_AudioMusicManager();
	void Music_Timeout_Finished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

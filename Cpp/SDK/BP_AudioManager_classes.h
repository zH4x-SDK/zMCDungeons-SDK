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

// BlueprintGeneratedClass BP_AudioManager.BP_AudioManager_C
// 0x0000
class ABP_AudioManager_C : public AAudioManager
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioManager.BP_AudioManager_C");
		return ptr;
	}



	void FQueueMusicTrack();
	void FQueueCurrentMusicTrack();
	void FPlayMusicTrack();
	void FFadeOutCurrentMusicTrack();
	void CrossfadeAndPlayNewTrack_Legacy();
	void UserConstructionScript();
	void PlayAndCrossfadeNewAmbienceTrack();
	void FadeOutCurrentAmbienceTrack();
	void ActivateNewAmbienceReverb();
	void ActivateSubmixes();
	void ToggleMuteEnvironmenSFX();
	void PopAmbienceReverb();
	void triggerLevelMusic_legacy();
	void UpdateCurrentTrack_PlaybackPosition_OnTick();
	void MusicManager_Beginplay();
	void MusicManager_Ontick();
	void FadeOutCurrentMusicTrack_Legacy();
	void ResetRandomizeIntensityOnCurrentMusicTrackEnd_DoOnceGate();
	void TriggerNewObjectiveMusicTrack();
	void triggerObjectiveCompletedMusic();
	void ToggleMuteMusic();
	void PrintDebugString();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void ActivatePersistentReverb();
	void ActivatePersistentSubmixes();
	void PlayLevelFinishAudio();
	void ActivateSoundMixes();
	void ReceiveEndPlay();
	void DeactivateSoundMixes();
	void Initiate_audio_settings();
	void PrepareForLevelLoad();
	void LoadingScreenStarted();
	void LoadingScreenTornDown();
	void OverrideMasterSoundClass();
	void OverrideMusicSoundClass();
	void OverrideSFXSoundClass();
	void OverrideAmbientSoundClass();
	void OverrideDialogueSoundClass();
	void OverrideVideoSoundClass();
	void ExecuteUbergraph_BP_AudioManager();
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class TextToSpeech.BufferPlayerSynthComponent
// 0x0000
class UBufferPlayerSynthComponent : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TextToSpeech.BufferPlayerSynthComponent");
		return ptr;
	}



	void IsFinished();
	void GetPlaybackPercentage();
};

// Class TextToSpeech.TextToSpeechBPLibrary
// 0x0000
class UTextToSpeechBPLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TextToSpeech.TextToSpeechBPLibrary");
		return ptr;
	}



	void StopTextToSpeech();
	void SkipTextToSpeech();
	void SetTextToSpeechEnabled();
	void PrioritiseLatestTextToSpeech();
	void PlayTextToSpeech();
	void IsTextToSpeechSupported();
	void IsTextToSpeechPlaying();
	void GetTextToSpeechEnabled();
	void GetTextQueue();
	void GetStartDelayMax();
	void GetStartDelayCurrent();
	void GetLastPlayed();
	void GetCanInterrupt();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

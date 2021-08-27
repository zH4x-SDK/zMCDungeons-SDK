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

// Class Synthesis.ModularSynthPresetBank
// 0x0000
class UModularSynthPresetBank : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}



};

// Class Synthesis.ModularSynthLibrary
// 0x0000
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}



	void AddModularSynthPresetToBankAsset();
};

// Class Synthesis.ModularSynthComponent
// 0x0000
class UModularSynthComponent : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}



	void SetSynthPreset();
	void SetSustainGain();
	void SetStereoDelayWetlevel();
	void SetStereoDelayTime();
	void SetStereoDelayRatio();
	void SetStereoDelayMode();
	void SetStereoDelayIsEnabled();
	void SetStereoDelayFeedback();
	void SetSpread();
	void SetReleaseTime();
	void SetPortamento();
	void SetPitchBend();
	void SetPan();
	void SetOscType();
	void SetOscSync();
	void SetOscSemitones();
	void SetOscPulsewidth();
	void SetOscOctave();
	void SetOscGainMod();
	void SetOscGain();
	void SetOscFrequencyMod();
	void SetOscCents();
	void SetModEnvSustainGain();
	void SetModEnvReleaseTime();
	void SetModEnvPatch();
	void SetModEnvInvert();
	void SetModEnvDepth();
	void SetModEnvDecayTime();
	void SetModEnvBiasPatch();
	void SetModEnvBiasInvert();
	void SetModEnvAttackTime();
	void SetLFOType();
	void SetLFOPatch();
	void SetLFOMode();
	void SetLFOGainMod();
	void SetLFOGain();
	void SetLFOFrequencyMod();
	void SetLFOFrequency();
	void SetGainDb();
	void SetFilterType();
	void SetFilterQMod();
	void SetFilterQ();
	void SetFilterFrequencyMod();
	void SetFilterFrequency();
	void SetFilterAlgorithm();
	void SetEnableUnison();
	void SetEnableRetrigger();
	void SetEnablePolyphony();
	void SetEnablePatch();
	void SetEnableLegato();
	void SetDecayTime();
	void SetChorusFrequency();
	void SetChorusFeedback();
	void SetChorusEnabled();
	void SetChorusDepth();
	void SetAttackTime();
	void NoteOn();
	void NoteOff();
	void CreatePatch();
};

// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0000
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectChorusPreset
// 0x0000
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0000
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.EnvelopeFollowerListener
// 0x0000
class UEnvelopeFollowerListener : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}



};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0000
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}



	void UnregisterEnvelopeFollowerListener();
	void SetSettings();
	void RegisterEnvelopeFollowerListener();
};

// Class Synthesis.SourceEffectEQPreset
// 0x0000
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectFilterPreset
// 0x0000
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0000
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectPannerPreset
// 0x0000
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectPhaserPreset
// 0x0000
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectRingModulationPreset
// 0x0000
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0000
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0000
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0000
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SubmixEffectDelayPreset
// 0x0000
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}



	void SetSettings();
	void SetInterpolationTime();
	void SetDelay();
	void GetMaxDelayInMilliseconds();
};

// Class Synthesis.SubmixEffectFilterPreset
// 0x0000
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}



	void SetSettings();
	void SetFilterType();
	void SetFilterQMod();
	void SetFilterQ();
	void SetFilterCutoffFrequencyMod();
	void SetFilterCutoffFrequency();
	void SetFilterAlgorithm();
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0000
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}



	void SetSettings();
};

// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0000
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}



	void SetTap();
	void SetSettings();
	void SetInterpolationTime();
	void RemoveTap();
	void GetTapIds();
	void GetTap();
	void GetMaxDelayInMilliseconds();
	void AddTap();
};

// Class Synthesis.Synth2DSlider
// 0x0000
class USynth2DSlider : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}



	void SetValue();
	void SetStepSize();
	void SetSliderHandleColor();
	void SetLocked();
	void SetIndentHandle();
	void GetValue();
};

// Class Synthesis.GranularSynth
// 0x0000
class UGranularSynth : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}



	void SetSustainGain();
	void SetSoundWave();
	void SetScrubMode();
	void SetReleaseTimeMsec();
	void SetPlayheadTime();
	void SetPlaybackSpeed();
	void SetGrainVolume();
	void SetGrainsPerSecond();
	void SetGrainProbability();
	void SetGrainPitch();
	void SetGrainPan();
	void SetGrainEnvelopeType();
	void SetGrainDuration();
	void SetDecayTime();
	void SetAttackTime();
	void NoteOn();
	void NoteOff();
	void IsLoaded();
	void GetSampleDuration();
	void GetCurrentPlayheadTime();
};

// Class Synthesis.SynthSamplePlayer
// 0x0000
class USynthSamplePlayer : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}



	void SetSoundWave();
	void SetScrubTimeWidth();
	void SetScrubMode();
	void SetPitch();
	void SeekToTime();
	void IsLoaded();
	void GetSampleDuration();
	void GetCurrentPlaybackProgressTime();
	void GetCurrentPlaybackProgressPercent();
};

// Class Synthesis.SynthKnob
// 0x0000
class USynthKnob : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}



	void SetValue();
	void SetStepSize();
	void SetLocked();
	void GetValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

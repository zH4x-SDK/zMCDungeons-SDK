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

// Class SoundUtilities.SoundSimple
// 0x0000
class USoundSimple : public USoundBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}



};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}



	void GetPitchScaleFromMIDIPitch();
	void GetMIDIPitchFromFrequency();
	void GetFrequencyFromMIDIPitch();
	void GetBeatTempo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

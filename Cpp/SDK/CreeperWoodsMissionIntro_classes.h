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

// BlueprintGeneratedClass CreeperWoodsMissionIntro.SequenceDirector_C
// 0x0000
class USequenceDirector_C : public ULevelSequenceDirector
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CreeperWoodsMissionIntro.SequenceDirector_C");
		return ptr;
	}



	void Stop_SFX();
	void Start_VO();
	void Start_SFX();
	void Start_Music();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

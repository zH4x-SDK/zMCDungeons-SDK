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

// BlueprintGeneratedClass BPL_UIDifficulty.BPL_UIDifficulty_C
// 0x0000
class UBPL_UIDifficulty_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIDifficulty.BPL_UIDifficulty_C");
		return ptr;
	}



	void GetEndlessStruggleDisplayRules();
	void GetDifficultyUnlockRequirement();
	void GetMapDifficultyChangerIconTexture();
	void GetDifficultyColor();
	void GetDifficultyScreenTexture();
	void GetThreatLevelNumeral();
	void getThreatLevelDisplayName();
	void GetThreatLevelSound();
	void GetLifeCountRule();
	void GetDifficultyYouDiedTexture();
	void GetDifficultyUnlockIconTexture();
	void GetDifficultySound();
	void GetDifficultyCounterMapDoneTexture();
	void GetDifficultyIconMapDoneTexture();
	void GetDifficultyDisplayRules();
	void getDifficultyDisplayName();
	void GetDifficultyCounterMapTexture();
	void GetDifficultyIconMapTexture();
	void GetDifficultyIconInspectorTexture();
	void GetDifficultyIconNotificationTexture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

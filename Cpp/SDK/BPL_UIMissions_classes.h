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

// BlueprintGeneratedClass BPL_UIMissions.BPL_UIMissions_C
// 0x0000
class UBPL_UIMissions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIMissions.BPL_UIMissions_C");
		return ptr;
	}



	void IsEndlessStruggleUnlocked();
	void GetHighestCompletedEndlessStruggle();
	void GetMissionStoryContents();
	void GetMissionStoryTitle();
	void GetMissionMapDisplayName();
	void GetMissionDisplayName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

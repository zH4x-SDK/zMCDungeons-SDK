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

// BlueprintGeneratedClass BPL_PlayerCharacters.BPL_PlayerCharacters_C
// 0x0000
class UBPL_PlayerCharacters_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_PlayerCharacters.BPL_PlayerCharacters_C");
		return ptr;
	}



	void CountLocalPlayerCharacters();
	void GetPlayerCharacterByPlayerId();
	void CountRemotePlayerCharacters();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_MobCharacter.BP_MobCharacter_C
// 0x0000
class ABP_MobCharacter_C : public AMobCharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MobCharacter.BP_MobCharacter_C");
		return ptr;
	}



	void GetPropLifetimeSeconds();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

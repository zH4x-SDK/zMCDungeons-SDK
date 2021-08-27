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

// AnimBlueprintGeneratedClass A_PlayerView_Animation.A_PlayerView_Animation_C
// 0x0000
class UA_PlayerView_Animation_C : public UA_Player_Animation_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass A_PlayerView_Animation.A_PlayerView_Animation_C");
		return ptr;
	}



	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_A_PlayerView_Animation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

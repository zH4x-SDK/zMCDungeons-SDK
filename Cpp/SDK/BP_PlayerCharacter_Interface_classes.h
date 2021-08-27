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

// BlueprintGeneratedClass BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C
// 0x0000
class UBP_PlayerCharacter_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C");
		return ptr;
	}



	void ViewTargetStartedCall();
	void GetLovikaSpringArmTargetLength();
	void GetCamera();
	void ManageCoopCamera();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

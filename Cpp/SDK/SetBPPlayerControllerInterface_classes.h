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

// BlueprintGeneratedClass SetBPPlayerControllerInterface.SetBPPlayerControllerInterface_C
// 0x0000
class USetBPPlayerControllerInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SetBPPlayerControllerInterface.SetBPPlayerControllerInterface_C");
		return ptr;
	}



	void SetPlayerController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

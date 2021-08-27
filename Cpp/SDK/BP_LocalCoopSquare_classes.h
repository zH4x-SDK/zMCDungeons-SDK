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

// BlueprintGeneratedClass BP_LocalCoopSquare.BP_LocalCoopSquare_C
// 0x0000
class ABP_LocalCoopSquare_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocalCoopSquare.BP_LocalCoopSquare_C");
		return ptr;
	}



	void SetPlayerColor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C
// 0x0000
class UAnimNS_BabyGhast_ShyOut_C : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNS_BabyGhast_ShyOut.AnimNS_BabyGhast_ShyOut_C");
		return ptr;
	}



	void Received_NotifyBegin();
	void Received_NotifyEnd();
	void Received_NotifyTick();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

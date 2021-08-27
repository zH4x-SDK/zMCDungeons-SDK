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

// BlueprintGeneratedClass AnimNS_RewardChest_RemoveShine.AnimNS_RewardChest_RemoveShine_C
// 0x0000
class UAnimNS_RewardChest_RemoveShine_C : public UAnimNotifyState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNS_RewardChest_RemoveShine.AnimNS_RewardChest_RemoveShine_C");
		return ptr;
	}



	void Received_NotifyBegin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

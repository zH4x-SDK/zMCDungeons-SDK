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

// BlueprintGeneratedClass BP_ObjectiveRing.BP_ObjectiveRing_C
// 0x0000
class ABP_ObjectiveRing_C : public AObjectiveRing
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectiveRing.BP_ObjectiveRing_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick();
	void ExecuteUbergraph_BP_ObjectiveRing();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

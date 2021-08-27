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

// BlueprintGeneratedClass BP_PlayerFireworksArrow.BP_PlayerFireworksArrow_C
// 0x0000
class ABP_PlayerFireworksArrow_C : public ABP_BowArrow_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerFireworksArrow.BP_PlayerFireworksArrow_C");
		return ptr;
	}



	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void OnProjectileReset();
	void OnProjectileLaunch();
	void UniqueAnimationStart();
	void UniqueAnimationStop();
	void ExecuteUbergraph_BP_PlayerFireworksArrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

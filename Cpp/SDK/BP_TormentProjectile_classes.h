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

// BlueprintGeneratedClass BP_TormentProjectile.BP_TormentProjectile_C
// 0x0000
class ABP_TormentProjectile_C : public ATormentProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TormentProjectile.BP_TormentProjectile_C");
		return ptr;
	}



	void OnLifetimeThresholdReached();
	void ProcessHit();
	void OnProjectileReset();
	void OnProjectileLaunch();
	void ExecuteUbergraph_BP_TormentProjectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

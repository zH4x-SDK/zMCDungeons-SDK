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

// BlueprintGeneratedClass BP_Projectile.BP_Projectile_C
// 0x0000
class ABP_Projectile_C : public AArrow
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile.BP_Projectile_C");
		return ptr;
	}



	void GetHitEffectParticleSystem();
	void SpawnHitEffect();
	void ReceiveBeginPlay();
	void ProcessHit();
	void ExecuteUbergraph_BP_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Arrow.BP_Arrow_C
// 0x0000
class ABP_Arrow_C : public ABP_Projectile_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Arrow.BP_Arrow_C");
		return ptr;
	}



	void GetHitEffectRotator();
	void GetTargetShouldAttachParticleSystem();
	void GetTargetAttachedLifetime();
	void SpawnHitEffect();
	void OnProjectileReset();
	void OnProjectileLaunch();
	void ToggleCharged();
	void ReceiveBeginPlay();
	void ToggleMagical();
	void OnProjectileStartsSinkingEvent();
	void ExecuteUbergraph_BP_Arrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

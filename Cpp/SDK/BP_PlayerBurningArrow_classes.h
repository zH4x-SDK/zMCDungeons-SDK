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

// BlueprintGeneratedClass BP_PlayerBurningArrow.BP_PlayerBurningArrow_C
// 0x0000
class ABP_PlayerBurningArrow_C : public ABP_BowArrow_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerBurningArrow.BP_PlayerBurningArrow_C");
		return ptr;
	}



	void DoLocalTerrainHitEffects();
	void DoExplosion();
	void DoFireSplash();
	void ProcessHit();
	void OnProjectileReset();
	void OnProjectileLaunch();
	void ExecuteUbergraph_BP_PlayerBurningArrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

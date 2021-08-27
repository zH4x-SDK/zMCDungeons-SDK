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

// BlueprintGeneratedClass BP_ShockwaveProjectile.BP_ShockwaveProjectile_C
// 0x0000
class ABP_ShockwaveProjectile_C : public AShockWaveProjectile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShockwaveProjectile.BP_ShockwaveProjectile_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShockwaveProjectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

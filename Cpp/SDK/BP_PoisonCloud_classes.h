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

// BlueprintGeneratedClass BP_PoisonCloud.BP_PoisonCloud_C
// 0x0000
class ABP_PoisonCloud_C : public APoisonCloud
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PoisonCloud.BP_PoisonCloud_C");
		return ptr;
	}



	void SpawnImpactEffect();
	void GetImpactEffect();
	void OnCloudStarted();
	void ExecuteUbergraph_BP_PoisonCloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

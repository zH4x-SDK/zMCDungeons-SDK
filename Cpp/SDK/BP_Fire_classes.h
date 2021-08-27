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

// BlueprintGeneratedClass BP_Fire.BP_Fire_C
// 0x0000
class ABP_Fire_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fire.BP_Fire_C");
		return ptr;
	}



	void Flicker();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Fire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_FireBlockEnemy.BP_FireBlockEnemy_C
// 0x0000
class ABP_FireBlockEnemy_C : public AFireBlock
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireBlockEnemy.BP_FireBlockEnemy_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FireBlockEnemy();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

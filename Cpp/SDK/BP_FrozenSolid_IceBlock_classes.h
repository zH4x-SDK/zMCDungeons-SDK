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

// BlueprintGeneratedClass BP_FrozenSolid_IceBlock.BP_FrozenSolid_IceBlock_C
// 0x0000
class ABP_FrozenSolid_IceBlock_C : public AFrozenSolidIceCubeActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrozenSolid_IceBlock.BP_FrozenSolid_IceBlock_C");
		return ptr;
	}



	void CrackIceblock();
	void ReceiveBeginPlay();
	void ReceiveEndPlay();
	void ExecuteUbergraph_BP_FrozenSolid_IceBlock();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

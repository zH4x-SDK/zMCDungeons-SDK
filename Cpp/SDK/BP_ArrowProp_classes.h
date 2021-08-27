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

// BlueprintGeneratedClass BP_ArrowProp.BP_ArrowProp_C
// 0x0000
class ABP_ArrowProp_C : public AArrowProp
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArrowProp.BP_ArrowProp_C");
		return ptr;
	}



	void OnBeginPulse();
	void OnExplode();
	void IncreaseTempo();
	void ExecuteUbergraph_BP_ArrowProp();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

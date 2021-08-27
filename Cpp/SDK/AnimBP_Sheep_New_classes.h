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

// AnimBlueprintGeneratedClass AnimBP_Sheep_New.AnimBP_Sheep_New_C
// 0x0000
class UAnimBP_Sheep_New_C : public UCharacterAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Sheep_New.AnimBP_Sheep_New_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Sheep_New_AnimGraphNode_TransitionResult_6C5E3ECF493943488B783E9CDF559D3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Sheep_New_AnimGraphNode_TransitionResult_D68F2F7141D645E59785BBB0E7AA50E2();
	void ExecuteUbergraph_AnimBP_Sheep_New();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

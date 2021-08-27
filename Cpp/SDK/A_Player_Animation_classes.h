#pragma once

// Name: MCDungeons, Version: 1.0.3


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

// AnimBlueprintGeneratedClass A_Player_Animation.A_Player_Animation_C
// 0x0000
class UA_Player_Animation_C : public UCharacterAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass A_Player_Animation.A_Player_Animation_C");
		return ptr;
	}



	void Hurt();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_B0B870B746BC4C3EB46282851BEA6CA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_B7AA66984FE7F0976F40FB9626691481();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_D7725B124927F4DB69D466922485714B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_56743596495A971A1C85CFBB3BB19B01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_0FB0C7F04222A563F3CD7C83F1DC6987();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_BlendSpacePlayer_D39BB1C3460DBFB8FC9F819771AD9EEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_05A370C64205AA83B05138BE7E2CC6C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_LayeredBoneBlend_12F6C9374BB5951724B662A6C4344F53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_D70ECF92476BBF0FFCB384A39E5F4978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_093A8B4649B936853EE1FF9690B1BCA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_A_Player_Animation_AnimGraphNode_TransitionResult_B3A4E5C2400ACED7B061528744C78FC0();
	void BlueprintInitializeAnimation();
	void AnimNotify_step();
	void ExecuteUbergraph_A_Player_Animation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

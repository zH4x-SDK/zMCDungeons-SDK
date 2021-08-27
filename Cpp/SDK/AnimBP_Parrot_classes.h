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

// AnimBlueprintGeneratedClass AnimBP_Parrot.AnimBP_Parrot_C
// 0x0000
class UAnimBP_Parrot_C : public UCharacterAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Parrot.AnimBP_Parrot_C");
		return ptr;
	}



	void ExecuteUbergraph_AnimBP_Parrot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

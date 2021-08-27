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

// BlueprintGeneratedClass DungeonsAnimInstance.DungeonsAnimInstance_C
// 0x0000
class UDungeonsAnimInstance_C : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DungeonsAnimInstance.DungeonsAnimInstance_C");
		return ptr;
	}



	void AttackBegin__DelegateSignature();
	void Step__DelegateSignature();
	void AttackHit__DelegateSignature();
	void AttackComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

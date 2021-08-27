// Name: DBZKakarot, Version: 1.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackBegin__DelegateSignature
// ()
void UDungeonsAnimInstance_C::AttackBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackBegin__DelegateSignature");

	UDungeonsAnimInstance_C_AttackBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonsAnimInstance.DungeonsAnimInstance_C.Step__DelegateSignature
// ()
void UDungeonsAnimInstance_C::Step__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonsAnimInstance.DungeonsAnimInstance_C.Step__DelegateSignature");

	UDungeonsAnimInstance_C_Step__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackHit__DelegateSignature
// ()
void UDungeonsAnimInstance_C::AttackHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackHit__DelegateSignature");

	UDungeonsAnimInstance_C_AttackHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackComplete__DelegateSignature
// ()
void UDungeonsAnimInstance_C::AttackComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonsAnimInstance.DungeonsAnimInstance_C.AttackComplete__DelegateSignature");

	UDungeonsAnimInstance_C_AttackComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

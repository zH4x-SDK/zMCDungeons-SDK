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

// Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.ViewTargetStartedCall
// ()
void UBP_PlayerCharacter_Interface_C::ViewTargetStartedCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.ViewTargetStartedCall");

	UBP_PlayerCharacter_Interface_C_ViewTargetStartedCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.GetLovikaSpringArmTargetLength
// ()
void UBP_PlayerCharacter_Interface_C::GetLovikaSpringArmTargetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.GetLovikaSpringArmTargetLength");

	UBP_PlayerCharacter_Interface_C_GetLovikaSpringArmTargetLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.GetCamera
// ()
void UBP_PlayerCharacter_Interface_C::GetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.GetCamera");

	UBP_PlayerCharacter_Interface_C_GetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.ManageCoopCamera
// ()
void UBP_PlayerCharacter_Interface_C::ManageCoopCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter_Interface.BP_PlayerCharacter_Interface_C.ManageCoopCamera");

	UBP_PlayerCharacter_Interface_C_ManageCoopCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

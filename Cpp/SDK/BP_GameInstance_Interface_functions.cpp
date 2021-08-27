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

// Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.GetCoopCameraActor
// ()
void UBP_GameInstance_Interface_C::GetCoopCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.GetCoopCameraActor");

	UBP_GameInstance_Interface_C_GetCoopCameraActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.DestroyCoopCameraActor
// ()
void UBP_GameInstance_Interface_C::DestroyCoopCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.DestroyCoopCameraActor");

	UBP_GameInstance_Interface_C_DestroyCoopCameraActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.CreateCoopCameraActor
// ()
void UBP_GameInstance_Interface_C::CreateCoopCameraActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.CreateCoopCameraActor");

	UBP_GameInstance_Interface_C_CreateCoopCameraActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.GetCoopCamera
// ()
void UBP_GameInstance_Interface_C::GetCoopCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance_Interface.BP_GameInstance_Interface_C.GetCoopCamera");

	UBP_GameInstance_Interface_C_GetCoopCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

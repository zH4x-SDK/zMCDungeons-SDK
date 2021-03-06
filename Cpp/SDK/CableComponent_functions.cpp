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

// Function CableComponent.CableComponent.SetAttachEndToComponent
// ()
void UCableComponent::SetAttachEndToComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	UCableComponent_SetAttachEndToComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.SetAttachEndTo
// ()
void UCableComponent::SetAttachEndTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	UCableComponent_SetAttachEndTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.GetCableParticleLocations
// ()
void UCableComponent::GetCableParticleLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.GetAttachedComponent
// ()
void UCableComponent::GetAttachedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CableComponent.CableComponent.GetAttachedActor
// ()
void UCableComponent::GetAttachedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	UCableComponent_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

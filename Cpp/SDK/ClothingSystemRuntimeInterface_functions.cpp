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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// ()
void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	UClothingSimulationInteractor_PhysicsAssetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// ()
void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	UClothingSimulationInteractor_ClothConfigUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

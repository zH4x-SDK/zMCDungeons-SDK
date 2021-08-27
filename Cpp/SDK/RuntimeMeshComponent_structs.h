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
// Enums
//---------------------------------------------------------------------------

// Enum RuntimeMeshComponent.ERuntimeMeshSetAction
enum class RuntimeMeshComponent_ERuntimeMeshSetAction : uint8_t
{
	ERuntimeMeshSetAction__Create  = 0,
	ERuntimeMeshSetAction__Update  = 1,
	ERuntimeMeshSetAction__Remove  = 2,
	ERuntimeMeshSetAction__None    = 3,
	ERuntimeMeshSetAction__ERuntimeMeshSetAction_MAX = 4,

};

// Enum RuntimeMeshComponent.ERuntimeMeshCollisionCookingMode
enum class RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode : uint8_t
{
	ERuntimeMeshCollisionCookingMode__CollisionPerformance = 0,
	ERuntimeMeshCollisionCookingMode__CookingPerformance = 1,
	ERuntimeMeshCollisionCookingMode__ERuntimeMeshCollisionCookingMode_MAX = 2,

};

// Enum RuntimeMeshComponent.EUpdateFrequency
enum class RuntimeMeshComponent_EUpdateFrequency : uint8_t
{
	EUpdateFrequency__Average      = 0,
	EUpdateFrequency__Frequent     = 1,
	EUpdateFrequency__Infrequent   = 2,
	EUpdateFrequency__EUpdateFrequency_MAX = 3,

};

// Enum RuntimeMeshComponent.ERuntimeMeshMobility
enum class RuntimeMeshComponent_ERuntimeMeshMobility : uint8_t
{
	ERuntimeMeshMobility__Movable  = 0,
	ERuntimeMeshMobility__Stationary = 1,
	ERuntimeMeshMobility__Static   = 2,
	ERuntimeMeshMobility__ERuntimeMeshMobility_MAX = 3,

};

// Enum RuntimeMeshComponent.ERuntimeMeshSlicerCapOption
enum class RuntimeMeshComponent_ERuntimeMeshSlicerCapOption : uint8_t
{
	ERuntimeMeshSlicerCapOption__NoCap = 0,
	ERuntimeMeshSlicerCapOption__CreateNewSectionForCap = 1,
	ERuntimeMeshSlicerCapOption__UseLastSectionForCap = 2,
	ERuntimeMeshSlicerCapOption__ERuntimeMeshSlicerCapOption_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RuntimeMeshComponent.RuntimeMeshBlueprintVertexSimple
// 0x0000
struct FRuntimeMeshBlueprintVertexSimple
{

};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshTangent
// 0x0000
struct FRuntimeMeshTangent
{

};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionCapsule
// 0x0000
struct FRuntimeMeshCollisionCapsule
{

};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionBox
// 0x0000
struct FRuntimeMeshCollisionBox
{

};

// ScriptStruct RuntimeMeshComponent.RuntimeMeshCollisionSphere
// 0x0000
struct FRuntimeMeshCollisionSphere
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

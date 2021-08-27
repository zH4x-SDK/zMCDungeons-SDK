﻿#pragma once

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

// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class GeometryCollectionSimulationCore_ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
	ECollisionTypeEnum__Chaos_Max  = 2,

};

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class GeometryCollectionSimulationCore_EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
	EEmissionPatternTypeEnum__Chaos_Max = 2,

};

// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class GeometryCollectionSimulationCore_EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
	EInitialVelocityTypeEnum__Chaos_Max = 2,

};

// Enum GeometryCollectionSimulationCore.EObjectTypeEnum
enum class GeometryCollectionSimulationCore_EObjectTypeEnum : uint8_t
{
	EObjectTypeEnum__Chaos_Object_Dynamic = 0,
	EObjectTypeEnum__Chaos_Object_Kinematic = 1,
	EObjectTypeEnum__Chaos_Object_Sleeping = 2,
	EObjectTypeEnum__Chaos_Max     = 3,

};

// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class GeometryCollectionSimulationCore_EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Cube = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet = 2,
	EImplicitTypeEnum__Chaos_Max   = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
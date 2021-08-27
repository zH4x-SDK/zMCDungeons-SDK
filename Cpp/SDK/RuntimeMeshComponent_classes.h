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

// Class RuntimeMeshComponent.RuntimeMesh
// 0x0000
class URuntimeMesh : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMesh");
		return ptr;
	}



	void UpdateMeshSectionPacked_Blueprint();
	void UpdateMeshSectionFromBuilder();
	void UpdateMeshSection_Blueprint();
	void ShouldSerializeMeshData();
	void SetShouldSerializeMeshData();
	void SetSectionTessellationTriangles();
	void SetSectionMaterial();
	void SetMeshSectionVisible();
	void SetMeshSectionCollisionEnabled();
	void SetMeshSectionCastsShadow();
	void SetMeshCollisionSection();
	void SetConvexCollisionSection();
	void SetCollisionUseComplexAsSimple();
	void SetCollisionUseAsyncCooking();
	void SetCollisionSpheres();
	void SetCollisionMode();
	void SetCollisionCapsules();
	void SetCollisionBoxes();
	void RemoveCollisionSphere();
	void RemoveCollisionCapsule();
	void RemoveCollisionBox();
	void IsMeshSectionVisible();
	void IsMeshSectionCollisionEnabled();
	void IsMeshSectionCastingShadows();
	void IsCollisionUsingComplexAsSimple();
	void IsCollisionUsingAsyncCooking();
	void IsAsyncCollisionCookingComplete();
	void GetSectionMaterial();
	void GetSectionIdFromCollisionFaceIndex();
	void GetSectionIdAndFaceIdFromCollisionFaceIndex();
	void GetSectionBoundingBox();
	void GetNumSections();
	void GetMaterialFromCollisionFaceIndex();
	void GetCollisionMode();
	void GetAvailableSectionIndex();
	void DoesSectionExist();
	void CreateMeshSectionPacked_Blueprint();
	void CreateMeshSectionFromBuilder();
	void CreateMeshSection_Blueprint();
	void CookCollisionNow();
	void ClearMeshSection();
	void ClearMeshCollisionSection();
	void ClearConvexCollisionSection();
	void ClearCollisionSpheres();
	void ClearCollisionCapsules();
	void ClearCollisionBoxes();
	void ClearAllMeshSections();
	void ClearAllMeshCollisionSections();
	void ClearAllConvexCollisionSections();
	void AddConvexCollisionSection();
	void AddCollisionSphere();
	void AddCollisionCapsule();
	void AddCollisionBox();
};

// Class RuntimeMeshComponent.RuntimeMeshActor
// 0x0000
class ARuntimeMeshActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshActor");
		return ptr;
	}



	void SetRuntimeMeshMobility();
	void GetRuntimeMeshMobility();
	void GenerateMeshes();
};

// Class RuntimeMeshComponent.RuntimeBlueprintMeshAccessor
// 0x0000
class URuntimeBlueprintMeshAccessor : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeBlueprintMeshAccessor");
		return ptr;
	}



};

// Class RuntimeMeshComponent.RuntimeBlueprintMeshBuilder
// 0x0000
class URuntimeBlueprintMeshBuilder : public URuntimeBlueprintMeshAccessor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeBlueprintMeshBuilder");
		return ptr;
	}



	void SetVertex();
	void SetUV();
	void SetTangents();
	void SetTangent();
	void SetPosition();
	void SetNumVertices();
	void SetNumIndices();
	void SetNormalTangent();
	void SetNormal();
	void SetIndex();
	void SetColor();
	void NumVertices();
	void NumUVChannels();
	void NumIndices();
	void IsUsingHighPrecisionUVs();
	void IsUsingHighPrecisionTangents();
	void IsUsing32BitIndices();
	void IsReadonly();
	void GetUV();
	void GetTangent();
	void GetPosition();
	void GetNormal();
	void GetIndex();
	void GetColor();
	void EmptyVertices();
	void EmptyIndices();
	void AddVertex();
	void AddTriangle();
	void AddIndex();
};

// Class RuntimeMeshComponent.RuntimeMeshBuilderFunctions
// 0x0000
class URuntimeMeshBuilderFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshBuilderFunctions");
		return ptr;
	}



	void MakeRuntimeMeshBuilder();
};

// Class RuntimeMeshComponent.RuntimeMeshComponent
// 0x0000
class URuntimeMeshComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshComponent");
		return ptr;
	}



	void UpdateMeshSectionPacked_Blueprint();
	void UpdateMeshSectionFromBuilder();
	void UpdateMeshSection_Blueprint();
	void ShouldSerializeMeshData();
	void SetShouldSerializeMeshData();
	void SetSectionMaterial();
	void SetRuntimeMeshMobility();
	void SetRuntimeMesh();
	void SetMeshSectionVisible();
	void SetMeshSectionPacked_Blueprint();
	void SetMeshSectionCollisionEnabled();
	void SetMeshSectionCastsShadow();
	void SetMeshSection_Blueprint();
	void SetMeshCollisionSection();
	void SetConvexCollisionSection();
	void SetCollisionUseComplexAsSimple();
	void SetCollisionUseAsyncCooking();
	void SetCollisionSpheres();
	void SetCollisionMode();
	void SetCollisionCapsules();
	void SetCollisionBoxes();
	void RemoveCollisionSphere();
	void RemoveCollisionCapsule();
	void RemoveCollisionBox();
	void IsMeshSectionVisible();
	void IsMeshSectionCollisionEnabled();
	void IsMeshSectionCastingShadows();
	void IsCollisionUsingComplexAsSimple();
	void IsCollisionUsingAsyncCooking();
	void IsAsyncCollisionCookingPending();
	void GetSectionMaterial();
	void GetSectionIdFromCollisionFaceIndex();
	void GetSectionIdAndFaceIdFromCollisionFaceIndex();
	void GetSectionBoundingBox();
	void GetRuntimeMeshMobility();
	void GetRuntimeMesh();
	void GetOrCreateRuntimeMesh();
	void GetNumSections();
	void GetAvailableSectionIndex();
	void DoesSectionExist();
	void CreateMeshSectionPacked_Blueprint();
	void CreateMeshSectionFromBuilder();
	void CreateMeshSection_Blueprint();
	void CookCollisionNow();
	void ClearMeshSection();
	void ClearMeshCollisionSection();
	void ClearConvexCollisionSection();
	void ClearCollisionSpheres();
	void ClearCollisionCapsules();
	void ClearCollisionBoxes();
	void ClearAllMeshSections();
	void ClearAllMeshCollisionSections();
	void ClearAllConvexCollisionSections();
	void AddConvexCollisionSection();
	void AddCollisionSphere();
	void AddCollisionCapsule();
	void AddCollisionBox();
};

// Class RuntimeMeshComponent.RuntimeMeshLibrary
// 0x0000
class URuntimeMeshLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshLibrary");
		return ptr;
	}



	void GetStaticMeshSectionPacked();
	void GetStaticMeshSection();
	void GenerateTessellationIndexBufferPacked();
	void GenerateTessellationIndexBuffer();
	void CopyStaticMeshToRuntimeMeshComponent();
	void CopyStaticMeshToRuntimeMesh();
	void CopyCollisionFromStaticMesh();
	void CalculateTangentsForMeshPacked();
	void CalculateTangentsForMesh();
};

// Class RuntimeMeshComponent.RuntimeMeshShapeGenerator
// 0x0000
class URuntimeMeshShapeGenerator : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshShapeGenerator");
		return ptr;
	}



	void CreateGridMeshTriangles();
	void CreateGridMeshPacked();
	void CreateGridMesh();
	void CreateBoxMeshPacked();
	void CreateBoxMesh();
	void ConvertQuadToTriangles();
};

// Class RuntimeMeshComponent.RuntimeMeshSlicer
// 0x0000
class URuntimeMeshSlicer : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RuntimeMeshComponent.RuntimeMeshSlicer");
		return ptr;
	}



	void SliceRuntimeMeshComponent();
	void SliceRuntimeMesh();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

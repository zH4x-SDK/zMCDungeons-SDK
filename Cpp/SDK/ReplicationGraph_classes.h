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

// Class ReplicationGraph.ReplicationGraph
// 0x0000
class UReplicationGraph : public UReplicationDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraph");
		return ptr;
	}



};

// Class ReplicationGraph.BasicReplicationGraph
// 0x0000
class UBasicReplicationGraph : public UReplicationGraph
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.BasicReplicationGraph");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode
// 0x0000
class UReplicationGraphNode : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x0000
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorList");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x0000
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x0000
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
// 0x0000
class UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x0000
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DormancyNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0000
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridCell");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x0000
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0000
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0000
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0000
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
		return ptr;
	}



};

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x0000
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.NetReplicationGraphConnection");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0000
class AReplicationGraphDebugActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphDebugActor");
		return ptr;
	}



	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass();
	void ServerSetCullDistanceForClass();
	void ServerSetConditionalActorBreakpoint();
	void ServerPrintAllActorInfo();
	void ServerCellInfo();
	void ClientCellInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

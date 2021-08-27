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

// BlueprintGeneratedClass BP_BubbleColumn_NoBase.BP_BubbleColumn_NoBase_C
// 0x0000
class ABP_BubbleColumn_NoBase_C : public ABubbleColumn
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BubbleColumn_NoBase.BP_BubbleColumn_NoBase_C");
		return ptr;
	}



	void RefreshRespawnEnabled();
	void EnableOxygenSourceComponent();
	void Enable();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorEndOverlap();
	void ReceiveActorBeginOverlap();
	void PlayerInVisibleRangeChanged();
	void OnRep_IsEnabled();
	void ExecuteUbergraph_BP_BubbleColumn_NoBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

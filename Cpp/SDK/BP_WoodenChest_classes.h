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

// BlueprintGeneratedClass BP_WoodenChest.BP_WoodenChest_C
// 0x0000
class ABP_WoodenChest_C : public ALootActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodenChest.BP_WoodenChest_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap();
	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void BndEvt__InteractableComp_K2Node_ComponentBoundEvent_0_OnInteract__DelegateSignature();
	void BndEvt__InteractableComp_K2Node_ComponentBoundEvent_1_OnHighlightBegin__DelegateSignature();
	void BndEvt__InteractableComp_K2Node_ComponentBoundEvent_2_OnInteracted__DelegateSignature();
	void EnableInteraction();
	void ExecuteUbergraph_BP_WoodenChest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

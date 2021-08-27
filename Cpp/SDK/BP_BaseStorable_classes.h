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

// BlueprintGeneratedClass BP_BaseStorable.BP_BaseStorable_C
// 0x0000
class ABP_BaseStorable_C : public AStorableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseStorable.BP_BaseStorable_C");
		return ptr;
	}



	void GetDimension();
	void UserConstructionScript();
	void OnLanded();
	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void BndEvt__ClickyComponent_K2Node_ComponentBoundEvent_0_OnHighlightBegin__DelegateSignature();
	void BndEvt__ClickyComponent_K2Node_ComponentBoundEvent_1_OnInteracted__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BaseStorable();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

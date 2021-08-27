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

// BlueprintGeneratedClass BP_3DEquippedItemRepresentations.BP_3DEquippedItemRepresentations_C
// 0x0000
class ABP_3DEquippedItemRepresentations_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_3DEquippedItemRepresentations.BP_3DEquippedItemRepresentations_C");
		return ptr;
	}



	void SetShowPetSceneComponent();
	void SetPetSceneComponent();
	void EnableItemTicks();
	void CountVisible3DItemRepresentations();
	void SetShowItemTypeSceneComponent();
	void SetItemTypeSceneComponent();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NewCharacterReset();
	void ExecuteUbergraph_BP_3DEquippedItemRepresentations();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

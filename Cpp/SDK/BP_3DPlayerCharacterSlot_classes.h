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

// BlueprintGeneratedClass BP_3DPlayerCharacterSlot.BP_3DPlayerCharacterSlot_C
// 0x0000
class ABP_3DPlayerCharacterSlot_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_3DPlayerCharacterSlot.BP_3DPlayerCharacterSlot_C");
		return ptr;
	}



	void GetSaveSlotActorForIndex();
	void OffsetIndexWrapped();
	void SetupCharacterFromIndex();
	void NewCharacterVisuals();
	void SetEnabled();
	void IsMainSaveSlotForPlayerController();
	void GetCamera();
	void GetCurrentPlayerCharacterSaveSlotActor();
	void GetPlayerControllerSlotIndex();
	void GetCurrentSlotIndex();
	void RefreshPlayerCharacterSaveSlotActor();
	void SetPlayerControllerAndSlotOffset();
	void Get3DPlayerCharacterRepresentation();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_3DPlayerCharacterSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

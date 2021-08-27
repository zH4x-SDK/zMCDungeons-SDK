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

// BlueprintGeneratedClass BP_DeluxeChest.BP_DeluxeChest_C
// 0x0000
class ABP_DeluxeChest_C : public ABP_FancyChest_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeluxeChest.BP_DeluxeChest_C");
		return ptr;
	}



	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap();
	void ReceiveTick();
	void ExecuteUbergraph_BP_DeluxeChest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

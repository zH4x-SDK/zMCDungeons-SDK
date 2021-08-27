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

// BlueprintGeneratedClass BP_FancyChest_Hidden.BP_FancyChest_Hidden_C
// 0x0000
class ABP_FancyChest_Hidden_C : public ABP_FancyChest_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FancyChest_Hidden.BP_FancyChest_Hidden_C");
		return ptr;
	}



	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__Secret_K2Node_ComponentBoundEvent_1_OnSecretFoundRecieved__DelegateSignature();
	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void ReceiveActorOnClicked();
	void ExecuteUbergraph_BP_FancyChest_Hidden();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

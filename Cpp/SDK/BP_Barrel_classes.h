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

// BlueprintGeneratedClass BP_Barrel.BP_Barrel_C
// 0x0000
class ABP_Barrel_C : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Barrel.BP_Barrel_C");
		return ptr;
	}



	void SetOnOff();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void ExecuteUbergraph_BP_Barrel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

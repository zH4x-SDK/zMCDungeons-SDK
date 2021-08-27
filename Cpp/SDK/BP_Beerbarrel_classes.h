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

// BlueprintGeneratedClass BP_Beerbarrel.BP_Beerbarrel_C
// 0x0000
class ABP_Beerbarrel_C : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Beerbarrel.BP_Beerbarrel_C");
		return ptr;
	}



	void SetOnOff();
	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void ExecuteUbergraph_BP_Beerbarrel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

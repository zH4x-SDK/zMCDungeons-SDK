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

// BlueprintGeneratedClass BP_BowArrow.BP_BowArrow_C
// 0x0000
class ABP_BowArrow_C : public ABP_Arrow_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BowArrow.BP_BowArrow_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ToggleCharged();
	void ExecuteUbergraph_BP_BowArrow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

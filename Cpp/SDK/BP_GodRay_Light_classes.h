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

// BlueprintGeneratedClass BP_GodRay_Light.BP_GodRay_Light_C
// 0x0000
class ABP_GodRay_Light_C : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GodRay_Light.BP_GodRay_Light_C");
		return ptr;
	}



	void PlayerEnteredVisibleRange();
	void PlayerLeftVisibleRange();
	void ExecuteUbergraph_BP_GodRay_Light();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_OxygenSourceComponent.BP_OxygenSourceComponent_C
// 0x0000
class ABP_OxygenSourceComponent_C : public AOxygenSourceComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OxygenSourceComponent.BP_OxygenSourceComponent_C");
		return ptr;
	}



	void EnableSound();
	void EnableMapPin();
	void Enable();
	void ExecuteUbergraph_BP_OxygenSourceComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

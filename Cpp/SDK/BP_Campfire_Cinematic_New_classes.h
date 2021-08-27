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

// BlueprintGeneratedClass BP_Campfire_Cinematic_New.BP_Campfire_Cinematic_New_C
// 0x0000
class ABP_Campfire_Cinematic_New_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campfire_Cinematic_New.BP_Campfire_Cinematic_New_C");
		return ptr;
	}



	void UserConstructionScript();
	void Flicker__FinishedFunc();
	void Flicker__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Campfire_Cinematic_New();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

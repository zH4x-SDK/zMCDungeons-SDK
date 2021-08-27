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

// BlueprintGeneratedClass BP_SunRotationPrameterController.BP_SunRotationPrameterController_C
// 0x0000
class ABP_SunRotationPrameterController_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunRotationPrameterController.BP_SunRotationPrameterController_C");
		return ptr;
	}



	void UpdateMaterialParameter();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SunRotationPrameterController();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

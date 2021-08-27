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

// BlueprintGeneratedClass BP_3DPetRepresentation.BP_3DPetRepresentation_C
// 0x0000
class UBP_3DPetRepresentation_C : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_3DPetRepresentation.BP_3DPetRepresentation_C");
		return ptr;
	}



	void GetPetName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

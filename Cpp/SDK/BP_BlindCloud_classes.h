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

// BlueprintGeneratedClass BP_BlindCloud.BP_BlindCloud_C
// 0x0000
class ABP_BlindCloud_C : public ABlindCloud
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlindCloud.BP_BlindCloud_C");
		return ptr;
	}



	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void ReceiveBeginPlay();
	void OnPlayerCharacterEnteredNonFriendlyCloud();
	void OnPlayerCharacterLeftNonFriendlyCloud();
	void ExecuteUbergraph_BP_BlindCloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

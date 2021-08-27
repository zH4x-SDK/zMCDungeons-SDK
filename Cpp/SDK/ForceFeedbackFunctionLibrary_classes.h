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

// BlueprintGeneratedClass ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C
// 0x0000
class UForceFeedbackFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForceFeedbackFunctionLibrary.ForceFeedbackFunctionLibrary_C");
		return ptr;
	}



	void SpawnForceFeedbackEffectAttached();
	void SpawnForceFeedbackEffectAtLocation();
	void StopForceFeedbackEffect();
	void PlayForceFeedbackEffect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

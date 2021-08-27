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

// BlueprintGeneratedClass BP_CloudEffectPlayer.BP_CloudEffectPlayer_C
// 0x0000
class ABP_CloudEffectPlayer_C : public ABP_FadeOutEffect_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CloudEffectPlayer.BP_CloudEffectPlayer_C");
		return ptr;
	}



	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void FadeIN__FinishedFunc();
	void FadeIN__UpdateFunc();
	void OnLifeSpanEnd();
	void ReceiveBeginPlay();
	void OnEffectReset();
	void ExecuteUbergraph_BP_CloudEffectPlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

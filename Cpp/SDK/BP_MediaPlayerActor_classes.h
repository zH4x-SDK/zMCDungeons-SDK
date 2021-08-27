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

// BlueprintGeneratedClass BP_MediaPlayerActor.BP_MediaPlayerActor_C
// 0x0000
class ABP_MediaPlayerActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MediaPlayerActor.BP_MediaPlayerActor_C");
		return ptr;
	}



	void CountBookers();
	void KeepBookingAlive();
	void ReleaseMediaStudio();
	void RequestMediaStudio();
	void UserConstructionScript();
	void ReceiveTick();
	void ExecuteUbergraph_BP_MediaPlayerActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

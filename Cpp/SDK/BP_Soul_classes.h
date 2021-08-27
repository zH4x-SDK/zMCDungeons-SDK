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

// BlueprintGeneratedClass BP_Soul.BP_Soul_C
// 0x0000
class ABP_Soul_C : public ASoul
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Soul.BP_Soul_C");
		return ptr;
	}



	void OnShouldAbsorb();
	void OnLaunchSoul();
	void OnStopSoul();
	void ExecuteUbergraph_BP_Soul();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

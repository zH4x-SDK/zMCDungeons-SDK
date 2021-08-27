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

// BlueprintGeneratedClass BP_GlobalHealthBar.BP_GlobalHealthBar_C
// 0x0000
class UBP_GlobalHealthBar_C : public UGlobalHealthBarComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GlobalHealthBar.BP_GlobalHealthBar_C");
		return ptr;
	}



	void SetPlayerHud();
	void OnDeath();
	void ReceiveEndPlay();
	void OnAlive();
	void ExecuteUbergraph_BP_GlobalHealthBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_ShockWebNode.BP_ShockWebNode_C
// 0x0000
class ABP_ShockWebNode_C : public AShockWebNodeActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShockWebNode.BP_ShockWebNode_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick();
	void OnBeamEnabled();
	void OnBeamDisabled();
	void OnDetached();
	void OnWillDestroy();
	void ExecuteUbergraph_BP_ShockWebNode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

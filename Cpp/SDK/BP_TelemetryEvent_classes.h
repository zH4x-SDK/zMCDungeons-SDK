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

// BlueprintGeneratedClass BP_TelemetryEvent.BP_TelemetryEvent_C
// 0x0000
class UBP_TelemetryEvent_C : public UTelemetryEventComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TelemetryEvent.BP_TelemetryEvent_C");
		return ptr;
	}



	void Trigger_Event();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Name: DBZKakarot, Version: 1.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TelemetryEvent.BP_TelemetryEvent_C.Trigger Event
// ()
void UBP_TelemetryEvent_C::Trigger_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryEvent.BP_TelemetryEvent_C.Trigger Event");

	UBP_TelemetryEvent_C_Trigger_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

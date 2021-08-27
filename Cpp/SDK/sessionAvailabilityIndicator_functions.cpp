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

// Function sessionAvailabilityIndicator.sessionAvailabilityIndicator_C.setAvailability
// ()
void UsessionAvailabilityIndicator_C::setAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function sessionAvailabilityIndicator.sessionAvailabilityIndicator_C.setAvailability");

	UsessionAvailabilityIndicator_C_setAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

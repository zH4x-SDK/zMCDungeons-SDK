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

// Function BP_ElytraLandMarker.BP_ElytraLandMarker_C.ReceiveTick
// ()
void ABP_ElytraLandMarker_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElytraLandMarker.BP_ElytraLandMarker_C.ReceiveTick");

	ABP_ElytraLandMarker_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElytraLandMarker.BP_ElytraLandMarker_C.ExecuteUbergraph_BP_ElytraLandMarker
// ()
void ABP_ElytraLandMarker_C::ExecuteUbergraph_BP_ElytraLandMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElytraLandMarker.BP_ElytraLandMarker_C.ExecuteUbergraph_BP_ElytraLandMarker");

	ABP_ElytraLandMarker_C_ExecuteUbergraph_BP_ElytraLandMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

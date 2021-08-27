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

// Function TargetClickedActor_Interface.TargetClickedActor_Interface_C.SetTargetActor
// ()
void UTargetClickedActor_Interface_C::SetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetClickedActor_Interface.TargetClickedActor_Interface_C.SetTargetActor");

	UTargetClickedActor_Interface_C_SetTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

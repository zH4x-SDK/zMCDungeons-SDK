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

// Function BP_MobCharacter.BP_MobCharacter_C.GetPropLifetimeSeconds
// ()
void ABP_MobCharacter_C::GetPropLifetimeSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MobCharacter.BP_MobCharacter_C.GetPropLifetimeSeconds");

	ABP_MobCharacter_C_GetPropLifetimeSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

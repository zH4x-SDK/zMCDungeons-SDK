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

// Function PlayerLightInterface.PlayerLightInterface_C.SetPlayerLight
// ()
void UPlayerLightInterface_C::SetPlayerLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerLightInterface.PlayerLightInterface_C.SetPlayerLight");

	UPlayerLightInterface_C_SetPlayerLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

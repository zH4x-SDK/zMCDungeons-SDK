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

// Function UIControlTypeInterface.UIControlTypeInterface_C.ControllerTypeChanged
// ()
void UUIControlTypeInterface_C::ControllerTypeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIControlTypeInterface.UIControlTypeInterface_C.ControllerTypeChanged");

	UUIControlTypeInterface_C_ControllerTypeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

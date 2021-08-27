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

// Function UIMouseInteractionInterface.UIMouseInteractionInterface_C.UpdateCursorHoverState
// ()
void UUIMouseInteractionInterface_C::UpdateCursorHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIMouseInteractionInterface.UIMouseInteractionInterface_C.UpdateCursorHoverState");

	UUIMouseInteractionInterface_C_UpdateCursorHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UIInputActionBindChangedHandler.UIInputActionBindChangedHandler_C.InputActionBindWasChanged
// ()
void UUIInputActionBindChangedHandler_C::InputActionBindWasChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIInputActionBindChangedHandler.UIInputActionBindChangedHandler_C.InputActionBindWasChanged");

	UUIInputActionBindChangedHandler_C_InputActionBindWasChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

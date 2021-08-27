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

// Function UMG_AddFriendError.UMG_AddFriendError_C.SetErrorMessage
// ()
void UUMG_AddFriendError_C::SetErrorMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AddFriendError.UMG_AddFriendError_C.SetErrorMessage");

	UUMG_AddFriendError_C_SetErrorMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

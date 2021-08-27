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

// Function UGlobalMessage.UGlobalMessage_C.GetMessage
// ()
void UUGlobalMessage_C::GetMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UGlobalMessage.UGlobalMessage_C.GetMessage");

	UUGlobalMessage_C_GetMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UGlobalMessage.UGlobalMessage_C.GetTitle
// ()
void UUGlobalMessage_C::GetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UGlobalMessage.UGlobalMessage_C.GetTitle");

	UUGlobalMessage_C_GetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

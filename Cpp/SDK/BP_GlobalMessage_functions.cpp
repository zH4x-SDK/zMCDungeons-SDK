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

// Function BP_GlobalMessage.BP_GlobalMessage_C.GetTitle
// ()
void UBP_GlobalMessage_C::GetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalMessage.BP_GlobalMessage_C.GetTitle");

	UBP_GlobalMessage_C_GetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GlobalMessage.BP_GlobalMessage_C.GetMessage
// ()
void UBP_GlobalMessage_C::GetMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlobalMessage.BP_GlobalMessage_C.GetMessage");

	UBP_GlobalMessage_C_GetMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿// Name: DBZKakarot, Version: 1.0.3

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

// Function BP_NetworkInfoMessage.BP_NetworkInfoMessage_C.GetMessage
// ()
void UBP_NetworkInfoMessage_C::GetMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkInfoMessage.BP_NetworkInfoMessage_C.GetMessage");

	UBP_NetworkInfoMessage_C_GetMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

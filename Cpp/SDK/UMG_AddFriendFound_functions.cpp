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

// Function UMG_AddFriendFound.UMG_AddFriendFound_C.PreConstruct
// ()
void UUMG_AddFriendFound_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AddFriendFound.UMG_AddFriendFound_C.PreConstruct");

	UUMG_AddFriendFound_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_AddFriendFound.UMG_AddFriendFound_C.ExecuteUbergraph_UMG_AddFriendFound
// ()
void UUMG_AddFriendFound_C::ExecuteUbergraph_UMG_AddFriendFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_AddFriendFound.UMG_AddFriendFound_C.ExecuteUbergraph_UMG_AddFriendFound");

	UUMG_AddFriendFound_C_ExecuteUbergraph_UMG_AddFriendFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

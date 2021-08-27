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

// Function BP_MenuPlayerController_Interface.BP_MenuPlayerController_Interface_C.RefreshFriendsSubMenuCall
// ()
void UBP_MenuPlayerController_Interface_C::RefreshFriendsSubMenuCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController_Interface.BP_MenuPlayerController_Interface_C.RefreshFriendsSubMenuCall");

	UBP_MenuPlayerController_Interface_C_RefreshFriendsSubMenuCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

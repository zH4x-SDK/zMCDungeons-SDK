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

// Function UISubMenuInterface.UISubMenuInterface_C.OnMenuTransition
// ()
void UUISubMenuInterface_C::OnMenuTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISubMenuInterface.UISubMenuInterface_C.OnMenuTransition");

	UUISubMenuInterface_C_OnMenuTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UISubMenuInterface.UISubMenuInterface_C.GetSubMenuStack
// ()
void UUISubMenuInterface_C::GetSubMenuStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISubMenuInterface.UISubMenuInterface_C.GetSubMenuStack");

	UUISubMenuInterface_C_GetSubMenuStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UISubMenuInterface.UISubMenuInterface_C.RegisterSubmenu
// ()
void UUISubMenuInterface_C::RegisterSubmenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISubMenuInterface.UISubMenuInterface_C.RegisterSubmenu");

	UUISubMenuInterface_C_RegisterSubmenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

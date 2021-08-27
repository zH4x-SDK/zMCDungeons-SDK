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

// Function Menu.Menu_C.ReceiveBeginPlay
// ()
void AMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ReceiveBeginPlay");

	AMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu.Menu_C.OnSplashEnd
// ()
void AMenu_C::OnSplashEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.OnSplashEnd");

	AMenu_C_OnSplashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu.Menu_C.ExecuteUbergraph_Menu
// ()
void AMenu_C::ExecuteUbergraph_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ExecuteUbergraph_Menu");

	AMenu_C_ExecuteUbergraph_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

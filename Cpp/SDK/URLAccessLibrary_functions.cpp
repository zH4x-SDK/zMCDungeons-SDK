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

// Function URLAccessLibrary.URLAccessLibrary_C.LaunchLicensesPage
// ()
void UURLAccessLibrary_C::LaunchLicensesPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function URLAccessLibrary.URLAccessLibrary_C.LaunchLicensesPage");

	UURLAccessLibrary_C_LaunchLicensesPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function URLAccessLibrary.URLAccessLibrary_C.LaunchAccessibilityPage
// ()
void UURLAccessLibrary_C::LaunchAccessibilityPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function URLAccessLibrary.URLAccessLibrary_C.LaunchAccessibilityPage");

	UURLAccessLibrary_C_LaunchAccessibilityPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function URLAccessLibrary.URLAccessLibrary_C.LaunchEULAPage
// ()
void UURLAccessLibrary_C::LaunchEULAPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function URLAccessLibrary.URLAccessLibrary_C.LaunchEULAPage");

	UURLAccessLibrary_C_LaunchEULAPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

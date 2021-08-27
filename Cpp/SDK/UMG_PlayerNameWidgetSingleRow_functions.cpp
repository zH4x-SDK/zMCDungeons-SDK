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

// Function UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C.GetClampedName
// ()
void UUMG_PlayerNameWidgetSingleRow_C::GetClampedName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C.GetClampedName");

	UUMG_PlayerNameWidgetSingleRow_C_GetClampedName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C.GetText
// ()
void UUMG_PlayerNameWidgetSingleRow_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C.GetText");

	UUMG_PlayerNameWidgetSingleRow_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

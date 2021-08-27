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

// Function UMG_MapPin.UMG_MapPin_C.Changed Level
// ()
void UUMG_MapPin_C::Changed_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MapPin.UMG_MapPin_C.Changed Level");

	UUMG_MapPin_C_Changed_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MapPin.UMG_MapPin_C.Changed OOB
// ()
void UUMG_MapPin_C::Changed_OOB()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MapPin.UMG_MapPin_C.Changed OOB");

	UUMG_MapPin_C_Changed_OOB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MapPin.UMG_MapPin_C.Update Visual State
// ()
void UUMG_MapPin_C::Update_Visual_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MapPin.UMG_MapPin_C.Update Visual State");

	UUMG_MapPin_C_Update_Visual_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

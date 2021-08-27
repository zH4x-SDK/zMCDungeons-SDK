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

// Function UMG_MobHighlightWidget_Interface.UMG_MobHighlightWidget_Interface_C.SetMobHealthBar
// ()
void UUMG_MobHighlightWidget_Interface_C::SetMobHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MobHighlightWidget_Interface.UMG_MobHighlightWidget_Interface_C.SetMobHealthBar");

	UUMG_MobHighlightWidget_Interface_C_SetMobHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

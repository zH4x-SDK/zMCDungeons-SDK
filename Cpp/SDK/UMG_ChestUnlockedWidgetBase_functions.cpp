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

// Function UMG_ChestUnlockedWidgetBase.UMG_ChestUnlockedWidgetBase_C.SetPlayerController
// ()
void UUMG_ChestUnlockedWidgetBase_C::SetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ChestUnlockedWidgetBase.UMG_ChestUnlockedWidgetBase_C.SetPlayerController");

	UUMG_ChestUnlockedWidgetBase_C_SetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

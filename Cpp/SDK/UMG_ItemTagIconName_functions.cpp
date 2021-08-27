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

// Function UMG_ItemTagIconName.UMG_ItemTagIconName_C.SetItem
// ()
void UUMG_ItemTagIconName_C::SetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_ItemTagIconName.UMG_ItemTagIconName_C.SetItem");

	UUMG_ItemTagIconName_C_SetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

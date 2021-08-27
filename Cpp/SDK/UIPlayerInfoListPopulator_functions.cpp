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

// Function UIPlayerInfoListPopulator.UIPlayerInfoListPopulator_C.SetPlayerInfoList
// ()
void UUIPlayerInfoListPopulator_C::SetPlayerInfoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPlayerInfoListPopulator.UIPlayerInfoListPopulator_C.SetPlayerInfoList");

	UUIPlayerInfoListPopulator_C_SetPlayerInfoList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

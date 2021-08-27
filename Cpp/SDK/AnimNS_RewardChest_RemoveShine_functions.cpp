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

// Function AnimNS_RewardChest_RemoveShine.AnimNS_RewardChest_RemoveShine_C.Received_NotifyBegin
// ()
void UAnimNS_RewardChest_RemoveShine_C::Received_NotifyBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNS_RewardChest_RemoveShine.AnimNS_RewardChest_RemoveShine_C.Received_NotifyBegin");

	UAnimNS_RewardChest_RemoveShine_C_Received_NotifyBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

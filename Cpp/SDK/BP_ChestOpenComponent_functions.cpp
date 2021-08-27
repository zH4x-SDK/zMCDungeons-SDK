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

// Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.BubbleSound
// ()
void UBP_ChestOpenComponent_C::BubbleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.BubbleSound");

	UBP_ChestOpenComponent_C_BubbleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.OnClose
// ()
void UBP_ChestOpenComponent_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.OnClose");

	UBP_ChestOpenComponent_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.OnOpen
// ()
void UBP_ChestOpenComponent_C::OnOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChestOpenComponent.BP_ChestOpenComponent_C.OnOpen");

	UBP_ChestOpenComponent_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

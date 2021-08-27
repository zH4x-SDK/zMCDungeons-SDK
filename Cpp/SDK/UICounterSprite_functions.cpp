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

// Function UICounterSprite.UICounterSprite_C.SetSpriteTexture
// ()
void UUICounterSprite_C::SetSpriteTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UICounterSprite.UICounterSprite_C.SetSpriteTexture");

	UUICounterSprite_C_SetSpriteTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UICounterSprite.UICounterSprite_C.HideSprite
// ()
void UUICounterSprite_C::HideSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function UICounterSprite.UICounterSprite_C.HideSprite");

	UUICounterSprite_C_HideSprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UICounterSprite.UICounterSprite_C.ShowSprite
// ()
void UUICounterSprite_C::ShowSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function UICounterSprite.UICounterSprite_C.ShowSprite");

	UUICounterSprite_C_ShowSprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

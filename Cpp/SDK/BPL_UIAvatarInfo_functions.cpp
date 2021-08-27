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

// Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.HasAvatarInfoEntitlement
// ()
void UBPL_UIAvatarInfo_C::HasAvatarInfoEntitlement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.HasAvatarInfoEntitlement");

	UBPL_UIAvatarInfo_C_HasAvatarInfoEntitlement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.GetAvatarInfoSkinIds
// ()
void UBPL_UIAvatarInfo_C::GetAvatarInfoSkinIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.GetAvatarInfoSkinIds");

	UBPL_UIAvatarInfo_C_GetAvatarInfoSkinIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.GetAvatarInfoSkinMaterial
// ()
void UBPL_UIAvatarInfo_C::GetAvatarInfoSkinMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_UIAvatarInfo.BPL_UIAvatarInfo_C.GetAvatarInfoSkinMaterial");

	UBPL_UIAvatarInfo_C_GetAvatarInfoSkinMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

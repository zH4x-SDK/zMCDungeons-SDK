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

// Function UIDesiredCameraInterface.UIDesiredCameraInterface_C.GetDesiredCamera
// ()
void UUIDesiredCameraInterface_C::GetDesiredCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIDesiredCameraInterface.UIDesiredCameraInterface_C.GetDesiredCamera");

	UUIDesiredCameraInterface_C_GetDesiredCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function MouseCaptureWidget.MouseCaptureWidget_C.OnPreviewMouseButtonDown
// ()
void UMouseCaptureWidget_C::OnPreviewMouseButtonDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseCaptureWidget.MouseCaptureWidget_C.OnPreviewMouseButtonDown");

	UMouseCaptureWidget_C_OnPreviewMouseButtonDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MouseCaptureWidget.MouseCaptureWidget_C.MouseButtonClicked__DelegateSignature
// ()
void UMouseCaptureWidget_C::MouseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseCaptureWidget.MouseCaptureWidget_C.MouseButtonClicked__DelegateSignature");

	UMouseCaptureWidget_C_MouseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

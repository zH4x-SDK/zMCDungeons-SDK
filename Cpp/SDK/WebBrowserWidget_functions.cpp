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

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// ()
void UWebBrowser::OnUrlChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	UWebBrowser_OnUrlChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
// ()
void UWebBrowser::OnBeforePopup__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	UWebBrowser_OnBeforePopup__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WebBrowserWidget.WebBrowser.LoadURL
// ()
void UWebBrowser::LoadURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	UWebBrowser_LoadURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WebBrowserWidget.WebBrowser.LoadString
// ()
void UWebBrowser::LoadString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	UWebBrowser_LoadString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WebBrowserWidget.WebBrowser.GetUrl
// ()
void UWebBrowser::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	UWebBrowser_GetUrl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// ()
void UWebBrowser::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	UWebBrowser_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// ()
void UWebBrowser::ExecuteJavascript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	UWebBrowser_ExecuteJavascript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

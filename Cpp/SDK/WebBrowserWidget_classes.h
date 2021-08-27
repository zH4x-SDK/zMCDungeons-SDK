#pragma once

// Name: DBZKakarot, Version: 1.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0000
class UWebBrowser : public UWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}



	void OnUrlChanged__DelegateSignature();
	void OnBeforePopup__DelegateSignature();
	void LoadURL();
	void LoadString();
	void GetUrl();
	void GetTitleText();
	void ExecuteJavascript();
};

// Class WebBrowserWidget.WebBrowserAssetManager
// 0x0000
class UWebBrowserAssetManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

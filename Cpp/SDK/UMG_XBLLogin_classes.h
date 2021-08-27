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

// WidgetBlueprintGeneratedClass UMG_XBLLogin.UMG_XBLLogin_C
// 0x0000
class UUMG_XBLLogin_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_XBLLogin.UMG_XBLLogin_C");
		return ptr;
	}



	void GetLoginFlow();
	void SetUrls();
	void Construct();
	void Destruct();
	void BndEvt__UMG_CloseButtonSolid_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void BndEvt__UMG_WebURLDisplay_K2Node_ComponentBoundEvent_0_OnLoadComplete__DelegateSignature();
	void BndEvt__UMG_WebURLDisplay_K2Node_ComponentBoundEvent_2_OnUrlChanged__DelegateSignature();
	void BndEvt__UMG_WebURLDisplay_K2Node_ComponentBoundEvent_3_OnLoadError__DelegateSignature();
	void OnXBLLogin();
	void ExecuteUbergraph_UMG_XBLLogin();
	void OnRequestVisible__DelegateSignature();
	void OnLoadError__DelegateSignature();
	void OnURLRequested__DelegateSignature();
	void OnClose__DelegateSignature();
	void OnUrlChanged__DelegateSignature();
	void OnConfirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

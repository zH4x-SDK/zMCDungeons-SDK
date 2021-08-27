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

// WidgetBlueprintGeneratedClass UMG_WebURLDisplay.UMG_WebURLDisplay_C
// 0x0000
class UUMG_WebURLDisplay_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_WebURLDisplay.UMG_WebURLDisplay_C");
		return ptr;
	}



	void SetUrl();
	void BndEvt__DungeonsWebBrowser_205_K2Node_ComponentBoundEvent_1_OnUrlChanged__DelegateSignature();
	void BndEvt__DungeonsWebBrowser_205_K2Node_ComponentBoundEvent_0_OnHandleError__DelegateSignature();
	void BndEvt__DungeonsWebBrowser_205_K2Node_ComponentBoundEvent_2_OnLoadCompleted__DelegateSignature();
	void ExecuteUbergraph_UMG_WebURLDisplay();
	void OnLoadComplete__DelegateSignature();
	void OnLoadError__DelegateSignature();
	void OnUrlChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

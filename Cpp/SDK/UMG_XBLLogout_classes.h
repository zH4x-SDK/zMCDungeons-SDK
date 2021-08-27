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

// WidgetBlueprintGeneratedClass UMG_XBLLogout.UMG_XBLLogout_C
// 0x0000
class UUMG_XBLLogout_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_XBLLogout.UMG_XBLLogout_C");
		return ptr;
	}



	void GetLoginFlow();
	void SetUrls();
	void OnURLChanged_Event();
	void Destruct();
	void Construct();
	void OnXBLLogin();
	void ExecuteUbergraph_UMG_XBLLogout();
	void OnUrlChanged__DelegateSignature();
	void OnConfirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

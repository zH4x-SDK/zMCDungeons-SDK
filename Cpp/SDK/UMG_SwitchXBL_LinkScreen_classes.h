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

// WidgetBlueprintGeneratedClass UMG_SwitchXBL_LinkScreen.UMG_SwitchXBL_LinkScreen_C
// 0x0000
class UUMG_SwitchXBL_LinkScreen_C : public UUMG_SubMenu_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SwitchXBL_LinkScreen.UMG_SwitchXBL_LinkScreen_C");
		return ptr;
	}



	void GetOpenedText();
	void SequenceEvent_1();
	void SetUrlAndCode();
	void Construct();
	void SetupGamepadListeners();
	void OnCLose_();
	void PreConstruct();
	void Tick();
	void ExecuteUbergraph_UMG_SwitchXBL_LinkScreen();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

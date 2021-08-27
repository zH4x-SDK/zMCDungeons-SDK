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

// WidgetBlueprintGeneratedClass UMG_InviteNavigationButton.UMG_InviteNavigationButton_C
// 0x0000
class UUMG_InviteNavigationButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InviteNavigationButton.UMG_InviteNavigationButton_C");
		return ptr;
	}



	void GetButtonReference();
	void PreConstruct();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_InviteNavigationButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

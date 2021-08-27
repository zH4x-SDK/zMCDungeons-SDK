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

// WidgetBlueprintGeneratedClass UMG_AddFriendGenericButton.UMG_AddFriendGenericButton_C
// 0x0000
class UUMG_AddFriendGenericButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AddFriendGenericButton.UMG_AddFriendGenericButton_C");
		return ptr;
	}



	void GetButtonActionText();
	void GetGamepadFocusable();
	void SetDisabled();
	void GetButtonReference();
	void PreConstruct();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature();
	void ExecuteUbergraph_UMG_AddFriendGenericButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

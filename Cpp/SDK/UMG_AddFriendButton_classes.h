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

// WidgetBlueprintGeneratedClass UMG_AddFriendButton.UMG_AddFriendButton_C
// 0x0000
class UUMG_AddFriendButton_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AddFriendButton.UMG_AddFriendButton_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetButtonActionText();
	void GetHoveredText();
	void GetButtonReference();
	void BndEvt__UMG_ContentSizedButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_UMG_AddFriendButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

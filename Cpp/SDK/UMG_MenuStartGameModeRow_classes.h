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

// WidgetBlueprintGeneratedClass UMG_MenuStartGameModeRow.UMG_MenuStartGameModeRow_C
// 0x0000
class UUMG_MenuStartGameModeRow_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuStartGameModeRow.UMG_MenuStartGameModeRow_C");
		return ptr;
	}



	void GetStartGameMode();
	void SetSelectedStartGameMode();
	void SetStartGameMode();
	void GetButtonReference();
	void PreConstruct();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__UMG_VerticalContentSizedButton_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
	void ExecuteUbergraph_UMG_MenuStartGameModeRow();
	void OnStartGameModeSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

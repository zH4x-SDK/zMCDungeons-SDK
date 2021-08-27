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

// WidgetBlueprintGeneratedClass UMG_MenuSelectedStartGameMode.UMG_MenuSelectedStartGameMode_C
// 0x0000
class UUMG_MenuSelectedStartGameMode_C : public UUMG_ClickableButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuSelectedStartGameMode.UMG_MenuSelectedStartGameMode_C");
		return ptr;
	}



	void GetOpenedText();
	void GetHoveredText();
	void SetDisabled();
	void SetDisplayText();
	void GetButtonReference();
	void BndEvt__UMG_SlotButton_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature();
	void Construct();
	void inputChanged();
	void BndEvt__UMG_SlotButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_MenuSelectedStartGameMode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

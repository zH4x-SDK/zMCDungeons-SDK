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

// WidgetBlueprintGeneratedClass UMG_InitialBackButton.UMG_InitialBackButton_C
// 0x0000
class UUMG_InitialBackButton_C : public UUMG_TextButtonBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialBackButton.UMG_InitialBackButton_C");
		return ptr;
	}



	void GetButtonReference();
	void BndEvt__UMG_Button_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_InitialBackButton();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

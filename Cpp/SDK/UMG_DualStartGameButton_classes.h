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

// WidgetBlueprintGeneratedClass UMG_DualStartGameButton.UMG_DualStartGameButton_C
// 0x0000
class UUMG_DualStartGameButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DualStartGameButton.UMG_DualStartGameButton_C");
		return ptr;
	}



	void BndEvt__StartLocal_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__StartOnline_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_DualStartGameButton();
	void OnGameModeStarted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_InitialSettingsBackground.UMG_InitialSettingsBackground_C
// 0x0000
class UUMG_InitialSettingsBackground_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_InitialSettingsBackground.UMG_InitialSettingsBackground_C");
		return ptr;
	}



	void KeepBackHidden();
	void RefreshVisuals();
	void Get_Hint_Blueprint();
	void PreConstruct();
	void Construct();
	void inputChanged();
	void BndEvt__UMG_InitialBackButton_K2Node_ComponentBoundEvent_1_OnWasClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_InitialSettingsBackground();
	void CloseClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_StatusComboCounter.UMG_StatusComboCounter_C
// 0x0000
class UUMG_StatusComboCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_StatusComboCounter.UMG_StatusComboCounter_C");
		return ptr;
	}



	void RefreshVisibility();
	void BindUnbindPlayerLoadedEvent();
	void ShouldShowComboCounterMax();
	void GetFormattedText();
	void SetDisplayPreference();
	void ShouldShowComboCounter();
	void UpdateText();
	void SetComboMax();
	void ResetComboTo();
	void IncreaseCombo();
	void SetShowingAnyCombo();
	void SetCombo();
	void Construct();
	void ExecuteUbergraph_UMG_StatusComboCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

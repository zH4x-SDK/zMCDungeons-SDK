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

// WidgetBlueprintGeneratedClass UMG_VisualHintBase.UMG_VisualHintBase_C
// 0x0000
class UUMG_VisualHintBase_C : public UUMG_HintEventHelper_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_VisualHintBase.UMG_VisualHintBase_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void SetJustification();
	void setupButton();
	void AddButtonDivider();
	void GetOrCreateButtonSwitch();
	void SetKey();
	void Deactivate();
	void Activate();
	void OnActivated();
	void OnDeactivated();
	void InputTypeChanged();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_VisualHintBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

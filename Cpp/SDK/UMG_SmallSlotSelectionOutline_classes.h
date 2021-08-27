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

// WidgetBlueprintGeneratedClass UMG_SmallSlotSelectionOutline.UMG_SmallSlotSelectionOutline_C
// 0x0000
class UUMG_SmallSlotSelectionOutline_C : public UUMG_SlotFeedbackBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SmallSlotSelectionOutline.UMG_SmallSlotSelectionOutline_C");
		return ptr;
	}



	void SetExpanded();
	void OnStateChanged();
	void OnUpdateGraphics();
	void ExecuteUbergraph_UMG_SmallSlotSelectionOutline();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

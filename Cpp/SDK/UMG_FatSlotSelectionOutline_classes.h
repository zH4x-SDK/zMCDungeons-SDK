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

// WidgetBlueprintGeneratedClass UMG_FatSlotSelectionOutline.UMG_FatSlotSelectionOutline_C
// 0x0000
class UUMG_FatSlotSelectionOutline_C : public UUMG_SlotFeedbackBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_FatSlotSelectionOutline.UMG_FatSlotSelectionOutline_C");
		return ptr;
	}



	void SetExpanded();
	void OnStateChanged();
	void OnUpdateGraphics();
	void ExecuteUbergraph_UMG_FatSlotSelectionOutline();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

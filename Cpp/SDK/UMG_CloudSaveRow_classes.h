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

// WidgetBlueprintGeneratedClass UMG_CloudSaveRow.UMG_CloudSaveRow_C
// 0x0000
class UUMG_CloudSaveRow_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CloudSaveRow.UMG_CloudSaveRow_C");
		return ptr;
	}



	void SetMode();
	void GetHoveredText();
	void GetSizebox();
	void ResetVisual();
	void swapData();
	void SetIsSelected();
	void Get_Selectable_Reference();
	void GetIsBlank();
	void SetBlankRow();
	void SetupRow();
	void BndEvt__mouseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void HoveredEvent();
	void UnhoveredEvent();
	void DeleteSlot();
	void SelectSlot();
	void SwapRow();
	void SwapAnimComplete();
	void RemoveRow();
	void RemoveAnimComplete();
	void Construct();
	void AddRow();
	void BndEvt__MouseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_CloudSaveRow();
	void DownloadComplete__DelegateSignature();
	void DeleteComplete__DelegateSignature();
	void SwapComplete__DelegateSignature();
	void Select__DelegateSignature();
	void Delete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

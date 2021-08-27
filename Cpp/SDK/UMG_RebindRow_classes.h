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

// WidgetBlueprintGeneratedClass UMG_RebindRow.UMG_RebindRow_C
// 0x0000
class UUMG_RebindRow_C : public UUMG_SettingsEntry_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RebindRow.UMG_RebindRow_C");
		return ptr;
	}



	void GetHoveredText();
	void GetSizebox();
	void SetConflicted();
	void HasAnyKeybind();
	void ClearRow();
	void AddButton();
	void getSecondary();
	void getPrimary();
	void Get_Selectable_Reference();
	void Setup_Row();
	void PreConstruct();
	void OnMouseEnter();
	void UpdateCursorHoverState();
	void BndEvt__rebindButton_primary_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__rebindButton_secondary_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void ExecuteUbergraph_UMG_RebindRow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

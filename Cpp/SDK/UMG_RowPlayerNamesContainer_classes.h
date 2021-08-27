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

// WidgetBlueprintGeneratedClass UMG_RowPlayerNamesContainer.UMG_RowPlayerNamesContainer_C
// 0x0000
class UUMG_RowPlayerNamesContainer_C : public UUMG_RowPlayerBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowPlayerNamesContainer.UMG_RowPlayerNamesContainer_C");
		return ptr;
	}



	void AddRowPlayerName();
	void GetPlayerName();
	void ClearPlayerData();
	void UpdatePlayerData();
	void UpdateStyle();
	void getRowButton();
	void GetOpenedText();
	void OnAddedToFocusPath();
	void OnRemovedFromFocusPath();
	void OnMouseLeave();
	void OnMouseEnter();
	void BndEvt__rowButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct();
	void Construct();
	void BndEvt__rowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_RowPlayerNamesContainer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

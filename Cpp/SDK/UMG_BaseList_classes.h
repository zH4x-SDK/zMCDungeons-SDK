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

// WidgetBlueprintGeneratedClass UMG_BaseList.UMG_BaseList_C
// 0x0000
class UUMG_BaseList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_BaseList.UMG_BaseList_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void GetHasAnyEntries();
	void GetRowWidgets();
	void OnRowWidgetCreated();
	void callFocus();
	void CollapseAllRows();
	void callHover();
	void OnCouldNotRefreshList();
	void CanRefreshList();
	void GetRowsBox();
	void OnRefreshList();
	void GetOrCreateRow();
	void TryRefreshList();
	void Construct();
	void ExecuteUbergraph_UMG_BaseList();
	void onChildFocused__DelegateSignature();
	void OnListRefreshingChanged__DelegateSignature();
	void onChildHovered__DelegateSignature();
	void onListRefreshed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

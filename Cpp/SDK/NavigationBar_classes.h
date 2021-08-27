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

// WidgetBlueprintGeneratedClass NavigationBar.NavigationBar_C
// 0x0000
class UNavigationBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NavigationBar.NavigationBar_C");
		return ptr;
	}



	void ControllerTypeChanged();
	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void instant_set_state();
	void reset_to_original();
	void getNavBarItems();
	void setNavBarItems();
	void create_nav_item_from_data();
	void PreConstruct();
	void manual_hide_show();
	void ExecuteUbergraph_NavigationBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

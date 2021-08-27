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

// WidgetBlueprintGeneratedClass NavigationBarItem.NavigationBarItem_C
// 0x0000
class UNavigationBarItem_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NavigationBarItem.NavigationBarItem_C");
		return ptr;
	}



	void Setup();
	void PreConstruct();
	void Construct();
	void inputChanged();
	void ExecuteUbergraph_NavigationBarItem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

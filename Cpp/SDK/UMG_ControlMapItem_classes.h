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

// WidgetBlueprintGeneratedClass UMG_ControlMapItem.UMG_ControlMapItem_C
// 0x0000
class UUMG_ControlMapItem_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ControlMapItem.UMG_ControlMapItem_C");
		return ptr;
	}



	void GetActionForKey();
	void RecalculateLines();
	void SetKeyAction();
	void OnPaint();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_ControlMapItem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

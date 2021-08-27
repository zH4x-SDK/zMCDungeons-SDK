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

// WidgetBlueprintGeneratedClass UMG_Hotbar_P2.UMG_Hotbar_P2_C
// 0x0000
class UUMG_Hotbar_P2_C : public UUMG_Hotbar2_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_P2.UMG_Hotbar_P2_C");
		return ptr;
	}



	void GetLiteSwitchers();
	void GetInputActionWidgets();
	void GetSlotsToBind();
	void SetupCommonComponents();
	void SetupPlayerColours();
	void PreConstruct();
	void ExecuteUbergraph_UMG_Hotbar_P2();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

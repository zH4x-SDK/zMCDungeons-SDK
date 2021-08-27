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

// WidgetBlueprintGeneratedClass UMG_LocalCoopMenuBorder.UMG_LocalCoopMenuBorder_C
// 0x0000
class UUMG_LocalCoopMenuBorder_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LocalCoopMenuBorder.UMG_LocalCoopMenuBorder_C");
		return ptr;
	}



	void GetPlayerName();
	void SetVisuals();
	void UpdateWidgetInfo();
	void UpdatePlayerInfo();
	void PreConstruct();
	void ExecuteUbergraph_UMG_LocalCoopMenuBorder();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

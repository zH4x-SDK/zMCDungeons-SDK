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

// WidgetBlueprintGeneratedClass UMG_PlayerWidget.UMG_PlayerWidget_C
// 0x0000
class UUMG_PlayerWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerWidget.UMG_PlayerWidget_C");
		return ptr;
	}



	void RefreshGraphics();
	void SetCompact();
	void SetPlayerCharacter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_PlayerWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

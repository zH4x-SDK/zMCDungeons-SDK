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

// WidgetBlueprintGeneratedClass UMG_PlayersBarWidget.UMG_PlayersBarWidget_C
// 0x0000
class UUMG_PlayersBarWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayersBarWidget.UMG_PlayersBarWidget_C");
		return ptr;
	}



	void SetDirty();
	void RefreshGraphics();
	void SetCompact();
	void RecreatePartyMemberPanels();
	void Construct();
	void PreConstruct();
	void Tick();
	void ExecuteUbergraph_UMG_PlayersBarWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

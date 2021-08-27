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

// WidgetBlueprintGeneratedClass UMG_MissionEndWidget.UMG_MissionEndWidget_C
// 0x0000
class UUMG_MissionEndWidget_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MissionEndWidget.UMG_MissionEndWidget_C");
		return ptr;
	}



	void IsOverridable();
	void GetBlocksCharacterInput();
	void GetModalMask();
	void SetWaitDuration();
	void Pop_Subtitles_Widget();
	void Push_Subtitles_Widget();
	void Play_VO();
	void Play_Music_And_SFX();
	void OpenClose();
	void RefreshFocus();
	void Construct();
	void Tick();
	void Destruct();
	void ExecuteUbergraph_UMG_MissionEndWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

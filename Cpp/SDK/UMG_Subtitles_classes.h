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

// WidgetBlueprintGeneratedClass UMG_Subtitles.UMG_Subtitles_C
// 0x0000
class UUMG_Subtitles_C : public USubtitleOverlayWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Subtitles.UMG_Subtitles_C");
		return ptr;
	}



	void Construct();
	void OnSubtitlesText();
	void ExecuteUbergraph_UMG_Subtitles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

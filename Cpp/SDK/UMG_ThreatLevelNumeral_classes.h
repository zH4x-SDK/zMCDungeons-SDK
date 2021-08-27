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

// WidgetBlueprintGeneratedClass UMG_ThreatLevelNumeral.UMG_ThreatLevelNumeral_C
// 0x0000
class UUMG_ThreatLevelNumeral_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ThreatLevelNumeral.UMG_ThreatLevelNumeral_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void RefreshGraphics();
	void SetThreatLevel();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ThreatLevelNumeral();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

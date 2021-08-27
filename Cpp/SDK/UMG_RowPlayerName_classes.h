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

// WidgetBlueprintGeneratedClass UMG_RowPlayerName.UMG_RowPlayerName_C
// 0x0000
class UUMG_RowPlayerName_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_RowPlayerName.UMG_RowPlayerName_C");
		return ptr;
	}



	void GetOpenedText();
	void GetClosedText();
	void GetHoveredText();
	void SetPlayerServiceIcon();
	void SetPlayerName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

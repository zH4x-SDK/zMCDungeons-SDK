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

// WidgetBlueprintGeneratedClass UMG_PlayerNameWidgetBase.UMG_PlayerNameWidgetBase_C
// 0x0000
class UUMG_PlayerNameWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerNameWidgetBase.UMG_PlayerNameWidgetBase_C");
		return ptr;
	}



	void GetClampedName();
	void GetText();
	void UpdatePlayerState();
	void SetPlayerState();
	void SetName();
	void UpdatePlayerName();
	void SetPlayerCharacterInternal();
	void PreConstruct();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_PlayerNameWidgetBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

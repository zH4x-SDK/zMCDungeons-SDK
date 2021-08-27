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

// WidgetBlueprintGeneratedClass UMG_CharacterLevelCounter.UMG_CharacterLevelCounter_C
// 0x0000
class UUMG_CharacterLevelCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterLevelCounter.UMG_CharacterLevelCounter_C");
		return ptr;
	}



	void SetLevel();
	void SetCharacterData();
	void ExecuteUbergraph_UMG_CharacterLevelCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

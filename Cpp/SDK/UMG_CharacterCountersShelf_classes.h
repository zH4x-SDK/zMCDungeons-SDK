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

// WidgetBlueprintGeneratedClass UMG_CharacterCountersShelf.UMG_CharacterCountersShelf_C
// 0x0000
class UUMG_CharacterCountersShelf_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_CharacterCountersShelf.UMG_CharacterCountersShelf_C");
		return ptr;
	}



	void RefreshEmphasis();
	void SetEmphasizeCounter();
	void SetSmoothCountDelay();
	void FinishSmoothCount();
	void SetPlayerCharacter();
	void Construct();
	void ExecuteUbergraph_UMG_CharacterCountersShelf();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

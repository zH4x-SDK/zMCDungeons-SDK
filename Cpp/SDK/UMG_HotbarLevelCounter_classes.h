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

// WidgetBlueprintGeneratedClass UMG_HotbarLevelCounter.UMG_HotbarLevelCounter_C
// 0x0000
class UUMG_HotbarLevelCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HotbarLevelCounter.UMG_HotbarLevelCounter_C");
		return ptr;
	}



	void RefreshVisualLevel();
	void SetVisualLevel();
	void OnLevelUp();
	void OnExperienceChanged();
	void SetExperienceComponent();
	void SetPlayerCharacter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_HotbarLevelCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

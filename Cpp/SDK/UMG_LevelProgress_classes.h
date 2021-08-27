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

// WidgetBlueprintGeneratedClass UMG_LevelProgress.UMG_LevelProgress_C
// 0x0000
class UUMG_LevelProgress_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LevelProgress.UMG_LevelProgress_C");
		return ptr;
	}



	void SetVisualExperience();
	void UpdateLevelCounter();
	void UpdateXpCounter();
	void OnLevelChanged();
	void OnXpChanged();
	void SetExperienceComponent();
	void PreConstruct();
	void SetPlayerCharacter();
	void BndEvt__LevelCounter_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_LevelProgress();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_Hotbar_ExperienceLevelUp_Pop.UMG_Hotbar_ExperienceLevelUp_Pop_C
// 0x0000
class UUMG_Hotbar_ExperienceLevelUp_Pop_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_ExperienceLevelUp_Pop.UMG_Hotbar_ExperienceLevelUp_Pop_C");
		return ptr;
	}



	void OnLevelUp();
	void SetExperienceComponent();
	void ShowLevelUp();
	void SetPlayerCharacter();
	void WidgetAnimationEvt_Pop_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_UMG_Hotbar_ExperienceLevelUp_Pop();
	void LevelUpDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

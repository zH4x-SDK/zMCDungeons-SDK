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

// WidgetBlueprintGeneratedClass UMG_Hotbar2.UMG_Hotbar2_C
// 0x0000
class UUMG_Hotbar2_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar2.UMG_Hotbar2_C");
		return ptr;
	}



	void EnsureCharacter();
	void OnActivate();
	void SetupPlayerColours();
	void AnimateDowned();
	void GetLiteSwitchers();
	void SetupCommonComponents();
	void SetLiteVisual();
	void RefreshPromptWidgets();
	void GetIsLite();
	void IsPointUnderHotbar();
	void GetSlotsToBind();
	void RefreshAliveState();
	void SetAliveState();
	void GetInputActionWidgets();
	void RefreshShouldShowEnderPearlButton();
	void RefreshEnderPearl();
	void SetShowEnderPearlButton();
	void GetEnderPearlMenuOpen();
	void OnPawnPossessed();
	void SetPlayerCharacter();
	void SetPlayerController();
	void SetEnderPearlMenuOpen();
	void UseEnderPearlToPlayer();
	void Construct();
	void PreConstruct();
	void RefreshDownMode();
	void downedAnim();
	void OnLevelUp();
	void ExecuteUbergraph_UMG_Hotbar2();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

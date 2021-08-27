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

// BlueprintGeneratedClass BP_WorldspaceHUDComponent.BP_WorldspaceHUDComponent_C
// 0x0000
class UBP_WorldspaceHUDComponent_C : public UWorldspaceHUDComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldspaceHUDComponent.BP_WorldspaceHUDComponent_C");
		return ptr;
	}



	void GatherUnusedBalloonTipWidgets();
	void GetOrCreateBalloonTipWidget();
	void RemoveBalloonTipWidget();
	void AddBalloonTipWidget();
	void CreateContextPrompts();
	void AddTextPop();
	void IsPointHiddenByHotbar();
	void GetSuitableContextWidget();
	void AddFailedToOpenChestPop();
	void SetHighlightedTarget();
	void AddDamagePop();
	void Show();
	void Hide();
	void HoverAll();
	void AddXpPop();
	void AddClicky();
	void RemoveClicky();
	void ReceiveTick();
	void Initialise();
	void UpdateContextPrompt();
	void UpdateDrownCountdown();
	void ExecuteUbergraph_BP_WorldspaceHUDComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

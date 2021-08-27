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

// WidgetBlueprintGeneratedClass UMG_EnchantmentWidgetBase.UMG_EnchantmentWidgetBase_C
// 0x0000
class UUMG_EnchantmentWidgetBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentWidgetBase.UMG_EnchantmentWidgetBase_C");
		return ptr;
	}



	void OnInteractiveChanged();
	void SetInteractive();
	void GetHidden();
	void SetHidden();
	void Update();
	void GetLevel();
	void OnEnchantmentStateChanged();
	void GetEnchantmentType();
	void GetHovered();
	void GetIconMaterialInstance();
	void GetIconTexture();
	void GetPowerful();
	void GetUnlockDelay();
	void GetOtherSelected();
	void GetSelected();
	void GetMaxed();
	void GetDisabled();
	void GetLocked();
	void GetCanInvest();
	void GetInvested();
	void OnForceApplyAllStates();
	void OnOtherSelectedChanged();
	void OnSelectedChanged();
	void GetButtonRef();
	void OnRefreshButtonState();
	void OnUpdateGraphics();
	void SetOtherSelected();
	void GetEnchantmentIndex();
	void IsEnchanted();
	void GetSound();
	void SetSelected();
	void OnSelectedEnchantmentIndex();
	void LoadIcon();
	void OnItemEnchanted();
	void SetHighlight();
	void SetUnlockAnimationDelay();
	void UpdateEnchantmentState();
	void OnItemDataChanged();
	void ApplyAllStates();
	void SetMaxed();
	void SetDisabled();
	void SetLocked();
	void SetCanInvest();
	void SetInvested();
	void GetItem();
	void SetItemAndEnchantmentIndex();
	void UpdateEnchantmentData();
	void Construct();
	void Clicked();
	void StateChanged();
	void ExecuteUbergraph_UMG_EnchantmentWidgetBase();
	void OnHoveredChanged__DelegateSignature();
	void OnItemEnchantmentSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

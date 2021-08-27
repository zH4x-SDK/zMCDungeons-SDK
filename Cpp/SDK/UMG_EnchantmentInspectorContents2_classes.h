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

// WidgetBlueprintGeneratedClass UMG_EnchantmentInspectorContents2.UMG_EnchantmentInspectorContents2_C
// 0x0000
class UUMG_EnchantmentInspectorContents2_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_EnchantmentInspectorContents2.UMG_EnchantmentInspectorContents2_C");
		return ptr;
	}



	void GetIsEnchantAvailable();
	void OnItemEnchanted();
	void UpdateData();
	void SetItemAndEnchantmentIndex();
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_0_OnWasClicked__DelegateSignature();
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_1_OnWasHovered__DelegateSignature();
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_2_OnWasUnhovered__DelegateSignature();
	void On_Upgrade_Clicked();
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnControllerNowGamepad__DelegateSignature();
	void ExecuteUbergraph_UMG_EnchantmentInspectorContents2();
	void EnchantSuccess__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

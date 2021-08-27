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

// WidgetBlueprintGeneratedClass UMG_Hotbar_Solo.UMG_Hotbar_Solo_C
// 0x0000
class UUMG_Hotbar_Solo_C : public UUMG_Hotbar2_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_Solo.UMG_Hotbar_Solo_C");
		return ptr;
	}



	void GetLiteSwitchers();
	void GetInputActionWidgets();
	void GetSlotsToBind();
	void SetupCommonComponents();
	void RefreshEnderPearl();
	void BndEvt__UMG_Hotbar_TeleportToFriend_Widget_K2Node_ComponentBoundEvent_0_OnAnyTargetChanged__DelegateSignature();
	void OnActivate();
	void ExecuteUbergraph_UMG_Hotbar_Solo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

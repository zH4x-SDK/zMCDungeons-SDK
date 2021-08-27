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

// WidgetBlueprintGeneratedClass UMG_Hotbar_XCloud.UMG_Hotbar_XCloud_C
// 0x0000
class UUMG_Hotbar_XCloud_C : public UUMG_Hotbar2_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Hotbar_XCloud.UMG_Hotbar_XCloud_C");
		return ptr;
	}



	void GetLiteSwitchers();
	void GetInputActionWidgets();
	void GetSlotsToBind();
	void SetupCommonComponents();
	void OnActivate();
	void PreConstruct();
	void BndEvt__TeleportCloseArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__UMG_Hotbar_TeleportToPlayersOctagon_K2Node_ComponentBoundEvent_1_OpenChanged__DelegateSignature();
	void SetPlayerController();
	void ExecuteUbergraph_UMG_Hotbar_XCloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

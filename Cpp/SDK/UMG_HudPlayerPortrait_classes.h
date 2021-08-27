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

// WidgetBlueprintGeneratedClass UMG_HudPlayerPortrait.UMG_HudPlayerPortrait_C
// 0x0000
class UUMG_HudPlayerPortrait_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_HudPlayerPortrait.UMG_HudPlayerPortrait_C");
		return ptr;
	}



	void GetPlayerCharacter();
	void GetAliveState();
	void SetPlayerCharacterInternal();
	void PreConstruct();
	void SetPlayerCharacter();
	void BndEvt__UMG_PlayerAliveStateSwitcher_K2Node_ComponentBoundEvent_0_OnPlayerAliveStateChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_HudPlayerPortrait();
	void OnPlayerAliveStateChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

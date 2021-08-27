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

// WidgetBlueprintGeneratedClass UMG_PartyPlayerPortrait.UMG_PartyPlayerPortrait_C
// 0x0000
class UUMG_PartyPlayerPortrait_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyPlayerPortrait.UMG_PartyPlayerPortrait_C");
		return ptr;
	}



	void GetPlayerCharacter();
	void GetAliveState();
	void SetDarkening();
	void SetReady();
	void UpdateReady();
	void UpdatePlayerState();
	void SetPlayerState();
	void SetPlayerCharacterInternal();
	void PreConstruct();
	void ReadyMarkerLanded();
	void Tick();
	void SetPlayerCharacter();
	void BndEvt__UMG_PlayerAliveStateSwitcher_K2Node_ComponentBoundEvent_0_OnPlayerAliveStateChanged__DelegateSignature();
	void BndEvt__UMG_PlayerPortraitSmall_K2Node_ComponentBoundEvent_1_OnPortraitColorChanged__DelegateSignature();
	void ExecuteUbergraph_UMG_PartyPlayerPortrait();
	void OnPlayerPortraitColorChanged__DelegateSignature();
	void OnPlayerAliveStateChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

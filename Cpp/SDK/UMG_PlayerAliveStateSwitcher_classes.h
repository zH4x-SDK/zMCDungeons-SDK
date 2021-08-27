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

// WidgetBlueprintGeneratedClass UMG_PlayerAliveStateSwitcher.UMG_PlayerAliveStateSwitcher_C
// 0x0000
class UUMG_PlayerAliveStateSwitcher_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerAliveStateSwitcher.UMG_PlayerAliveStateSwitcher_C");
		return ptr;
	}



	void GetAliveState();
	void SetIsDown();
	void SetAliveState();
	void UpdateAliveState();
	void SetPlayerCharacterInternal();
	void SetPlayerCharacter();
	void ExecuteUbergraph_UMG_PlayerAliveStateSwitcher();
	void OnPlayerAliveStateChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass UMG_WorldspaceHUD_interface.UMG_WorldspaceHUD_interface_C
// 0x0000
class UUMG_WorldspaceHUD_interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UMG_WorldspaceHUD_interface.UMG_WorldspaceHUD_interface_C");
		return ptr;
	}



	void UpdateDrownCountdown();
	void GetClickyPanel();
	void UpdateDamagePopPositions();
	void AddTextPop();
	void AddDamagePop();
	void InitialiseDamagePops();
	void AddFailedToOpenChestPop();
	void SetMobHealthBar();
	void GetOrCreateMobHighlightWidget();
	void AddExperiencePopWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

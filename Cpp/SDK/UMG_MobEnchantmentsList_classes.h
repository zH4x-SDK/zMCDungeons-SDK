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

// WidgetBlueprintGeneratedClass UMG_MobEnchantmentsList.UMG_MobEnchantmentsList_C
// 0x0000
class UUMG_MobEnchantmentsList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MobEnchantmentsList.UMG_MobEnchantmentsList_C");
		return ptr;
	}



	void HasEnchantmentsSet();
	void GetOrCreateMobEnchantment();
	void RefreshList();
	void SetMob();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

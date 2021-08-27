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

// WidgetBlueprintGeneratedClass UMG_PlayerFriendListIcon.UMG_PlayerFriendListIcon_C
// 0x0000
class UUMG_PlayerFriendListIcon_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerFriendListIcon.UMG_PlayerFriendListIcon_C");
		return ptr;
	}



	void OnFail_1661D57B43C866DD44523590483FC16B();
	void OnSuccess_1661D57B43C866DD44523590483FC16B();
	void SetPlayerImage();
	void ExecuteUbergraph_UMG_PlayerFriendListIcon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

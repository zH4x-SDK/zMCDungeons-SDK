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

// WidgetBlueprintGeneratedClass UMG_PlayerInfoList.UMG_PlayerInfoList_C
// 0x0000
class UUMG_PlayerInfoList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerInfoList.UMG_PlayerInfoList_C");
		return ptr;
	}



	void GetOrCreateRowFriend();
	void RepopulatePlayerInfoList();
	void InternalSetPlayerInfoList();
	void SetPlayerInfoList();
	void ExecuteUbergraph_UMG_PlayerInfoList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_OnlineStatusName.UMG_OnlineStatusName_C
// 0x0000
class UUMG_OnlineStatusName_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_OnlineStatusName.UMG_OnlineStatusName_C");
		return ptr;
	}



	void SetOnlineStatus();
	void UpdateGraphics();
	void PreConstruct();
	void ExecuteUbergraph_UMG_OnlineStatusName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

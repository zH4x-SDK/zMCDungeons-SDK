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

// WidgetBlueprintGeneratedClass UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C
// 0x0000
class UUMG_PlayerNameWidgetSingleRow_C : public UUMG_PlayerNameWidgetBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerNameWidgetSingleRow.UMG_PlayerNameWidgetSingleRow_C");
		return ptr;
	}



	void GetClampedName();
	void GetText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_MapPin.UMG_MapPin_C
// 0x0000
class UUMG_MapPin_C : public UMapPinWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MapPin.UMG_MapPin_C");
		return ptr;
	}



	void Changed_Level();
	void Changed_OOB();
	void Update_Visual_State();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

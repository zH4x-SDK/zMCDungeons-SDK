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

// BlueprintGeneratedClass BPL_UIItemPower.BPL_UIItemPower_C
// 0x0000
class UBPL_UIItemPower_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIItemPower.BPL_UIItemPower_C");
		return ptr;
	}



	void GetItemDataPowerDisplayText();
	void GetItemPowerDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

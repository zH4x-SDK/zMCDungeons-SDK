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

// BlueprintGeneratedClass BPL_UILovikaLevel.BPL_UILovikaLevel_C
// 0x0000
class UBPL_UILovikaLevel_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UILovikaLevel.BPL_UILovikaLevel_C");
		return ptr;
	}



	void GetCurrentLevelName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

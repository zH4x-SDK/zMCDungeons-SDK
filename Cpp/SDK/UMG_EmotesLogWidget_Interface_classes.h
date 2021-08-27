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

// BlueprintGeneratedClass UMG_EmotesLogWidget_Interface.UMG_EmotesLogWidget_Interface_C
// 0x0000
class UUMG_EmotesLogWidget_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UMG_EmotesLogWidget_Interface.UMG_EmotesLogWidget_Interface_C");
		return ptr;
	}



	void AddPlayerEmoteByID();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

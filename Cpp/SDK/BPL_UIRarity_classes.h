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

// BlueprintGeneratedClass BPL_UIRarity.BPL_UIRarity_C
// 0x0000
class UBPL_UIRarity_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIRarity.BPL_UIRarity_C");
		return ptr;
	}



	void GetRarityFrameColor();
	void GetRarityDarkTextShadowColor();
	void GetRarityPinGlowColor();
	void GetRarityPinColor();
	void GetRarityTextColor();
	void GetRarityDisplayName();
	void GetRarityColor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

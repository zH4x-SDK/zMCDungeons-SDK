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

// BlueprintGeneratedClass BPL_InputSprites.BPL_InputSprites_C
// 0x0000
class UBPL_InputSprites_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_InputSprites.BPL_InputSprites_C");
		return ptr;
	}



	void keySubstitutions();
	void GetKeyDataRowName();
	void GetPcKeySprite();
	void GetGamepadKeySprite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

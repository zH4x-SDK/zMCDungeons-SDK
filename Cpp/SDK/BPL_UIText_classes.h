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

// BlueprintGeneratedClass BPL_UIText.BPL_UIText_C
// 0x0000
class UBPL_UIText_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIText.BPL_UIText_C");
		return ptr;
	}



	void ChangeTextOutline();
	void GetTypefaceFontfamily();
	void ChangeTextFontSize();
	void ChangeTextTypeface();
	void ChangeShadowedTextSize();
	void GetTypeface();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

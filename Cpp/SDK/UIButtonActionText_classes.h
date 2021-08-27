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

// BlueprintGeneratedClass UIButtonActionText.UIButtonActionText_C
// 0x0000
class UUIButtonActionText_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIButtonActionText.UIButtonActionText_C");
		return ptr;
	}



	void GetButtonActionText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

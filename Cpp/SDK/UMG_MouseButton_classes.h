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

// WidgetBlueprintGeneratedClass UMG_MouseButton.UMG_MouseButton_C
// 0x0000
class UUMG_MouseButton_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MouseButton.UMG_MouseButton_C");
		return ptr;
	}



	void SetShouldAnimate();
	void SetKey();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

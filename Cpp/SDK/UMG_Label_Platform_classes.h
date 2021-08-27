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

// WidgetBlueprintGeneratedClass UMG_Label_Platform.UMG_Label_Platform_C
// 0x0000
class UUMG_Label_Platform_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Label_Platform.UMG_Label_Platform_C");
		return ptr;
	}



	void GetPlatformText();
	void ConstructLabel();
	void PreConstruct();
	void ExecuteUbergraph_UMG_Label_Platform();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

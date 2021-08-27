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

// WidgetBlueprintGeneratedClass UMG_IconCounter.UMG_IconCounter_C
// 0x0000
class UUMG_IconCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_IconCounter.UMG_IconCounter_C");
		return ptr;
	}



	void SetCounter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_IconCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

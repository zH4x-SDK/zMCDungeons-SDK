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

// WidgetBlueprintGeneratedClass UMG_ResourceCounter.UMG_ResourceCounter_C
// 0x0000
class UUMG_ResourceCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ResourceCounter.UMG_ResourceCounter_C");
		return ptr;
	}



	void SetResourceNameForTTS();
	void GetTTS();
	void RefreshTextures();
	void SetTextures();
	void SetRange();
	void SetCounter();
	void PreConstruct();
	void ExecuteUbergraph_UMG_ResourceCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

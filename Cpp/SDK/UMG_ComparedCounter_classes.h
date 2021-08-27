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

// WidgetBlueprintGeneratedClass UMG_ComparedCounter.UMG_ComparedCounter_C
// 0x0000
class UUMG_ComparedCounter_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ComparedCounter.UMG_ComparedCounter_C");
		return ptr;
	}



	void GetValue();
	void UpdateGraphics();
	void SetValue();
	void SetComparedValue();
	void InitGraphics();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_ComparedCounter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

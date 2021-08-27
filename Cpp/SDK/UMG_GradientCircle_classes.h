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

// WidgetBlueprintGeneratedClass UMG_GradientCircle.UMG_GradientCircle_C
// 0x0000
class UUMG_GradientCircle_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GradientCircle.UMG_GradientCircle_C");
		return ptr;
	}



	void UpdateGraphics();
	void SetCenter();
	void SetColor();
	void PreConstruct();
	void ExecuteUbergraph_UMG_GradientCircle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

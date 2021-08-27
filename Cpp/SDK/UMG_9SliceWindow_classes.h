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

// WidgetBlueprintGeneratedClass UMG_9SliceWindow.UMG_9SliceWindow_C
// 0x0000
class UUMG_9SliceWindow_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_9SliceWindow.UMG_9SliceWindow_C");
		return ptr;
	}



	void SetScale();
	void SetCloseable();
	void GetCloseable();
	void RefreshGraphics();
	void PreConstruct();
	void ExecuteUbergraph_UMG_9SliceWindow();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

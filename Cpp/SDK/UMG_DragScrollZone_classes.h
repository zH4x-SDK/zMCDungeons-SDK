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

// WidgetBlueprintGeneratedClass UMG_DragScrollZone.UMG_DragScrollZone_C
// 0x0000
class UUMG_DragScrollZone_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DragScrollZone.UMG_DragScrollZone_C");
		return ptr;
	}



	void IsDraggedOn();
	void Reset();
	void OnDragEnter();
	void OnDragLeave();
	void OnDragCancelled();
	void ExecuteUbergraph_UMG_DragScrollZone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

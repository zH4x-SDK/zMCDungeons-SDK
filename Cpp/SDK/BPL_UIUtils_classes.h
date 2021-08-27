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

// BlueprintGeneratedClass BPL_UIUtils.BPL_UIUtils_C
// 0x0000
class UBPL_UIUtils_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIUtils.BPL_UIUtils_C");
		return ptr;
	}



	void CreateUserWidgetFromSoftClass();
	void IsXcloudStreaming();
	void IsControllerTypeTouch();
	void IsControllerTypeGamepad();
	void IsCursorInsideWidgetExtents();
	void GetWidgetExtentsInViewport();
	void GetControllerType();
	void isSingleJoycon();
	void GetOrCreateListElement();
	void ScrollWidgetIntoViewWithPadding();
	void scrollWidgetIntoViewWithAdjacentVisible();
	void IsInputGamepad();
	void AddToControllerUiRoot();
	void GetInventoryItemTotalInvestedPoints();
	void GetEnchantmentsScale();
	void GrabControllerUI();
	void ReleaseControllerUI();
	void OpenControllerWidget();
	void CloseControllerWidget();
	void GetZValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

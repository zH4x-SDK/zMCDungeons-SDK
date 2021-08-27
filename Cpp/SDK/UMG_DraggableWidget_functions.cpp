// Name: DBZKakarot, Version: 1.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UMG_DraggableWidget.UMG_DraggableWidget_C.OnDragCancelled
// ()
void UUMG_DraggableWidget_C::OnDragCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DraggableWidget.UMG_DraggableWidget_C.OnDragCancelled");

	UUMG_DraggableWidget_C_OnDragCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DraggableWidget.UMG_DraggableWidget_C.Tick
// ()
void UUMG_DraggableWidget_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DraggableWidget.UMG_DraggableWidget_C.Tick");

	UUMG_DraggableWidget_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DraggableWidget.UMG_DraggableWidget_C.Destruct
// ()
void UUMG_DraggableWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DraggableWidget.UMG_DraggableWidget_C.Destruct");

	UUMG_DraggableWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_DraggableWidget.UMG_DraggableWidget_C.ExecuteUbergraph_UMG_DraggableWidget
// ()
void UUMG_DraggableWidget_C::ExecuteUbergraph_UMG_DraggableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DraggableWidget.UMG_DraggableWidget_C.ExecuteUbergraph_UMG_DraggableWidget");

	UUMG_DraggableWidget_C_ExecuteUbergraph_UMG_DraggableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

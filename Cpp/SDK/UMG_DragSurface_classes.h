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

// WidgetBlueprintGeneratedClass UMG_DragSurface.UMG_DragSurface_C
// 0x0000
class UUMG_DragSurface_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_DragSurface.UMG_DragSurface_C");
		return ptr;
	}



	void KeyboardMovement();
	void OnTouchEnded();
	void OnTouchStarted();
	void OnTouchMoved();
	void ClearGamepadNeutralPosition();
	void SetGamepadNeutralPosition();
	void SetPlayerController();
	void Update();
	void GetRubbered();
	void SetRubberMargin();
	void GetRubberdPos();
	void GamepadSnap();
	void GamepadMovement();
	void GetViewBoundsOffset();
	void GetViewBounds();
	void SetBoundsWidget();
	void ClearTarget();
	void GetViewportBuffer();
	void GetPosition();
	void SetDisabled();
	void UpdateTarget();
	void IsTargetPositionDone();
	void IsMovingTowardsPosition();
	void SetTargetPosition();
	void Cleanup();
	void AddClickDistance();
	void AddClickTime();
	void GetMousePositionFromEvent();
	void OnMouseMove();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void SetPressed();
	void UpdateBounds();
	void GetClamped();
	void UpdateVelocity();
	void SetVelocity();
	void SetPosition();
	void GetMousePosition();
	void SetDragging();
	void UpdateDragging();
	void Tick();
	void SetGamepadEnabled();
	void ExecuteUbergraph_UMG_DragSurface();
	void OnClickedDisabled__DelegateSignature();
	void OnClicked__DelegateSignature();
	void OnPositionChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

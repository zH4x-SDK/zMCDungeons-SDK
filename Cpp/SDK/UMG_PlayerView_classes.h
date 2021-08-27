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

// WidgetBlueprintGeneratedClass UMG_PlayerView.UMG_PlayerView_C
// 0x0000
class UUMG_PlayerView_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PlayerView.UMG_PlayerView_C");
		return ptr;
	}



	void EnableAnimationWhenPaused();
	void On3dViewOtherWasDamaged();
	void On3dViewViewedWasDamaged();
	void Get3DView();
	void Refresh3DViewRendering();
	void RefreshViewBinding();
	void Set3DView();
	void GetOrFindFirst3dView();
	void SetPlayerRepresentation();
	void OnDrop();
	void RefreshInventoryAmbience();
	void SetRenderEnabled();
	void SetPlayerCharacter();
	void BndEvt__UMG_DragSurface_K2Node_ComponentBoundEvent_0_OnPositionChanged__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UMG_PlayerView();
	void OnOtherPlayerWasDamaged__DelegateSignature();
	void OnViewedPlayerWasDamaged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

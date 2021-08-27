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

// BlueprintGeneratedClass BP_3DView.BP_3DView_C
// 0x0000
class ABP_3DView_C : public APropActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_3DView.BP_3DView_C");
		return ptr;
	}



	void On3dRepresentationAnyWasDamaged();
	void UpdateCameraLocation();
	void SetCaptureSource();
	void SetBgTexture();
	void SetCaptureInactive();
	void SetCaptureActive();
	void GetTextureRenderTarget();
	void GetPlayerCharacterRepresentation();
	void UpdateCameraZoom();
	void GetCameraZoomSceneTarget();
	void RefreshCameraTargets();
	void SetCameraZoomedOut();
	void GetDesiredCameraZoomOutAmount();
	void RefreshCameraZoom();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void SetCharacterVisibility();
	void ViewedDamaged();
	void OtherDamaged();
	void ExecuteUbergraph_BP_3DView();
	void OnViewedWasDamaged__DelegateSignature();
	void OnOtherWasDamaged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

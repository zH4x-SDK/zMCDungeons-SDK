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

// WidgetBlueprintGeneratedClass UMG_SkinCapture.UMG_SkinCapture_C
// 0x0000
class UUMG_SkinCapture_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SkinCapture.UMG_SkinCapture_C");
		return ptr;
	}



	void GetSkinCaptureMaterial();
	void GetSkinCaptureActorClass();
	void SetDimensions();
	void UpdateImageTextureMaterial();
	void RefreshRenderTargetTexture();
	void UpdateSlotSize();
	void SetRenderTargetTexture();
	void GetSkinIdMaterial();
	void SetSkinId();
	void SetSkinMaterial();
	void CaptureSkin();
	void SetSkinCaptureActor();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_UMG_SkinCapture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_SkinCaptureActor.BP_SkinCaptureActor_C
// 0x0000
class ABP_SkinCaptureActor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkinCaptureActor.BP_SkinCaptureActor_C");
		return ptr;
	}



	void CaptureMaterialToTexture();
	void SetMeshMaterial();
	void SetTextureTarget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkinCaptureActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BPL_UIImage.BPL_UIImage_C
// 0x0000
class UBPL_UIImage_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_UIImage.BPL_UIImage_C");
		return ptr;
	}



	void ChangeImageSpriteAndSize();
	void ChangeImageRenderTargetAndSize();
	void ChangeImageSize();
	void ChangeImageMaterial();
	void ChangeImageMaterialAndSize();
	void ChangeImageTextureAndSize();
	void ChangeImageMaterialInstance();
	void ChangeImageTexture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

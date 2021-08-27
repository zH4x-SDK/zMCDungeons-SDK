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

// BlueprintGeneratedClass BPL_AssetManager.BPL_AssetManager_C
// 0x0000
class UBPL_AssetManager_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_AssetManager.BPL_AssetManager_C");
		return ptr;
	}



	void AsyncLoadSoftTexture2DHighLow();
	void BlockingLoadSoftTexture2DHighLow();
	void BlockingLoadSoftTexture2D();
	void GetDungeonsInventoryAssetManager();
	void GetDungeonsAssetManager();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass UMG_MapCanvas.UMG_MapCanvas_C
// 0x0000
class UUMG_MapCanvas_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MapCanvas.UMG_MapCanvas_C");
		return ptr;
	}



	void UpdateMapPinGroup();
	void GetOrCreateMapPin();
	void UpdateMapPinComponents();
	void SetMapRootOffset();
	void SetOpen();
	void UpdateMapPixelOffset();
	void SetMapTexture();
	void UpdateObjectivePins();
	void UpdateChallengeRewardPins();
	void UpdateObjectiveLocations();
	void GetOrCreateObjectiveMapPin();
	void GetOrCreateChallengeRewardMapPin();
	void UpdateChallengeRewardLocations();
	void UpdateMapPinPosition();
	void MapTextureToUiSpace();
	void SetTexture2D();
	void SetPlayerCharacter();
	void SetPlayerController();
	void UpdateMapTexture();
	void SetGame();
	void Construct();
	void Tick();
	void PreConstruct();
	void ExecuteUbergraph_UMG_MapCanvas();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

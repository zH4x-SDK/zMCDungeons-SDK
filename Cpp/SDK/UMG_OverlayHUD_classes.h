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

// WidgetBlueprintGeneratedClass UMG_OverlayHUD.UMG_OverlayHUD_C
// 0x0000
class UUMG_OverlayHUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_OverlayHUD.UMG_OverlayHUD_C");
		return ptr;
	}



	void ToggleInMenu();
	void OnAnyPlayerDamaged();
	void Construct();
	void Update_Health_Overlays();
	void ExecuteUbergraph_UMG_OverlayHUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

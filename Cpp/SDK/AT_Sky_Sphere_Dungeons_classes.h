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

// BlueprintGeneratedClass AT_Sky_Sphere_Dungeons.AT_Sky_Sphere_Dungeons_C
// 0x0000
class AAT_Sky_Sphere_Dungeons_C : public AAmbienceTriggerActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_Sky_Sphere_Dungeons.AT_Sky_Sphere_Dungeons_C");
		return ptr;
	}



	void RefreshMaterial();
	void UpdateSunDirection();
	void UserConstructionScript();
	void OnAmbienceActivated();
	void OnAmbienceDeactivated();
	void ExecuteUbergraph_AT_Sky_Sphere_Dungeons();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_3DPlayerCharacterRepresentation.BP_3DPlayerCharacterRepresentation_C
// 0x0000
class ABP_3DPlayerCharacterRepresentation_C : public APlayerView
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_3DPlayerCharacterRepresentation.BP_3DPlayerCharacterRepresentation_C");
		return ptr;
	}



	void SetPetVisibility();
	void Set_Silhouette_Visibility();
	void GetItemRepresentations();
	void CountVisible3DItemRepresentations();
	void UserConstructionScript();
	void OnItemTypeCountChanged();
	void OnGearItemSlotChanged();
	void OnCosmeticItemEquipped();
	void OnCosmeticSlotItemHighlightChanged();
	void OnCosmeticCountChanged();
	void OnWasDamaged();
	void OnOtherWasDamaged();
	void ReceiveTick();
	void ExecuteUbergraph_BP_3DPlayerCharacterRepresentation();
	void OnViewedPlayerWasDamaged__DelegateSignature();
	void OnNonViewedPlayerWasDamaged__DelegateSignature();
	void OnItemRepresentationChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

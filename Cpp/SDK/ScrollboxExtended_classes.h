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

// BlueprintGeneratedClass ScrollboxExtended.ScrollboxExtended_C
// 0x0000
class UScrollboxExtended_C : public UDungeonsScrollBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScrollboxExtended.ScrollboxExtended_C");
		return ptr;
	}



	void IsWidgetWithinVisibleArea();
	void GetMaxScrollOffset();
	void InterpToOffset();
	void ScrollTo();
	void ScrollTimer();
	void ExecuteUbergraph_ScrollboxExtended();
	void OnScrollChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

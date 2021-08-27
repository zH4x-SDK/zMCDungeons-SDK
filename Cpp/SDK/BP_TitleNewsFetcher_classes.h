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

// BlueprintGeneratedClass BP_TitleNewsFetcher.BP_TitleNewsFetcher_C
// 0x0000
class ABP_TitleNewsFetcher_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TitleNewsFetcher.BP_TitleNewsFetcher_C");
		return ptr;
	}



	void GetFetchedTitleNews();
	void SetFetchedTitleNews();
	void StartFetchTitleNews();
	void FetchTitleNewsFailed_20AECFBF49FE3AFF40C3FFA6504DC99E();
	void FetchTitleNewsSucceeded_20AECFBF49FE3AFF40C3FFA6504DC99E();
	void FetchTitleNews();
	void ExecuteUbergraph_BP_TitleNewsFetcher();
	void OnFetchedNews__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

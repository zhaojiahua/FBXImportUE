#pragma once

#include "CoreMinimal.h"
#include "Factories/FbxFactory.h"
#include "UObject/NoExportTypes.h"
#include "FbxSkeletalMeshImporter.generated.h"

UCLASS(BlueprintType)
class FBXIMPORTER_API UFbxSkeletalMeshImporter : public UObject
{
	GENERATED_BODY()
public:
	UFbxFactory* fbxFactory;
	bool&& Canceled = false;
	const FString BaseDirName = TEXT("RuntimeAsset");
	UFUNCTION(BlueprintCallable, Category = "zjhAddFuns")
		void ImportFromPath(const FString FilePath);
};

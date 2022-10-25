#include "ZjhFbxImporterActor.h"
#include "AssetImportTask.h"
#include "FileHelpers.h"
#include "Factories/FbxImportUI.h"
#include "Factories/FbxSkeletalMeshImportData.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"

// Sets default values
AZjhFbxImporterActor::AZjhFbxImporterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZjhFbxImporterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZjhFbxImporterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

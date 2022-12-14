#pragma once

#include "CoreMinimal.h"
#include "Factories/FbxFactory.h"
#include "GameFramework/Actor.h"
#include "ZjhFbxImporterActor.generated.h"

UCLASS()
class FBXIMPORTER_API AZjhFbxImporterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZjhFbxImporterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "EnemyActor.generated.h"

UCLASS()
class PENTAJAM_API AEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyActor();

	//UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	//class UPaperSpriteComponent* SpriteComponent;

	//UPROPERTY(VisibleAnywhere)
	//class UStaticMeshComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damage;

protected:

	UPROPERTY()
	FVector playerLocation;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void ChasePlayer();

	//UFUNCTION(BlueprintCallable)
	//void Death();

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

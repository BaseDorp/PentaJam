// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"

// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	//SphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Trigger"));

	//SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemyActor::OnOverlapBegin);

	health = 1;
	damage = 10.0f;

	Tags.Add("Enemy");
}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyActor::ChasePlayer()
{

}

void AEnemyActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("projectile"))
	{
		health -= 1;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Hit health"));
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Hit"));
}
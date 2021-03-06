// Copyright Epic Games, Inc. All Rights Reserved.

#include "PentaJamPawn.h"
#include "PentaJamProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

const FName APentaJamPawn::MoveForwardBinding("MoveForward");
const FName APentaJamPawn::MoveRightBinding("MoveRight");
const FName APentaJamPawn::FireForwardBinding("FireForward");
const FName APentaJamPawn::FireRightBinding("FireRight");

APentaJamPawn::APentaJamPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;
	ammo = 5;
	health = 100;
}

void APentaJamPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	//PlayerInputComponent->BindAxis(FireForwardBinding);
	//PlayerInputComponent->BindAxis(FireRightBinding);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APentaJamPawn::FireShot);
}

void APentaJamPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	const FVector FireDirection = GetActorForwardVector();

	//if (ammo < 5)
	//{
	//	// TODO create timer to add 1 bullet
	//	// OR
	//	// create timer that adds 5 bullets when ammo is zero
	//}

	//if (health <= 0)
	//{
	//	// disable input
	//	// game over screen
	//}

	//spawnLocation = GetActorLocation();
}

void APentaJamPawn::FireShot()
{
	// If it's ok to fire again
	if (bCanFire == true && ammo > 0)
	{
		float mouseX;
		float mouseY;
		if (playerController != nullptr)
		{
			if (playerController->GetMousePosition(mouseX, mouseY))
			{
				// TODO ________________
				//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Failed to get mouse position"));
				//return;
			}
		}

		FVector FireDirection = GetActorForwardVector();

		const FRotator FireRotation = FireDirection.Rotation();
		// Spawn projectile at an offset from this pawn
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			// spawn the projectile
			World->SpawnActor<APentaJamProjectile>(SpawnLocation, FireRotation);
		}

		bCanFire = false;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APentaJamPawn::ShotTimerExpired, FireRate);

		// try and play the sound if specified
		if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		bCanFire = false;
		ammo -= 1;

		if (ammo <= 0)
		{
			RefillAmmo();
		}
	} 
}

void APentaJamPawn::ShotTimerExpired()
{
	bCanFire = true;
}

void APentaJamPawn::RefillAmmo()
{
	ammo = 5;
}

void APentaJamPawn::RespawnPlayer()
{
	SetActorLocation(spawnLocation);
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Proiettile.h"

// Sets default values
ACPP_Proiettile::ACPP_Proiettile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	RootComponent = Collision;

	// collision delegate binding
	Collision->OnComponentHit.AddDynamic(this, &ACPP_Proiettile::OnHit);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->bRotationFollowsVelocity = true;

	ProjectileMovement->ProjectileGravityScale = 0.0f;
}

// Called when the game starts or when spawned
void ACPP_Proiettile::BeginPlay()
{
	Super::BeginPlay();

	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);

	// Start movement
	ProjectileMovement->SetUpdatedComponent(RootComponent);
	ProjectileMovement->ResetInterpolation();
	ProjectileMovement->InitialSpeed = ProjectileSpeed;
	ProjectileMovement->MaxSpeed = ProjectileSpeed;
	ProjectileMovement->Velocity = GetActorForwardVector() * ProjectileMovement->InitialSpeed;
	ProjectileMovement->Activate();

	GetWorld()->GetTimerManager().SetTimer(LifeSpanTimerHandle, this, &ACPP_Proiettile::DestroyThis, LifeSpanSeconds, false);
	
}

void ACPP_Proiettile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	DestroyThis();
}

void ACPP_Proiettile::DestroyThis()
{
	Destroy();
}

// Called every frame
void ACPP_Proiettile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


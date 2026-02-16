// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Pianta.h"

// Sets default values
ACPP_Pianta::ACPP_Pianta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Pianta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Pianta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Pianta::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer.AppendTags(PiantaGameplayTags);
}

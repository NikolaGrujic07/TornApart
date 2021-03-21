// Fill out your copyright notice in the Description page of Project Settings.


#include "MushroomEnemy.h"

// Sets default values
AMushroomEnemy::AMushroomEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMushroomEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMushroomEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


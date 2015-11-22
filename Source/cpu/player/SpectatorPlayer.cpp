// Fill out your copyright notice in the Description page of Project Settings.

#include "cpu.h"
#include "SpectatorPlayer.h"


// Sets default values
ASpectatorPlayer::ASpectatorPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpectatorPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpectatorPlayer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ASpectatorPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}


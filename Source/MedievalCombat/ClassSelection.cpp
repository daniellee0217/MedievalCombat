// Fill out your copyright notice in the Description page of Project Settings.

#include "MedievalCombat.h"
#include "ClassSelection.h"
#include "UnrealNetwork.h"

// Sets default values
AClassSelection::AClassSelection()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Allows Replication of variables for Client/Server Networking
void AClassSelection::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	DOREPLIFETIME(AClassSelection, SwordClassPicked);
	DOREPLIFETIME(AClassSelection, SwordAndShieldClassPicked);
}

// Called when the game starts or when spawned
void AClassSelection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClassSelection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AClassSelection::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Function for handling DELAY equivalent from Blueprints

void AClassSelection::onTimerEnd()
{
}


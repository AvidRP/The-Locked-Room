// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
//to see the auto complete on GetOwner() need to manullly add header file
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	//GetOwner method returns a pointer 
	FString ObjectName = GetOwner()->GetName();
	//* acts like a dereference here 
	UE_LOG(LogTemp, Warning, TEXT("Position report reporting on %s \n"),  *ObjectName);
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


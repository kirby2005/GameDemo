// Fill out your copyright notice in the Description page of Project Settings.


#include "EntryPoint.h"
#include "slua.h"

// Sets default values
AEntryPoint::AEntryPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEntryPoint::BeginPlay()
{
	Super::BeginPlay();

	NS_SLUA::LuaState* ls = NS_SLUA::LuaState::get(GetGameInstance());
	ls->doFile("gameinit");
}

// Called every frame
void AEntryPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


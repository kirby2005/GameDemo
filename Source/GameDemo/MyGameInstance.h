// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "slua.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();

	virtual void Init() override;
	virtual void Shutdown() override;

	UFUNCTION()
	void LuaStateInitCallback();

	NS_SLUA::LuaState state;
};

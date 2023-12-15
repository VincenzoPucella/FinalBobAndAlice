// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()


  public:

  virtual void Initialize (FSubsystemCollectionBase &Collection) override;
  virtual void Deinitialize () override;

  UFUNCTION (BlueprintCallable)
  void SaveTimerToSubSystem (const float TimeLImit);

  UFUNCTION (BlueprintCallable,BlueprintPure)
  float GetLocalSavedTimer () const;

  UFUNCTION (BlueprintCallable)
  void SaveCollectedToSubSystem (const bool isCollected);

  UFUNCTION (BlueprintCallable, BlueprintPure)
  bool GetCollected () const;

  private:
  float LocalTimer = 45;
	  bool Collect = false;
};

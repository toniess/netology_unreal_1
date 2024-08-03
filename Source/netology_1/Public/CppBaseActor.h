// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class NETOLOGY_1_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppBaseActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	FString PlayerName = "Netologiya";

	UPROPERTY(EditAnywhere)
	int EnemyNum = 20;

	UPROPERTY(EditDefaultsOnly)
	float CurrentHealth = 57.54687;

	UPROPERTY(EditInstanceOnly)
	bool IsAlive = true;

	UPROPERTY(EditInstanceOnly)
	float Amplitude = 70.0f;

	UPROPERTY(EditInstanceOnly)
	float Frequency = 4.0f;

	FVector InitialLocation;
	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	void ShowInformation();

	UFUNCTION(BlueprintCallable)
	void SinMovement();

};

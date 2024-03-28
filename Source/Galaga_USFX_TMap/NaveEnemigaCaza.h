// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_TMAP_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector PosicionInicial;
	
public:
	ANaveEnemigaCaza();
	//Called every frame 
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime) override;
	virtual void Destruirse() override;
	virtual void Escapar(FVector PosicionJugador) override;
	virtual void Atacar(bool bAtacar) override;
};

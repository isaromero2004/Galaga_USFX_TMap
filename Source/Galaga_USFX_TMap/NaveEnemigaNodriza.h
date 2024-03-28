// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_TMAP_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:

	virtual void Tick(float DeltaTime) override;


protected:
	// Velocidad de movimiento de la nave nodriza
	float Velocidad;

	// Velocidad de giro aleatorio de la nave nodriza
	float VelocidadDeGiro;

	// Ángulo acumulado de giro aleatorio de la nave nodriza
	float AnguloAcumulado;
public:

	ANaveEnemigaNodriza();

public:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);
};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_TMAP_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

protected:

	virtual void Tick(float DeltaTime) override;

public:

	ANaveEnemigaTransporte();
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(FVector PosicionJugador);
	virtual void Atacar(bool bAtacar);

};
	


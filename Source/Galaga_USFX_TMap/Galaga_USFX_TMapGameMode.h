// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_TMapGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
//class ANaveEnemigaTransporte;
//class ANaveEnemigaNodriza;


UCLASS(MinimalAPI)
class AGalaga_USFX_TMapGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_TMapGameMode();

protected:

	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:

	//Creacion del Tmap para almacenar las naves enemigas caza
	TMap<int32, TArray<ANaveEnemigaCaza*>> MatizNavesEnemigasCaza;


	FVector SpawnLocationInicial; // Ubicación inicial para spawnear las naves enemigas caza

	float SeparacionColumnas; // Separación entre columnas de naves

	float SeparacionFilas; // Separación entre filas de naves

	void Eliminacion_Filas_TMap();//funcion que nos ayudara a eliminar las naves enemigas caza
};




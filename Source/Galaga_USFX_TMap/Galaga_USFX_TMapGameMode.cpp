// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_TMapGameMode.h"
#include "NaveEnemigaCaza.h"



AGalaga_USFX_TMapGameMode::AGalaga_USFX_TMapGameMode()
{
    PrimaryActorTick.bCanEverTick = true;
    DefaultPawnClass = nullptr;
    //Listando los objetos del TMap  : Ubicacion en donde apareceran en el escenario **
    SpawnLocationInicial = FVector(-700.0f, -400.0f, 250.0f); // Ubicaci�n inicial predeterminada

    //Modificando El Tamp : Separaci�n entre columnas y filas **
    SeparacionColumnas = 300.0f; // Separaci�n predeterminada entre columnas
    SeparacionFilas = 200.0f; // Separaci�n predeterminada entre filas
}
void AGalaga_USFX_TMapGameMode::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
    Eliminacion_Filas_TMap();
}


void AGalaga_USFX_TMapGameMode::BeginPlay()
{
	Super::BeginPlay();

    //Hacemos uso de la clave del TMap para establecer tanto las columnas como las filat que tendra el Array
	const int32 NumeroDeColumnas = 10; // N�mero de columnas
	const int32 NumeroDeFilas = 10;    // N�mero de filas

	// Generar naves enemigas caza y agregarlas al TMap en las columnas correspondientes
	for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	{
        // Creamos un TArray para almacenar las naves enemigas caza de la columna actual
		TArray<ANaveEnemigaCaza*> NavesEnColumna;


        for (int32 Fila = 0; Fila < NumeroDeFilas; ++Fila)
        {
            // Definir la ubicaci�n y rotaci�n de la nave enemiga
            FVector SpawnLocation = SpawnLocationInicial + FVector(Columna * SeparacionColumnas, Fila * SeparacionFilas, 0.0f);
            FRotator SpawnRotation = FRotator::ZeroRotator; // Rotaci�n inicial

            // Generar la nave enemiga caza y agregarla al TArray
            ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
            // TMap a�adiendo : las naves caza enemigas a la matriz **
            // Agregamos la nueva nave enemiga caza al TArray de naves enemigas caza de la columna actual
            NavesEnColumna.Add(NuevaNaveCaza);
        }
        // Agregamos el TArray de naves enemigas caza de la columna actual al TMap, utilizando el �ndice de columna como clave
        MatizNavesEnemigasCaza.Add(Columna, NavesEnColumna);
    }
}

void AGalaga_USFX_TMapGameMode::Eliminacion_Filas_TMap()
{
    // Verificar y eliminar filas completas
    for (auto& Par : MatizNavesEnemigasCaza)
    {
        // Acceder al TArray de naves enemigas caza asociado a cada columna
        TArray<ANaveEnemigaCaza*>& MatrizNaves = Par.Value;

        // Variable que indica si la fila est� completa (todas las naves de la fila han avanzado m�s all� de una cierta coordenada)
        bool bRowCompleted = true;

        // Iterar sobre todas las naves enemigas caza en la fila actual
        for (ANaveEnemigaCaza* Nave : MatrizNaves)
        {
            // Verificar si la nave existe y si su posici�n X es menor que 3000.0f (un l�mite arbitrario)
            // Si la posici�n X de cualquier nave en la fila actual es menor que 3000.0f, la fila no est� completa
            if (Nave && Nave->GetActorLocation().X < 3000.0f)
            {
                // La fila no est� completa si alguna nave no ha alcanzado la posici�n requerida
                bRowCompleted = false;
                break;
            }
        }

        // Si la fila est� completa, destruir todas las naves enemigas caza en esa fila y limpiar el TArray
        if (bRowCompleted)
        {
            // Si la fila est� completa, iterar sobre todas las naves enemigas caza en esa fila
            for (ANaveEnemigaCaza* Nave : MatrizNaves)
            {
                // Verificar si la nave existe
                if (Nave)
                {
                    //TMap Eliminacion : las naves enemigas caza de cada fila**
                    // Destruir la nave enemiga caza
                    Nave->Destroy();
                }
            }
            // Limpiar el TArray para eliminar todas las referencias a las naves de la fila
            MatrizNaves.Empty();
        }
    }
}
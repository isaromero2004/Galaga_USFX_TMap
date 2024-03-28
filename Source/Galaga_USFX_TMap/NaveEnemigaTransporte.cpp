// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
void ANaveEnemigaTransporte::Mover(float DeltaTime)
{

	// Define una velocidad de rotación
	float velocidadHorizontal = GetVelocidad();
	float VelocidadRotacion = 40.0f; // Puedes ajustar este valor según la velocidad deseada

	// Calcula el desplazamiento horizontal en la dirección deseada
	//FVector DireccionMovimiento = GetActorForwardVector(); // Mueve la nave hacia adelante
	//FVector DesplazamientoHorizontal = DireccionMovimiento * Velocidad * DeltaTime;
	FVector DesplazamientoHorizontal = GetActorForwardVector() * velocidadHorizontal * DeltaTime;
	// Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance más lentamente
	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya más lento (0.1f)

	// Calcula el ángulo de rotación basado en el tiempo
	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El ángulo cambia cada 6 segundos

	// Calcula las coordenadas X e Y para el movimiento en zigzag
	float AmplitudZigzag = 50.0f; // Amplitud del zigzag
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag; // Calcula el desplazamiento en el eje Y para el zigzag

	// Calcula la nueva posición sumando el desplazamiento horizontal, el zigzag y la posición actual
	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal;// +FVector(0.0f, ZigzagOffset, 0.0f);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Escapar(FVector PosicionJugador)
{
}

void ANaveEnemigaTransporte::Atacar(bool bAtacar)
{
}
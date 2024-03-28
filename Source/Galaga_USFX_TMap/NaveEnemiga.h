// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS(abstract)
class GALAGA_USFX_TMAP_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveEnemigaMesh;


private:
	float velocidad = 200.0f;
	float resistencia;//Numero de disparos que puede recibir antes de ser destruido
	FString nombre;
	float danoProducido;//Potencia de cada proyectil que despara la nave
	float tiempoDisparo;  //El tiempo que debe de transcurrir entre cada disparo
	int trayectoria;//Cada valor numerico representa a una funcion que la nave debe asumir para moverse
	int capacidadPasajeros;//Numero de naves que puede transportar 
	int capacidadMunicion;//Numero de disparos que puede realizar antes de recargar
	int tipoNave;//Cada valor numerico representa aun tipo de nave enemiga
	float experiencia;
	float energia;
	FVector posicion;
	float peso;
	float volumen;

public:
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE int GetTrayectoria() const { return trayectoria; }
	FORCEINLINE int GetCapadadPasajeros() const { return capacidadPasajeros; }
	FORCEINLINE int GetCapadadMuniciones() const { return capacidadMunicion; }
	FORCEINLINE int GetTipoNave() const { return tipoNave; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE float GetPeso() const { return peso; }
	FORCEINLINE float GetVolumen() const { return volumen; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetTrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetCapacidadPasajeros(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetCapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SetTiposNave(int _tiposNave) { tipoNave = _tiposNave; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetPeso(float _peso) { peso = _peso; }
	FORCEINLINE void SetVolumen(float _volumen) { volumen = _volumen; }

public:
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	virtual void Destruirse() PURE_VIRTUAL(ANaveEnemiga::Destruirse, );
	virtual void Escapar(FVector PosicionJugador) PURE_VIRTUAL(ANaveEnemiga::Escapar, );
	virtual void Atacar(bool bAtacar) PURE_VIRTUAL(ANaveEnemiga::Atacar, );
};

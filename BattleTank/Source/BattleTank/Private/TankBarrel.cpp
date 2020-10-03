// Fill out your copyright notice in the Description page of Project Settings.


#include "Math/UnrealMathUtility.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float RelativeSpeed) {
    // auto Time = GetWorld()->GetTimeSeconds();
    // UE_LOG(LogTemp, Warning, TEXT("%f, BarrelElevator called at speed: %f"), Time, RelativeSpeed);
    RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);

    auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
    auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;

    SetRelativeRotation(FRotator(FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees), 0, 0));
}
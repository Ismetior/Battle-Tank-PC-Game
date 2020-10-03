// Fill out your copyright notice in the Description page of Project Settings.


#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay() {
    Super::BeginPlay();

    auto ControlledTank = GetControlledTank();
    if (!ControlledTank) {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a Tank"));
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController is possessing: %s"), *(ControlledTank->GetName()));
    }
}

void ATankPlayerController::Tick(float DeltaTime) {
    Super::Tick( DeltaTime );

    AimTowardsCrosshair();
}

ATank* ATankPlayerController::GetControlledTank() const {
    return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair() {
    if (!GetControlledTank()) {return;}

    FVector HitLocation; // Out Parameter
    if (GetSightRayHitLocation(HitLocation)) {
        GetControlledTank()->AimAt(HitLocation);
    }
}

// Get world location of linetrace through crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& OutHitLocation) const {
    // find the crosshair position in pixel coordinates
    int32 ViewportSizeX, ViewportSizeY;
    GetViewportSize(ViewportSizeX, ViewportSizeY);
    auto ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);

    // "De-Project" the screen position of the crosshair to world direction
    FVector LookDirection;
    if (GetLookDirection(ScreenLocation, LookDirection)) {
        // line trace along that LookDirection, and see what we hit (up to max range)
        GetLookVectorHitLocation(LookDirection, OutHitLocation);
    }

    return true;
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const {
    FHitResult OutHit;
    auto Start = PlayerCameraManager->GetCameraLocation();
    auto End = Start + (LookDirection * LineTraceRange);
    if (GetWorld()->LineTraceSingleByChannel(
        OutHit, 
        Start, 
        End, 
        ECollisionChannel::ECC_Visibility
    )) {
        HitLocation = OutHit.Location;
        return true;
    }
    HitLocation = FVector(0.0);
    return false;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const {
    FVector CameraworldLocation; // to be discarded
    return DeprojectScreenPositionToWorld
    (
        ScreenLocation.X,
        ScreenLocation.Y,
        CameraworldLocation,
        LookDirection
    );
}
// Fill out your copyright notice in the Description page of Project Settings.

#include "PartolPath.h"

APartolPath::APartolPath()
{
    PrimaryActorTick.bCanEverTick = false;
}

AActor* APartolPath::GetWaypoint(int32 Index) const
{
    if (Waypoints.IsValidIndex(Index))
    {
        return Waypoints[Index];
    }
    return nullptr;
}

int32 APartolPath::Num() const
{
    return Waypoints.Num();
}
// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "cpu.h"
#include "cpuGameMode.h"
#include "cpuPawn.h"

AcpuGameMode::AcpuGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AcpuPawn::StaticClass();
}

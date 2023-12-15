// BobAndAliceGameSubsystem.cpp

#include "BobAndAliceGameSubsystem.h"

void
UBobAndAliceGameSubsystem::Initialize (FSubsystemCollectionBase &Collection)
{
	Super::Initialize (Collection);

	
}

void
UBobAndAliceGameSubsystem::Deinitialize ()
{
	Super::Deinitialize ();
}

void
UBobAndAliceGameSubsystem::SaveTimerToSubSystem(const float TimeLimit)
{
	LocalTimer = TimeLimit;
}

float
UBobAndAliceGameSubsystem::GetLocalSavedTimer () const
{
	return LocalTimer;
}

void
UBobAndAliceGameSubsystem::SaveCollectedToSubSystem (const bool isCollected)
{
	Collect = isCollected;
}

bool
UBobAndAliceGameSubsystem::GetCollected () const
{
	return Collect;
}

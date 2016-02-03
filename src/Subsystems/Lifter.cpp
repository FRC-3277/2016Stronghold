#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	lifterCANJaguar = RobotMap::lifterCANJaguar;
}

void Lifter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Lifter::Raise(){

}

void Lifter::PullUp(){

}

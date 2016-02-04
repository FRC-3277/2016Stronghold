#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	lifterCANJaguar = RobotMap::lifterCANJaguar;
	lifterCANJaguar.get()->SetPercentMode(CANJaguar::QuadEncoder, 360);
	lifterCANJaguar.get()->EnableControl();
	lifterCANJaguar.get()->Set(0.0f);
}

void Lifter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Lifter::Raise(){
	lifterCANJaguar.get()->Set(.5);
}

void Lifter::PullUp(){
	lifterCANJaguar.get()->Set(-.5);
}

void Lifter::Stop(){
	lifterCANJaguar.get()->Set(0);
}

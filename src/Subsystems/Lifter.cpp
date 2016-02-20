#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	lifterCANJaguar = RobotMap::lifterCANTalon;
	lifterCANJaguar.get()->SetControlMode(CANTalon::kPercentVbus);
	lifterCANJaguar.get()->EnableControl();
	lifterCANJaguar.get()->Set(0.0f);

	armCANTalon = RobotMap::armCANTalon;
	armCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armCANTalon.get()->EnableControl();
	armCANTalon.get()->Set(0.0f);
}

void Lifter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Lifter::pushArmOut(){
	armLinearActuator.get()->Set(1);
}

void Lifter::pullArmIn(){
	armLinearActuator.get()->Set(-1);
}

void Lifter::stopHorizontal(){
	armLinearActuator.get()->Set(0);
}

void Lifter::Raise(){
	armCANTalon.get()->Set(.5);
}

void Lifter::PullUp(){
	armCANTalon.get()->Set(-.5);
}

void Lifter::Stop(){
	armCANTalon.get()->Set(0);
}

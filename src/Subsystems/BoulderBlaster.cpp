#include "BoulderBlaster.h"
#include "../RobotMap.h"

BoulderBlaster::BoulderBlaster() :
		Subsystem("ExampleSubsystem")
{
	boulderBlasterCANTalon = RobotMap::boulderBlasterCANTalon;
	boulderBlasterCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	boulderBlasterCANTalon.get()->EnableControl();
	boulderBlasterCANTalon.get()->Set(0.0f);
}

void BoulderBlaster::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void BoulderBlaster::EatBall()
{
	boulderBlasterCANTalon.get()->Set(.5);
	printf("BoulderBlaster::EatBall()\n");
}

void BoulderBlaster::SpitBallOut()
{
	boulderBlasterCANTalon.get()->Set(-.5);
}

void BoulderBlaster::StopMotor()
{
	boulderBlasterCANTalon.get()->Set(0);
	printf("BoulderBlaster::StopMotor()\n");
}


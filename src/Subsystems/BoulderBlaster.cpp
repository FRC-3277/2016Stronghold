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

}

void BoulderBlaster::EatBall()
{
	boulderBlasterCANTalon.get()->Set(.75);
	printf("BoulderBlaster::EatBall()\n");
}

void BoulderBlaster::SpitBallOut()
{
	boulderBlasterCANTalon.get()->Set(-1);
}

void BoulderBlaster::StopMotor()
{
	boulderBlasterCANTalon.get()->Set(0);
	printf("BoulderBlaster::StopMotor()\n");
}


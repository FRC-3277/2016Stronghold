#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	armExtendCANTalon = RobotMap::armExtendCANTalon;
	armExtendCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armExtendCANTalon.get()->EnableControl();
	armExtendCANTalon.get()->Set(0.0f);

	armLinearActuatorCANTalon = RobotMap::armExtendCANTalon;
	armLinearActuatorCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armLinearActuatorCANTalon.get()->EnableControl();
	armLinearActuatorCANTalon.get()->Set(0.0f);

	armWinchCANTalon1 = RobotMap::armExtendCANTalon;
	armWinchCANTalon1.get()->SetControlMode(CANTalon::kPercentVbus);
	armWinchCANTalon1.get()->EnableControl();
	armWinchCANTalon1.get()->Set(0.0f);

	armWinchCANTalon2 = RobotMap::armExtendCANTalon;
	armWinchCANTalon2.get()->SetControlMode(CANTalon::kPercentVbus);
	armWinchCANTalon2.get()->EnableControl();
	armWinchCANTalon2.get()->Set(0.0f);
}

void Lifter::InitDefaultCommand()
{

}

void Lifter::pushArmOut()
{
	armLinearActuatorCANTalon.get()->Set(1);
}

void Lifter::pullArmIn()
{
	armLinearActuatorCANTalon.get()->Set(-1);
}

void Lifter::stopActuator()
{
	armLinearActuatorCANTalon.get()->Set(0);
}

void Lifter::Raise()
{
	armExtendCANTalon.get()->Set(.5);
}

void Lifter::PullUp()
{
	armWinchCANTalon1.get()->Set(-.5);
	armWinchCANTalon2.get()->Set(-.5);
}

void Lifter::Stop()
{
	armWinchCANTalon1.get()->Set(0);
	armWinchCANTalon2.get()->Set(0);
}

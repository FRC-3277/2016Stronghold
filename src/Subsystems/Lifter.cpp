#include "Lifter.h"
#include "../RobotMap.h"

Lifter::Lifter() :
		Subsystem("ExampleSubsystem")
{
	armExtendCANTalon = RobotMap::armExtendCANTalon;
	armExtendCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armExtendCANTalon.get()->EnableControl();
	armExtendCANTalon.get()->Set(0.0f);

	armLinearActuatorCANTalon = RobotMap::armLinearActuatorCANTalon;
	armLinearActuatorCANTalon.get()->SetControlMode(CANTalon::kPercentVbus);
	armLinearActuatorCANTalon.get()->EnableControl();
	armLinearActuatorCANTalon.get()->Set(0.0f);

	armWinchCANTalon1 = RobotMap::armWinchCANTalon1;
	armWinchCANTalon1.get()->SetControlMode(CANTalon::kPercentVbus);
	armWinchCANTalon1.get()->EnableControl();
	armWinchCANTalon1.get()->Set(0.0f);

	armWinchCANTalon2 = RobotMap::armWinchCANTalon2;
	armWinchCANTalon2.get()->SetControlMode(CANTalon::kPercentVbus);
	armWinchCANTalon2.get()->EnableControl();
	armWinchCANTalon2.get()->Set(0.0f);

	armRatchet = RobotMap::armRatchet;
}

void Lifter::InitDefaultCommand()
{

}

void Lifter::raiseArm()
{
	printf("Lifter:raiseArm\n");
	armLinearActuatorCANTalon.get()->Set(.5);
}

void Lifter::lowerArm()
{
	printf("Lifter:lowerArm\n");
	armLinearActuatorCANTalon.get()->Set(-.5);
}

void Lifter::stopActuator()
{
	printf("Lifter:lowerArm\n");
	armLinearActuatorCANTalon.get()->Set(0);
}

void Lifter::extendArm()
{
	printf("Lifter:extendArm\n");
	if(armRatchet.get()->Get() != Relay::kOn)
		armRatchet.get()->Set(Relay::kOn);
	else
		armExtendCANTalon.get()->Set(.5);
}

void Lifter::PullUp()
{
	printf("Lifter:PullUp\n");
	armWinchCANTalon1.get()->Set(.5);
	armWinchCANTalon2.get()->Set(.5);
}

void Lifter::Stop()
{
	armRatchet.get()->Set(Relay::kOff);
	armExtendCANTalon.get()->Set(0);
	armWinchCANTalon1.get()->Set(0);
	armWinchCANTalon2.get()->Set(0);
}

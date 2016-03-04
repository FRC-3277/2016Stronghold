#include "Lifter.h"
#include "../RobotMap.h"
#include "../Commands/ArmControl.h"

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

	armPotentiameter = RobotMap::armPotentiameter;
}

void Lifter::InitDefaultCommand()
{
	//SetDefaultCommand(new ArmControl());
}

void Lifter::raiseArm()
{
	//if(armPotentiameter.get()->GetValue() < 777)
	{
	printf("Lifter:raiseArm\n");
		armLinearActuatorCANTalon.get()->Set(1);
	}
	//else{
		//printf("Lifter:raiseArm\n");
			//armLinearActuatorCANTalon.get()->Set(0);
	//}
}

void Lifter::lowerArm()
{
	//if(armPotentiameter.get()->GetValue() > -13)
	{
		printf("Lifter:lowerArm\n");
		armLinearActuatorCANTalon.get()->Set(-.75);
	}
	//else
	{
		//printf("Lifter:lowerArm\n");
		//armLinearActuatorCANTalon.get()->Set(0);
	}
}

void Lifter::stopActuator()
{
	printf("Lifter:lowerArm\n");
	armLinearActuatorCANTalon.get()->Set(0);
}

void Lifter::extendArm()
{
	printf("Lifter:extendArm\n");
	armRatchet.get()->Set(Relay::kOn);
	//if(armRatchet.get()->Get() != Relay::kOff)
	//{
		if(firstRun  <=25) {
			armWinchCANTalon1.get()->Set(.25);
			armWinchCANTalon2.get()->Set(.25);
			firstRun++;
		}
//	}
	else
		{
		armExtendCANTalon.get()->Set(.75);
		armWinchCANTalon1.get()->Set(-.20);
		armWinchCANTalon2.get()->Set(-.20);

		}
}

void Lifter::PullUp()
{
	printf("Lifter:PullUp\n");
	armWinchCANTalon1.get()->Set(1);
	armWinchCANTalon2.get()->Set(1);
	armExtendCANTalon.get()->Set(-.25);

}

void Lifter::Stop()
{
	armRatchet.get()->Set(Relay::kOff);
	armExtendCANTalon.get()->Set(0);
	armWinchCANTalon1.get()->Set(0);
	armWinchCANTalon2.get()->Set(0);
}
